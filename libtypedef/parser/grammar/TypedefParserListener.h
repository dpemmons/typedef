
#include "libtypedef/parser/gramamr_types.h"


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

  virtual void enterTypeIdentifier(TypedefParser::TypeIdentifierContext *ctx) = 0;
  virtual void exitTypeIdentifier(TypedefParser::TypeIdentifierContext *ctx) = 0;

  virtual void enterUserType(TypedefParser::UserTypeContext *ctx) = 0;
  virtual void exitUserType(TypedefParser::UserTypeContext *ctx) = 0;

  virtual void enterTmplDefinition(TypedefParser::TmplDefinitionContext *ctx) = 0;
  virtual void exitTmplDefinition(TypedefParser::TmplDefinitionContext *ctx) = 0;

  virtual void enterTmplBlock(TypedefParser::TmplBlockContext *ctx) = 0;
  virtual void exitTmplBlock(TypedefParser::TmplBlockContext *ctx) = 0;

  virtual void enterTmplItem(TypedefParser::TmplItemContext *ctx) = 0;
  virtual void exitTmplItem(TypedefParser::TmplItemContext *ctx) = 0;

  virtual void enterTmplText(TypedefParser::TmplTextContext *ctx) = 0;
  virtual void exitTmplText(TypedefParser::TmplTextContext *ctx) = 0;

  virtual void enterTmplExpression(TypedefParser::TmplExpressionContext *ctx) = 0;
  virtual void exitTmplExpression(TypedefParser::TmplExpressionContext *ctx) = 0;

  virtual void enterTmplFunctionCall(TypedefParser::TmplFunctionCallContext *ctx) = 0;
  virtual void exitTmplFunctionCall(TypedefParser::TmplFunctionCallContext *ctx) = 0;

  virtual void enterTmplIfBlock(TypedefParser::TmplIfBlockContext *ctx) = 0;
  virtual void exitTmplIfBlock(TypedefParser::TmplIfBlockContext *ctx) = 0;

  virtual void enterTmplIfSubBlock(TypedefParser::TmplIfSubBlockContext *ctx) = 0;
  virtual void exitTmplIfSubBlock(TypedefParser::TmplIfSubBlockContext *ctx) = 0;

  virtual void enterTmplElIfSubBlock(TypedefParser::TmplElIfSubBlockContext *ctx) = 0;
  virtual void exitTmplElIfSubBlock(TypedefParser::TmplElIfSubBlockContext *ctx) = 0;

  virtual void enterTmplElseSubBlock(TypedefParser::TmplElseSubBlockContext *ctx) = 0;
  virtual void exitTmplElseSubBlock(TypedefParser::TmplElseSubBlockContext *ctx) = 0;

  virtual void enterTmplForBlock(TypedefParser::TmplForBlockContext *ctx) = 0;
  virtual void exitTmplForBlock(TypedefParser::TmplForBlockContext *ctx) = 0;

  virtual void enterTmplSwitchBlock(TypedefParser::TmplSwitchBlockContext *ctx) = 0;
  virtual void exitTmplSwitchBlock(TypedefParser::TmplSwitchBlockContext *ctx) = 0;

  virtual void enterTmplCaseBlock(TypedefParser::TmplCaseBlockContext *ctx) = 0;
  virtual void exitTmplCaseBlock(TypedefParser::TmplCaseBlockContext *ctx) = 0;

  virtual void enterTmplDefaultBlock(TypedefParser::TmplDefaultBlockContext *ctx) = 0;
  virtual void exitTmplDefaultBlock(TypedefParser::TmplDefaultBlockContext *ctx) = 0;

  virtual void enterTmplBindingVariables(TypedefParser::TmplBindingVariablesContext *ctx) = 0;
  virtual void exitTmplBindingVariables(TypedefParser::TmplBindingVariablesContext *ctx) = 0;

  virtual void enterTmplValueReferencePath(TypedefParser::TmplValueReferencePathContext *ctx) = 0;
  virtual void exitTmplValueReferencePath(TypedefParser::TmplValueReferencePathContext *ctx) = 0;

  virtual void enterTmplValueReference(TypedefParser::TmplValueReferenceContext *ctx) = 0;
  virtual void exitTmplValueReference(TypedefParser::TmplValueReferenceContext *ctx) = 0;

  virtual void enterTmplBindingVariable(TypedefParser::TmplBindingVariableContext *ctx) = 0;
  virtual void exitTmplBindingVariable(TypedefParser::TmplBindingVariableContext *ctx) = 0;

  virtual void enterTmplIdentifier(TypedefParser::TmplIdentifierContext *ctx) = 0;
  virtual void exitTmplIdentifier(TypedefParser::TmplIdentifierContext *ctx) = 0;

  virtual void enterFunctionParameter(TypedefParser::FunctionParameterContext *ctx) = 0;
  virtual void exitFunctionParameter(TypedefParser::FunctionParameterContext *ctx) = 0;

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

