
// Generated from ./src/lib/grammar/TypedefParser.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "TypedefParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by TypedefParser.
 */
class  TypedefParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterCompilationUnit(TypedefParser::CompilationUnitContext *ctx) = 0;
  virtual void exitCompilationUnit(TypedefParser::CompilationUnitContext *ctx) = 0;

  virtual void enterTypedefVersionDeclaration(TypedefParser::TypedefVersionDeclarationContext *ctx) = 0;
  virtual void exitTypedefVersionDeclaration(TypedefParser::TypedefVersionDeclarationContext *ctx) = 0;

  virtual void enterModuleDeclaration(TypedefParser::ModuleDeclarationContext *ctx) = 0;
  virtual void exitModuleDeclaration(TypedefParser::ModuleDeclarationContext *ctx) = 0;

  virtual void enterUseDeclaration(TypedefParser::UseDeclarationContext *ctx) = 0;
  virtual void exitUseDeclaration(TypedefParser::UseDeclarationContext *ctx) = 0;

  virtual void enterUseTree(TypedefParser::UseTreeContext *ctx) = 0;
  virtual void exitUseTree(TypedefParser::UseTreeContext *ctx) = 0;

  virtual void enterEnumDeclaration(TypedefParser::EnumDeclarationContext *ctx) = 0;
  virtual void exitEnumDeclaration(TypedefParser::EnumDeclarationContext *ctx) = 0;

  virtual void enterEnumBody(TypedefParser::EnumBodyContext *ctx) = 0;
  virtual void exitEnumBody(TypedefParser::EnumBodyContext *ctx) = 0;

  virtual void enterStructDeclaration(TypedefParser::StructDeclarationContext *ctx) = 0;
  virtual void exitStructDeclaration(TypedefParser::StructDeclarationContext *ctx) = 0;

  virtual void enterMessageBody(TypedefParser::MessageBodyContext *ctx) = 0;
  virtual void exitMessageBody(TypedefParser::MessageBodyContext *ctx) = 0;

  virtual void enterFieldDeclaration(TypedefParser::FieldDeclarationContext *ctx) = 0;
  virtual void exitFieldDeclaration(TypedefParser::FieldDeclarationContext *ctx) = 0;

  virtual void enterValue(TypedefParser::ValueContext *ctx) = 0;
  virtual void exitValue(TypedefParser::ValueContext *ctx) = 0;

  virtual void enterArray(TypedefParser::ArrayContext *ctx) = 0;
  virtual void exitArray(TypedefParser::ArrayContext *ctx) = 0;

  virtual void enterMap(TypedefParser::MapContext *ctx) = 0;
  virtual void exitMap(TypedefParser::MapContext *ctx) = 0;

  virtual void enterKeyValue(TypedefParser::KeyValueContext *ctx) = 0;
  virtual void exitKeyValue(TypedefParser::KeyValueContext *ctx) = 0;

  virtual void enterSimplePath(TypedefParser::SimplePathContext *ctx) = 0;
  virtual void exitSimplePath(TypedefParser::SimplePathContext *ctx) = 0;

  virtual void enterLiteralExpression(TypedefParser::LiteralExpressionContext *ctx) = 0;
  virtual void exitLiteralExpression(TypedefParser::LiteralExpressionContext *ctx) = 0;

  virtual void enterIdentifier(TypedefParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(TypedefParser::IdentifierContext *ctx) = 0;

  virtual void enterKeyword(TypedefParser::KeywordContext *ctx) = 0;
  virtual void exitKeyword(TypedefParser::KeywordContext *ctx) = 0;


};

