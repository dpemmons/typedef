
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

    virtual antlrcpp::Any visitTaggedStatement(TmplStrParser::TaggedStatementContext *context) = 0;

    virtual antlrcpp::Any visitStatement(TmplStrParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitText(TmplStrParser::TextContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(TmplStrParser::IdentifierContext *context) = 0;


};

