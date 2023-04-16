
#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include "parser_helpers.h"
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

  virtual void enterItem(TypedefParser::ItemContext *ctx) = 0;
  virtual void exitItem(TypedefParser::ItemContext *ctx) = 0;

  virtual void enterValueDefinition(TypedefParser::ValueDefinitionContext *ctx) = 0;
  virtual void exitValueDefinition(TypedefParser::ValueDefinitionContext *ctx) = 0;

  virtual void enterPrimitiveFragment(TypedefParser::PrimitiveFragmentContext *ctx) = 0;
  virtual void exitPrimitiveFragment(TypedefParser::PrimitiveFragmentContext *ctx) = 0;

  virtual void enterBoolFragment(TypedefParser::BoolFragmentContext *ctx) = 0;
  virtual void exitBoolFragment(TypedefParser::BoolFragmentContext *ctx) = 0;

  virtual void enterCharFragment(TypedefParser::CharFragmentContext *ctx) = 0;
  virtual void exitCharFragment(TypedefParser::CharFragmentContext *ctx) = 0;

  virtual void enterStringFragment(TypedefParser::StringFragmentContext *ctx) = 0;
  virtual void exitStringFragment(TypedefParser::StringFragmentContext *ctx) = 0;

  virtual void enterF32Fragment(TypedefParser::F32FragmentContext *ctx) = 0;
  virtual void exitF32Fragment(TypedefParser::F32FragmentContext *ctx) = 0;

  virtual void enterF64Fragment(TypedefParser::F64FragmentContext *ctx) = 0;
  virtual void exitF64Fragment(TypedefParser::F64FragmentContext *ctx) = 0;

  virtual void enterU8Fragment(TypedefParser::U8FragmentContext *ctx) = 0;
  virtual void exitU8Fragment(TypedefParser::U8FragmentContext *ctx) = 0;

  virtual void enterU16Fragment(TypedefParser::U16FragmentContext *ctx) = 0;
  virtual void exitU16Fragment(TypedefParser::U16FragmentContext *ctx) = 0;

  virtual void enterU32Fragment(TypedefParser::U32FragmentContext *ctx) = 0;
  virtual void exitU32Fragment(TypedefParser::U32FragmentContext *ctx) = 0;

  virtual void enterU64Fragment(TypedefParser::U64FragmentContext *ctx) = 0;
  virtual void exitU64Fragment(TypedefParser::U64FragmentContext *ctx) = 0;

  virtual void enterI8Fragment(TypedefParser::I8FragmentContext *ctx) = 0;
  virtual void exitI8Fragment(TypedefParser::I8FragmentContext *ctx) = 0;

  virtual void enterI16Fragment(TypedefParser::I16FragmentContext *ctx) = 0;
  virtual void exitI16Fragment(TypedefParser::I16FragmentContext *ctx) = 0;

  virtual void enterI32Fragment(TypedefParser::I32FragmentContext *ctx) = 0;
  virtual void exitI32Fragment(TypedefParser::I32FragmentContext *ctx) = 0;

  virtual void enterI64Fragment(TypedefParser::I64FragmentContext *ctx) = 0;
  virtual void exitI64Fragment(TypedefParser::I64FragmentContext *ctx) = 0;

  virtual void enterType_(TypedefParser::Type_Context *ctx) = 0;
  virtual void exitType_(TypedefParser::Type_Context *ctx) = 0;

  virtual void enterParameterizedType(TypedefParser::ParameterizedTypeContext *ctx) = 0;
  virtual void exitParameterizedType(TypedefParser::ParameterizedTypeContext *ctx) = 0;

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

  virtual void enterByteLiteral(TypedefParser::ByteLiteralContext *ctx) = 0;
  virtual void exitByteLiteral(TypedefParser::ByteLiteralContext *ctx) = 0;

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

  virtual void enterByteStringLiteral(TypedefParser::ByteStringLiteralContext *ctx) = 0;
  virtual void exitByteStringLiteral(TypedefParser::ByteStringLiteralContext *ctx) = 0;

  virtual void enterIdentifier(TypedefParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(TypedefParser::IdentifierContext *ctx) = 0;

  virtual void enterKeyword(TypedefParser::KeywordContext *ctx) = 0;
  virtual void exitKeyword(TypedefParser::KeywordContext *ctx) = 0;


};

