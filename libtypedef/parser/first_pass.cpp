#include "first_pass.h"

#include <charconv>
#include <memory>
#include <set>
#include <stdexcept>

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
      } else if (ReferencesPrimitiveFloatType(
                     ctx->typeAnnotation()->typeIdentifier())) {
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
      } else if (ReferencesPrimitiveIntegerType(
                     ctx->typeAnnotation()->typeIdentifier())) {
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
    auto type_arguments = ctx->typeArgument();
    if (type_arguments.size() != 1) {
      AddError(ctx, ParserErrorInfo::INVALID_TYPE_ARGUMENTS,
               "1 type arguments expected.");
    }
    // TODO check type argument.
  } else if (id_ctx->KW_MAP()) {
    auto type_arguments = ctx->typeArgument();
    if (type_arguments.size() != 2) {
      AddError(ctx, ParserErrorInfo::INVALID_TYPE_ARGUMENTS,
               "2 type argument expected.");
    }
    auto* key_identifier = type_arguments[0]->typeIdentifier();
    if (!ReferencesPrimitiveType(key_identifier)) {
      AddError(type_arguments[0], ParserErrorInfo::TYPE_CONSTRAINT_VIOLATION,
               "Primitive key type expected.");
    } else if (ReferencesPrimitiveFloatType(key_identifier)) {
      AddError(type_arguments[0], ParserErrorInfo::TYPE_CONSTRAINT_VIOLATION,
               "Map key cannot be floating point.");
    }
    // TODO check second type argument.
  }
}

void FirstPassListener::AddError(antlr4::ParserRuleContext* ctx,
                                 ParserErrorInfo::Type type, string msg) {
  errors_list_.push_back(
      PEIBuilder()
          .SetType(type)
          .SetMessage(msg)
          .SetCharOffset(ctx->start->getStartIndex())
          .SetLine(ctx->start->getLine())
          .SetLineOffset(ctx->start->getCharPositionInLine())
          .SetLength(ctx->stop->getStopIndex() - ctx->start->getStartIndex())
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