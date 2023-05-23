


// Generated from ./libtypedef/parser/grammar/TmplStrParser.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "TmplStrParserVisitor.h"


/**
 * This class provides an empty implementation of TmplStrParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  TmplStrParserBaseVisitor : public TmplStrParserVisitor {
public:

  virtual antlrcpp::Any visitTmpl(TmplStrParser::TmplContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitItem(TmplStrParser::ItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReplacement(TmplStrParser::ReplacementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForBlock(TmplStrParser::ForBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForOpen(TmplStrParser::ForOpenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForClose(TmplStrParser::ForCloseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfBlock(TmplStrParser::IfBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfOpen(TmplStrParser::IfOpenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElseIfStmt(TmplStrParser::ElseIfStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElseStmt(TmplStrParser::ElseStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfClose(TmplStrParser::IfCloseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitText(TmplStrParser::TextContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifier(TmplStrParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }


};

