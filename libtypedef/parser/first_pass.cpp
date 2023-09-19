#include "first_pass.h"

#include <charconv>
#include <memory>
#include <set>
#include <stdexcept>
#include <variant>

#define FMT_HEADER_ONLY
#include <fmt/core.h>

#include "libtypedef/parser/grammar_functions.h"
#include "libtypedef/parser/literals.h"

#define throw_logic_error(str) \
  throw std::logic_error(      \
      fmt::format("\"{}\" in {}:{}", str, __FILE__, __LINE__));

#define bail_if_errors()     \
  if (errors_list_.size()) { \
    return;                  \
  }

namespace td {

using namespace std;

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
          SetFloatLiteral(
              ctx->primitiveLiteral()->floatLiteral()->float_literal,
              ctx->typeAnnotation()
                  ->typeIdentifier()
                  ->primitiveTypeIdentifier(),
              ctx->primitiveLiteral()->floatLiteral());
        }
      } else if (ReferencesPrimitiveIntegerType(ctx->typeAnnotation())) {
        if (!ctx->primitiveLiteral()->integerLiteral()) {
          AddError(ctx->primitiveLiteral(), ParserErrorInfo::TYPE_MISMATCH,
                   "integer expected.");
        } else {
          SetIntegerLiteral(
              ctx->primitiveLiteral()->integerLiteral()->integer_literal,
              ctx->typeAnnotation()
                  ->typeIdentifier()
                  ->primitiveTypeIdentifier(),
              ctx->primitiveLiteral()->integerLiteral());
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
  // TODO: NEXT UP!
  // Ensure collection symbol points at a map or vector, and that
  // the correct number of binding variables are used.
  for (auto* bvctx : ctx->tmplBindingVariable()) {
    if (!identifiers_.try_emplace(bvctx->tmplIdentifier()->id, bvctx).second) {
      AddError(bvctx->tmplIdentifier(), ParserErrorInfo::DUPLICATE_SYMBOL);
    }
  }
}

void FirstPassListener::exitTmplForBlock(
    TypedefParser::TmplForBlockContext* ctx) {
  for (auto* bvctx : ctx->tmplBindingVariable()) {
    identifiers_.erase(bvctx->tmplIdentifier()->id);
  }
}

void FirstPassListener::enterTmplFunctionCall(
    TypedefParser::TmplFunctionCallContext* ctx) {
  auto search = identifiers_.find(ctx->tmplIdentifier()->id);
  if (search == identifiers_.end()) {
    AddError(ctx->tmplIdentifier(),
             ParserErrorInfo::UNRESOLVED_SYMBOL_REFERENCE);
  } else if (!holds_alternative<TypedefParser::TmplDefinitionContext*>(
                 search->second)) {
    AddError(ctx->tmplIdentifier(), ParserErrorInfo::NOT_A_TEMPLATE_FUNCTION);
  }
}

void FirstPassListener::exitTmplFunctionCall(
    TypedefParser::TmplFunctionCallContext* ctx) {}

void FirstPassListener::enterTmplValueReferencePath(
    TypedefParser::TmplValueReferencePathContext* ctx) {
  vector<TypedefParser::TmplValueReferenceContext*> path_parts =
      ctx->tmplValueReference();

  // Find the symbol of the base.
  auto search = identifiers_.find(path_parts[0]->tmplIdentifier()->id);
  if (search == identifiers_.end()) {
    AddError(ctx, ParserErrorInfo::UNRESOLVED_SYMBOL_REFERENCE);
    return;
  }
  TypedefParser::TmplValueReferenceContext* base = path_parts[0];

  if (holds_alternative<TypedefParser::FunctionParameterContext*>(
          search->second)) {
    auto* func_param =
        get<TypedefParser::FunctionParameterContext*>(search->second);
    ctx->base_referenced_ctx = func_param->parameter_type;
  } else if (holds_alternative<TypedefParser::TmplBindingVariableContext*>(
                 search->second)) {
    // auto* binding_var =
    //     get<TypedefParser::TmplBindingVariableContext*>(search->second);
    // base->idctx = binding_var;
    AddError(base, ParserErrorInfo::UNIMPLEMENTED,
             "resolving binding variables not yet supported");
    return;
  } else {
    AddError(ctx, ParserErrorInfo::NOT_A_VALUE_TYPE,
             "symbol must refer to either a function parameter or binding "
             "variable.");
    return;
  }

  if (path_parts.size() == 1) {
    if (!ReferencesPrimitiveType(ctx->base_referenced_ctx)) {
      AddError(path_parts[0], ParserErrorInfo::TYPE_CONSTRAINT_VIOLATION,
               "Must be a printable type (eg. strings, integers, etc.)");
    }
    return;
  }

  TypedefParser::TypeDefinitionContext* type_def_previous_field =
      GetReferencedUserType(ctx->base_referenced_ctx);
  for (size_t ii = 1; ii < path_parts.size(); ii++) {
    TypedefParser::TmplValueReferenceContext* part = path_parts[ii];
    TypedefParser::FieldDefinitionContext* field =
        FindField(type_def_previous_field, part->tmplIdentifier()->id);
    if (!field) {
      AddError(part, ParserErrorInfo::FIELD_NOT_FOUND);
    }
    if (ii == path_parts.size() - 1) {
      if (!ReferencesPrimitiveType(field)) {
        AddError(part, ParserErrorInfo::TYPE_CONSTRAINT_VIOLATION,
                 "Must be a printable type (eg. strings, integers, etc.)");
      }
    } else {
      if (!ReferencesUserType(field)) {
        AddError(part, ParserErrorInfo::TYPE_CONSTRAINT_VIOLATION,
                 "Does not reference a struct or variant.");
      } else {
        type_def_previous_field = GetReferencedUserType(field);
      }
    }
  }
}

void FirstPassListener::AddError(antlr4::ParserRuleContext* ctx,
                                 ParserErrorInfo::Type type, string msg) {
  errors_list_.push_back(PEIBuilder()
                             .SetType(type)
                             .SetMessage(msg)
                             .SetCharOffset(ctx->start->getStartIndex())
                             .SetLine(ctx->start->getLine())
                             .SetLineOffset(ctx->start->getCharPositionInLine())
                             .SetLength(ctx->stop->getStopIndex() -
                                        ctx->start->getStartIndex() + 1)
                             .build());
}

void FirstPassListener::AddError(TypedefParser::IdentifierContext* identifier,
                                 ParserErrorInfo::Type type) {
  AddError(identifier->nki, type);
}

void FirstPassListener::AddError(antlr4::Token* token,
                                 ParserErrorInfo::Type type, string msg) {
  errors_list_.push_back(PEIBuilder()
                             .SetType(type)
                             .SetMessage(msg)
                             .SetCharOffset(token->getStartIndex())
                             .SetLine(token->getLine())
                             .SetLineOffset(token->getCharPositionInLine())
                             .SetLength(token->getText().length())
                             .build());
}

}  // namespace td