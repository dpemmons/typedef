
#include "libtypedef/parser/symbol_path.h"
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

  virtual void enterStructDeclaration(TypedefParser::StructDeclarationContext * /*ctx*/) override { }
  virtual void exitStructDeclaration(TypedefParser::StructDeclarationContext * /*ctx*/) override { }

  virtual void enterVariantDeclaration(TypedefParser::VariantDeclarationContext * /*ctx*/) override { }
  virtual void exitVariantDeclaration(TypedefParser::VariantDeclarationContext * /*ctx*/) override { }

  virtual void enterVectorDeclaration(TypedefParser::VectorDeclarationContext * /*ctx*/) override { }
  virtual void exitVectorDeclaration(TypedefParser::VectorDeclarationContext * /*ctx*/) override { }

  virtual void enterMapDeclaration(TypedefParser::MapDeclarationContext * /*ctx*/) override { }
  virtual void exitMapDeclaration(TypedefParser::MapDeclarationContext * /*ctx*/) override { }

  virtual void enterStructMember(TypedefParser::StructMemberContext * /*ctx*/) override { }
  virtual void exitStructMember(TypedefParser::StructMemberContext * /*ctx*/) override { }

  virtual void enterTypeDeclaration(TypedefParser::TypeDeclarationContext * /*ctx*/) override { }
  virtual void exitTypeDeclaration(TypedefParser::TypeDeclarationContext * /*ctx*/) override { }

  virtual void enterFieldDeclaration(TypedefParser::FieldDeclarationContext * /*ctx*/) override { }
  virtual void exitFieldDeclaration(TypedefParser::FieldDeclarationContext * /*ctx*/) override { }

  virtual void enterPrimitiveMemberDeclaration(TypedefParser::PrimitiveMemberDeclarationContext * /*ctx*/) override { }
  virtual void exitPrimitiveMemberDeclaration(TypedefParser::PrimitiveMemberDeclarationContext * /*ctx*/) override { }

  virtual void enterInlineStructDeclaration(TypedefParser::InlineStructDeclarationContext * /*ctx*/) override { }
  virtual void exitInlineStructDeclaration(TypedefParser::InlineStructDeclarationContext * /*ctx*/) override { }

  virtual void enterInlineVariantDeclaration(TypedefParser::InlineVariantDeclarationContext * /*ctx*/) override { }
  virtual void exitInlineVariantDeclaration(TypedefParser::InlineVariantDeclarationContext * /*ctx*/) override { }

  virtual void enterInlineVectorDeclaration(TypedefParser::InlineVectorDeclarationContext * /*ctx*/) override { }
  virtual void exitInlineVectorDeclaration(TypedefParser::InlineVectorDeclarationContext * /*ctx*/) override { }

  virtual void enterInlineMapDeclaration(TypedefParser::InlineMapDeclarationContext * /*ctx*/) override { }
  virtual void exitInlineMapDeclaration(TypedefParser::InlineMapDeclarationContext * /*ctx*/) override { }

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

  virtual void enterPrimitiveLiteral(TypedefParser::PrimitiveLiteralContext * /*ctx*/) override { }
  virtual void exitPrimitiveLiteral(TypedefParser::PrimitiveLiteralContext * /*ctx*/) override { }

  virtual void enterBoolLiteral(TypedefParser::BoolLiteralContext * /*ctx*/) override { }
  virtual void exitBoolLiteral(TypedefParser::BoolLiteralContext * /*ctx*/) override { }

  virtual void enterCharLiteral(TypedefParser::CharLiteralContext * /*ctx*/) override { }
  virtual void exitCharLiteral(TypedefParser::CharLiteralContext * /*ctx*/) override { }

  virtual void enterF32Literal(TypedefParser::F32LiteralContext * /*ctx*/) override { }
  virtual void exitF32Literal(TypedefParser::F32LiteralContext * /*ctx*/) override { }

  virtual void enterF64Literal(TypedefParser::F64LiteralContext * /*ctx*/) override { }
  virtual void exitF64Literal(TypedefParser::F64LiteralContext * /*ctx*/) override { }

  virtual void enterFloatLiteral(TypedefParser::FloatLiteralContext * /*ctx*/) override { }
  virtual void exitFloatLiteral(TypedefParser::FloatLiteralContext * /*ctx*/) override { }

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

  virtual void enterIntLiteral(TypedefParser::IntLiteralContext * /*ctx*/) override { }
  virtual void exitIntLiteral(TypedefParser::IntLiteralContext * /*ctx*/) override { }

  virtual void enterStringLiteral(TypedefParser::StringLiteralContext * /*ctx*/) override { }
  virtual void exitStringLiteral(TypedefParser::StringLiteralContext * /*ctx*/) override { }

  virtual void enterIdentifier(TypedefParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(TypedefParser::IdentifierContext * /*ctx*/) override { }

  virtual void enterPrimitiveTypeIdentifier(TypedefParser::PrimitiveTypeIdentifierContext * /*ctx*/) override { }
  virtual void exitPrimitiveTypeIdentifier(TypedefParser::PrimitiveTypeIdentifierContext * /*ctx*/) override { }

  virtual void enterKeyword(TypedefParser::KeywordContext * /*ctx*/) override { }
  virtual void exitKeyword(TypedefParser::KeywordContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

