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
#if 0
  virtual void enterCompilationUnit(
      TypedefParser::CompilationUnitContext *ctx) override;

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

  virtual void enterTemplateDefinition(
      TypedefParser::TemplateDefinitionContext *ctx) override;

  virtual void enterTypeParameter(
      TypedefParser::TypeParameterContext *ctx) override;
#endif

 private:
  std::vector<ParserErrorInfo> &errors_list_;

//   std::shared_ptr<td::table::TypeDeclaration> FindSymbol(
//       const std::string &identifier, antlr4::tree::ParseTree *ctx);
};

}  // namespace td

#endif  // PARSER_SECOND_PASS_H__
