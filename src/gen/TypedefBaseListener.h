
// Generated from ./Typedef.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "TypedefListener.h"


/**
 * This class provides an empty implementation of TypedefListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  TypedefBaseListener : public TypedefListener {
public:

  virtual void enterCompilationUnit(TypedefParser::CompilationUnitContext * /*ctx*/) override { }
  virtual void exitCompilationUnit(TypedefParser::CompilationUnitContext * /*ctx*/) override { }

  virtual void enterTypedefVersionDeclaration(TypedefParser::TypedefVersionDeclarationContext * /*ctx*/) override { }
  virtual void exitTypedefVersionDeclaration(TypedefParser::TypedefVersionDeclarationContext * /*ctx*/) override { }

  virtual void enterModuleDeclaration(TypedefParser::ModuleDeclarationContext * /*ctx*/) override { }
  virtual void exitModuleDeclaration(TypedefParser::ModuleDeclarationContext * /*ctx*/) override { }

  virtual void enterImportStatement(TypedefParser::ImportStatementContext * /*ctx*/) override { }
  virtual void exitImportStatement(TypedefParser::ImportStatementContext * /*ctx*/) override { }

  virtual void enterSingleImportStatement(TypedefParser::SingleImportStatementContext * /*ctx*/) override { }
  virtual void exitSingleImportStatement(TypedefParser::SingleImportStatementContext * /*ctx*/) override { }

  virtual void enterWildcardImportStatement(TypedefParser::WildcardImportStatementContext * /*ctx*/) override { }
  virtual void exitWildcardImportStatement(TypedefParser::WildcardImportStatementContext * /*ctx*/) override { }

  virtual void enterEnumDeclaration(TypedefParser::EnumDeclarationContext * /*ctx*/) override { }
  virtual void exitEnumDeclaration(TypedefParser::EnumDeclarationContext * /*ctx*/) override { }

  virtual void enterEnumBody(TypedefParser::EnumBodyContext * /*ctx*/) override { }
  virtual void exitEnumBody(TypedefParser::EnumBodyContext * /*ctx*/) override { }

  virtual void enterEnumField(TypedefParser::EnumFieldContext * /*ctx*/) override { }
  virtual void exitEnumField(TypedefParser::EnumFieldContext * /*ctx*/) override { }

  virtual void enterMessageDeclaration(TypedefParser::MessageDeclarationContext * /*ctx*/) override { }
  virtual void exitMessageDeclaration(TypedefParser::MessageDeclarationContext * /*ctx*/) override { }

  virtual void enterMessageBody(TypedefParser::MessageBodyContext * /*ctx*/) override { }
  virtual void exitMessageBody(TypedefParser::MessageBodyContext * /*ctx*/) override { }

  virtual void enterFieldDeclaration(TypedefParser::FieldDeclarationContext * /*ctx*/) override { }
  virtual void exitFieldDeclaration(TypedefParser::FieldDeclarationContext * /*ctx*/) override { }

  virtual void enterValue(TypedefParser::ValueContext * /*ctx*/) override { }
  virtual void exitValue(TypedefParser::ValueContext * /*ctx*/) override { }

  virtual void enterArray(TypedefParser::ArrayContext * /*ctx*/) override { }
  virtual void exitArray(TypedefParser::ArrayContext * /*ctx*/) override { }

  virtual void enterMap(TypedefParser::MapContext * /*ctx*/) override { }
  virtual void exitMap(TypedefParser::MapContext * /*ctx*/) override { }

  virtual void enterKeyValue(TypedefParser::KeyValueContext * /*ctx*/) override { }
  virtual void exitKeyValue(TypedefParser::KeyValueContext * /*ctx*/) override { }

  virtual void enterType(TypedefParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(TypedefParser::TypeContext * /*ctx*/) override { }

  virtual void enterArrayIdentifier(TypedefParser::ArrayIdentifierContext * /*ctx*/) override { }
  virtual void exitArrayIdentifier(TypedefParser::ArrayIdentifierContext * /*ctx*/) override { }

  virtual void enterQualifiedName(TypedefParser::QualifiedNameContext * /*ctx*/) override { }
  virtual void exitQualifiedName(TypedefParser::QualifiedNameContext * /*ctx*/) override { }

  virtual void enterModuleName(TypedefParser::ModuleNameContext * /*ctx*/) override { }
  virtual void exitModuleName(TypedefParser::ModuleNameContext * /*ctx*/) override { }

  virtual void enterPosition(TypedefParser::PositionContext * /*ctx*/) override { }
  virtual void exitPosition(TypedefParser::PositionContext * /*ctx*/) override { }

  virtual void enterIdentifier(TypedefParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(TypedefParser::IdentifierContext * /*ctx*/) override { }

  virtual void enterLiteral(TypedefParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(TypedefParser::LiteralContext * /*ctx*/) override { }

  virtual void enterBoolLiteral(TypedefParser::BoolLiteralContext * /*ctx*/) override { }
  virtual void exitBoolLiteral(TypedefParser::BoolLiteralContext * /*ctx*/) override { }

  virtual void enterIntegerLiteral(TypedefParser::IntegerLiteralContext * /*ctx*/) override { }
  virtual void exitIntegerLiteral(TypedefParser::IntegerLiteralContext * /*ctx*/) override { }

  virtual void enterFloatLiteral(TypedefParser::FloatLiteralContext * /*ctx*/) override { }
  virtual void exitFloatLiteral(TypedefParser::FloatLiteralContext * /*ctx*/) override { }

  virtual void enterTypeType(TypedefParser::TypeTypeContext * /*ctx*/) override { }
  virtual void exitTypeType(TypedefParser::TypeTypeContext * /*ctx*/) override { }

  virtual void enterPrimitiveFixedPointType(TypedefParser::PrimitiveFixedPointTypeContext * /*ctx*/) override { }
  virtual void exitPrimitiveFixedPointType(TypedefParser::PrimitiveFixedPointTypeContext * /*ctx*/) override { }

  virtual void enterPrimitiveType(TypedefParser::PrimitiveTypeContext * /*ctx*/) override { }
  virtual void exitPrimitiveType(TypedefParser::PrimitiveTypeContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

