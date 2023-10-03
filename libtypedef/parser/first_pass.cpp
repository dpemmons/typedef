#include "first_pass.h"

#include <charconv>
#include <memory>
#include <set>
#include <stdexcept>
#include <variant>

#define FMT_HEADER_ONLY
#include <fmt/core.h>
#include <fmt/format.h>

#include "libtypedef/parser/ast_functions.h"
#include "libtypedef/parser/literals.h"
#include "libtypedef/parser/macros.h"

namespace td {

using namespace std;

FirstPassListener::FirstPassListener(std::vector<ParserErrorInfo>& errors_list)
    : BaseListener(errors_list) {
  identifiers_.emplace("IsFirst", &is_first_func_);
  identifiers_.emplace("IsLast", &is_last_func_);
}

void FirstPassListener::enterCompilationUnit(
    TypedefParser::CompilationUnitContext* ctx) {
  for (auto* tctx : ctx->typeDefinition()) {
    if (!identifiers_.try_emplace(tctx->type_identifier->id, tctx).second) {
      AddError(tctx->type_identifier, ParserErrorInfo::DUPLICATE_SYMBOL);
    }
  }
  for (auto* tctx : ctx->tmplDefinition()) {
    if (!identifiers_.try_emplace(tctx->identifier()->id, tctx).second) {
      AddError(tctx->identifier(), ParserErrorInfo::DUPLICATE_SYMBOL);
    }
  }
}

void FirstPassListener::exitCompilationUnit(
    TypedefParser::CompilationUnitContext* ctx) {
  for (auto* tctx : ctx->typeDefinition()) {
    identifiers_.erase(tctx->type_identifier->id);
  }
  for (auto* tctx : ctx->tmplDefinition()) {
    identifiers_.erase(tctx->identifier()->id);
  }
}

void FirstPassListener::enterTypedefVersionDeclaration(
    TypedefParser::TypedefVersionDeclarationContext* ctx) {
  if (ctx->identifier()->id != "alpha") {
    AddError(ctx->identifier(), ParserErrorInfo::INVALID_LANGUAGE_VERSION,
             "Only 'alpha' supported.");
  }
}

void FirstPassListener::enterFieldBlock(TypedefParser::FieldBlockContext* ctx) {
  for (auto* tctx : ctx->typeDefinition()) {
    if (!identifiers_.try_emplace(tctx->type_identifier->id, tctx).second) {
      AddError(tctx->type_identifier, ParserErrorInfo::DUPLICATE_SYMBOL);
    }
  }
  for (auto* fctx : ctx->fieldDefinition()) {
    if (!identifiers_.try_emplace(fctx->field_identifier->id, fctx).second) {
      AddError(fctx->field_identifier, ParserErrorInfo::DUPLICATE_SYMBOL);
    }
  }
}

void FirstPassListener::exitFieldBlock(TypedefParser::FieldBlockContext* ctx) {
  for (auto* tctx : ctx->typeDefinition()) {
    identifiers_.erase(tctx->type_identifier->id);
  }
  for (auto* fctx : ctx->fieldDefinition()) {
    identifiers_.erase(fctx->field_identifier->id);
  }
}

void FirstPassListener::enterFieldDefinition(
    TypedefParser::FieldDefinitionContext* ctx) {
  if (ctx->typeAnnotation() &&
      ctx->typeAnnotation()->typeIdentifier()->primitiveTypeIdentifier()) {
    auto* primitive_type_annotation =
        ctx->typeAnnotation()->typeIdentifier()->primitiveTypeIdentifier();
    if (ctx->primitiveLiteral()) {
      // Ensure the literal is the same type as the annotation.
      if (primitive_type_annotation->KW_BOOL()) {
        if (!ctx->primitiveLiteral()->boolLiteral()) {
          AddError(ctx->primitiveLiteral(), ParserErrorInfo::TYPE_MISMATCH,
                   "boolean expected.");
        }
      } else if (primitive_type_annotation->KW_CHAR()) {
        if (!ctx->primitiveLiteral()->charLiteral()) {
          AddError(ctx->primitiveLiteral(), ParserErrorInfo::TYPE_MISMATCH,
                   "char expected.");
        }
      } else if (primitive_type_annotation->KW_STRING()) {
        if (!ctx->primitiveLiteral()->stringLiteral()) {
          AddError(ctx->primitiveLiteral(), ParserErrorInfo::TYPE_MISMATCH,
                   "str expected.");
        }
      } else if (ReferencesPrimitiveFloatType(ctx->typeAnnotation())) {
        if (!ctx->primitiveLiteral()->floatLiteral()) {
          AddError(ctx->primitiveLiteral(), ParserErrorInfo::TYPE_MISMATCH,
                   "float expected.");
        } else {
          try {
            SetFloatLiteral(
                ctx->primitiveLiteral()->floatLiteral()->float_literal,
                ctx->typeAnnotation()
                    ->typeIdentifier()
                    ->primitiveTypeIdentifier(),
                ctx->primitiveLiteral()->floatLiteral());
          } catch (td::ParserErrorInfo& pei) {
            errors_list_.push_back((pei));
            return;
          }
        }
      } else if (ReferencesPrimitiveIntegerType(ctx->typeAnnotation())) {
        if (!ctx->primitiveLiteral()->integerLiteral()) {
          AddError(ctx->primitiveLiteral(), ParserErrorInfo::TYPE_MISMATCH,
                   "integer expected.");
        } else {
          try {
            SetIntegerLiteral(
                ctx->primitiveLiteral()->integerLiteral()->integer_literal,
                ctx->typeAnnotation()
                    ->typeIdentifier()
                    ->primitiveTypeIdentifier(),
                ctx->primitiveLiteral()->integerLiteral());
          } catch (td::ParserErrorInfo& pei) {
            errors_list_.push_back((pei));
            return;
          }
        }
      } else {
        throw_logic_error("invalid state");
      }
    }
  }
}

void FirstPassListener::enterTypeAnnotation(
    TypedefParser::TypeAnnotationContext* ctx) {
  auto* id_ctx = ctx->typeIdentifier();
  if (id_ctx->KW_VECTOR()) {
    auto type_arguments = ctx->typeAnnotation();
    if (HasTypeArguments(ctx) != 1) {
      AddError(ctx, ParserErrorInfo::INVALID_TYPE_ARGUMENTS,
               "1 type arguments expected.");
    }
  } else if (id_ctx->KW_MAP()) {
    if (HasTypeArguments(ctx) != 2) {
      AddError(ctx, ParserErrorInfo::INVALID_TYPE_ARGUMENTS,
               "2 type argument expected.");
    }
    auto* key_identifier = GetTypeArgument(ctx, 0);
    if (!ReferencesPrimitiveType(key_identifier)) {
      AddError(key_identifier, ParserErrorInfo::TYPE_CONSTRAINT_VIOLATION,
               "Primitive key type expected.");
    } else if (ReferencesPrimitiveFloatType(key_identifier)) {
      AddError(key_identifier, ParserErrorInfo::TYPE_CONSTRAINT_VIOLATION,
               "Map key cannot be floating point.");
    }
  }
}

void FirstPassListener::enterUserType(TypedefParser::UserTypeContext* ctx) {
  auto search = identifiers_.find(ctx->identifier()->id);
  if (search == identifiers_.end()) {
    AddError(ctx, ParserErrorInfo::UNRESOLVED_SYMBOL_REFERENCE);
  } else if (!holds_alternative<TypedefParser::TypeDefinitionContext*>(
                 search->second)) {
    AddError(ctx, ParserErrorInfo::NOT_A_TYPE);
  } else {
    ctx->type_definition =
        get<TypedefParser::TypeDefinitionContext*>(search->second);
  }
}

void FirstPassListener::enterTmplDefinition(
    TypedefParser::TmplDefinitionContext* ctx) {
  for (TypedefParser::FunctionParameterContext* fctx :
       ctx->functionParameter()) {
    if (!identifiers_.emplace(fctx->identifier()->id, fctx).second) {
      AddError(ctx, ParserErrorInfo::DUPLICATE_SYMBOL);
    };
  }
}

void FirstPassListener::exitTmplDefinition(
    TypedefParser::TmplDefinitionContext* ctx) {
  for (TypedefParser::FunctionParameterContext* fctx :
       ctx->functionParameter()) {
    identifiers_.erase(fctx->identifier()->id);
  }
}

void FirstPassListener::enterTmplForBlock(
    TypedefParser::TmplForBlockContext* ctx) {
  for (auto* bvctx : ctx->tmplBindingVariables()->tmplBindingVariable()) {
    if (!identifiers_.try_emplace(bvctx->tmplIdentifier()->id, bvctx).second) {
      AddError(bvctx->tmplIdentifier(), ParserErrorInfo::DUPLICATE_SYMBOL);
    }
  }

  // The tree walker hasn't gotten to the VRP yet, so do it ahead of time.
  // The alternative to calling this here would be a second pass over the
  // tree.
  enterTmplValueReferencePath(ctx->collection);
  if (!ctx->collection->leaf_annotation) {
    return;
  }
  std::vector<TypedefParser::TmplBindingVariableContext*> binding_vars =
      ctx->tmplBindingVariables()->tmplBindingVariable();
  if (ReferencesBuiltinVectorType(ctx->collection->leaf_annotation)) {
    if (binding_vars.size() != 1) {
      AddError(ctx->tmplBindingVariables(),
               ParserErrorInfo::BINDING_VARIABLE_MISMATCH,
               fmt::format("Unexpected number of binding variables for "
                           "'vector'. Got {}, expected 1.",
                           binding_vars.size()));
      return;
    }
    binding_vars[0]->type = GetTypeArgument(ctx->collection->leaf_annotation);
  } else if (ReferencesBuiltinMapType(ctx->collection->leaf_annotation)) {
    if (binding_vars.size() != 2) {
      AddError(ctx->tmplBindingVariables(),
               ParserErrorInfo::BINDING_VARIABLE_MISMATCH,
               fmt::format("Unexpected number of binding variables for "
                           "'vector'. Got {}, expected 2.",
                           binding_vars.size()));
      return;
    }
    binding_vars[0]->type =
        GetTypeArgument(ctx->collection->leaf_annotation, 0);
    binding_vars[1]->type =
        GetTypeArgument(ctx->collection->leaf_annotation, 1);
  } else {
    AddError(ctx->collection, ParserErrorInfo::TYPE_CONSTRAINT_VIOLATION,
             "Must be a collection type.");
  }
}

void FirstPassListener::exitTmplForBlock(
    TypedefParser::TmplForBlockContext* ctx) {
  for (auto* bvctx : ctx->tmplBindingVariables()->tmplBindingVariable()) {
    identifiers_.erase(bvctx->tmplIdentifier()->id);
  }
}

void FirstPassListener::enterTmplFunctionCall(
    TypedefParser::TmplFunctionCallContext* ctx) {
  auto search = identifiers_.find(ctx->tmplIdentifier()->id);
  if (search == identifiers_.end()) {
    AddError(ctx->tmplIdentifier(),
             ParserErrorInfo::UNRESOLVED_SYMBOL_REFERENCE);
    return;
  }
  if (holds_alternative<BuiltinFunction*>(search->second)) {
    ctx->built_in = true;
  } else if (!holds_alternative<TypedefParser::TmplDefinitionContext*>(
                 search->second)) {
    AddError(ctx->tmplIdentifier(), ParserErrorInfo::NOT_A_TEMPLATE_FUNCTION);
  } else {
    ctx->tmpl_def = get<TypedefParser::TmplDefinitionContext*>(search->second);
  }
}

void FirstPassListener::enterTmplValueReferencePath(
    TypedefParser::TmplValueReferencePathContext* ctx) {
  // In some contexts (eg. for blocks) VRP's are pre-computed
  // before the normal tree walker gets to them. Keep track of that
  // so we don't throw the same errors twice.
  if (ctx->first_pass_visited) {
    return;
  }
  ctx->first_pass_visited = true;

  vector<TypedefParser::TmplValueReferenceContext*> path_parts =
      ctx->tmplValueReference();

  // Find the symbol of the base.
  td::FirstPassListener::IdentifierCtx base_identifier_ctx;
  {
    auto search = identifiers_.find(path_parts[0]->tmplIdentifier()->id);
    if (search == identifiers_.end()) {
      AddError(ctx, ParserErrorInfo::UNRESOLVED_SYMBOL_REFERENCE);
      return;
    }
    base_identifier_ctx = search->second;
  }
  TypedefParser::TmplValueReferenceContext* base = path_parts[0];
  TypedefParser::TypeAnnotationContext* base_annotation = nullptr;

  if (holds_alternative<TypedefParser::FunctionParameterContext*>(
          base_identifier_ctx)) {
    auto* func_param =
        get<TypedefParser::FunctionParameterContext*>(base_identifier_ctx);
    base_annotation = func_param->parameter_type;
  } else if (holds_alternative<TypedefParser::TmplBindingVariableContext*>(
                 base_identifier_ctx)) {
    auto* binding_var =
        get<TypedefParser::TmplBindingVariableContext*>(base_identifier_ctx);
    base_annotation = binding_var->type;
  } else {
    AddError(ctx, ParserErrorInfo::NOT_A_VALUE_TYPE,
             "symbol must refer to either a function parameter or binding "
             "variable.");
    return;
  }
  if (!base_annotation) {
    AddError(base, ParserErrorInfo::UNKNOWN_TYPE);
    return;
  }
  if (path_parts.size() == 1) {
    ctx->leaf_annotation = base_annotation;
    ctx->leaf_definition = GetReferencedUserType(base_annotation);
    return;
  }

  TypedefParser::TypeAnnotationContext* type_annotation_previous_field =
      base_annotation;
  TypedefParser::TypeDefinitionContext* type_def_previous_field =
      GetReferencedUserType(base_annotation);
  if (!type_def_previous_field) {
    // Should have already triggered UNRESOLVED_SYMBOL_REFERENCE.
    return;
  }
  for (size_t ii = 1; ii < path_parts.size(); ii++) {
    if ((ii != path_parts.size() - 1) && !type_def_previous_field) {
      AddError(path_parts[ii - 1], ParserErrorInfo::TYPE_CONSTRAINT_VIOLATION,
               "Must be a compisite type (vector or struct).");
      return;
    }

    TypedefParser::TmplValueReferenceContext* part = path_parts[ii];
    TypedefParser::FieldDefinitionContext* field =
        FindField(type_def_previous_field, part->tmplIdentifier()->id);
    if (!field) {
      AddError(part, ParserErrorInfo::FIELD_NOT_FOUND);
      return;
    }
    // if (!HasTypeAnnotation(field)) {
    //   // TODO handle inline types!
    //   AddError(part, ParserErrorInfo::TYPE_CONSTRAINT_VIOLATION,
    //            "Type expcted.");
    //   return;
    // }
    if (ReferencesUserType(field)) {
      type_annotation_previous_field = nullptr;
      type_def_previous_field = GetReferencedUserType(field);
    } else if (HasTypeDefinition(field)) {
      type_annotation_previous_field = nullptr;
      type_def_previous_field = GetTypeDefinition(field);
    } else {
      type_annotation_previous_field = GetTypeAnnotation(field);
      type_def_previous_field = nullptr;
    }
    if (ii == path_parts.size() - 1) {
      ctx->leaf_annotation = type_annotation_previous_field;
      ctx->leaf_definition = type_def_previous_field;
    }
  }
}

}  // namespace td