
// Generated from ./libtypedef/parser/grammar/StringTemplate.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "StringTemplateVisitor.h"


/**
 * This class provides an empty implementation of StringTemplateVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  StringTemplateBaseVisitor : public StringTemplateVisitor {
public:

  virtual antlrcpp::Any visitTmpl(StringTemplateParser::TmplContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTaggedStatement(StringTemplateParser::TaggedStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(StringTemplateParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitText(StringTemplateParser::TextContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifier(StringTemplateParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }


};

