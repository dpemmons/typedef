
// Generated from ./libtypedef/parser/grammar/StringTemplate.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "StringTemplateParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by StringTemplateParser.
 */
class  StringTemplateVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by StringTemplateParser.
   */
    virtual antlrcpp::Any visitTmpl(StringTemplateParser::TmplContext *context) = 0;

    virtual antlrcpp::Any visitTaggedStatement(StringTemplateParser::TaggedStatementContext *context) = 0;

    virtual antlrcpp::Any visitStatement(StringTemplateParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitText(StringTemplateParser::TextContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(StringTemplateParser::IdentifierContext *context) = 0;


};

