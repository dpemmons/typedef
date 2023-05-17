
// Generated from ./libtypedef/parser/grammar/StringTemplate.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "StringTemplateParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by StringTemplateParser.
 */
class  StringTemplateListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterTmpl(StringTemplateParser::TmplContext *ctx) = 0;
  virtual void exitTmpl(StringTemplateParser::TmplContext *ctx) = 0;

  virtual void enterTaggedStatement(StringTemplateParser::TaggedStatementContext *ctx) = 0;
  virtual void exitTaggedStatement(StringTemplateParser::TaggedStatementContext *ctx) = 0;

  virtual void enterStatement(StringTemplateParser::StatementContext *ctx) = 0;
  virtual void exitStatement(StringTemplateParser::StatementContext *ctx) = 0;

  virtual void enterText(StringTemplateParser::TextContext *ctx) = 0;
  virtual void exitText(StringTemplateParser::TextContext *ctx) = 0;

  virtual void enterIdentifier(StringTemplateParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(StringTemplateParser::IdentifierContext *ctx) = 0;


};

