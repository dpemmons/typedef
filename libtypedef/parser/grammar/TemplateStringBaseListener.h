
// Generated from ./libtypedef/parser/grammar/TemplateString.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "TemplateStringListener.h"


/**
 * This class provides an empty implementation of TemplateStringListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  TemplateStringBaseListener : public TemplateStringListener {
public:

  virtual void enterTmpl(TemplateStringParser::TmplContext * /*ctx*/) override { }
  virtual void exitTmpl(TemplateStringParser::TmplContext * /*ctx*/) override { }

  virtual void enterTaggedStatement(TemplateStringParser::TaggedStatementContext * /*ctx*/) override { }
  virtual void exitTaggedStatement(TemplateStringParser::TaggedStatementContext * /*ctx*/) override { }

  virtual void enterStatement(TemplateStringParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(TemplateStringParser::StatementContext * /*ctx*/) override { }

  virtual void enterText(TemplateStringParser::TextContext * /*ctx*/) override { }
  virtual void exitText(TemplateStringParser::TextContext * /*ctx*/) override { }

  virtual void enterIdentifier(TemplateStringParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(TemplateStringParser::IdentifierContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

