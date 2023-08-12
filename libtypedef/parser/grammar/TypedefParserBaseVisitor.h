
#include "libtypedef/parser/symbol_table.h"
#include "libtypedef/parser/table.h"


// Generated from ./libtypedef/parser/grammar/TypedefParser.g4 by ANTLR 4.7.2

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

  virtual antlrcpp::Any visitMaybeValuedSymbolDeclaration(TypedefParser::MaybeValuedSymbolDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeDeclaration(TypedefParser::TypeDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStructDeclaration(TypedefParser::StructDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMember(TypedefParser::MemberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariantDeclaration(TypedefParser::VariantDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVectorDeclaration(TypedefParser::VectorDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMapDeclaration(TypedefParser::MapDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMaybeValuedSymbol(TypedefParser::MaybeValuedSymbolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnvaluedSymbol(TypedefParser::UnvaluedSymbolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInlineStruct(TypedefParser::InlineStructContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInlineVariant(TypedefParser::InlineVariantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInlineVector(TypedefParser::InlineVectorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInlineMap(TypedefParser::InlineMapContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMaybeValuedType(TypedefParser::MaybeValuedTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimitiveType(TypedefParser::PrimitiveTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValuedPrimitiveType(TypedefParser::ValuedPrimitiveTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValuedBoolFragment(TypedefParser::ValuedBoolFragmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValuedCharFragment(TypedefParser::ValuedCharFragmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValuedStringFragment(TypedefParser::ValuedStringFragmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValuedF32Fragment(TypedefParser::ValuedF32FragmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValuedF64Fragment(TypedefParser::ValuedF64FragmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValuedU8Fragment(TypedefParser::ValuedU8FragmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValuedU16Fragment(TypedefParser::ValuedU16FragmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValuedU32Fragment(TypedefParser::ValuedU32FragmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValuedU64Fragment(TypedefParser::ValuedU64FragmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValuedI8Fragment(TypedefParser::ValuedI8FragmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValuedI16Fragment(TypedefParser::ValuedI16FragmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValuedI32Fragment(TypedefParser::ValuedI32FragmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValuedI64Fragment(TypedefParser::ValuedI64FragmentContext *ctx) override {
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

  virtual antlrcpp::Any visitIdentifier(TypedefParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword(TypedefParser::KeywordContext *ctx) override {
    return visitChildren(ctx);
  }


};

