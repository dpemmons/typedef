
// Generated from ./libtypedef/parser/grammar/TmplStr.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "TmplStrVisitor.h"


/**
 * This class provides an empty implementation of TmplStrVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  TmplStrBaseVisitor : public TmplStrVisitor {
public:

  virtual antlrcpp::Any visitTmpl(TmplStrParser::TmplContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTaggedStatement(TmplStrParser::TaggedStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(TmplStrParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitText(TmplStrParser::TextContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifier(TmplStrParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }


};

