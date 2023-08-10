#include "libtypedef/parser/parser_helpers.h"

#include <antlr4/Token.h>
#include <antlr4/tree/TerminalNode.h>

#include <codecvt>
#include <cstddef>
#include <cstdint>
#include <istream>
#include <locale>
#include <optional>
#include <utility>
#include <variant>

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
  // TODO throw an internal error if this is false?
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
  // TODO throw an internal error if this is false?
  if (ctx->maybe_symbol) {
    if (!s->TryInsert(*ctx->maybe_symbol)) {
      throw DuplicateSymbolException(
          recognizer, ctx,
          ctx->identifier()->NON_KEYWORD_IDENTIFIER()->getSymbol());
    }
  }
}

void TryInsertArgSymbol(std::shared_ptr<td::TmplStr>& s,
                        antlr4::Parser* recognizer,
                        TypedefParser::UnvaluedSymbolContext* ctx) {
  // TODO throw an internal error if this is false?
  if (ctx->maybe_symbol) {
    // Search to see if an arg of the same name already exists.
    for (const auto& existing_arg : s->args) {
      if (existing_arg.first.id() == ctx->maybe_symbol->first.id()) {
        throw DuplicateSymbolException(
            recognizer, ctx,
            ctx->identifier()->NON_KEYWORD_IDENTIFIER()->getSymbol());
      }
    }
    s->args.push_back(*ctx->maybe_symbol);
  }
}
