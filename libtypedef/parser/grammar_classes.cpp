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
  return idctx_->id.get();
}

void NamedStructTypeDeclaration::Set(
    TypedefParser::StructDeclarationContext* stctx) {
  stctx_ = stctx;
  idctx_ = stctx->identifier();
  fbctx_ = stctx->fieldBlock();
}

void InlineStructTypeDeclaration::Set(
    TypedefParser::InlineStructDeclarationContext* istctx) {
  istctx_ = istctx;
  fbctx_ = istctx->fieldBlock();
}

void NamedVariantTypeDeclaration::Set(
    TypedefParser::VariantDeclarationContext* varctx) {
  varctx_ = varctx;
  idctx_ = varctx->identifier();
  fbctx_ = varctx->fieldBlock();
}

void InlineVariantTypeDeclaration::Set(
    TypedefParser::InlineVariantDeclarationContext* ivarctx) {
  ivarctx_ = ivarctx;
  fbctx_ = ivarctx->fieldBlock();
}

}  // namespace td
