#ifndef PARSER_FIRST_PASS_H__
#define PARSER_FIRST_PASS_H__

#include <antlr4/antlr4-runtime.h>

#include <memory>
#include <string>
#include <variant>
#include <vector>

#include "libtypedef/parser/grammar/TypedefLexer.h"
#include "libtypedef/parser/grammar/TypedefParser.h"
#include "libtypedef/parser/grammar/TypedefParserBaseListener.h"
#include "libtypedef/parser/parser_error_info.h"

namespace td {

class FirstPassListener : public TypedefParserBaseListener {
 public:
  FirstPassListener(std::vector<ParserErrorInfo> &errors_list)
      : errors_list_(errors_list) {}

  virtual void enterCompilationUnit(
      TypedefParser::CompilationUnitContext *ctx) override;

  virtual void enterTypeDefinition(
      TypedefParser::TypeDefinitionContext *ctx) override;

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

  virtual void enterTmplIfBlock(
      TypedefParser::TmplIfBlockContext *ctx) override;
  virtual void exitTmplIfBlock(TypedefParser::TmplIfBlockContext *ctx) override;

  virtual void enterTmplElifBlock(
      TypedefParser::TmplElifBlockContext *ctx) override;
  virtual void exitTmplElifBlock(
      TypedefParser::TmplElifBlockContext *ctx) override;

  virtual void enterTmplFor(TypedefParser::TmplForContext *ctx) override;
  virtual void exitTmplFor(TypedefParser::TmplForContext *ctx) override;

  virtual void enterTmplValueReferencePath(
      TypedefParser::TmplValueReferencePathContext *ctx) override;

 private:
  // Used for user symbol resolution.
  using TypeContext = std::variant<TypedefParser::CompilationUnitContext *,
                                   TypedefParser::FieldBlockContext *>;
  std::vector<TypeContext> type_contexts_;

  TypedefParser::TypeDefinitionContext *FindSymbolInTypeStack(
      size_t current_idx, const std::string *identifier);

  using TemplateIdentifier =
      std::variant<std::monostate,                           //
                   TypedefParser::IdentifierContext *,       //
                   TypedefParser::TmplIdentifierContext *>;  //
  using TemplateTypeContext =
      std::variant<TypedefParser::TmplDefinitionContext *,  //
                   TypedefParser::TmplIfBlockContext *,     //
                   TypedefParser::TmplElifBlockContext *,   //
                   TypedefParser::TmplForContext *>;        //
  std::vector<TemplateTypeContext> template_type_contexts_;

  TemplateIdentifier FindSymbolInTemplateTypeStack(
      size_t current_idx, const std::string *identifier);

  void AddError(antlr4::ParserRuleContext *ctx, ParserErrorInfo::Type type,
                std::string msg = "");
  void AddError(TypedefParser::IdentifierContext *identifier,
                ParserErrorInfo::Type type);
  void AddError(antlr4::Token *token, ParserErrorInfo::Type type,
                std::string msg = "");
  std::vector<ParserErrorInfo> &errors_list_;
};

}  // namespace td

#endif  // PARSER_FIRST_PASS_H__
