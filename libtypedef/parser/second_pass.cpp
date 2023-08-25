#include "libtypedef/parser/second_pass.h"

#include "libtypedef/parser/parser_common.h"
#include "second_pass.h"

namespace td {

std::shared_ptr<table::TypeDeclaration> SecondPassListener::FindSymbol(
    const std::string& identifier, antlr4::tree::ParseTree* ctx) {
  TypedefParser::CompilationUnitContext* maybe_compilation_unit_ctx =
      dynamic_cast<TypedefParser::CompilationUnitContext*>(ctx);
  TypedefParser::StructDeclarationContext* maybe_struct_ctx =
      dynamic_cast<TypedefParser::StructDeclarationContext*>(ctx);
  TypedefParser::VariantDeclarationContext* maybe_variant_ctx =
      dynamic_cast<TypedefParser::VariantDeclarationContext*>(ctx);
  TypedefParser::InlineStructDeclarationContext* maybe_inline_struct_ctx =
      dynamic_cast<TypedefParser::InlineStructDeclarationContext*>(ctx);
  TypedefParser::InlineVariantDeclarationContext* maybe_inline_variant_ctx =
      dynamic_cast<TypedefParser::InlineVariantDeclarationContext*>(ctx);

  std::shared_ptr<table::TypeDeclaration> ret;

  if (maybe_compilation_unit_ctx) {
    return maybe_compilation_unit_ctx->mod->Get(identifier);
  } else if (maybe_struct_ctx) {
    ret = maybe_struct_ctx->st->GetType(identifier);
  } else if (maybe_variant_ctx) {
    ret = maybe_variant_ctx->var->GetType(identifier);
  } else if (maybe_inline_struct_ctx) {
    ret = maybe_inline_struct_ctx->field_decl->GetStruct()->GetType(identifier);
  } else if (maybe_inline_variant_ctx) {
    ret =
        maybe_inline_variant_ctx->field_decl->GetStruct()->GetType(identifier);
  }
  return ret ? ret : FindSymbol(identifier, ctx->parent);
}

void SecondPassListener::enterSymrefMemberDeclaration(
    TypedefParser::SymrefMemberDeclarationContext* ctx) {
  ctx->field_decl->symref_target =
      FindSymbol(*ctx->field_decl->symrmef_identifier, ctx);
  if (!ctx->field_decl->symref_target) {
    errors_list_.emplace_back(
        ErrorFromContext(ctx, ParserErrorInfo::UNRESOLVED_SYMBOL_REFERENCE,
                         "Unresolved symbol reference."));
  }
}

}  // namespace td