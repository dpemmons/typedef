#ifndef PARSER_LISTENER_H__
#define PARSER_LISTENER_H__

#include <antlr4/antlr4-runtime.h>

#include <memory>
#include <string>
#include <vector>

#include "libtypedef/parser/grammar/TypedefLexer.h"
#include "libtypedef/parser/grammar/TypedefParser.h"
#include "libtypedef/parser/grammar/TypedefParserBaseListener.h"
#include "libtypedef/parser/parser_error_info.h"

class Listener : public TypedefParserBaseListener {
 public:
  Listener(std::vector<td::ParserErrorInfo> &errors_list)
      : errors_list_(errors_list) {}

  virtual void exitStructDeclaration(
      TypedefParser::StructDeclarationContext *ctx) override;
  virtual void exitVariantDeclaration(
      TypedefParser::VariantDeclarationContext *ctx) override;
  virtual void exitVectorDeclaration(
      TypedefParser::VectorDeclarationContext *ctx) override;
  virtual void exitMapDeclaration(
      TypedefParser::MapDeclarationContext *ctx) override;

  virtual void exitMaybeValuedType(
      TypedefParser::MaybeValuedTypeContext *ctx) override;

  virtual void exitPrimitiveType(
      TypedefParser::PrimitiveTypeContext *ctx) override;

  virtual void exitValuedPrimitiveType(
      TypedefParser::ValuedPrimitiveTypeContext *ctx) override;

  virtual void exitTypedefVersionDeclaration(
      TypedefParser::TypedefVersionDeclarationContext *ctx) override {
    ctx->version = ctx->identifier()->id;
  }

  virtual void exitModuleDeclaration(
      TypedefParser::ModuleDeclarationContext *ctx) override {
    ctx->path = ctx->simplePath()->path;
  }

  virtual void exitSimplePath(TypedefParser::SimplePathContext *ctx) override;

  virtual void exitBoolLiteral(TypedefParser::BoolLiteralContext *ctx) override;
  virtual void exitCharLiteral(TypedefParser::CharLiteralContext *ctx) override;
  virtual void exitF32Literal(TypedefParser::F32LiteralContext *ctx) override;
  virtual void exitF64Literal(TypedefParser::F64LiteralContext *ctx) override;
  virtual void exitU8Literal(TypedefParser::U8LiteralContext *ctx) override;
  virtual void exitU16Literal(TypedefParser::U16LiteralContext *ctx) override;
  virtual void exitU32Literal(TypedefParser::U32LiteralContext *ctx) override;
  virtual void exitU64Literal(TypedefParser::U64LiteralContext *ctx) override;
  virtual void exitI8Literal(TypedefParser::I8LiteralContext *ctx) override;
  virtual void exitI16Literal(TypedefParser::I16LiteralContext *ctx) override;
  virtual void exitI32Literal(TypedefParser::I32LiteralContext *ctx) override;
  virtual void exitI64Literal(TypedefParser::I64LiteralContext *ctx) override;
  virtual void exitStringLiteral(
      TypedefParser::StringLiteralContext *ctx) override;

  virtual void exitIdentifier(TypedefParser::IdentifierContext *ctx) override;

 private:
  std::vector<td::ParserErrorInfo> &errors_list_;
};

#endif  // PARSER_LISTENER_H__
