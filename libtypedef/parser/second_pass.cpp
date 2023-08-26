#include "libtypedef/parser/second_pass.h"

#include <set>

#include "libtypedef/parser/parser_common.h"
#include "second_pass.h"

#define throw_line(str) \
  throw fmt::format("Exception \"{}\" in {}:{}", str, __FILE__, __LINE__);

namespace td {

void SecondPassListener::enterCompilationUnit(
    TypedefParser::CompilationUnitContext* ctx) {
  std::set<std::string> identifiers;
  for (auto t : ctx->mod->types) {
    if (identifiers.count(*t->GetIdentifier())) {
      // TODO duplicate symbol errors should refernce both
      // symbols.
      errors_list_.emplace_back(
          ErrorFromContext(t->ctx, ParserErrorInfo::DUPLICATE_SYMBOL,
                           "Duplicate symbol found here."));
    }
    identifiers.insert(*t->GetIdentifier());
  }
}

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

void SecondPassListener::enterStructDeclaration(
    TypedefParser::StructDeclarationContext* ctx) {
  std::set<std::string> identifiers;
  for (auto m : ctx->st->members) {
    std::string* this_id = nullptr;
    antlr4::ParserRuleContext* this_ctx = nullptr;
    if (m->IsType()) {
      this_id = m->type_decl->GetIdentifier();
      this_ctx = m->type_decl->ctx;
    } else if (m->IsField()) {
      this_id = m->field_decl->identifier.get();
      this_ctx = m->field_decl->ctx;
    } else {
      throw_line("Invalid state.");
    }
    if (identifiers.count(*this_id)) {
      errors_list_.emplace_back(
          ErrorFromContext(this_ctx, ParserErrorInfo::DUPLICATE_SYMBOL,
                           "Duplicate symbol found here."));
    }
    identifiers.insert(*this_id);
  }
}

void SecondPassListener::enterInlineStructDeclaration(
    TypedefParser::InlineStructDeclarationContext* ctx) {

  std::set<std::string> identifiers;
  for (auto m : ctx->field_decl->st->members) {
    std::string* this_id = nullptr;
    antlr4::ParserRuleContext* this_ctx = nullptr;
    if (m->IsType()) {
      this_id = m->type_decl->GetIdentifier();
      this_ctx = m->type_decl->ctx;
    } else if (m->IsField()) {
      this_id = m->field_decl->identifier.get();
      this_ctx = m->field_decl->ctx;
    } else {
      throw_line("Invalid state.");
    }
    if (identifiers.count(*this_id)) {
      errors_list_.emplace_back(
          ErrorFromContext(this_ctx, ParserErrorInfo::DUPLICATE_SYMBOL,
                           "Duplicate symbol found here."));
    }
    identifiers.insert(*this_id);
  }

}

void SecondPassListener::enterVariantDeclaration(
    TypedefParser::VariantDeclarationContext* ctx) {}

void SecondPassListener::enterInlineVariantDeclaration(
    TypedefParser::InlineVariantDeclarationContext* ctx) {}

void SecondPassListener::enterMapDeclaration(
    TypedefParser::MapDeclarationContext* ctx) {
  if (!ctx->map->key_type->IsTriviallyComparable()) {
    errors_list_.emplace_back(
        ErrorFromContext(ctx, ParserErrorInfo::TYPE_CONSTRAINT_VIOLATION,
                         "Only trivially comparable types supported here."));
  }
}

void SecondPassListener::enterInlineMapDeclaration(
    TypedefParser::InlineMapDeclarationContext* ctx) {
  if (!ctx->field_decl->map->key_type->IsTriviallyComparable()) {
    errors_list_.emplace_back(
        ErrorFromContext(ctx, ParserErrorInfo::TYPE_CONSTRAINT_VIOLATION,
                         "Only trivially comparable types supported here."));
  }
}

void SecondPassListener::enterTypeParameter(
    TypedefParser::TypeParameterContext* ctx) {
  if (ctx->identifier()) {
    // start searching at the parent, since matching the parent
    // itself would be invalid.
    ctx->type_param->symref_target =
        FindSymbol(*ctx->type_param->symrmef_identifier, ctx->parent);
    if (!ctx->type_param->symref_target) {
      errors_list_.emplace_back(
          ErrorFromContext(ctx, ParserErrorInfo::UNRESOLVED_SYMBOL_REFERENCE,
                           "Unresolved symbol reference."));
    }
  }
}

}  // namespace td