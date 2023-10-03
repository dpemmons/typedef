
#include "libtypedef/parser/gramamr_types.h"


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

  virtual antlrcpp::Any visitTypedefVersionDeclaration(TypedefParser::TypedefVersionDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModuleDeclaration(TypedefParser::ModuleDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeDefinition(TypedefParser::TypeDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldBlock(TypedefParser::FieldBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldDefinition(TypedefParser::FieldDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeAnnotation(TypedefParser::TypeAnnotationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeIdentifier(TypedefParser::TypeIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUserType(TypedefParser::UserTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTmplDefinition(TypedefParser::TmplDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTmplBlock(TypedefParser::TmplBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTmplItem(TypedefParser::TmplItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTmplText(TypedefParser::TmplTextContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTmplExpression(TypedefParser::TmplExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTmplFunctionCall(TypedefParser::TmplFunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTmplIfBlock(TypedefParser::TmplIfBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTmplIfSubBlock(TypedefParser::TmplIfSubBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTmplElIfSubBlock(TypedefParser::TmplElIfSubBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTmplElseSubBlock(TypedefParser::TmplElseSubBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTmplForBlock(TypedefParser::TmplForBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTmplSwitchBlock(TypedefParser::TmplSwitchBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTmplCaseBlock(TypedefParser::TmplCaseBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTmplDefaultBlock(TypedefParser::TmplDefaultBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTmplBindingVariables(TypedefParser::TmplBindingVariablesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTmplValueReferencePath(TypedefParser::TmplValueReferencePathContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTmplValueReference(TypedefParser::TmplValueReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTmplBindingVariable(TypedefParser::TmplBindingVariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTmplIdentifier(TypedefParser::TmplIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionParameter(TypedefParser::FunctionParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUseDeclaration(TypedefParser::UseDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSymbolPath(TypedefParser::SymbolPathContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimitiveLiteral(TypedefParser::PrimitiveLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBoolLiteral(TypedefParser::BoolLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCharLiteral(TypedefParser::CharLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStringLiteral(TypedefParser::StringLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFloatLiteral(TypedefParser::FloatLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntegerLiteral(TypedefParser::IntegerLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntDigits(TypedefParser::IntDigitsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifier(TypedefParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimitiveTypeIdentifier(TypedefParser::PrimitiveTypeIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword(TypedefParser::KeywordContext *ctx) override {
    return visitChildren(ctx);
  }


};

