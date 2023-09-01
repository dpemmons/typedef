#include "libtypedef/parser/grammar_classes.h"

#include <antlr4/antlr4-runtime.h>

#include <memory>
#include <string>
#include <vector>

#include "grammar_classes.h"
#include "libtypedef/parser/grammar/TypedefLexer.h"
#include "libtypedef/parser/grammar/TypedefParser.h"
#include "libtypedef/parser/grammar/TypedefParserBaseListener.h"
#include "libtypedef/parser/parser_error_info.h"

namespace td {

const std::string* TypeDeclaration::GetIdentifier() const {
  return id_ctx_->id.get();
}

void StructTypeDeclaration::Set(
    TypedefParser::StructDeclarationContext* st_ctx) {
  st_ctx_ = st_ctx;
  id_ctx_ = st_ctx->identifier();
  fb_ctx_ = st_ctx->fieldBlock();
}

void VariantTypeDeclaration::Set(
    TypedefParser::VariantDeclarationContext* var_ctx) {
  var_ctx_ = var_ctx;
  id_ctx_ = var_ctx->identifier();
  fb_ctx_ = var_ctx->fieldBlock();
}

void VectorTypeDeclaration::Set(
    TypedefParser::VectorDeclarationContext* var_ctx) {
  var_ctx_ = var_ctx;
  id_ctx_ = var_ctx->identifier();
}

void MapTypeDeclaration::Set(TypedefParser::VectorDeclarationContext* var_ctx) {
  var_ctx_ = var_ctx;
  id_ctx_ = var_ctx->identifier();
}

}  // namespace td
