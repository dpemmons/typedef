#pragma once

#include <charconv>
#include <optional>
#include <string>

#include "InputMismatchException.h"
#include "Parser.h"
#include "ParserRuleContext.h"
#include "RecognitionException.h"
#include "Token.h"
#include "atn/ATNConfigSet.h"

class TypedefParser;

class DuplicateSymbol : public antlr4::RecognitionException {
 public:
  DuplicateSymbol(antlr4::Parser *recognizer, antlr4::ParserRuleContext *ctx,
                  antlr4::Token *offendingToken)
      : antlr4::RecognitionException("Duplicate symbol", recognizer,
                                     recognizer->getTokenStream(), ctx,
                                     offendingToken) {}
  ~DuplicateSymbol() {}
};

class InvalidLiteralException : public antlr4::RecognitionException {
 public:
  InvalidLiteralException(std::string msg, antlr4::Parser *recognizer)
      : antlr4::RecognitionException(
            std::move(msg), recognizer, recognizer->getTokenStream(),
            recognizer->getContext(), recognizer->getCurrentToken()) {}
  ~InvalidLiteralException() {}
};

template <typename T, class CTX>
T GetFloatValue(TypedefParser *parser, CTX *ctx) {
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
    throw InvalidLiteralException("Invalid floating point literal", parser);
  }
}

template <typename T, class CTX>
T GetIntValue(TypedefParser *parser, CTX *ctx) {
  std::string digits;
  std::string underscored_digits;
  int base;
  bool remove_underscores = false;
  T value;

  if (ctx->DEC_DIGITS()) {
    digits = ctx->DEC_DIGITS()->getText();
    base = 10;
  } else if (ctx->HEX_DIGITS()) {
    digits = ctx->HEX_DIGITS()->getText();
    base = 16;
  } else if (ctx->OCT_DIGITS()) {
    digits = ctx->OCT_DIGITS()->getText();
    base = 8;
  } else if (ctx->BIN_DIGITS()) {
    digits = ctx->BIN_DIGITS()->getText();
    base = 2;
  } else if (ctx->DEC_DIGITS_UNDERSCORE()) {
    underscored_digits = ctx->DEC_DIGITS_UNDERSCORE()->getText();
    base = 10;
    remove_underscores = true;
  } else if (ctx->HEX_DIGITS_UNDERSCORE()) {
    underscored_digits = ctx->HEX_DIGITS_UNDERSCORE()->getText();
    base = 16;
    remove_underscores = true;
  } else if (ctx->OCT_DIGITS_UNDERSCORE()) {
    underscored_digits = ctx->OCT_DIGITS_UNDERSCORE()->getText();
    base = 8;
    remove_underscores = true;
  } else if (ctx->BIN_DIGITS_UNDERSCORE()) {
    underscored_digits = ctx->BIN_DIGITS_UNDERSCORE()->getText();
    base = 2;
    remove_underscores = true;
  } else {
    // Grammar shouldn't let us get here...
    abort();
  }

  if (remove_underscores) {
    digits.reserve(underscored_digits.size());
    for (auto c : underscored_digits) {
      if (c != '_') {
        digits += c;
      }
    }
  }
  std::string_view digits_view(digits);

  auto result =
      std::from_chars(digits_view.begin(), digits_view.end(), value, base);
  bool ended_early = result.ptr != digits_view.end();
  if (result.ec == std::errc() && !ended_early) {
    return value;
  } else {
    throw InvalidLiteralException("Invalid integer literal", parser);
  }
}

template <class CTX>
char32_t GetCharValue(TypedefParser *parser, CTX *ctx) {
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

template <typename T>
std::string GetStringValue(TypedefParser *parser, T *token) {
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

template <typename T>
std::string GetRawString(TypedefParser *parser, T *token) {
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