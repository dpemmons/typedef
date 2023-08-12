
#include "libtypedef/parser/symbol_table.h"
#include "libtypedef/parser/table.h"


// Generated from ./libtypedef/parser/grammar/TypedefParser.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "TypedefParserListener.h"


/**
 * This class provides an empty implementation of TypedefParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  TypedefParserBaseListener : public TypedefParserListener {
public:

  virtual void enterCompilationUnit(TypedefParser::CompilationUnitContext * /*ctx*/) override { }
  virtual void exitCompilationUnit(TypedefParser::CompilationUnitContext * /*ctx*/) override { }

  virtual void enterMaybeValuedSymbolDeclaration(TypedefParser::MaybeValuedSymbolDeclarationContext * /*ctx*/) override { }
  virtual void exitMaybeValuedSymbolDeclaration(TypedefParser::MaybeValuedSymbolDeclarationContext * /*ctx*/) override { }

  virtual void enterTypeDeclaration(TypedefParser::TypeDeclarationContext * /*ctx*/) override { }
  virtual void exitTypeDeclaration(TypedefParser::TypeDeclarationContext * /*ctx*/) override { }

  virtual void enterStructDeclaration(TypedefParser::StructDeclarationContext * /*ctx*/) override { }
  virtual void exitStructDeclaration(TypedefParser::StructDeclarationContext * /*ctx*/) override { }

  virtual void enterMember(TypedefParser::MemberContext * /*ctx*/) override { }
  virtual void exitMember(TypedefParser::MemberContext * /*ctx*/) override { }

  virtual void enterVariantDeclaration(TypedefParser::VariantDeclarationContext * /*ctx*/) override { }
  virtual void exitVariantDeclaration(TypedefParser::VariantDeclarationContext * /*ctx*/) override { }

  virtual void enterVectorDeclaration(TypedefParser::VectorDeclarationContext * /*ctx*/) override { }
  virtual void exitVectorDeclaration(TypedefParser::VectorDeclarationContext * /*ctx*/) override { }

  virtual void enterMapDeclaration(TypedefParser::MapDeclarationContext * /*ctx*/) override { }
  virtual void exitMapDeclaration(TypedefParser::MapDeclarationContext * /*ctx*/) override { }

  virtual void enterMaybeValuedSymbol(TypedefParser::MaybeValuedSymbolContext * /*ctx*/) override { }
  virtual void exitMaybeValuedSymbol(TypedefParser::MaybeValuedSymbolContext * /*ctx*/) override { }

  virtual void enterUnvaluedSymbol(TypedefParser::UnvaluedSymbolContext * /*ctx*/) override { }
  virtual void exitUnvaluedSymbol(TypedefParser::UnvaluedSymbolContext * /*ctx*/) override { }

  virtual void enterInlineStruct(TypedefParser::InlineStructContext * /*ctx*/) override { }
  virtual void exitInlineStruct(TypedefParser::InlineStructContext * /*ctx*/) override { }

  virtual void enterInlineVariant(TypedefParser::InlineVariantContext * /*ctx*/) override { }
  virtual void exitInlineVariant(TypedefParser::InlineVariantContext * /*ctx*/) override { }

  virtual void enterInlineVector(TypedefParser::InlineVectorContext * /*ctx*/) override { }
  virtual void exitInlineVector(TypedefParser::InlineVectorContext * /*ctx*/) override { }

  virtual void enterInlineMap(TypedefParser::InlineMapContext * /*ctx*/) override { }
  virtual void exitInlineMap(TypedefParser::InlineMapContext * /*ctx*/) override { }

  virtual void enterMaybeValuedType(TypedefParser::MaybeValuedTypeContext * /*ctx*/) override { }
  virtual void exitMaybeValuedType(TypedefParser::MaybeValuedTypeContext * /*ctx*/) override { }

  virtual void enterPrimitiveType(TypedefParser::PrimitiveTypeContext * /*ctx*/) override { }
  virtual void exitPrimitiveType(TypedefParser::PrimitiveTypeContext * /*ctx*/) override { }

  virtual void enterValuedPrimitiveType(TypedefParser::ValuedPrimitiveTypeContext * /*ctx*/) override { }
  virtual void exitValuedPrimitiveType(TypedefParser::ValuedPrimitiveTypeContext * /*ctx*/) override { }

  virtual void enterValuedBoolFragment(TypedefParser::ValuedBoolFragmentContext * /*ctx*/) override { }
  virtual void exitValuedBoolFragment(TypedefParser::ValuedBoolFragmentContext * /*ctx*/) override { }

  virtual void enterValuedCharFragment(TypedefParser::ValuedCharFragmentContext * /*ctx*/) override { }
  virtual void exitValuedCharFragment(TypedefParser::ValuedCharFragmentContext * /*ctx*/) override { }

  virtual void enterValuedStringFragment(TypedefParser::ValuedStringFragmentContext * /*ctx*/) override { }
  virtual void exitValuedStringFragment(TypedefParser::ValuedStringFragmentContext * /*ctx*/) override { }

  virtual void enterValuedF32Fragment(TypedefParser::ValuedF32FragmentContext * /*ctx*/) override { }
  virtual void exitValuedF32Fragment(TypedefParser::ValuedF32FragmentContext * /*ctx*/) override { }

  virtual void enterValuedF64Fragment(TypedefParser::ValuedF64FragmentContext * /*ctx*/) override { }
  virtual void exitValuedF64Fragment(TypedefParser::ValuedF64FragmentContext * /*ctx*/) override { }

  virtual void enterValuedU8Fragment(TypedefParser::ValuedU8FragmentContext * /*ctx*/) override { }
  virtual void exitValuedU8Fragment(TypedefParser::ValuedU8FragmentContext * /*ctx*/) override { }

  virtual void enterValuedU16Fragment(TypedefParser::ValuedU16FragmentContext * /*ctx*/) override { }
  virtual void exitValuedU16Fragment(TypedefParser::ValuedU16FragmentContext * /*ctx*/) override { }

  virtual void enterValuedU32Fragment(TypedefParser::ValuedU32FragmentContext * /*ctx*/) override { }
  virtual void exitValuedU32Fragment(TypedefParser::ValuedU32FragmentContext * /*ctx*/) override { }

  virtual void enterValuedU64Fragment(TypedefParser::ValuedU64FragmentContext * /*ctx*/) override { }
  virtual void exitValuedU64Fragment(TypedefParser::ValuedU64FragmentContext * /*ctx*/) override { }

  virtual void enterValuedI8Fragment(TypedefParser::ValuedI8FragmentContext * /*ctx*/) override { }
  virtual void exitValuedI8Fragment(TypedefParser::ValuedI8FragmentContext * /*ctx*/) override { }

  virtual void enterValuedI16Fragment(TypedefParser::ValuedI16FragmentContext * /*ctx*/) override { }
  virtual void exitValuedI16Fragment(TypedefParser::ValuedI16FragmentContext * /*ctx*/) override { }

  virtual void enterValuedI32Fragment(TypedefParser::ValuedI32FragmentContext * /*ctx*/) override { }
  virtual void exitValuedI32Fragment(TypedefParser::ValuedI32FragmentContext * /*ctx*/) override { }

  virtual void enterValuedI64Fragment(TypedefParser::ValuedI64FragmentContext * /*ctx*/) override { }
  virtual void exitValuedI64Fragment(TypedefParser::ValuedI64FragmentContext * /*ctx*/) override { }

  virtual void enterTypedefVersionDeclaration(TypedefParser::TypedefVersionDeclarationContext * /*ctx*/) override { }
  virtual void exitTypedefVersionDeclaration(TypedefParser::TypedefVersionDeclarationContext * /*ctx*/) override { }

  virtual void enterModuleDeclaration(TypedefParser::ModuleDeclarationContext * /*ctx*/) override { }
  virtual void exitModuleDeclaration(TypedefParser::ModuleDeclarationContext * /*ctx*/) override { }

  virtual void enterUseDeclaration(TypedefParser::UseDeclarationContext * /*ctx*/) override { }
  virtual void exitUseDeclaration(TypedefParser::UseDeclarationContext * /*ctx*/) override { }

  virtual void enterUseTree(TypedefParser::UseTreeContext * /*ctx*/) override { }
  virtual void exitUseTree(TypedefParser::UseTreeContext * /*ctx*/) override { }

  virtual void enterSimplePath(TypedefParser::SimplePathContext * /*ctx*/) override { }
  virtual void exitSimplePath(TypedefParser::SimplePathContext * /*ctx*/) override { }

  virtual void enterBoolLiteral(TypedefParser::BoolLiteralContext * /*ctx*/) override { }
  virtual void exitBoolLiteral(TypedefParser::BoolLiteralContext * /*ctx*/) override { }

  virtual void enterCharLiteral(TypedefParser::CharLiteralContext * /*ctx*/) override { }
  virtual void exitCharLiteral(TypedefParser::CharLiteralContext * /*ctx*/) override { }

  virtual void enterF32Literal(TypedefParser::F32LiteralContext * /*ctx*/) override { }
  virtual void exitF32Literal(TypedefParser::F32LiteralContext * /*ctx*/) override { }

  virtual void enterF64Literal(TypedefParser::F64LiteralContext * /*ctx*/) override { }
  virtual void exitF64Literal(TypedefParser::F64LiteralContext * /*ctx*/) override { }

  virtual void enterU8Literal(TypedefParser::U8LiteralContext * /*ctx*/) override { }
  virtual void exitU8Literal(TypedefParser::U8LiteralContext * /*ctx*/) override { }

  virtual void enterU16Literal(TypedefParser::U16LiteralContext * /*ctx*/) override { }
  virtual void exitU16Literal(TypedefParser::U16LiteralContext * /*ctx*/) override { }

  virtual void enterU32Literal(TypedefParser::U32LiteralContext * /*ctx*/) override { }
  virtual void exitU32Literal(TypedefParser::U32LiteralContext * /*ctx*/) override { }

  virtual void enterU64Literal(TypedefParser::U64LiteralContext * /*ctx*/) override { }
  virtual void exitU64Literal(TypedefParser::U64LiteralContext * /*ctx*/) override { }

  virtual void enterI8Literal(TypedefParser::I8LiteralContext * /*ctx*/) override { }
  virtual void exitI8Literal(TypedefParser::I8LiteralContext * /*ctx*/) override { }

  virtual void enterI16Literal(TypedefParser::I16LiteralContext * /*ctx*/) override { }
  virtual void exitI16Literal(TypedefParser::I16LiteralContext * /*ctx*/) override { }

  virtual void enterI32Literal(TypedefParser::I32LiteralContext * /*ctx*/) override { }
  virtual void exitI32Literal(TypedefParser::I32LiteralContext * /*ctx*/) override { }

  virtual void enterI64Literal(TypedefParser::I64LiteralContext * /*ctx*/) override { }
  virtual void exitI64Literal(TypedefParser::I64LiteralContext * /*ctx*/) override { }

  virtual void enterStringLiteral(TypedefParser::StringLiteralContext * /*ctx*/) override { }
  virtual void exitStringLiteral(TypedefParser::StringLiteralContext * /*ctx*/) override { }

  virtual void enterIdentifier(TypedefParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(TypedefParser::IdentifierContext * /*ctx*/) override { }

  virtual void enterKeyword(TypedefParser::KeywordContext * /*ctx*/) override { }
  virtual void exitKeyword(TypedefParser::KeywordContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

