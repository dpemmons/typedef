#ifndef PARSER_FIRST_PASS_H__
#define PARSER_FIRST_PASS_H__

#include <memory>
#include <string>
#include <variant>
#include <vector>

#include "libtypedef/parser/base_listener.h"
#include "libtypedef/parser/grammar/TypedefLexer.h"
#include "libtypedef/parser/grammar/TypedefParser.h"
#include "libtypedef/parser/grammar/TypedefParserBaseListener.h"
#include "libtypedef/parser/parser_error_info.h"

namespace td {

class FirstPassListener : public BaseListener {
 public:
  FirstPassListener(std::vector<ParserErrorInfo> &errors_list);

  virtual void enterCompilationUnit(
      TypedefParser::CompilationUnitContext *ctx) override;
  virtual void exitCompilationUnit(
      TypedefParser::CompilationUnitContext *ctx) override;

  virtual void enterTypedefVersionDeclaration(
      TypedefParser::TypedefVersionDeclarationContext *ctx) override;

  virtual void enterTypeDefinition(
      TypedefParser::TypeDefinitionContext *ctx) override;
  virtual void exitTypeDefinition(
      TypedefParser::TypeDefinitionContext *ctx) override;

  virtual void enterFieldBlock(TypedefParser::FieldBlockContext *ctx) override;
  virtual void exitFieldBlock(TypedefParser::FieldBlockContext *ctx) override;

  virtual void enterFieldDefinition(
      TypedefParser::FieldDefinitionContext *ctx) override;
  virtual void exitFieldDefinition(
      TypedefParser::FieldDefinitionContext *ctx) override;

  virtual void enterTypeAnnotation(
      TypedefParser::TypeAnnotationContext *ctx) override;

  virtual void enterUserType(TypedefParser::UserTypeContext *ctx) override;

  virtual void enterTmplDefinition(
      TypedefParser::TmplDefinitionContext *ctx) override;
  virtual void exitTmplDefinition(
      TypedefParser::TmplDefinitionContext *ctx) override;

  virtual void enterTmplForBlock(
      TypedefParser::TmplForBlockContext *ctx) override;
  virtual void exitTmplForBlock(
      TypedefParser::TmplForBlockContext *ctx) override;

  virtual void enterTmplFunctionCall(
      TypedefParser::TmplFunctionCallContext *ctx) override;

  virtual void enterTmplValueReferencePath(
      TypedefParser::TmplValueReferencePathContext *ctx) override;

 private:
  std::unordered_map<std::string, TypedefParser::IdentifierCtx> identifiers_;
  std::vector<TypedefParser::IdentifierCtx> current_namespace_context_;
};

}  // namespace td

#endif  // PARSER_FIRST_PASS_H__
