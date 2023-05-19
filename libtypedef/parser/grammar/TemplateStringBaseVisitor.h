
// Generated from ./libtypedef/parser/grammar/TemplateString.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "TemplateStringVisitor.h"


/**
 * This class provides an empty implementation of TemplateStringVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  TemplateStringBaseVisitor : public TemplateStringVisitor {
public:

  virtual antlrcpp::Any visitTmpl(TemplateStringParser::TmplContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTaggedStatement(TemplateStringParser::TaggedStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(TemplateStringParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitText(TemplateStringParser::TextContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifier(TemplateStringParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }


};

