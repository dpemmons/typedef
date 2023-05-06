
#include "symbol_table.h"


// Generated from ./src/lib/grammar/TypedefParser.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "TypedefParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by TypedefParser.
 */
class  TypedefParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterCompilationUnit(TypedefParser::CompilationUnitContext *ctx) = 0;
  virtual void exitCompilationUnit(TypedefParser::CompilationUnitContext *ctx) = 0;

  virtual void enterMaybeValuedSymbolDeclaration(TypedefParser::MaybeValuedSymbolDeclarationContext *ctx) = 0;
  virtual void exitMaybeValuedSymbolDeclaration(TypedefParser::MaybeValuedSymbolDeclarationContext *ctx) = 0;

  virtual void enterTypeDeclaration(TypedefParser::TypeDeclarationContext *ctx) = 0;
  virtual void exitTypeDeclaration(TypedefParser::TypeDeclarationContext *ctx) = 0;

  virtual void enterStructDeclaration(TypedefParser::StructDeclarationContext *ctx) = 0;
  virtual void exitStructDeclaration(TypedefParser::StructDeclarationContext *ctx) = 0;

  virtual void enterVariantDeclaration(TypedefParser::VariantDeclarationContext *ctx) = 0;
  virtual void exitVariantDeclaration(TypedefParser::VariantDeclarationContext *ctx) = 0;

  virtual void enterVectorDeclaration(TypedefParser::VectorDeclarationContext *ctx) = 0;
  virtual void exitVectorDeclaration(TypedefParser::VectorDeclarationContext *ctx) = 0;

  virtual void enterMapDeclaration(TypedefParser::MapDeclarationContext *ctx) = 0;
  virtual void exitMapDeclaration(TypedefParser::MapDeclarationContext *ctx) = 0;

  virtual void enterMaybeValuedSymbol(TypedefParser::MaybeValuedSymbolContext *ctx) = 0;
  virtual void exitMaybeValuedSymbol(TypedefParser::MaybeValuedSymbolContext *ctx) = 0;

  virtual void enterUnvaluedSymbol(TypedefParser::UnvaluedSymbolContext *ctx) = 0;
  virtual void exitUnvaluedSymbol(TypedefParser::UnvaluedSymbolContext *ctx) = 0;

  virtual void enterInlineStruct(TypedefParser::InlineStructContext *ctx) = 0;
  virtual void exitInlineStruct(TypedefParser::InlineStructContext *ctx) = 0;

  virtual void enterInlineVariant(TypedefParser::InlineVariantContext *ctx) = 0;
  virtual void exitInlineVariant(TypedefParser::InlineVariantContext *ctx) = 0;

  virtual void enterInlineVector(TypedefParser::InlineVectorContext *ctx) = 0;
  virtual void exitInlineVector(TypedefParser::InlineVectorContext *ctx) = 0;

  virtual void enterInlineMap(TypedefParser::InlineMapContext *ctx) = 0;
  virtual void exitInlineMap(TypedefParser::InlineMapContext *ctx) = 0;

  virtual void enterMaybeValuedType(TypedefParser::MaybeValuedTypeContext *ctx) = 0;
  virtual void exitMaybeValuedType(TypedefParser::MaybeValuedTypeContext *ctx) = 0;

  virtual void enterValuedType(TypedefParser::ValuedTypeContext *ctx) = 0;
  virtual void exitValuedType(TypedefParser::ValuedTypeContext *ctx) = 0;

  virtual void enterUnvaluedType(TypedefParser::UnvaluedTypeContext *ctx) = 0;
  virtual void exitUnvaluedType(TypedefParser::UnvaluedTypeContext *ctx) = 0;

  virtual void enterSymbolReference(TypedefParser::SymbolReferenceContext *ctx) = 0;
  virtual void exitSymbolReference(TypedefParser::SymbolReferenceContext *ctx) = 0;

  virtual void enterPrimitiveType(TypedefParser::PrimitiveTypeContext *ctx) = 0;
  virtual void exitPrimitiveType(TypedefParser::PrimitiveTypeContext *ctx) = 0;

  virtual void enterValuedPrimitiveType(TypedefParser::ValuedPrimitiveTypeContext *ctx) = 0;
  virtual void exitValuedPrimitiveType(TypedefParser::ValuedPrimitiveTypeContext *ctx) = 0;

  virtual void enterValuedBoolFragment(TypedefParser::ValuedBoolFragmentContext *ctx) = 0;
  virtual void exitValuedBoolFragment(TypedefParser::ValuedBoolFragmentContext *ctx) = 0;

  virtual void enterValuedCharFragment(TypedefParser::ValuedCharFragmentContext *ctx) = 0;
  virtual void exitValuedCharFragment(TypedefParser::ValuedCharFragmentContext *ctx) = 0;

  virtual void enterValuedStringFragment(TypedefParser::ValuedStringFragmentContext *ctx) = 0;
  virtual void exitValuedStringFragment(TypedefParser::ValuedStringFragmentContext *ctx) = 0;

  virtual void enterValuedF32Fragment(TypedefParser::ValuedF32FragmentContext *ctx) = 0;
  virtual void exitValuedF32Fragment(TypedefParser::ValuedF32FragmentContext *ctx) = 0;

  virtual void enterValuedF64Fragment(TypedefParser::ValuedF64FragmentContext *ctx) = 0;
  virtual void exitValuedF64Fragment(TypedefParser::ValuedF64FragmentContext *ctx) = 0;

  virtual void enterValuedU8Fragment(TypedefParser::ValuedU8FragmentContext *ctx) = 0;
  virtual void exitValuedU8Fragment(TypedefParser::ValuedU8FragmentContext *ctx) = 0;

  virtual void enterValuedU16Fragment(TypedefParser::ValuedU16FragmentContext *ctx) = 0;
  virtual void exitValuedU16Fragment(TypedefParser::ValuedU16FragmentContext *ctx) = 0;

  virtual void enterValuedU32Fragment(TypedefParser::ValuedU32FragmentContext *ctx) = 0;
  virtual void exitValuedU32Fragment(TypedefParser::ValuedU32FragmentContext *ctx) = 0;

  virtual void enterValuedU64Fragment(TypedefParser::ValuedU64FragmentContext *ctx) = 0;
  virtual void exitValuedU64Fragment(TypedefParser::ValuedU64FragmentContext *ctx) = 0;

  virtual void enterValuedI8Fragment(TypedefParser::ValuedI8FragmentContext *ctx) = 0;
  virtual void exitValuedI8Fragment(TypedefParser::ValuedI8FragmentContext *ctx) = 0;

  virtual void enterValuedI16Fragment(TypedefParser::ValuedI16FragmentContext *ctx) = 0;
  virtual void exitValuedI16Fragment(TypedefParser::ValuedI16FragmentContext *ctx) = 0;

  virtual void enterValuedI32Fragment(TypedefParser::ValuedI32FragmentContext *ctx) = 0;
  virtual void exitValuedI32Fragment(TypedefParser::ValuedI32FragmentContext *ctx) = 0;

  virtual void enterValuedI64Fragment(TypedefParser::ValuedI64FragmentContext *ctx) = 0;
  virtual void exitValuedI64Fragment(TypedefParser::ValuedI64FragmentContext *ctx) = 0;

  virtual void enterTypedefVersionDeclaration(TypedefParser::TypedefVersionDeclarationContext *ctx) = 0;
  virtual void exitTypedefVersionDeclaration(TypedefParser::TypedefVersionDeclarationContext *ctx) = 0;

  virtual void enterModuleDeclaration(TypedefParser::ModuleDeclarationContext *ctx) = 0;
  virtual void exitModuleDeclaration(TypedefParser::ModuleDeclarationContext *ctx) = 0;

  virtual void enterUseDeclaration(TypedefParser::UseDeclarationContext *ctx) = 0;
  virtual void exitUseDeclaration(TypedefParser::UseDeclarationContext *ctx) = 0;

  virtual void enterUseTree(TypedefParser::UseTreeContext *ctx) = 0;
  virtual void exitUseTree(TypedefParser::UseTreeContext *ctx) = 0;

  virtual void enterSimplePath(TypedefParser::SimplePathContext *ctx) = 0;
  virtual void exitSimplePath(TypedefParser::SimplePathContext *ctx) = 0;

  virtual void enterBoolLiteral(TypedefParser::BoolLiteralContext *ctx) = 0;
  virtual void exitBoolLiteral(TypedefParser::BoolLiteralContext *ctx) = 0;

  virtual void enterCharLiteral(TypedefParser::CharLiteralContext *ctx) = 0;
  virtual void exitCharLiteral(TypedefParser::CharLiteralContext *ctx) = 0;

  virtual void enterF32Literal(TypedefParser::F32LiteralContext *ctx) = 0;
  virtual void exitF32Literal(TypedefParser::F32LiteralContext *ctx) = 0;

  virtual void enterF64Literal(TypedefParser::F64LiteralContext *ctx) = 0;
  virtual void exitF64Literal(TypedefParser::F64LiteralContext *ctx) = 0;

  virtual void enterU8Literal(TypedefParser::U8LiteralContext *ctx) = 0;
  virtual void exitU8Literal(TypedefParser::U8LiteralContext *ctx) = 0;

  virtual void enterU16Literal(TypedefParser::U16LiteralContext *ctx) = 0;
  virtual void exitU16Literal(TypedefParser::U16LiteralContext *ctx) = 0;

  virtual void enterU32Literal(TypedefParser::U32LiteralContext *ctx) = 0;
  virtual void exitU32Literal(TypedefParser::U32LiteralContext *ctx) = 0;

  virtual void enterU64Literal(TypedefParser::U64LiteralContext *ctx) = 0;
  virtual void exitU64Literal(TypedefParser::U64LiteralContext *ctx) = 0;

  virtual void enterI8Literal(TypedefParser::I8LiteralContext *ctx) = 0;
  virtual void exitI8Literal(TypedefParser::I8LiteralContext *ctx) = 0;

  virtual void enterI16Literal(TypedefParser::I16LiteralContext *ctx) = 0;
  virtual void exitI16Literal(TypedefParser::I16LiteralContext *ctx) = 0;

  virtual void enterI32Literal(TypedefParser::I32LiteralContext *ctx) = 0;
  virtual void exitI32Literal(TypedefParser::I32LiteralContext *ctx) = 0;

  virtual void enterI64Literal(TypedefParser::I64LiteralContext *ctx) = 0;
  virtual void exitI64Literal(TypedefParser::I64LiteralContext *ctx) = 0;

  virtual void enterStringLiteral(TypedefParser::StringLiteralContext *ctx) = 0;
  virtual void exitStringLiteral(TypedefParser::StringLiteralContext *ctx) = 0;

  virtual void enterIdentifier(TypedefParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(TypedefParser::IdentifierContext *ctx) = 0;

  virtual void enterKeyword(TypedefParser::KeywordContext *ctx) = 0;
  virtual void exitKeyword(TypedefParser::KeywordContext *ctx) = 0;


};

