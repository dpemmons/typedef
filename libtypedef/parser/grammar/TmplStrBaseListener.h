
// Generated from ./libtypedef/parser/grammar/TmplStr.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "TmplStrListener.h"


/**
 * This class provides an empty implementation of TmplStrListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  TmplStrBaseListener : public TmplStrListener {
public:

  virtual void enterTmpl(TmplStrParser::TmplContext * /*ctx*/) override { }
  virtual void exitTmpl(TmplStrParser::TmplContext * /*ctx*/) override { }

  virtual void enterTaggedStatement(TmplStrParser::TaggedStatementContext * /*ctx*/) override { }
  virtual void exitTaggedStatement(TmplStrParser::TaggedStatementContext * /*ctx*/) override { }

  virtual void enterStatement(TmplStrParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(TmplStrParser::StatementContext * /*ctx*/) override { }

  virtual void enterText(TmplStrParser::TextContext * /*ctx*/) override { }
  virtual void exitText(TmplStrParser::TextContext * /*ctx*/) override { }

  virtual void enterIdentifier(TmplStrParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(TmplStrParser::IdentifierContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

