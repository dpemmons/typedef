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
      : DuplicateSymbol(recognizer, recognizer->getTokenStream(), ctx,
                        offendingToken) {}
  DuplicateSymbol(antlr4::Parser *recognizer, antlr4::TokenStream *input,
                  antlr4::ParserRuleContext *ctx, antlr4::Token *offendingToken)
      : antlr4::RecognitionException("Duplicate symbol", recognizer, input, ctx,
                                     offendingToken) {}
  ~DuplicateSymbol() {}

 private:
};

class InvalidIntegerException : public antlr4::RecognitionException {
 public:
  InvalidIntegerException(antlr4::Parser *recognizer)
      : InvalidIntegerException(recognizer, recognizer->getTokenStream(),
                                recognizer->getCurrentToken(),
                                recognizer->getCurrentToken(), nullptr,
                                recognizer->getContext(), false) {}
  InvalidIntegerException(antlr4::Parser *recognizer,
                          antlr4::TokenStream *input, antlr4::Token *startToken,
                          antlr4::Token *offendingToken,
                          antlr4::atn::ATNConfigSet *deadEndConfigs,
                          antlr4::ParserRuleContext *ctx, bool deleteConfigs)
      : antlr4::RecognitionException("Invalid integer", recognizer, input, ctx,
                                     offendingToken),
        _deadEndConfigs(deadEndConfigs),
        _startToken(startToken),
        _deleteConfigs(deleteConfigs) {}
  ~InvalidIntegerException() {
    if (_deleteConfigs) delete _deadEndConfigs;
  }

  virtual antlr4::Token *getStartToken() const { return _startToken; }
  virtual antlr4::atn::ATNConfigSet *getDeadEndConfigs() const {
    return _deadEndConfigs;
  }

 private:
  /// Which configurations did we try at input.index() that couldn't match
  /// input.LT(1)?
  antlr4::atn::ATNConfigSet *_deadEndConfigs;

  // Flag that indicates if we own the dead end config set and have to delete it
  // on destruction.
  bool _deleteConfigs;

  /// The token object at the start index; the input stream might
  /// not be buffering tokens so get a reference to it. (At the
  /// time the error occurred, of course the stream needs to keep a
  /// buffer all of the tokens but later we might not have access to those.)
  antlr4::Token *_startToken;
};

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
    throw antlr4::NoViableAltException(parser);
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
    throw InvalidIntegerException(parser);
  }
}