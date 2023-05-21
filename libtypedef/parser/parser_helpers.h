#ifndef PARSER_PARSER_HELPERS_H__
#define PARSER_PARSER_HELPERS_H__

#include <antlr4/antlr4-common.h>
#include <antlr4/antlr4-runtime.h>

#include <cassert>
#include <charconv>
#include <cstdlib>
#include <optional>
#include <string>
#include <string_view>
#include <system_error>
#include <utility>

#include "libtypedef/parser/grammar/TypedefParser.h"
#include "libtypedef/parser/symbol_table.h"

class TypedefParser;
namespace antlr4 {
class ParserRuleContext;
class Token;
}  // namespace antlr4

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

class SymbolNotFoundException : public antlr4::RecognitionException {
 public:
  SymbolNotFoundException(antlr4::Parser *recognizer,
                          antlr4::ParserRuleContext *ctx,
                          antlr4::Token *offendingToken)
      : antlr4::RecognitionException("Symbol not found.", recognizer,
                                     recognizer->getTokenStream(), ctx,
                                     offendingToken) {}
  ~SymbolNotFoundException() {}
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
    if (ctx->MINUS()) {
      digits = ctx->MINUS()->getText() + ctx->DEC_DIGITS()->getText();
    } else {
      digits = ctx->DEC_DIGITS()->getText();
    }
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
    if (ctx->MINUS()) {
      underscored_digits =
          ctx->MINUS()->getText() + ctx->DEC_DIGITS_UNDERSCORE()->getText();
    } else {
      underscored_digits = ctx->DEC_DIGITS_UNDERSCORE()->getText();
    }
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
    assert(false);  // unreachable
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

struct StringContents {
  std::string str;
  // how many characters into the token did the actual strting contents start?
  // Eg. for regular string "foo" it would be 1, for raw string r#"foo"# it
  // would be 3.
  uint32_t start_offset = 0;
};

StringContents GetStringValue(TypedefParser *parser, antlr4::Token *token);

StringContents GetRawString(TypedefParser *parser, antlr4::Token *token);

void TryInsert(td::SymbolTable &dstTable,
               TypedefParser::TypeDeclarationContext *src,
               antlr4::Parser *recognizer);

void TryInsertSymbol(std::shared_ptr<td::Struct> &s, antlr4::Parser *recognizer,
                     TypedefParser::MaybeValuedSymbolContext *ctx);

void TryInsertSymbol(std::shared_ptr<td::Variant> &s,
                     antlr4::Parser *recognizer,
                     TypedefParser::UnvaluedSymbolContext *ctx);

template <class Destination, class SourceParserContext>
void TryInsertNested(std::shared_ptr<Destination> &dst,
                     antlr4::Parser *recognizer, SourceParserContext *ctx) {
  if (ctx->maybe_symbol) {
    if (!dst->TryInsert(*ctx->maybe_symbol)) {
      throw DuplicateSymbolException(
          recognizer, ctx,
          ctx->identifier()->NON_KEYWORD_IDENTIFIER()->getSymbol());
    }
  }
}

#endif  // PARSER_PARSER_HELPERS_H__
