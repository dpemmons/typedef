


// Generated from ./libtypedef/parser/grammar/TmplStrParser.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "TmplStrParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by TmplStrParser.
 */
class  TmplStrParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by TmplStrParser.
   */
    virtual antlrcpp::Any visitTmpl(TmplStrParser::TmplContext *context) = 0;

    virtual antlrcpp::Any visitItem(TmplStrParser::ItemContext *context) = 0;

    virtual antlrcpp::Any visitReplacement(TmplStrParser::ReplacementContext *context) = 0;

    virtual antlrcpp::Any visitForBlock(TmplStrParser::ForBlockContext *context) = 0;

    virtual antlrcpp::Any visitForOpen(TmplStrParser::ForOpenContext *context) = 0;

    virtual antlrcpp::Any visitForClose(TmplStrParser::ForCloseContext *context) = 0;

    virtual antlrcpp::Any visitIfBlock(TmplStrParser::IfBlockContext *context) = 0;

    virtual antlrcpp::Any visitIfOpen(TmplStrParser::IfOpenContext *context) = 0;

    virtual antlrcpp::Any visitElseIfStmt(TmplStrParser::ElseIfStmtContext *context) = 0;

    virtual antlrcpp::Any visitElseStmt(TmplStrParser::ElseStmtContext *context) = 0;

    virtual antlrcpp::Any visitIfClose(TmplStrParser::IfCloseContext *context) = 0;

    virtual antlrcpp::Any visitText(TmplStrParser::TextContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(TmplStrParser::IdentifierContext *context) = 0;


};

