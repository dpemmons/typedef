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

 private:
  // Used for user symbol resolution.
  using TypeContext = std::variant<TypedefParser::CompilationUnitContext *,
                                   TypedefParser::FieldBlockContext *>;
  std::vector<TypeContext> type_contexts_;

  TypedefParser::TypeDefinitionContext *FindSymbolInTypeStack(
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
