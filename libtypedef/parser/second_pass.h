#ifndef PARSER_SECOND_PASS_H__
#define PARSER_SECOND_PASS_H__

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

  virtual void enterCompilationUnit(
      TypedefParser::CompilationUnitContext *ctx) override;

  std::shared_ptr<td::table::TypeDeclaration> FindSymbol(
      const std::string &identifier, antlr4::tree::ParseTree *ctx);

  virtual void enterSymrefMemberDeclaration(
      TypedefParser::SymrefMemberDeclarationContext *ctx) override;

  virtual void enterStructDeclaration(
      TypedefParser::StructDeclarationContext *ctx) override;
  virtual void enterInlineStructDeclaration(
      TypedefParser::InlineStructDeclarationContext *ctx) override;
  virtual void enterVariantDeclaration(
      TypedefParser::VariantDeclarationContext *ctx) override;
  virtual void enterInlineVariantDeclaration(
      TypedefParser::InlineVariantDeclarationContext *ctx) override;

  virtual void enterMapDeclaration(
      TypedefParser::MapDeclarationContext *ctx) override;

  virtual void enterInlineMapDeclaration(
      TypedefParser::InlineMapDeclarationContext *ctx) override;

  virtual void enterTypeParameter(
      TypedefParser::TypeParameterContext *ctx) override;

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

#endif  // PARSER_SECOND_PASS_H__
