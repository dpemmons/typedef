
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

  virtual void enterTypeArgument(TypedefParser::TypeArgumentContext * /*ctx*/) override { }
  virtual void exitTypeArgument(TypedefParser::TypeArgumentContext * /*ctx*/) override { }

  virtual void enterTypeIdentifier(TypedefParser::TypeIdentifierContext * /*ctx*/) override { }
  virtual void exitTypeIdentifier(TypedefParser::TypeIdentifierContext * /*ctx*/) override { }

  virtual void enterUserType(TypedefParser::UserTypeContext * /*ctx*/) override { }
  virtual void exitUserType(TypedefParser::UserTypeContext * /*ctx*/) override { }

  virtual void enterTemplateDefinition(TypedefParser::TemplateDefinitionContext * /*ctx*/) override { }
  virtual void exitTemplateDefinition(TypedefParser::TemplateDefinitionContext * /*ctx*/) override { }

  virtual void enterTemplateBlock(TypedefParser::TemplateBlockContext * /*ctx*/) override { }
  virtual void exitTemplateBlock(TypedefParser::TemplateBlockContext * /*ctx*/) override { }

  virtual void enterFunctionParameter(TypedefParser::FunctionParameterContext * /*ctx*/) override { }
  virtual void exitFunctionParameter(TypedefParser::FunctionParameterContext * /*ctx*/) override { }

  virtual void enterParameterType(TypedefParser::ParameterTypeContext * /*ctx*/) override { }
  virtual void exitParameterType(TypedefParser::ParameterTypeContext * /*ctx*/) override { }

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

