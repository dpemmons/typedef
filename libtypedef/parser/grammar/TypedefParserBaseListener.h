
#include "libtypedef/parser/gramamr_types.h"


// Generated from ./libtypedef/parser/grammar/TypedefParser.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "TypedefParserListener.h"


/**
 * This class provides an empty implementation of TypedefParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  TypedefParserBaseListener : public TypedefParserListener {
public:

  virtual void enterCompilationUnit(TypedefParser::CompilationUnitContext * /*ctx*/) override { }
  virtual void exitCompilationUnit(TypedefParser::CompilationUnitContext * /*ctx*/) override { }

  virtual void enterTypedefVersionDeclaration(TypedefParser::TypedefVersionDeclarationContext * /*ctx*/) override { }
  virtual void exitTypedefVersionDeclaration(TypedefParser::TypedefVersionDeclarationContext * /*ctx*/) override { }

  virtual void enterModuleDeclaration(TypedefParser::ModuleDeclarationContext * /*ctx*/) override { }
  virtual void exitModuleDeclaration(TypedefParser::ModuleDeclarationContext * /*ctx*/) override { }

  virtual void enterTypeDefinition(TypedefParser::TypeDefinitionContext * /*ctx*/) override { }
  virtual void exitTypeDefinition(TypedefParser::TypeDefinitionContext * /*ctx*/) override { }

  virtual void enterFieldBlock(TypedefParser::FieldBlockContext * /*ctx*/) override { }
  virtual void exitFieldBlock(TypedefParser::FieldBlockContext * /*ctx*/) override { }

  virtual void enterFieldDefinition(TypedefParser::FieldDefinitionContext * /*ctx*/) override { }
  virtual void exitFieldDefinition(TypedefParser::FieldDefinitionContext * /*ctx*/) override { }

  virtual void enterTypeAnnotation(TypedefParser::TypeAnnotationContext * /*ctx*/) override { }
  virtual void exitTypeAnnotation(TypedefParser::TypeAnnotationContext * /*ctx*/) override { }

  virtual void enterTypeIdentifier(TypedefParser::TypeIdentifierContext * /*ctx*/) override { }
  virtual void exitTypeIdentifier(TypedefParser::TypeIdentifierContext * /*ctx*/) override { }

  virtual void enterUserType(TypedefParser::UserTypeContext * /*ctx*/) override { }
  virtual void exitUserType(TypedefParser::UserTypeContext * /*ctx*/) override { }

  virtual void enterTmplDefinition(TypedefParser::TmplDefinitionContext * /*ctx*/) override { }
  virtual void exitTmplDefinition(TypedefParser::TmplDefinitionContext * /*ctx*/) override { }

  virtual void enterTmplBlock(TypedefParser::TmplBlockContext * /*ctx*/) override { }
  virtual void exitTmplBlock(TypedefParser::TmplBlockContext * /*ctx*/) override { }

  virtual void enterTmplItem(TypedefParser::TmplItemContext * /*ctx*/) override { }
  virtual void exitTmplItem(TypedefParser::TmplItemContext * /*ctx*/) override { }

  virtual void enterTmplText(TypedefParser::TmplTextContext * /*ctx*/) override { }
  virtual void exitTmplText(TypedefParser::TmplTextContext * /*ctx*/) override { }

  virtual void enterTmplExpression(TypedefParser::TmplExpressionContext * /*ctx*/) override { }
  virtual void exitTmplExpression(TypedefParser::TmplExpressionContext * /*ctx*/) override { }

  virtual void enterTmplFunctionCall(TypedefParser::TmplFunctionCallContext * /*ctx*/) override { }
  virtual void exitTmplFunctionCall(TypedefParser::TmplFunctionCallContext * /*ctx*/) override { }

  virtual void enterTmplIfBlock(TypedefParser::TmplIfBlockContext * /*ctx*/) override { }
  virtual void exitTmplIfBlock(TypedefParser::TmplIfBlockContext * /*ctx*/) override { }

  virtual void enterTmplIfSubBlock(TypedefParser::TmplIfSubBlockContext * /*ctx*/) override { }
  virtual void exitTmplIfSubBlock(TypedefParser::TmplIfSubBlockContext * /*ctx*/) override { }

  virtual void enterTmplElIfSubBlock(TypedefParser::TmplElIfSubBlockContext * /*ctx*/) override { }
  virtual void exitTmplElIfSubBlock(TypedefParser::TmplElIfSubBlockContext * /*ctx*/) override { }

  virtual void enterTmplElseSubBlock(TypedefParser::TmplElseSubBlockContext * /*ctx*/) override { }
  virtual void exitTmplElseSubBlock(TypedefParser::TmplElseSubBlockContext * /*ctx*/) override { }

  virtual void enterTmplForBlock(TypedefParser::TmplForBlockContext * /*ctx*/) override { }
  virtual void exitTmplForBlock(TypedefParser::TmplForBlockContext * /*ctx*/) override { }

  virtual void enterTmplSwitchBlock(TypedefParser::TmplSwitchBlockContext * /*ctx*/) override { }
  virtual void exitTmplSwitchBlock(TypedefParser::TmplSwitchBlockContext * /*ctx*/) override { }

  virtual void enterTmplCaseBlock(TypedefParser::TmplCaseBlockContext * /*ctx*/) override { }
  virtual void exitTmplCaseBlock(TypedefParser::TmplCaseBlockContext * /*ctx*/) override { }

  virtual void enterTmplDefaultBlock(TypedefParser::TmplDefaultBlockContext * /*ctx*/) override { }
  virtual void exitTmplDefaultBlock(TypedefParser::TmplDefaultBlockContext * /*ctx*/) override { }

  virtual void enterTmplBindingVariables(TypedefParser::TmplBindingVariablesContext * /*ctx*/) override { }
  virtual void exitTmplBindingVariables(TypedefParser::TmplBindingVariablesContext * /*ctx*/) override { }

  virtual void enterTmplValueReferencePath(TypedefParser::TmplValueReferencePathContext * /*ctx*/) override { }
  virtual void exitTmplValueReferencePath(TypedefParser::TmplValueReferencePathContext * /*ctx*/) override { }

  virtual void enterTmplValueReference(TypedefParser::TmplValueReferenceContext * /*ctx*/) override { }
  virtual void exitTmplValueReference(TypedefParser::TmplValueReferenceContext * /*ctx*/) override { }

  virtual void enterTmplBindingVariable(TypedefParser::TmplBindingVariableContext * /*ctx*/) override { }
  virtual void exitTmplBindingVariable(TypedefParser::TmplBindingVariableContext * /*ctx*/) override { }

  virtual void enterTmplIdentifier(TypedefParser::TmplIdentifierContext * /*ctx*/) override { }
  virtual void exitTmplIdentifier(TypedefParser::TmplIdentifierContext * /*ctx*/) override { }

  virtual void enterFunctionParameter(TypedefParser::FunctionParameterContext * /*ctx*/) override { }
  virtual void exitFunctionParameter(TypedefParser::FunctionParameterContext * /*ctx*/) override { }

  virtual void enterUseDeclaration(TypedefParser::UseDeclarationContext * /*ctx*/) override { }
  virtual void exitUseDeclaration(TypedefParser::UseDeclarationContext * /*ctx*/) override { }

  virtual void enterSymbolPath(TypedefParser::SymbolPathContext * /*ctx*/) override { }
  virtual void exitSymbolPath(TypedefParser::SymbolPathContext * /*ctx*/) override { }

  virtual void enterPrimitiveLiteral(TypedefParser::PrimitiveLiteralContext * /*ctx*/) override { }
  virtual void exitPrimitiveLiteral(TypedefParser::PrimitiveLiteralContext * /*ctx*/) override { }

  virtual void enterBoolLiteral(TypedefParser::BoolLiteralContext * /*ctx*/) override { }
  virtual void exitBoolLiteral(TypedefParser::BoolLiteralContext * /*ctx*/) override { }

  virtual void enterCharLiteral(TypedefParser::CharLiteralContext * /*ctx*/) override { }
  virtual void exitCharLiteral(TypedefParser::CharLiteralContext * /*ctx*/) override { }

  virtual void enterStringLiteral(TypedefParser::StringLiteralContext * /*ctx*/) override { }
  virtual void exitStringLiteral(TypedefParser::StringLiteralContext * /*ctx*/) override { }

  virtual void enterFloatLiteral(TypedefParser::FloatLiteralContext * /*ctx*/) override { }
  virtual void exitFloatLiteral(TypedefParser::FloatLiteralContext * /*ctx*/) override { }

  virtual void enterIntegerLiteral(TypedefParser::IntegerLiteralContext * /*ctx*/) override { }
  virtual void exitIntegerLiteral(TypedefParser::IntegerLiteralContext * /*ctx*/) override { }

  virtual void enterIntDigits(TypedefParser::IntDigitsContext * /*ctx*/) override { }
  virtual void exitIntDigits(TypedefParser::IntDigitsContext * /*ctx*/) override { }

  virtual void enterIdentifier(TypedefParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(TypedefParser::IdentifierContext * /*ctx*/) override { }

  virtual void enterPrimitiveTypeIdentifier(TypedefParser::PrimitiveTypeIdentifierContext * /*ctx*/) override { }
  virtual void exitPrimitiveTypeIdentifier(TypedefParser::PrimitiveTypeIdentifierContext * /*ctx*/) override { }

  virtual void enterKeyword(TypedefParser::KeywordContext * /*ctx*/) override { }
  virtual void exitKeyword(TypedefParser::KeywordContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

