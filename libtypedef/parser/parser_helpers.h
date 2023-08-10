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

void TryInsert(td::SymbolTable &dstTable,
               TypedefParser::TypeDeclarationContext *src,
               antlr4::Parser *recognizer);

void TryInsertSymbol(std::shared_ptr<td::Struct> &s, antlr4::Parser *recognizer,
                     TypedefParser::MaybeValuedSymbolContext *ctx);

void TryInsertSymbol(std::shared_ptr<td::Variant> &s,
                     antlr4::Parser *recognizer,
                     TypedefParser::UnvaluedSymbolContext *ctx);

void TryInsertArgSymbol(std::shared_ptr<td::TmplStr> &s,
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
