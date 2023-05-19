
// Generated from ./libtypedef/parser/grammar/TemplateString.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "TemplateStringParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by TemplateStringParser.
 */
class  TemplateStringListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterTmpl(TemplateStringParser::TmplContext *ctx) = 0;
  virtual void exitTmpl(TemplateStringParser::TmplContext *ctx) = 0;

  virtual void enterTaggedStatement(TemplateStringParser::TaggedStatementContext *ctx) = 0;
  virtual void exitTaggedStatement(TemplateStringParser::TaggedStatementContext *ctx) = 0;

  virtual void enterStatement(TemplateStringParser::StatementContext *ctx) = 0;
  virtual void exitStatement(TemplateStringParser::StatementContext *ctx) = 0;

  virtual void enterText(TemplateStringParser::TextContext *ctx) = 0;
  virtual void exitText(TemplateStringParser::TextContext *ctx) = 0;

  virtual void enterIdentifier(TemplateStringParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(TemplateStringParser::IdentifierContext *ctx) = 0;


};

