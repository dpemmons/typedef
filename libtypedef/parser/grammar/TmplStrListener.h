
// Generated from ./libtypedef/parser/grammar/TmplStr.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "TmplStrParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by TmplStrParser.
 */
class  TmplStrListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterTmpl(TmplStrParser::TmplContext *ctx) = 0;
  virtual void exitTmpl(TmplStrParser::TmplContext *ctx) = 0;

  virtual void enterTaggedStatement(TmplStrParser::TaggedStatementContext *ctx) = 0;
  virtual void exitTaggedStatement(TmplStrParser::TaggedStatementContext *ctx) = 0;

  virtual void enterStatement(TmplStrParser::StatementContext *ctx) = 0;
  virtual void exitStatement(TmplStrParser::StatementContext *ctx) = 0;

  virtual void enterText(TmplStrParser::TextContext *ctx) = 0;
  virtual void exitText(TmplStrParser::TextContext *ctx) = 0;

  virtual void enterIdentifier(TmplStrParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(TmplStrParser::IdentifierContext *ctx) = 0;


};

