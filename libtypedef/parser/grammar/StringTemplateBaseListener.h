
// Generated from ./libtypedef/parser/grammar/StringTemplate.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "StringTemplateListener.h"


/**
 * This class provides an empty implementation of StringTemplateListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  StringTemplateBaseListener : public StringTemplateListener {
public:

  virtual void enterTmpl(StringTemplateParser::TmplContext * /*ctx*/) override { }
  virtual void exitTmpl(StringTemplateParser::TmplContext * /*ctx*/) override { }

  virtual void enterTaggedStatement(StringTemplateParser::TaggedStatementContext * /*ctx*/) override { }
  virtual void exitTaggedStatement(StringTemplateParser::TaggedStatementContext * /*ctx*/) override { }

  virtual void enterStatement(StringTemplateParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(StringTemplateParser::StatementContext * /*ctx*/) override { }

  virtual void enterText(StringTemplateParser::TextContext * /*ctx*/) override { }
  virtual void exitText(StringTemplateParser::TextContext * /*ctx*/) override { }

  virtual void enterIdentifier(StringTemplateParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(StringTemplateParser::IdentifierContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

