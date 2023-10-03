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

  virtual void enterFieldBlock(TypedefParser::FieldBlockContext *ctx) override;
  virtual void exitFieldBlock(TypedefParser::FieldBlockContext *ctx) override;

  virtual void enterFieldDefinition(
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

  virtual void exitTmplStringExpression(
      TypedefParser::TmplStringExpressionContext *ctx) override;

  virtual void enterTmplValueReferencePath(
      TypedefParser::TmplValueReferencePathContext *ctx) override;

 private:
  struct BuiltinFunction {
    bool hi;
  };
  using IdentifierCtx =
      std::variant<std::monostate,                               //
                   TypedefParser::TypeDefinitionContext *,       //
                   TypedefParser::TmplDefinitionContext *,       //
                   TypedefParser::FieldDefinitionContext *,      //
                   TypedefParser::TmplBindingVariableContext *,  //
                   TypedefParser::FunctionParameterContext *,
                   BuiltinFunction *>;  //
  std::unordered_map<std::string, IdentifierCtx> identifiers_;

  // TODO these really should be stored in the AST so they can be hold data
  // (like return type) for the second_pass
  BuiltinFunction is_first_func_;
  BuiltinFunction is_last_func_;
};

}  // namespace td

#endif  // PARSER_FIRST_PASS_H__
