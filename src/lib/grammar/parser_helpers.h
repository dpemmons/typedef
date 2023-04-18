#ifndef TYPEDEF_PARSER_HELPERS_
#define TYPEDEF_PARSER_HELPERS_

#include <charconv>
#include <optional>
#include <string>

#include "InputMismatchException.h"
#include "Parser.h"
#include "ParserRuleContext.h"
#include "RecognitionException.h"
#include "Token.h"
#include "TypedefParser.h"
#include "atn/ATNConfigSet.h"
#include "symbol_table.h"

class TypedefParser;

class DuplicateSymbolException : public antlr4::RecognitionException {
 public:
  DuplicateSymbolException(antlr4::Parser *recognizer,
                           antlr4::ParserRuleContext *ctx,
                           antlr4::Token *offendingToken)
      : antlr4::RecognitionException("Duplicate symbol", recognizer,
                                     recognizer->getTokenStream(), ctx,
                                     offendingToken) {}
  ~DuplicateSymbolException() {}
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

char32_t GetCharValue(TypedefParser *parser,
                      TypedefParser::CharLiteralContext *ctx);

std::string GetStringValue(TypedefParser *parser, antlr4::Token *token);

std::string GetRawString(TypedefParser *parser, antlr4::Token *token);

std::optional<td::SymbolTable::Field> MakeStructField(
    std::string &id, TypedefParser::Type_Context *type_);

std::optional<td::SymbolTable::Field> MakeValueField(
    std::string &id, TypedefParser::PrimitiveFragmentContext *fragment);

#endif  // TYPEDEF_PARSER_HELPERS_