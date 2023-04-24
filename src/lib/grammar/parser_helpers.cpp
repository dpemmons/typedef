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

std::optional<td::SymbolTable::Symbol> MakeSymbol(
    antlr4::Parser* recognizer, td::SymbolTable& global_symbol_table,
    std::string& id, TypedefParser::Type_Context* ctx) {
  if (ctx->valuedPrimitiveType()) {
    if (ctx->valuedPrimitiveType()->maybe_val) {
      return std::make_pair(id, ctx->valuedPrimitiveType()->maybe_val.value());
    }
    // pretty sure we would have already thrown an error.
    return std::nullopt;
  } else if (ctx->primitiveType()) {
    if (ctx->primitiveType()->KW_BOOL()) {
      return std::make_pair(id, std::optional<bool>());
    } else if (ctx->primitiveType()->KW_CHAR()) {
      return std::make_pair(id, std::optional<char32_t>());
    } else if (ctx->primitiveType()->KW_STRING()) {
      return std::make_pair(id, std::optional<std::string>());
    } else if (ctx->primitiveType()->KW_F32()) {
      return std::make_pair(id, std::optional<float>());
    } else if (ctx->primitiveType()->KW_F64()) {
      return std::make_pair(id, std::optional<double>());
    } else if (ctx->primitiveType()->KW_U8()) {
      return std::make_pair(id, std::optional<uint8_t>());
    } else if (ctx->primitiveType()->KW_U16()) {
      return std::make_pair(id, std::optional<uint16_t>());
    } else if (ctx->primitiveType()->KW_U32()) {
      return std::make_pair(id, std::optional<uint32_t>());
    } else if (ctx->primitiveType()->KW_U64()) {
      return std::make_pair(id, std::optional<uint64_t>());
    } else if (ctx->primitiveType()->KW_I8()) {
      return std::make_pair(id, std::optional<int8_t>());
    } else if (ctx->primitiveType()->KW_I16()) {
      return std::make_pair(id, std::optional<int16_t>());
    } else if (ctx->primitiveType()->KW_I32()) {
      return std::make_pair(id, std::optional<int32_t>());
    } else if (ctx->primitiveType()->KW_I64()) {
      return std::make_pair(id, std::optional<int64_t>());
    } else {
      // all possible primitive types need to be handled.
      abort();
    }
  } else if (ctx->identifier()) {
    std::string referencedSymbol =
        ctx->identifier()->NON_KEYWORD_IDENTIFIER()->getSymbol()->getText();
    auto maybe_symbol = global_symbol_table.Get(referencedSymbol);
    if (maybe_symbol) {
      return std::make_pair(id, *maybe_symbol);
    } else {
      throw SymbolNotFoundException(
          recognizer, ctx,
          ctx->identifier()->NON_KEYWORD_IDENTIFIER()->getSymbol());
    }
  }
  // the grammar only provides 3 options, so crash if we get here.
  abort();
}

void InsertField(td::SymbolTable& dstTable, antlr4::Parser* recognizer,
                 TypedefParser::MaybeValuedSymbolDeclarationContext* ctx) {
  if (ctx->maybeValuedSymbol()->maybe_symbol) {
    if (!dstTable.TryInsert(*ctx->maybeValuedSymbol()->maybe_symbol)) {
      throw DuplicateSymbolException(recognizer, ctx,
                                     ctx->maybeValuedSymbol()
                                         ->identifier()
                                         ->NON_KEYWORD_IDENTIFIER()
                                         ->getSymbol());
    }
  }
}

void InsertField(td::SymbolTable& dstTable, antlr4::Parser* recognizer,
                 TypedefParser::StructDeclarationContext* ctx) {
  if (ctx->maybe_symbol) {
    if (!dstTable.TryInsert(*ctx->maybe_symbol)) {
      throw DuplicateSymbolException(
          recognizer, ctx,
          ctx->identifier()->NON_KEYWORD_IDENTIFIER()->getSymbol());
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
