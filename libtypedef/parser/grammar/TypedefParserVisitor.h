
#include "libtypedef/parser/gramamr_types.h"


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

    virtual antlrcpp::Any visitTypeIdentifier(TypedefParser::TypeIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitUserType(TypedefParser::UserTypeContext *context) = 0;

    virtual antlrcpp::Any visitTmplDefinition(TypedefParser::TmplDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitTmplBlock(TypedefParser::TmplBlockContext *context) = 0;

    virtual antlrcpp::Any visitTmplItem(TypedefParser::TmplItemContext *context) = 0;

    virtual antlrcpp::Any visitTmplText(TypedefParser::TmplTextContext *context) = 0;

    virtual antlrcpp::Any visitTmplExpression(TypedefParser::TmplExpressionContext *context) = 0;

    virtual antlrcpp::Any visitTmplFunctionCall(TypedefParser::TmplFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitTmplIfBlock(TypedefParser::TmplIfBlockContext *context) = 0;

    virtual antlrcpp::Any visitTmplIfSubBlock(TypedefParser::TmplIfSubBlockContext *context) = 0;

    virtual antlrcpp::Any visitTmplElIfSubBlock(TypedefParser::TmplElIfSubBlockContext *context) = 0;

    virtual antlrcpp::Any visitTmplElseSubBlock(TypedefParser::TmplElseSubBlockContext *context) = 0;

    virtual antlrcpp::Any visitTmplForBlock(TypedefParser::TmplForBlockContext *context) = 0;

    virtual antlrcpp::Any visitTmplSwitchBlock(TypedefParser::TmplSwitchBlockContext *context) = 0;

    virtual antlrcpp::Any visitTmplCaseBlock(TypedefParser::TmplCaseBlockContext *context) = 0;

    virtual antlrcpp::Any visitTmplDefaultBlock(TypedefParser::TmplDefaultBlockContext *context) = 0;

    virtual antlrcpp::Any visitTmplBindingVariables(TypedefParser::TmplBindingVariablesContext *context) = 0;

    virtual antlrcpp::Any visitTmplValueReferencePath(TypedefParser::TmplValueReferencePathContext *context) = 0;

    virtual antlrcpp::Any visitTmplValueReference(TypedefParser::TmplValueReferenceContext *context) = 0;

    virtual antlrcpp::Any visitTmplBindingVariable(TypedefParser::TmplBindingVariableContext *context) = 0;

    virtual antlrcpp::Any visitTmplIdentifier(TypedefParser::TmplIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitFunctionParameter(TypedefParser::FunctionParameterContext *context) = 0;

    virtual antlrcpp::Any visitUseDeclaration(TypedefParser::UseDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitSymbolPath(TypedefParser::SymbolPathContext *context) = 0;

    virtual antlrcpp::Any visitPrimitiveLiteral(TypedefParser::PrimitiveLiteralContext *context) = 0;

    virtual antlrcpp::Any visitBoolLiteral(TypedefParser::BoolLiteralContext *context) = 0;

    virtual antlrcpp::Any visitCharLiteral(TypedefParser::CharLiteralContext *context) = 0;

    virtual antlrcpp::Any visitStringLiteral(TypedefParser::StringLiteralContext *context) = 0;

    virtual antlrcpp::Any visitFloatLiteral(TypedefParser::FloatLiteralContext *context) = 0;

    virtual antlrcpp::Any visitIntegerLiteral(TypedefParser::IntegerLiteralContext *context) = 0;

    virtual antlrcpp::Any visitIntDigits(TypedefParser::IntDigitsContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(TypedefParser::IdentifierContext *context) = 0;

    virtual antlrcpp::Any visitPrimitiveTypeIdentifier(TypedefParser::PrimitiveTypeIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitKeyword(TypedefParser::KeywordContext *context) = 0;


};

