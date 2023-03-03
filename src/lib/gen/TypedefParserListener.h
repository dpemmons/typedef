
// Generated from ./TypedefParser.g4 by ANTLR 4.7.2

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

  virtual void enterImportStatement(TypedefParser::ImportStatementContext *ctx) = 0;
  virtual void exitImportStatement(TypedefParser::ImportStatementContext *ctx) = 0;

  virtual void enterSingleImportStatement(TypedefParser::SingleImportStatementContext *ctx) = 0;
  virtual void exitSingleImportStatement(TypedefParser::SingleImportStatementContext *ctx) = 0;

  virtual void enterWildcardImportStatement(TypedefParser::WildcardImportStatementContext *ctx) = 0;
  virtual void exitWildcardImportStatement(TypedefParser::WildcardImportStatementContext *ctx) = 0;

  virtual void enterEnumDeclaration(TypedefParser::EnumDeclarationContext *ctx) = 0;
  virtual void exitEnumDeclaration(TypedefParser::EnumDeclarationContext *ctx) = 0;

  virtual void enterEnumBody(TypedefParser::EnumBodyContext *ctx) = 0;
  virtual void exitEnumBody(TypedefParser::EnumBodyContext *ctx) = 0;

  virtual void enterEnumField(TypedefParser::EnumFieldContext *ctx) = 0;
  virtual void exitEnumField(TypedefParser::EnumFieldContext *ctx) = 0;

  virtual void enterMessageDeclaration(TypedefParser::MessageDeclarationContext *ctx) = 0;
  virtual void exitMessageDeclaration(TypedefParser::MessageDeclarationContext *ctx) = 0;

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

  virtual void enterType(TypedefParser::TypeContext *ctx) = 0;
  virtual void exitType(TypedefParser::TypeContext *ctx) = 0;

  virtual void enterArrayIdentifier(TypedefParser::ArrayIdentifierContext *ctx) = 0;
  virtual void exitArrayIdentifier(TypedefParser::ArrayIdentifierContext *ctx) = 0;

  virtual void enterQualifiedName(TypedefParser::QualifiedNameContext *ctx) = 0;
  virtual void exitQualifiedName(TypedefParser::QualifiedNameContext *ctx) = 0;

  virtual void enterModuleName(TypedefParser::ModuleNameContext *ctx) = 0;
  virtual void exitModuleName(TypedefParser::ModuleNameContext *ctx) = 0;

  virtual void enterPosition(TypedefParser::PositionContext *ctx) = 0;
  virtual void exitPosition(TypedefParser::PositionContext *ctx) = 0;

  virtual void enterIdentifier(TypedefParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(TypedefParser::IdentifierContext *ctx) = 0;

  virtual void enterLiteral(TypedefParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(TypedefParser::LiteralContext *ctx) = 0;

  virtual void enterSemver(TypedefParser::SemverContext *ctx) = 0;
  virtual void exitSemver(TypedefParser::SemverContext *ctx) = 0;

  virtual void enterBoolLiteral(TypedefParser::BoolLiteralContext *ctx) = 0;
  virtual void exitBoolLiteral(TypedefParser::BoolLiteralContext *ctx) = 0;

  virtual void enterIntegerLiteral(TypedefParser::IntegerLiteralContext *ctx) = 0;
  virtual void exitIntegerLiteral(TypedefParser::IntegerLiteralContext *ctx) = 0;

  virtual void enterFloatLiteral(TypedefParser::FloatLiteralContext *ctx) = 0;
  virtual void exitFloatLiteral(TypedefParser::FloatLiteralContext *ctx) = 0;

  virtual void enterTypeType(TypedefParser::TypeTypeContext *ctx) = 0;
  virtual void exitTypeType(TypedefParser::TypeTypeContext *ctx) = 0;

  virtual void enterPrimitiveFixedPointType(TypedefParser::PrimitiveFixedPointTypeContext *ctx) = 0;
  virtual void exitPrimitiveFixedPointType(TypedefParser::PrimitiveFixedPointTypeContext *ctx) = 0;

  virtual void enterPrimitiveType(TypedefParser::PrimitiveTypeContext *ctx) = 0;
  virtual void exitPrimitiveType(TypedefParser::PrimitiveTypeContext *ctx) = 0;


};

