
// Generated from ./libtypedef/parser/grammar/TemplateString.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "TemplateStringParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by TemplateStringParser.
 */
class  TemplateStringVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by TemplateStringParser.
   */
    virtual antlrcpp::Any visitTmpl(TemplateStringParser::TmplContext *context) = 0;

    virtual antlrcpp::Any visitTaggedStatement(TemplateStringParser::TaggedStatementContext *context) = 0;

    virtual antlrcpp::Any visitStatement(TemplateStringParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitText(TemplateStringParser::TextContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(TemplateStringParser::IdentifierContext *context) = 0;


};

