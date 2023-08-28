
#include "libtypedef/parser/symbol_path.h"
#include "libtypedef/parser/table.h"


// Generated from ./libtypedef/parser/grammar/TypedefParser.g4 by ANTLR 4.7.2

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

  virtual void enterStructDeclaration(TypedefParser::StructDeclarationContext *ctx) = 0;
  virtual void exitStructDeclaration(TypedefParser::StructDeclarationContext *ctx) = 0;

  virtual void enterVariantDeclaration(TypedefParser::VariantDeclarationContext *ctx) = 0;
  virtual void exitVariantDeclaration(TypedefParser::VariantDeclarationContext *ctx) = 0;

  virtual void enterVectorDeclaration(TypedefParser::VectorDeclarationContext *ctx) = 0;
  virtual void exitVectorDeclaration(TypedefParser::VectorDeclarationContext *ctx) = 0;

  virtual void enterMapDeclaration(TypedefParser::MapDeclarationContext *ctx) = 0;
  virtual void exitMapDeclaration(TypedefParser::MapDeclarationContext *ctx) = 0;

  virtual void enterTemplateDefinition(TypedefParser::TemplateDefinitionContext *ctx) = 0;
  virtual void exitTemplateDefinition(TypedefParser::TemplateDefinitionContext *ctx) = 0;

  virtual void enterTypeParameter(TypedefParser::TypeParameterContext *ctx) = 0;
  virtual void exitTypeParameter(TypedefParser::TypeParameterContext *ctx) = 0;

  virtual void enterStructMember(TypedefParser::StructMemberContext *ctx) = 0;
  virtual void exitStructMember(TypedefParser::StructMemberContext *ctx) = 0;

  virtual void enterTypeDeclaration(TypedefParser::TypeDeclarationContext *ctx) = 0;
  virtual void exitTypeDeclaration(TypedefParser::TypeDeclarationContext *ctx) = 0;

  virtual void enterFieldDeclaration(TypedefParser::FieldDeclarationContext *ctx) = 0;
  virtual void exitFieldDeclaration(TypedefParser::FieldDeclarationContext *ctx) = 0;

  virtual void enterPrimitiveMemberDeclaration(TypedefParser::PrimitiveMemberDeclarationContext *ctx) = 0;
  virtual void exitPrimitiveMemberDeclaration(TypedefParser::PrimitiveMemberDeclarationContext *ctx) = 0;

  virtual void enterSymrefMemberDeclaration(TypedefParser::SymrefMemberDeclarationContext *ctx) = 0;
  virtual void exitSymrefMemberDeclaration(TypedefParser::SymrefMemberDeclarationContext *ctx) = 0;

  virtual void enterImpliedTypePrimitiveMemberDeclaration(TypedefParser::ImpliedTypePrimitiveMemberDeclarationContext *ctx) = 0;
  virtual void exitImpliedTypePrimitiveMemberDeclaration(TypedefParser::ImpliedTypePrimitiveMemberDeclarationContext *ctx) = 0;

  virtual void enterInlineStructDeclaration(TypedefParser::InlineStructDeclarationContext *ctx) = 0;
  virtual void exitInlineStructDeclaration(TypedefParser::InlineStructDeclarationContext *ctx) = 0;

  virtual void enterInlineVariantDeclaration(TypedefParser::InlineVariantDeclarationContext *ctx) = 0;
  virtual void exitInlineVariantDeclaration(TypedefParser::InlineVariantDeclarationContext *ctx) = 0;

  virtual void enterInlineVectorDeclaration(TypedefParser::InlineVectorDeclarationContext *ctx) = 0;
  virtual void exitInlineVectorDeclaration(TypedefParser::InlineVectorDeclarationContext *ctx) = 0;

  virtual void enterInlineMapDeclaration(TypedefParser::InlineMapDeclarationContext *ctx) = 0;
  virtual void exitInlineMapDeclaration(TypedefParser::InlineMapDeclarationContext *ctx) = 0;

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

  virtual void enterExplicitPrimitiveLiteral(TypedefParser::ExplicitPrimitiveLiteralContext *ctx) = 0;
  virtual void exitExplicitPrimitiveLiteral(TypedefParser::ExplicitPrimitiveLiteralContext *ctx) = 0;

  virtual void enterBoolLiteral(TypedefParser::BoolLiteralContext *ctx) = 0;
  virtual void exitBoolLiteral(TypedefParser::BoolLiteralContext *ctx) = 0;

  virtual void enterCharLiteral(TypedefParser::CharLiteralContext *ctx) = 0;
  virtual void exitCharLiteral(TypedefParser::CharLiteralContext *ctx) = 0;

  virtual void enterStringLiteral(TypedefParser::StringLiteralContext *ctx) = 0;
  virtual void exitStringLiteral(TypedefParser::StringLiteralContext *ctx) = 0;

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

  virtual void enterFloatLiteral(TypedefParser::FloatLiteralContext *ctx) = 0;
  virtual void exitFloatLiteral(TypedefParser::FloatLiteralContext *ctx) = 0;

  virtual void enterIntLiteral(TypedefParser::IntLiteralContext *ctx) = 0;
  virtual void exitIntLiteral(TypedefParser::IntLiteralContext *ctx) = 0;

  virtual void enterIdentifier(TypedefParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(TypedefParser::IdentifierContext *ctx) = 0;

  virtual void enterPrimitiveTypeIdentifier(TypedefParser::PrimitiveTypeIdentifierContext *ctx) = 0;
  virtual void exitPrimitiveTypeIdentifier(TypedefParser::PrimitiveTypeIdentifierContext *ctx) = 0;

  virtual void enterKeyword(TypedefParser::KeywordContext *ctx) = 0;
  virtual void exitKeyword(TypedefParser::KeywordContext *ctx) = 0;


};

