#ifndef PARSER_FIRST_PASS_H__
#define PARSER_FIRST_PASS_H__

#include <antlr4/antlr4-runtime.h>

#include <memory>
#include <string>
#include <vector>

#include "libtypedef/parser/grammar/TypedefLexer.h"
#include "libtypedef/parser/grammar/TypedefParser.h"
#include "libtypedef/parser/grammar/TypedefParserBaseListener.h"
#include "libtypedef/parser/parser_error_info.h"

class FirstPassListener : public TypedefParserBaseListener {
 public:
  FirstPassListener(std::vector<td::ParserErrorInfo> &errors_list)
      : errors_list_(errors_list) {}

  virtual void enterCompilationUnit(
      TypedefParser::CompilationUnitContext *ctx) override;

  virtual void enterTypeDefinition(
      TypedefParser::TypeDefinitionContext *ctx) override;

  virtual void enterFieldBlock(TypedefParser::FieldBlockContext *ctx) override;
  virtual void enterFieldDefinition(
      TypedefParser::FieldDefinitionContext *ctx) override;

  virtual void enterTypeAnnotation(
      TypedefParser::TypeAnnotationContext *ctx) override;

 private:
  void AddError(antlr4::ParserRuleContext *ctx, td::ParserErrorInfo::Type type,
                std::string msg = "");
  void AddError(TypedefParser::IdentifierContext *identifier,
                td::ParserErrorInfo::Type type);
  void AddError(antlr4::Token *token, td::ParserErrorInfo::Type type,
                std::string msg = "");
  std::vector<td::ParserErrorInfo> &errors_list_;
};

#endif  // PARSER_FIRST_PASS_H__
