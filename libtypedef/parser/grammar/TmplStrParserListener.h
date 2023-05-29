
#include "libtypedef/parser/tmpl_str_table.h"


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

  virtual void enterInsertion(TmplStrParser::InsertionContext *ctx) = 0;
  virtual void exitInsertion(TmplStrParser::InsertionContext *ctx) = 0;

  virtual void enterForBlock(TmplStrParser::ForBlockContext *ctx) = 0;
  virtual void exitForBlock(TmplStrParser::ForBlockContext *ctx) = 0;

  virtual void enterForClose(TmplStrParser::ForCloseContext *ctx) = 0;
  virtual void exitForClose(TmplStrParser::ForCloseContext *ctx) = 0;

  virtual void enterFullIIfBlock(TmplStrParser::FullIIfBlockContext *ctx) = 0;
  virtual void exitFullIIfBlock(TmplStrParser::FullIIfBlockContext *ctx) = 0;

  virtual void enterIfOpen(TmplStrParser::IfOpenContext *ctx) = 0;
  virtual void exitIfOpen(TmplStrParser::IfOpenContext *ctx) = 0;

  virtual void enterIfBlock(TmplStrParser::IfBlockContext *ctx) = 0;
  virtual void exitIfBlock(TmplStrParser::IfBlockContext *ctx) = 0;

  virtual void enterElseIfStmt(TmplStrParser::ElseIfStmtContext *ctx) = 0;
  virtual void exitElseIfStmt(TmplStrParser::ElseIfStmtContext *ctx) = 0;

  virtual void enterElseIfBlock(TmplStrParser::ElseIfBlockContext *ctx) = 0;
  virtual void exitElseIfBlock(TmplStrParser::ElseIfBlockContext *ctx) = 0;

  virtual void enterElseStmt(TmplStrParser::ElseStmtContext *ctx) = 0;
  virtual void exitElseStmt(TmplStrParser::ElseStmtContext *ctx) = 0;

  virtual void enterElseBlock(TmplStrParser::ElseBlockContext *ctx) = 0;
  virtual void exitElseBlock(TmplStrParser::ElseBlockContext *ctx) = 0;

  virtual void enterIfClose(TmplStrParser::IfCloseContext *ctx) = 0;
  virtual void exitIfClose(TmplStrParser::IfCloseContext *ctx) = 0;

  virtual void enterTextItem(TmplStrParser::TextItemContext *ctx) = 0;
  virtual void exitTextItem(TmplStrParser::TextItemContext *ctx) = 0;

  virtual void enterIdentifier(TmplStrParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(TmplStrParser::IdentifierContext *ctx) = 0;


};

