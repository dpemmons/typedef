
#include "libtypedef/parser/symbol_table.h"
#include "libtypedef/parser/table.h"


// Generated from ./libtypedef/parser/grammar/TypedefParser.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "TypedefParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by TypedefParser.
 */
class  TypedefParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by TypedefParser.
   */
    virtual antlrcpp::Any visitCompilationUnit(TypedefParser::CompilationUnitContext *context) = 0;

    virtual antlrcpp::Any visitMaybeValuedSymbolDeclaration(TypedefParser::MaybeValuedSymbolDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitTypeDeclaration(TypedefParser::TypeDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitStructDeclaration(TypedefParser::StructDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitVariantDeclaration(TypedefParser::VariantDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitVectorDeclaration(TypedefParser::VectorDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitMapDeclaration(TypedefParser::MapDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitMaybeValuedSymbol(TypedefParser::MaybeValuedSymbolContext *context) = 0;

    virtual antlrcpp::Any visitUnvaluedSymbol(TypedefParser::UnvaluedSymbolContext *context) = 0;

    virtual antlrcpp::Any visitInlineStruct(TypedefParser::InlineStructContext *context) = 0;

    virtual antlrcpp::Any visitInlineVariant(TypedefParser::InlineVariantContext *context) = 0;

    virtual antlrcpp::Any visitInlineVector(TypedefParser::InlineVectorContext *context) = 0;

    virtual antlrcpp::Any visitInlineMap(TypedefParser::InlineMapContext *context) = 0;

    virtual antlrcpp::Any visitMaybeValuedType(TypedefParser::MaybeValuedTypeContext *context) = 0;

    virtual antlrcpp::Any visitValuedType(TypedefParser::ValuedTypeContext *context) = 0;

    virtual antlrcpp::Any visitUnvaluedType(TypedefParser::UnvaluedTypeContext *context) = 0;

    virtual antlrcpp::Any visitSymbolReference(TypedefParser::SymbolReferenceContext *context) = 0;

    virtual antlrcpp::Any visitPrimitiveType(TypedefParser::PrimitiveTypeContext *context) = 0;

    virtual antlrcpp::Any visitValuedTemplateStringType(TypedefParser::ValuedTemplateStringTypeContext *context) = 0;

    virtual antlrcpp::Any visitValuedPrimitiveType(TypedefParser::ValuedPrimitiveTypeContext *context) = 0;

    virtual antlrcpp::Any visitValuedBoolFragment(TypedefParser::ValuedBoolFragmentContext *context) = 0;

    virtual antlrcpp::Any visitValuedCharFragment(TypedefParser::ValuedCharFragmentContext *context) = 0;

    virtual antlrcpp::Any visitValuedStringFragment(TypedefParser::ValuedStringFragmentContext *context) = 0;

    virtual antlrcpp::Any visitValuedF32Fragment(TypedefParser::ValuedF32FragmentContext *context) = 0;

    virtual antlrcpp::Any visitValuedF64Fragment(TypedefParser::ValuedF64FragmentContext *context) = 0;

    virtual antlrcpp::Any visitValuedU8Fragment(TypedefParser::ValuedU8FragmentContext *context) = 0;

    virtual antlrcpp::Any visitValuedU16Fragment(TypedefParser::ValuedU16FragmentContext *context) = 0;

    virtual antlrcpp::Any visitValuedU32Fragment(TypedefParser::ValuedU32FragmentContext *context) = 0;

    virtual antlrcpp::Any visitValuedU64Fragment(TypedefParser::ValuedU64FragmentContext *context) = 0;

    virtual antlrcpp::Any visitValuedI8Fragment(TypedefParser::ValuedI8FragmentContext *context) = 0;

    virtual antlrcpp::Any visitValuedI16Fragment(TypedefParser::ValuedI16FragmentContext *context) = 0;

    virtual antlrcpp::Any visitValuedI32Fragment(TypedefParser::ValuedI32FragmentContext *context) = 0;

    virtual antlrcpp::Any visitValuedI64Fragment(TypedefParser::ValuedI64FragmentContext *context) = 0;

    virtual antlrcpp::Any visitTypedefVersionDeclaration(TypedefParser::TypedefVersionDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitModuleDeclaration(TypedefParser::ModuleDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitUseDeclaration(TypedefParser::UseDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitUseTree(TypedefParser::UseTreeContext *context) = 0;

    virtual antlrcpp::Any visitSimplePath(TypedefParser::SimplePathContext *context) = 0;

    virtual antlrcpp::Any visitBoolLiteral(TypedefParser::BoolLiteralContext *context) = 0;

    virtual antlrcpp::Any visitCharLiteral(TypedefParser::CharLiteralContext *context) = 0;

    virtual antlrcpp::Any visitF32Literal(TypedefParser::F32LiteralContext *context) = 0;

    virtual antlrcpp::Any visitF64Literal(TypedefParser::F64LiteralContext *context) = 0;

    virtual antlrcpp::Any visitU8Literal(TypedefParser::U8LiteralContext *context) = 0;

    virtual antlrcpp::Any visitU16Literal(TypedefParser::U16LiteralContext *context) = 0;

    virtual antlrcpp::Any visitU32Literal(TypedefParser::U32LiteralContext *context) = 0;

    virtual antlrcpp::Any visitU64Literal(TypedefParser::U64LiteralContext *context) = 0;

    virtual antlrcpp::Any visitI8Literal(TypedefParser::I8LiteralContext *context) = 0;

    virtual antlrcpp::Any visitI16Literal(TypedefParser::I16LiteralContext *context) = 0;

    virtual antlrcpp::Any visitI32Literal(TypedefParser::I32LiteralContext *context) = 0;

    virtual antlrcpp::Any visitI64Literal(TypedefParser::I64LiteralContext *context) = 0;

    virtual antlrcpp::Any visitStringLiteral(TypedefParser::StringLiteralContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(TypedefParser::IdentifierContext *context) = 0;

    virtual antlrcpp::Any visitKeyword(TypedefParser::KeywordContext *context) = 0;


};

