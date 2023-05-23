


// Generated from ./libtypedef/parser/grammar/TmplStrParser.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "TmplStrParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by TmplStrParser.
 */
class  TmplStrParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterTmpl(TmplStrParser::TmplContext *ctx) = 0;
  virtual void exitTmpl(TmplStrParser::TmplContext *ctx) = 0;

  virtual void enterItem(TmplStrParser::ItemContext *ctx) = 0;
  virtual void exitItem(TmplStrParser::ItemContext *ctx) = 0;

  virtual void enterReplacement(TmplStrParser::ReplacementContext *ctx) = 0;
  virtual void exitReplacement(TmplStrParser::ReplacementContext *ctx) = 0;

  virtual void enterForBlock(TmplStrParser::ForBlockContext *ctx) = 0;
  virtual void exitForBlock(TmplStrParser::ForBlockContext *ctx) = 0;

  virtual void enterForOpen(TmplStrParser::ForOpenContext *ctx) = 0;
  virtual void exitForOpen(TmplStrParser::ForOpenContext *ctx) = 0;

  virtual void enterForClose(TmplStrParser::ForCloseContext *ctx) = 0;
  virtual void exitForClose(TmplStrParser::ForCloseContext *ctx) = 0;

  virtual void enterIfBlock(TmplStrParser::IfBlockContext *ctx) = 0;
  virtual void exitIfBlock(TmplStrParser::IfBlockContext *ctx) = 0;

  virtual void enterIfOpen(TmplStrParser::IfOpenContext *ctx) = 0;
  virtual void exitIfOpen(TmplStrParser::IfOpenContext *ctx) = 0;

  virtual void enterElseIfStmt(TmplStrParser::ElseIfStmtContext *ctx) = 0;
  virtual void exitElseIfStmt(TmplStrParser::ElseIfStmtContext *ctx) = 0;

  virtual void enterElseStmt(TmplStrParser::ElseStmtContext *ctx) = 0;
  virtual void exitElseStmt(TmplStrParser::ElseStmtContext *ctx) = 0;

  virtual void enterIfClose(TmplStrParser::IfCloseContext *ctx) = 0;
  virtual void exitIfClose(TmplStrParser::IfCloseContext *ctx) = 0;

  virtual void enterText(TmplStrParser::TextContext *ctx) = 0;
  virtual void exitText(TmplStrParser::TextContext *ctx) = 0;

  virtual void enterIdentifier(TmplStrParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(TmplStrParser::IdentifierContext *ctx) = 0;


};

