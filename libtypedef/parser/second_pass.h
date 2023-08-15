#ifndef TYPEDEF_LIBTYPEDEF_PARSER_SYM_REF_LISTENER_H_
#define TYPEDEF_LIBTYPEDEF_PARSER_SYM_REF_LISTENER_H_

#include <antlr4/antlr4-runtime.h>

#include <memory>
#include <string>
#include <vector>

#include "libtypedef/parser/grammar/TypedefLexer.h"
#include "libtypedef/parser/grammar/TypedefParser.h"
#include "libtypedef/parser/grammar/TypedefParserBaseListener.h"
#include "libtypedef/parser/parser_error_info.h"

namespace td {

class SecondPassListener : public TypedefParserBaseListener {
 public:
  SecondPassListener(std::vector<ParserErrorInfo> &errors_list)
      : errors_list_(errors_list) {}

  /***
   * Recursively walk *up* the parse tree to find a symbol.
   *
   * @param unresolved_symbol_ctx ths symbol we're searching for.
   * @param search_ctx the part of the parse tree we're searching in.
   *
   * @returns true if found.
   */
  // bool FindSymbol(TypedefParser::SymbolReferenceContext *unresolved_symbol_ctx,
  //                 antlr4::tree::ParseTree *search_ctx) {
  //   const string &query_identifier = unresolved_symbol_ctx->maybe_symref->id;

  //   TypedefParser::StructDeclarationContext *maybeStruct =
  //       dynamic_cast<TypedefParser::StructDeclarationContext *>(search_ctx);
  //   TypedefParser::VariantDeclarationContext *maybeVariant =
  //       dynamic_cast<TypedefParser::VariantDeclarationContext *>(search_ctx);
  //   TypedefParser::CompilationUnitContext *maybeCompilationUnit =
  //       dynamic_cast<TypedefParser::CompilationUnitContext *>(search_ctx);

  //   // If the current tree leaf is a struct...
  //   if (maybeStruct &&
  //       maybeStruct->s->table.HasTypeIdentifier(query_identifier) > 0) {
  //     maybeStruct->s->table.GetTypeIdentifier(query_identifier);
  //     return true;
  //   }
  //   // If the current tree leaf is a variant...
  //   else if (maybeVariant &&
  //            maybeVariant->v->table.HasTypeIdentifier(query_identifier) > 0) {
  //     return true;
  //   }
  //   // If the current tree leaf is a comilation unit...
  //   else if (maybeCompilationUnit &&
  //            maybeCompilationUnit->symbol_table.HasTypeIdentifier(
  //                query_identifier) > 0) {
  //     return true;
  //   } else if (search_ctx->parent != nullptr) {
  //     return FindSymbol(unresolved_symbol_ctx, search_ctx->parent);
  //   } else {
  //     // top of the tree.
  //     errors_list_.emplace_back(ErrorFromContext(
  //         unresolved_symbol_ctx, ParserErrorInfo::UNRESOLVED_SYMBOL_REFERENCE,
  //         "Unresolved symbol reference."));
  //     return false;
  //   }
  // }

  // virtual void exitSymbolReference(
  //     TypedefParser::SymbolReferenceContext *ctx) override {
  //   // walk up the tree to see if the symbol exists.
  //   if (ctx->parent) {
  //     FindSymbol(ctx, ctx->parent);
  //   }
  // }



  // virtual void exitValuedTemplateStringType(
  //     TypedefParser::ValuedTemplateStringTypeContext *ctx) override {
  //   if (!ctx->stringLiteral()->maybe_val) {
  //     errors_list_.emplace_back(
  //         ErrorFromContext(ctx, ParserErrorInfo::INVALID_STRING_LITERAL,
  //                          "Unexpected: missing string literal."));
  //     return;
  //   }
  //   auto parsedTmplStr = ParseTmplStr(*ctx->stringLiteral()->maybe_val);
  //   if (!parsedTmplStr->errors.empty()) {
  //     antlr4::Token *token = nullptr;
  //     int line_offset = 0;
  //     if (ctx->stringLiteral()->STRING_LITERAL()) {
  //       token = ctx->stringLiteral()->STRING_LITERAL()->getSymbol();
  //       line_offset = ctx->stringLiteral()->start_offset;
  //     } else if (ctx->stringLiteral()->RAW_STRING_LITERAL()) {
  //       token = ctx->stringLiteral()->RAW_STRING_LITERAL()->getSymbol();
  //       line_offset = ctx->stringLiteral()->start_offset;
  //     } else {
  //       token = ctx->getStart();
  //     }
  //     for (auto &err : parsedTmplStr->errors) {
  //       errors_list_.emplace_back(
  //           PEIBuilder()
  //               .SetType(ParserErrorInfo::TEMPLATE_STRING_PARSE_ERROR)
  //               .SetMessage(err.message)
  //               .SetTokenType(antlr4::Token::INVALID_TYPE)
  //               .SetCharOffset(token->getStartIndex() + err.char_offset)
  //               .SetLine(token->getLine() + err.line - 1)
  //               .SetLineOffset(token->getCharPositionInLine() +
  //                              err.line_offset + line_offset)
  //               .SetLength(err.length)
  //               .build());
  //     }
  //     return;
  //   }

  //   // stick the table onto the TmplStr value!
  //   if (holds_alternative<shared_ptr<TmplStr>>(*ctx->maybe_val)) {
  //     auto tmpl_str = get<shared_ptr<TmplStr>>(*ctx->maybe_val);
  //     tmpl_str->table = parsedTmplStr->table;
  //   } else {
  //     ErrorFromContext(ctx, ParserErrorInfo::OTHER,
  //                      "Internal error: Valued template string object does "
  //                      "not contain a value object.");
  //   }
  // }

 private:
  std::vector<ParserErrorInfo> &errors_list_;
};

}  // namespace td

#endif  // TYPEDEF_LIBTYPEDEF_PARSER_SYM_REF_LISTENER_H_