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
  type_contexts_.push_back(ctx);
  // Duplicate symbol detection.
  set<string> identifiers;
  for (auto* type_def_ctx : ctx->typeDefinition()) {
    if (identifiers.find(type_def_ctx->type_identifier->id) !=
        identifiers.end()) {
      AddError(type_def_ctx->type_identifier,
               ParserErrorInfo::DUPLICATE_SYMBOL);
    }
    identifiers.insert(type_def_ctx->type_identifier->id);
  }
}

void FirstPassListener::enterTypeDefinition(
    TypedefParser::TypeDefinitionContext* ctx) {}

void FirstPassListener::enterFieldBlock(TypedefParser::FieldBlockContext* ctx) {
  // Duplicate symbol detection.
  type_contexts_.push_back(ctx);
  set<string> identifiers;
  for (auto* type_def_ctx : ctx->typeDefinition()) {
    if (identifiers.find(type_def_ctx->type_identifier->id) !=
        identifiers.end()) {
      AddError(type_def_ctx->type_identifier,
               ParserErrorInfo::DUPLICATE_SYMBOL);
    }
    identifiers.insert(type_def_ctx->type_identifier->id);
  }
  for (auto* field_def_ctx : ctx->fieldDefinition()) {
    if (identifiers.find(field_def_ctx->field_identifier->id) !=
        identifiers.end()) {
      AddError(field_def_ctx->field_identifier,
               ParserErrorInfo::DUPLICATE_SYMBOL);
    }
    identifiers.insert(field_def_ctx->field_identifier->id);
  }
}

void FirstPassListener::exitFieldBlock(TypedefParser::FieldBlockContext* ctx) {
  type_contexts_.pop_back();
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
    // TODO check type argument.
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
    // TODO check second type argument.
  }
}

void FirstPassListener::enterUserType(TypedefParser::UserTypeContext* ctx) {
  ctx->type_definition =
      FindSymbolInTypeStack(type_contexts_.size() - 1, &ctx->identifier()->id);
  if (!ctx->type_definition) {
    AddError(ctx, ParserErrorInfo::UNRESOLVED_SYMBOL_REFERENCE);
  }
}

void FirstPassListener::enterTmplDefinition(
    TypedefParser::TmplDefinitionContext* ctx) {
  template_type_contexts_.push_back(ctx);
}

void FirstPassListener::exitTmplDefinition(
    TypedefParser::TmplDefinitionContext* ctx) {
  template_type_contexts_.pop_back();
}

void FirstPassListener::enterTmplIfBlock(
    TypedefParser::TmplIfBlockContext* ctx) {
  template_type_contexts_.push_back(ctx);
}

void FirstPassListener::exitTmplIfBlock(
    TypedefParser::TmplIfBlockContext* ctx) {
  template_type_contexts_.pop_back();
}

void FirstPassListener::enterTmplElifBlock(
    TypedefParser::TmplElifBlockContext* ctx) {
  template_type_contexts_.push_back(ctx);
}

void FirstPassListener::exitTmplElifBlock(
    TypedefParser::TmplElifBlockContext* ctx) {
  template_type_contexts_.pop_back();
}

void FirstPassListener::enterTmplFor(TypedefParser::TmplForContext* ctx) {
  template_type_contexts_.push_back(ctx);
}

void FirstPassListener::exitTmplFor(TypedefParser::TmplForContext* ctx) {
  template_type_contexts_.pop_back();
}

void FirstPassListener::enterTmplValueReferencePath(
    TypedefParser::TmplValueReferencePathContext* ctx) {
  //  Walk up template_type_contexts_ to find the identifier.

  std::vector<TypedefParser::TmplValueReferenceContext*> path =
      ctx->tmplValueReference();

  TemplateIdentifier id = FindSymbolInTemplateTypeStack(
      template_type_contexts_.size() - 1, &path[0]->tmplIdentifier()->id);
  if (holds_alternative<std::monostate>(id)) {
    AddError(ctx, ParserErrorInfo::UNRESOLVED_SYMBOL_REFERENCE);
  }
}

TypedefParser::TypeDefinitionContext* FirstPassListener::FindSymbolInTypeStack(
    size_t current_idx, const string* identifier) {
  TypedefParser::TypeDefinitionContext* found_typedef = nullptr;

  TypeContext& curr_context = type_contexts_[current_idx];

  if (holds_alternative<TypedefParser::CompilationUnitContext*>(curr_context)) {
    found_typedef = FindType(
        get<TypedefParser::CompilationUnitContext*>(curr_context), *identifier);
  } else if (holds_alternative<TypedefParser::FieldBlockContext*>(
                 curr_context)) {
    found_typedef = FindType(
        get<TypedefParser::FieldBlockContext*>(curr_context), *identifier);
  } else {
    throw_logic_error("unhandled type contest");
  }

  if (current_idx > 0 && !found_typedef) {
    found_typedef = FindSymbolInTypeStack(current_idx - 1, identifier);
  }
  return found_typedef;
}

FirstPassListener::TemplateIdentifier
FirstPassListener::FindSymbolInTemplateTypeStack(
    size_t current_idx, const std::string* identifier) {
  TemplateIdentifier id;

  TemplateTypeContext& curr_context = template_type_contexts_[current_idx];

  //  TODO fill these in....
  if (holds_alternative<TypedefParser::TmplDefinitionContext*>(curr_context)) {
  } else if (holds_alternative<TypedefParser::TmplIfBlockContext*>(
                 curr_context)) {
  } else if (holds_alternative<TypedefParser::TmplElifBlockContext*>(
                 curr_context)) {
  } else if (holds_alternative<TypedefParser::TmplForContext*>(curr_context)) {
  } else {
    throw_logic_error("unhandled type contest");
  }

  if (current_idx > 0 && holds_alternative<std::monostate>(id)) {
    id = FindSymbolInTemplateTypeStack(current_idx - 1, identifier);
  }
  return id;
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