#include "libtypedef/parser/second_pass.h"

#include <set>
#include <stdexcept>

#include "libtypedef/parser/parser_common.h"
#include "libtypedef/parser/tmpl_str_parser.h"

#define throw_logic_error(str) \
  throw std::logic_error(      \
      fmt::format("\"{}\" in {}:{}", str, __FILE__, __LINE__));

namespace td {
#if 0
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
    const std::string* this_id = nullptr;
    antlr4::ParserRuleContext* this_ctx = nullptr;
    if (m->IsType()) {
      this_id = m->type_decl->GetIdentifier();
      this_ctx = m->type_decl->ctx;
    } else if (m->IsField()) {
      this_id = m->field_decl->identifier.get();
      this_ctx = m->field_decl->ctx;
    } else {
      throw_logic_error("Invalid state.");
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
    const std::string* this_id = nullptr;
    antlr4::ParserRuleContext* this_ctx = nullptr;
    if (m->IsType()) {
      this_id = m->type_decl->GetIdentifier();
      this_ctx = m->type_decl->ctx;
    } else if (m->IsField()) {
      this_id = m->field_decl->identifier.get();
      this_ctx = m->field_decl->ctx;
    } else {
      throw_logic_error("Invalid state.");
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
    TypedefParser::VariantDeclarationContext* ctx) {
  std::set<std::string> identifiers;
  for (auto m : ctx->var->members) {
    const std::string* this_id = nullptr;
    antlr4::ParserRuleContext* this_ctx = nullptr;
    if (m->IsType()) {
      this_id = m->type_decl->GetIdentifier();
      this_ctx = m->type_decl->ctx;
    } else if (m->IsField()) {
      this_id = m->field_decl->identifier.get();
      this_ctx = m->field_decl->ctx;
    } else {
      throw_logic_error("Invalid state.");
    }
    if (identifiers.count(*this_id)) {
      errors_list_.emplace_back(
          ErrorFromContext(this_ctx, ParserErrorInfo::DUPLICATE_SYMBOL,
                           "Duplicate symbol found here."));
    }
    identifiers.insert(*this_id);
  }
}

void SecondPassListener::enterInlineVariantDeclaration(
    TypedefParser::InlineVariantDeclarationContext* ctx) {
  std::set<std::string> identifiers;
  for (auto m : ctx->field_decl->var->members) {
    const std::string* this_id = nullptr;
    antlr4::ParserRuleContext* this_ctx = nullptr;
    if (m->IsType()) {
      this_id = m->type_decl->GetIdentifier();
      this_ctx = m->type_decl->ctx;
    } else if (m->IsField()) {
      this_id = m->field_decl->identifier.get();
      this_ctx = m->field_decl->ctx;
    } else {
      throw_logic_error("Invalid state.");
    }
    if (identifiers.count(*this_id)) {
      errors_list_.emplace_back(
          ErrorFromContext(this_ctx, ParserErrorInfo::DUPLICATE_SYMBOL,
                           "Duplicate symbol found here."));
    }
    identifiers.insert(*this_id);
  }
}

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

void SecondPassListener::enterTemplateDefinition(
    TypedefParser::TemplateDefinitionContext* ctx) {
  auto parsedTmplStr = ParseTmplStr(*ctx->tmpl->tmpl_string);
  if (!parsedTmplStr->errors.empty()) {
    antlr4::Token* token = ctx->templateBlock()->getStart();
    int line_offset = 0;
    for (auto& err : parsedTmplStr->errors) {
      errors_list_.emplace_back(
          PEIBuilder()
              .SetType(ParserErrorInfo::TEMPLATE_STRING_PARSE_ERROR)
              .SetMessage(err.message)
              .SetTokenType(antlr4::Token::INVALID_TYPE)
              .SetCharOffset(token->getStartIndex() + err.char_offset)
              .SetLine(token->getLine() + err.line - 1)
              .SetLineOffset(token->getCharPositionInLine() + err.line_offset +
                             line_offset)
              .SetLength(err.length)
              .build());
    }
    return;
  }
  for (td::TmplStrTable::ItemPtr item : parsedTmplStr->table->items) {
    if (item->insertion) {

    } else if (item->function_call) {

    } else if (item->if_block) {

    } else if (item->for_block) {
      
    }
  }


  ctx->tmpl->tmpl_string_table = parsedTmplStr->table;
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
#endif
}  // namespace td