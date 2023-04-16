
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
 * This class defines an abstract visitor for a parse tree
 * produced by TypedefParser.
 */
class  TypedefParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by TypedefParser.
   */
    virtual antlrcpp::Any visitCompilationUnit(TypedefParser::CompilationUnitContext *context) = 0;

    virtual antlrcpp::Any visitItem(TypedefParser::ItemContext *context) = 0;

    virtual antlrcpp::Any visitValueDefinition(TypedefParser::ValueDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitPrimitiveFragment(TypedefParser::PrimitiveFragmentContext *context) = 0;

    virtual antlrcpp::Any visitBoolFragment(TypedefParser::BoolFragmentContext *context) = 0;

    virtual antlrcpp::Any visitCharFragment(TypedefParser::CharFragmentContext *context) = 0;

    virtual antlrcpp::Any visitStringFragment(TypedefParser::StringFragmentContext *context) = 0;

    virtual antlrcpp::Any visitF32Fragment(TypedefParser::F32FragmentContext *context) = 0;

    virtual antlrcpp::Any visitF64Fragment(TypedefParser::F64FragmentContext *context) = 0;

    virtual antlrcpp::Any visitU8Fragment(TypedefParser::U8FragmentContext *context) = 0;

    virtual antlrcpp::Any visitU16Fragment(TypedefParser::U16FragmentContext *context) = 0;

    virtual antlrcpp::Any visitU32Fragment(TypedefParser::U32FragmentContext *context) = 0;

    virtual antlrcpp::Any visitU64Fragment(TypedefParser::U64FragmentContext *context) = 0;

    virtual antlrcpp::Any visitI8Fragment(TypedefParser::I8FragmentContext *context) = 0;

    virtual antlrcpp::Any visitI16Fragment(TypedefParser::I16FragmentContext *context) = 0;

    virtual antlrcpp::Any visitI32Fragment(TypedefParser::I32FragmentContext *context) = 0;

    virtual antlrcpp::Any visitI64Fragment(TypedefParser::I64FragmentContext *context) = 0;

    virtual antlrcpp::Any visitType_(TypedefParser::Type_Context *context) = 0;

    virtual antlrcpp::Any visitParameterizedType(TypedefParser::ParameterizedTypeContext *context) = 0;

    virtual antlrcpp::Any visitTypedefVersionDeclaration(TypedefParser::TypedefVersionDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitModuleDeclaration(TypedefParser::ModuleDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitUseDeclaration(TypedefParser::UseDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitUseTree(TypedefParser::UseTreeContext *context) = 0;

    virtual antlrcpp::Any visitSimplePath(TypedefParser::SimplePathContext *context) = 0;

    virtual antlrcpp::Any visitBoolLiteral(TypedefParser::BoolLiteralContext *context) = 0;

    virtual antlrcpp::Any visitByteLiteral(TypedefParser::ByteLiteralContext *context) = 0;

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

    virtual antlrcpp::Any visitByteStringLiteral(TypedefParser::ByteStringLiteralContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(TypedefParser::IdentifierContext *context) = 0;

    virtual antlrcpp::Any visitKeyword(TypedefParser::KeywordContext *context) = 0;


};

