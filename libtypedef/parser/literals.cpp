#include "libtypedef/parser/literals.h"

#include <charconv>
#include <sstream>

#define FMT_HEADER_ONLY
#include <fmt/core.h>

#include "libtypedef/parser/literals.h"
#include "libtypedef/parser/macros.h"
#include "libtypedef/parser/parser_error_info.h"
#include "literals.h"

using namespace std;

namespace {

td::ParserErrorInfo MakeError(td::ParserErrorInfo::Type type, const string& msg,
                              antlr4::Token* token) {
  return td::PEIBuilder()
      .SetType(type)
      .SetMessage(msg)
      .SetCharOffset(token->getStartIndex())
      .SetLine(token->getLine())
      .SetLineOffset(token->getCharPositionInLine())
      .SetLength(token->getText().length())
      .build();
}

char32_t GetCharValue(TypedefParser::CharLiteralContext* ctx) {
  std::string literal = ctx->CHAR_LITERAL()->getText();
  if (literal.size() < 2 || literal.front() != '\'' || literal.back() != '\'') {
    throw MakeError(td::ParserErrorInfo::INVALID_CHAR_LITERAL,
                    "Invalid char literal", ctx->CHAR_LITERAL()->getSymbol());
  }

  std::string_view inner(literal.data() + 1, literal.size() - 2);

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

  throw MakeError(td::ParserErrorInfo::INVALID_CHAR_LITERAL,
                  "Invalid char literal", ctx->CHAR_LITERAL()->getSymbol());
}

template <typename T>
T GetIntValue(TypedefParser::IntDigitsContext* ctx) {
  std::string maybe_underscored_digits;
  std::string digits;
  int base;
  T value;

  if (ctx->DEC_LITERAL()) {
    maybe_underscored_digits = ctx->DEC_LITERAL()->getText();
    base = 10;
  } else if (ctx->HEX_LITERAL()) {
    maybe_underscored_digits = ctx->HEX_LITERAL()->getText();
    base = 16;
  } else if (ctx->OCT_LITERAL()) {
    maybe_underscored_digits = ctx->OCT_LITERAL()->getText();
    base = 8;
  } else if (ctx->BIN_LITERAL()) {
    maybe_underscored_digits = ctx->BIN_LITERAL()->getText();
    base = 2;
  } else {
    // Grammar shouldn't let us get here...
    throw_logic_error("invalid state");
  }

  digits.reserve(maybe_underscored_digits.size());
  for (auto c : maybe_underscored_digits) {
    if (c != '_') {
      digits += c;
    }
  }
  std::string_view digits_view(digits);
  if (ctx->HEX_LITERAL() || ctx->OCT_LITERAL() || ctx->BIN_LITERAL()) {
    digits_view.remove_prefix(2);
  }

  auto result =
      std::from_chars(digits_view.begin(), digits_view.end(), value, base);
  bool ended_early = result.ptr != digits_view.end();
  if (result.ec == std::errc() && !ended_early) {
    return value;
  } else {
    throw MakeError(td::ParserErrorInfo::INVALID_INTEGER_LITERAL,
                    "Invalid integer literal", ctx->getStart());
  }
}

template <typename T>
T GetFloatValue(TypedefParser::FloatLiteralContext* ctx) {
  std::string digits = ctx->FLOAT_LITERAL()->getText();
  std::string underscored_digits;
  T value;

  std::string_view digits_view;

  if (digits.find("_") != std::string_view::npos) {
    underscored_digits.reserve(digits.size());
    for (auto c : digits) {
      if (c != '_') {
        underscored_digits += c;
      }
    }
    digits_view = underscored_digits;
  } else {
    digits_view = digits;
  }

  auto result = std::from_chars(digits_view.begin(), digits_view.end(), value);
  bool ended_early = result.ptr != digits_view.end();

  if (result.ec == std::errc() && !ended_early) {
    return value;
  } else {
    throw MakeError(td::ParserErrorInfo::INVALID_FLOAT_LITERAL,
                    "Invalid floating point literal", ctx->getStart());
  }
}

string GetStringValue(antlr4::Token* token, char prefix_char,
                      td::ParserErrorInfo::Type err_to_throw,
                      bool remove_enclosing_quotes) {
  string text = token->getText();
  string_view literal(text);

  size_t expected_min_length = remove_enclosing_quotes ? 2 : 0;
  expected_min_length += prefix_char ? 1 : 0;
  if (literal.size() < expected_min_length) {
    throw MakeError(err_to_throw, "Invalid string literal: too short.", token);
  }
  if (prefix_char && literal.front() == prefix_char) {
    literal.remove_prefix(1);
  }
  if (remove_enclosing_quotes) {
    if (literal.front() == '"' && literal.back() == '"') {
      literal.remove_prefix(1);
      literal.remove_suffix(1);
    } else {
      throw MakeError(err_to_throw,
                      "Unexpected string literal format: no enclosing quotes",
                      token);
    }
  }
  ostringstream result;
  wstring_convert<codecvt_utf8<char32_t>, char32_t> converter;
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
        case '<':
          result << '<';
          break;
        case '>':
          result << '>';
          break;
        case 'x': {
          if (i + 2 >= literal.size()) {
            throw MakeError(err_to_throw, "Invalid string literal", token);
          }
          int hexValue = 0;
          from_chars(literal.data() + i + 1, literal.data() + i + 3, hexValue,
                     16);
          result << static_cast<char>(hexValue);
          i += 2;
          break;
        }
        case 'u': {
          size_t start = i + 2;
          if (start >= literal.size()) {
            throw MakeError(err_to_throw, "Invalid string literal", token);
          }
          size_t end = literal.find('}', start);
          if (end == string_view::npos || end >= literal.size() ||
              end - start > 6) {
            throw MakeError(err_to_throw, "Invalid string literal", token);
          }
          uint32_t unicodeValue = 0;
          auto [ptr, ec] = from_chars(literal.data() + start,
                                      literal.data() + end, unicodeValue, 16);
          if (ec != errc()) {
            throw MakeError(err_to_throw, "Invalid string literal", token);
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
string GetRawString(antlr4::Token* token, char leading_char,
                    td::ParserErrorInfo::Type err_to_throw) {
  string text = token->getText();
  string_view literal(text);
  if (literal.empty() || literal.front() != leading_char) {
    throw MakeError(err_to_throw, "Invalid raw string literal", token);
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
    throw MakeError(err_to_throw, "Invalid raw string literal", token);
  }

  // remove leading and trailing quotes
  literal.remove_prefix(1);
  literal.remove_suffix(1);

  // Create a new string instance with the remaining raw string content
  return string(literal);
}

}  // namespace

namespace td {

void SetBoolLiteral(bool& literal, TypedefParser::BoolLiteralContext* ctx) {
  if (ctx->KW_TRUE()) {
    literal = true;
  } else if (ctx->KW_FALSE()) {
    literal = false;
  } else {
    throw_logic_error("Invalid state.");
  }
}

void SetCharLiteral(char32_t& literal, TypedefParser::CharLiteralContext* ctx) {
  literal = GetCharValue(ctx);
}

void SetStringLiteral(std::string& literal,
                      TypedefParser::StringLiteralContext* ctx) {
  if (ctx->STRING_LITERAL()) {
    literal = GetStringValue(ctx->STRING_LITERAL()->getSymbol(), 0,
                             td::ParserErrorInfo::INVALID_STRING_LITERAL, true);
  } else if (ctx->RAW_STRING_LITERAL()) {
    literal = GetRawString(ctx->RAW_STRING_LITERAL()->getSymbol(), 'r',
                           td::ParserErrorInfo::INVALID_RAW_STRING_LITERAL);
  } else {
    throw_logic_error("Invalid state.");
  }
}

void SetTmplText(std::string& text, TypedefParser::TmplTextContext* ctx) {
  text = GetStringValue(ctx->TMPL_TEXT()->getSymbol(), 0,
                        td::ParserErrorInfo::INVALID_STRING_LITERAL, false);
}

void SetFloatLiteral(FloatLiteral& literal,
                     TypedefParser::PrimitiveTypeIdentifierContext* type,
                     TypedefParser::FloatLiteralContext* ctx) {
  if (type->KW_F32()) {
    literal = GetFloatValue<float>(ctx);
  } else if (type->KW_F64()) {
    literal = GetFloatValue<double>(ctx);
  } else {
    literal = GetFloatValue<float>(ctx);
  }
}

void SetIntegerLiteral(IntegerLiteral& literal,
                       TypedefParser::PrimitiveTypeIdentifierContext* type,
                       TypedefParser::IntegerLiteralContext* ctx) {
  if (type->KW_U8()) {
    literal = GetIntValue<std::uint8_t>(ctx->intDigits());
  } else if (type->KW_U16()) {
    literal = GetIntValue<std::uint16_t>(ctx->intDigits());
  } else if (type->KW_U32()) {
    literal = GetIntValue<std::uint32_t>(ctx->intDigits());
  } else if (type->KW_U64()) {
    literal = GetIntValue<std::uint64_t>(ctx->intDigits());
  } else if (type->KW_I8()) {
    literal = GetIntValue<std::int8_t>(ctx->intDigits());
  } else if (type->KW_I16()) {
    literal = GetIntValue<std::int16_t>(ctx->intDigits());
  } else if (type->KW_I32()) {
    literal = GetIntValue<std::int32_t>(ctx->intDigits());
  } else if (type->KW_I64()) {
    literal = GetIntValue<std::int64_t>(ctx->intDigits());
  } else {
    literal = GetIntValue<std::int32_t>(ctx->intDigits());
  }
}

}  // namespace td