
#include "libtypedef/parser/symbol_path.h"
#include "libtypedef/parser/grammar_classes.h"
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

    virtual antlrcpp::Any visitTypedefVersionDeclaration(TypedefParser::TypedefVersionDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitModuleDeclaration(TypedefParser::ModuleDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitTypeDefinition(TypedefParser::TypeDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitFieldBlock(TypedefParser::FieldBlockContext *context) = 0;

    virtual antlrcpp::Any visitFieldDefinition(TypedefParser::FieldDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitTypeAnnotation(TypedefParser::TypeAnnotationContext *context) = 0;

    virtual antlrcpp::Any visitTypeArgument(TypedefParser::TypeArgumentContext *context) = 0;

    virtual antlrcpp::Any visitTypeIdentifier(TypedefParser::TypeIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitTemplateDefinition(TypedefParser::TemplateDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitTemplateBlock(TypedefParser::TemplateBlockContext *context) = 0;

    virtual antlrcpp::Any visitFunctionParameter(TypedefParser::FunctionParameterContext *context) = 0;

    virtual antlrcpp::Any visitTypeParameter(TypedefParser::TypeParameterContext *context) = 0;

    virtual antlrcpp::Any visitUseDeclaration(TypedefParser::UseDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitUseTree(TypedefParser::UseTreeContext *context) = 0;

    virtual antlrcpp::Any visitSimplePath(TypedefParser::SimplePathContext *context) = 0;

    virtual antlrcpp::Any visitPrimitiveLiteral(TypedefParser::PrimitiveLiteralContext *context) = 0;

    virtual antlrcpp::Any visitBoolLiteral(TypedefParser::BoolLiteralContext *context) = 0;

    virtual antlrcpp::Any visitCharLiteral(TypedefParser::CharLiteralContext *context) = 0;

    virtual antlrcpp::Any visitStringLiteral(TypedefParser::StringLiteralContext *context) = 0;

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

    virtual antlrcpp::Any visitFloatLiteral(TypedefParser::FloatLiteralContext *context) = 0;

    virtual antlrcpp::Any visitIntLiteral(TypedefParser::IntLiteralContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(TypedefParser::IdentifierContext *context) = 0;

    virtual antlrcpp::Any visitPrimitiveTypeIdentifier(TypedefParser::PrimitiveTypeIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitKeyword(TypedefParser::KeywordContext *context) = 0;


};

