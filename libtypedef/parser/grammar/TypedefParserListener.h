
#include "libtypedef/parser/grammar_classes.h"


// Generated from ./libtypedef/parser/grammar/TypedefParser.g4 by ANTLR 4.7.2

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

  virtual void enterTypeDefinition(TypedefParser::TypeDefinitionContext *ctx) = 0;
  virtual void exitTypeDefinition(TypedefParser::TypeDefinitionContext *ctx) = 0;

  virtual void enterFieldBlock(TypedefParser::FieldBlockContext *ctx) = 0;
  virtual void exitFieldBlock(TypedefParser::FieldBlockContext *ctx) = 0;

  virtual void enterFieldDefinition(TypedefParser::FieldDefinitionContext *ctx) = 0;
  virtual void exitFieldDefinition(TypedefParser::FieldDefinitionContext *ctx) = 0;

  virtual void enterTypeAnnotation(TypedefParser::TypeAnnotationContext *ctx) = 0;
  virtual void exitTypeAnnotation(TypedefParser::TypeAnnotationContext *ctx) = 0;

  virtual void enterTypeArgument(TypedefParser::TypeArgumentContext *ctx) = 0;
  virtual void exitTypeArgument(TypedefParser::TypeArgumentContext *ctx) = 0;

  virtual void enterTypeIdentifier(TypedefParser::TypeIdentifierContext *ctx) = 0;
  virtual void exitTypeIdentifier(TypedefParser::TypeIdentifierContext *ctx) = 0;

  virtual void enterTemplateDefinition(TypedefParser::TemplateDefinitionContext *ctx) = 0;
  virtual void exitTemplateDefinition(TypedefParser::TemplateDefinitionContext *ctx) = 0;

  virtual void enterTemplateBlock(TypedefParser::TemplateBlockContext *ctx) = 0;
  virtual void exitTemplateBlock(TypedefParser::TemplateBlockContext *ctx) = 0;

  virtual void enterFunctionParameter(TypedefParser::FunctionParameterContext *ctx) = 0;
  virtual void exitFunctionParameter(TypedefParser::FunctionParameterContext *ctx) = 0;

  virtual void enterTypeParameter(TypedefParser::TypeParameterContext *ctx) = 0;
  virtual void exitTypeParameter(TypedefParser::TypeParameterContext *ctx) = 0;

  virtual void enterUseDeclaration(TypedefParser::UseDeclarationContext *ctx) = 0;
  virtual void exitUseDeclaration(TypedefParser::UseDeclarationContext *ctx) = 0;

  virtual void enterSymbolPath(TypedefParser::SymbolPathContext *ctx) = 0;
  virtual void exitSymbolPath(TypedefParser::SymbolPathContext *ctx) = 0;

  virtual void enterPrimitiveLiteral(TypedefParser::PrimitiveLiteralContext *ctx) = 0;
  virtual void exitPrimitiveLiteral(TypedefParser::PrimitiveLiteralContext *ctx) = 0;

  virtual void enterBoolLiteral(TypedefParser::BoolLiteralContext *ctx) = 0;
  virtual void exitBoolLiteral(TypedefParser::BoolLiteralContext *ctx) = 0;

  virtual void enterCharLiteral(TypedefParser::CharLiteralContext *ctx) = 0;
  virtual void exitCharLiteral(TypedefParser::CharLiteralContext *ctx) = 0;

  virtual void enterStringLiteral(TypedefParser::StringLiteralContext *ctx) = 0;
  virtual void exitStringLiteral(TypedefParser::StringLiteralContext *ctx) = 0;

  virtual void enterFloatLiteral(TypedefParser::FloatLiteralContext *ctx) = 0;
  virtual void exitFloatLiteral(TypedefParser::FloatLiteralContext *ctx) = 0;

  virtual void enterIntegerLiteral(TypedefParser::IntegerLiteralContext *ctx) = 0;
  virtual void exitIntegerLiteral(TypedefParser::IntegerLiteralContext *ctx) = 0;

  virtual void enterIntDigits(TypedefParser::IntDigitsContext *ctx) = 0;
  virtual void exitIntDigits(TypedefParser::IntDigitsContext *ctx) = 0;

  virtual void enterIdentifier(TypedefParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(TypedefParser::IdentifierContext *ctx) = 0;

  virtual void enterPrimitiveTypeIdentifier(TypedefParser::PrimitiveTypeIdentifierContext *ctx) = 0;
  virtual void exitPrimitiveTypeIdentifier(TypedefParser::PrimitiveTypeIdentifierContext *ctx) = 0;

  virtual void enterKeyword(TypedefParser::KeywordContext *ctx) = 0;
  virtual void exitKeyword(TypedefParser::KeywordContext *ctx) = 0;


};

