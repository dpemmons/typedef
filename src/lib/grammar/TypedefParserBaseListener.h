
// Generated from ./src/lib/grammar/TypedefParser.g4 by ANTLR 4.7.2

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

  virtual void enterItem(TypedefParser::ItemContext * /*ctx*/) override { }
  virtual void exitItem(TypedefParser::ItemContext * /*ctx*/) override { }

  virtual void enterValueDeclaration(TypedefParser::ValueDeclarationContext * /*ctx*/) override { }
  virtual void exitValueDeclaration(TypedefParser::ValueDeclarationContext * /*ctx*/) override { }

  virtual void enterTypedefVersionDeclaration(TypedefParser::TypedefVersionDeclarationContext * /*ctx*/) override { }
  virtual void exitTypedefVersionDeclaration(TypedefParser::TypedefVersionDeclarationContext * /*ctx*/) override { }

  virtual void enterModuleDeclaration(TypedefParser::ModuleDeclarationContext * /*ctx*/) override { }
  virtual void exitModuleDeclaration(TypedefParser::ModuleDeclarationContext * /*ctx*/) override { }

  virtual void enterUseDeclaration(TypedefParser::UseDeclarationContext * /*ctx*/) override { }
  virtual void exitUseDeclaration(TypedefParser::UseDeclarationContext * /*ctx*/) override { }

  virtual void enterUseTree(TypedefParser::UseTreeContext * /*ctx*/) override { }
  virtual void exitUseTree(TypedefParser::UseTreeContext * /*ctx*/) override { }

  virtual void enterValue(TypedefParser::ValueContext * /*ctx*/) override { }
  virtual void exitValue(TypedefParser::ValueContext * /*ctx*/) override { }

  virtual void enterSimplePath(TypedefParser::SimplePathContext * /*ctx*/) override { }
  virtual void exitSimplePath(TypedefParser::SimplePathContext * /*ctx*/) override { }

  virtual void enterLiteralExpression(TypedefParser::LiteralExpressionContext * /*ctx*/) override { }
  virtual void exitLiteralExpression(TypedefParser::LiteralExpressionContext * /*ctx*/) override { }

  virtual void enterIdentifier(TypedefParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(TypedefParser::IdentifierContext * /*ctx*/) override { }

  virtual void enterKeyword(TypedefParser::KeywordContext * /*ctx*/) override { }
  virtual void exitKeyword(TypedefParser::KeywordContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

