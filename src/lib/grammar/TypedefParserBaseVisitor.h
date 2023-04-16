
#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include "parser_helpers.h"
#include "symbol_table.h"


// Generated from ./src/lib/grammar/TypedefParser.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "TypedefParserVisitor.h"


/**
 * This class provides an empty implementation of TypedefParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  TypedefParserBaseVisitor : public TypedefParserVisitor {
public:

  virtual antlrcpp::Any visitCompilationUnit(TypedefParser::CompilationUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitItem(TypedefParser::ItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValueDefinition(TypedefParser::ValueDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimitiveFragment(TypedefParser::PrimitiveFragmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBoolFragment(TypedefParser::BoolFragmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCharFragment(TypedefParser::CharFragmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStringFragment(TypedefParser::StringFragmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitF32Fragment(TypedefParser::F32FragmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitF64Fragment(TypedefParser::F64FragmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitU8Fragment(TypedefParser::U8FragmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitU16Fragment(TypedefParser::U16FragmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitU32Fragment(TypedefParser::U32FragmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitU64Fragment(TypedefParser::U64FragmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitI8Fragment(TypedefParser::I8FragmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitI16Fragment(TypedefParser::I16FragmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitI32Fragment(TypedefParser::I32FragmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitI64Fragment(TypedefParser::I64FragmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_(TypedefParser::Type_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameterizedType(TypedefParser::ParameterizedTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypedefVersionDeclaration(TypedefParser::TypedefVersionDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModuleDeclaration(TypedefParser::ModuleDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUseDeclaration(TypedefParser::UseDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUseTree(TypedefParser::UseTreeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimplePath(TypedefParser::SimplePathContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBoolLiteral(TypedefParser::BoolLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitByteLiteral(TypedefParser::ByteLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCharLiteral(TypedefParser::CharLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitF32Literal(TypedefParser::F32LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitF64Literal(TypedefParser::F64LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitU8Literal(TypedefParser::U8LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitU16Literal(TypedefParser::U16LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitU32Literal(TypedefParser::U32LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitU64Literal(TypedefParser::U64LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitI8Literal(TypedefParser::I8LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitI16Literal(TypedefParser::I16LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitI32Literal(TypedefParser::I32LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitI64Literal(TypedefParser::I64LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStringLiteral(TypedefParser::StringLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitByteStringLiteral(TypedefParser::ByteStringLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifier(TypedefParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword(TypedefParser::KeywordContext *ctx) override {
    return visitChildren(ctx);
  }


};

