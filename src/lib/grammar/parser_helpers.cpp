#include "parser_helpers.h"

#include <stddef.h>

#include <codecvt>
#include <cstdint>
#include <istream>
#include <locale>
#include <optional>
#include <utility>
#include <variant>

#include "TerminalNode.h"
#include "Token.h"

char32_t GetCharValue(TypedefParser* parser,
                      TypedefParser::CharLiteralContext* ctx) {
  std::string literal = ctx->CHAR_LITERAL()->getText();
  if (literal.size() < 2 || literal.front() != '\'' || literal.back() != '\'') {
    throw InvalidLiteralException("Invalid char literal", parser);
  }

  std::string_view inner = literal.substr(1, literal.size() - 2);

  if (inner.size() == 2 && inner[0] == '\\') {
    switch (inner[1]) {
      case 'n':
        return U'\n';
      case 'r':
        return U'\r';
      case 't':
        return U'\t';
      case '\\':
        return U'\\';
      case '0':
        return U'\0';
      case '\'':
        return U'\'';
      case '\"':
        return U'\"';
    }
  }

  if (inner.size() == 4 && inner[0] == '\\' && inner[1] == 'x') {
    // TODO this is very inefficient, do something better.
    std::istringstream ss(std::string(inner.substr(2)));
    int value;
    ss >> std::hex >> value;
    return static_cast<char32_t>(value);
  }

  if (inner.size() >= 3 && inner.size() <= 10 && inner[0] == '\\' &&
      inner[1] == 'u' && inner[2] == '{' && inner.back() == '}') {
    // TODO this is very inefficient, do something better.
    std::istringstream ss(std::string(inner.substr(3, inner.size() - 4)));
    int value;
    ss >> std::hex >> value;
    return static_cast<char32_t>(value);
  }

  if (inner.size() > 0) {
    std::string inner_str(inner);
    std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> converter;
    std::u32string str32 = converter.from_bytes(inner_str);
    if (str32.size() == 1) {
      return str32[0];
    }
  }

  throw InvalidLiteralException("Invalid char literal", parser);
}

std::string GetStringValue(TypedefParser* parser, antlr4::Token* token) {
  std::string text = token->getText();
  std::string_view literal(text);
  if (literal.size() < 2) {
    throw InvalidLiteralException("Invalid string literal", parser);
  }
  if (literal.front() == '"' && literal.back() == '"') {
    literal.remove_prefix(1);
    literal.remove_suffix(1);
  } else {
    throw InvalidLiteralException("Invalid string literal", parser);
  }
  std::ostringstream result;
  std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> converter;
  for (size_t i = 0; i < literal.size(); ++i) {
    if (literal[i] == '\\') {
      ++i;
      switch (literal[i]) {
        case 'n':
          result << '\n';
          break;
        case 'r':
          result << '\r';
          break;
        case 't':
          result << '\t';
          break;
        case '\\':
          result << '\\';
          break;
        case '0':
          result << '\0';
          break;
        case '"':
          result << '"';
          break;
        case '\'':
          result << '\'';
          break;
        case 'x': {
          if (i + 2 >= literal.size()) {
            // TODO: we should probably make a useful error message for this.
            // Invalid ASCII escape sequence
            throw InvalidLiteralException("Invalid string literal", parser);
          }
          int hexValue = 0;
          std::from_chars(literal.data() + i + 1, literal.data() + i + 3,
                          hexValue, 16);
          result << static_cast<char>(hexValue);
          i += 2;
          break;
        }
        case 'u': {
          size_t start = i + 2;
          if (start >= literal.size()) {
            // TODO: we should probably make useful error messages for these.
            // Invalid Unicode escape sequence.
            throw InvalidLiteralException("Invalid string literal", parser);
          }
          size_t end = literal.find('}', start);
          if (end == std::string_view::npos || end >= literal.size() ||
              end - start > 6) {
            // Invalid Unicode escape sequence.
            throw InvalidLiteralException("Invalid string literal", parser);
          }
          uint32_t unicodeValue = 0;
          auto [ptr, ec] = std::from_chars(
              literal.data() + start, literal.data() + end, unicodeValue, 16);
          if (ec != std::errc()) {
            // Invalid Unicode escape sequence.
            throw InvalidLiteralException("Invalid string literal", parser);
          }
          result << converter.to_bytes(static_cast<char32_t>(unicodeValue));
          i = end;
          break;
        }
      }
    } else {
      result << literal[i];
    }
  }
  return result.str();
}

// From example, from RAW_STRING_LITERAL tokens.
std::string GetRawString(TypedefParser* parser, antlr4::Token* token) {
  std::string text = token->getText();
  std::string_view literal(text);
  if (literal.empty() || literal.front() != 'r') {
    throw InvalidLiteralException("Invalid raw string literal", parser);
  }

  // Resize the string_view to skip the initial 'r'
  literal.remove_prefix(1);

  // Remove matching '#'s from the prefix and suffix
  while (!literal.empty() && literal.front() == '#' && literal.back() == '#') {
    literal.remove_prefix(1);
    literal.remove_suffix(1);
  }

  // Check for matching '"'s and resize the string_view accordingly
  if (literal.empty() || literal.front() != '"' || literal.back() != '"') {
    throw InvalidLiteralException("Invalid raw string literal", parser);
  }

  literal.remove_prefix(1);
  literal.remove_suffix(1);

  // Create a new Str instance with the remaining raw string content
  return std::string(literal);
}

void TryInsert(td::SymbolTable& dst_table,
               TypedefParser::TypeDeclarationContext* src,
               antlr4::Parser* recognizer) {
  if (src->maybe_symbol) {
    if (!dst_table.TryInsert(*src->maybe_symbol)) {
      TypedefParser::IdentifierContext* identifier;
      if (src->structDeclaration()) {
        identifier = src->structDeclaration()->identifier();
      } else if (src->variantDeclaration()) {
        identifier = src->structDeclaration()->identifier();
      } else if (src->vectorDeclaration()) {
        identifier = src->structDeclaration()->identifier();
      } else if (src->mapDeclaration()) {
        identifier = src->structDeclaration()->identifier();
      } else {
        assert(false);  // unhandled case.
      }

      throw DuplicateSymbolException(
          recognizer, src, identifier->NON_KEYWORD_IDENTIFIER()->getSymbol());
    }
  }
}

void TryInsertSymbol(std::shared_ptr<td::Struct>& s, antlr4::Parser* recognizer,
                     TypedefParser::MaybeValuedSymbolContext* ctx) {
  if (ctx->maybe_symbol) {
    if (!s->TryInsert(*ctx->maybe_symbol)) {
      throw DuplicateSymbolException(
          recognizer, ctx,
          ctx->identifier()->NON_KEYWORD_IDENTIFIER()->getSymbol());
    }
  }
}

void TryInsertSymbol(std::shared_ptr<td::Variant>& s,
                     antlr4::Parser* recognizer,
                     TypedefParser::UnvaluedSymbolContext* ctx) {
  if (ctx->maybe_symbol) {
    if (!s->TryInsert(*ctx->maybe_symbol)) {
      throw DuplicateSymbolException(
          recognizer, ctx,
          ctx->identifier()->NON_KEYWORD_IDENTIFIER()->getSymbol());
    }
  }
}
