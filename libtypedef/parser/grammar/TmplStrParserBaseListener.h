
#include "libtypedef/parser/tmpl_str_table.h"


// Generated from ./libtypedef/parser/grammar/TmplStrParser.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "TmplStrParserListener.h"


/**
 * This class provides an empty implementation of TmplStrParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  TmplStrParserBaseListener : public TmplStrParserListener {
public:

  virtual void enterTmpl(TmplStrParser::TmplContext * /*ctx*/) override { }
  virtual void exitTmpl(TmplStrParser::TmplContext * /*ctx*/) override { }

  virtual void enterItem(TmplStrParser::ItemContext * /*ctx*/) override { }
  virtual void exitItem(TmplStrParser::ItemContext * /*ctx*/) override { }

  virtual void enterInsertion(TmplStrParser::InsertionContext * /*ctx*/) override { }
  virtual void exitInsertion(TmplStrParser::InsertionContext * /*ctx*/) override { }

  virtual void enterForBlock(TmplStrParser::ForBlockContext * /*ctx*/) override { }
  virtual void exitForBlock(TmplStrParser::ForBlockContext * /*ctx*/) override { }

  virtual void enterForClose(TmplStrParser::ForCloseContext * /*ctx*/) override { }
  virtual void exitForClose(TmplStrParser::ForCloseContext * /*ctx*/) override { }

  virtual void enterFullIIfBlock(TmplStrParser::FullIIfBlockContext * /*ctx*/) override { }
  virtual void exitFullIIfBlock(TmplStrParser::FullIIfBlockContext * /*ctx*/) override { }

  virtual void enterIfOpen(TmplStrParser::IfOpenContext * /*ctx*/) override { }
  virtual void exitIfOpen(TmplStrParser::IfOpenContext * /*ctx*/) override { }

  virtual void enterIfBlock(TmplStrParser::IfBlockContext * /*ctx*/) override { }
  virtual void exitIfBlock(TmplStrParser::IfBlockContext * /*ctx*/) override { }

  virtual void enterElseIfStmt(TmplStrParser::ElseIfStmtContext * /*ctx*/) override { }
  virtual void exitElseIfStmt(TmplStrParser::ElseIfStmtContext * /*ctx*/) override { }

  virtual void enterElseIfBlock(TmplStrParser::ElseIfBlockContext * /*ctx*/) override { }
  virtual void exitElseIfBlock(TmplStrParser::ElseIfBlockContext * /*ctx*/) override { }

  virtual void enterElseStmt(TmplStrParser::ElseStmtContext * /*ctx*/) override { }
  virtual void exitElseStmt(TmplStrParser::ElseStmtContext * /*ctx*/) override { }

  virtual void enterElseBlock(TmplStrParser::ElseBlockContext * /*ctx*/) override { }
  virtual void exitElseBlock(TmplStrParser::ElseBlockContext * /*ctx*/) override { }

  virtual void enterIfClose(TmplStrParser::IfCloseContext * /*ctx*/) override { }
  virtual void exitIfClose(TmplStrParser::IfCloseContext * /*ctx*/) override { }

  virtual void enterTextItem(TmplStrParser::TextItemContext * /*ctx*/) override { }
  virtual void exitTextItem(TmplStrParser::TextItemContext * /*ctx*/) override { }

  virtual void enterIdentifier(TmplStrParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(TmplStrParser::IdentifierContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

