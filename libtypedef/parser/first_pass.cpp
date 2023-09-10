#include "first_pass.h"

#include <charconv>
#include <memory>
#include <set>
#include <stdexcept>

#define FMT_HEADER_ONLY
#include <fmt/core.h>

using namespace std;

#define throw_logic_error(str) \
  throw std::logic_error(      \
      fmt::format("\"{}\" in {}:{}", str, __FILE__, __LINE__));

#define bail_if_errors()     \
  if (errors_list_.size()) { \
    return;                  \
  }

void FirstPassListener::enterCompilationUnit(
    TypedefParser::CompilationUnitContext* ctx) {
  // Duplicate symbol detection.
  set<string> identifiers;
  for (auto* type_def_ctx : ctx->typeDefinition()) {
    if (identifiers.find(type_def_ctx->type_identifier->id) !=
        identifiers.end()) {
      AddError(type_def_ctx->type_identifier,
               td::ParserErrorInfo::DUPLICATE_SYMBOL);
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
               td::ParserErrorInfo::DUPLICATE_SYMBOL);
    }
    identifiers.insert(type_def_ctx->type_identifier->id);
  }
  for (auto* field_def_ctx : ctx->fieldDefinition()) {
    if (identifiers.find(field_def_ctx->field_identifier->id) !=
        identifiers.end()) {
      AddError(field_def_ctx->field_identifier,
               td::ParserErrorInfo::DUPLICATE_SYMBOL);
    }
    identifiers.insert(field_def_ctx->field_identifier->id);
  }
}

void FirstPassListener::enterFieldDefinition(
    TypedefParser::FieldDefinitionContext* ctx) {}

void FirstPassListener::enterTypeAnnotation(
    TypedefParser::TypeAnnotationContext* ctx) {
  if (ctx->typeIdentifier()->KW_VECTOR()) {
    auto type_arguments = ctx->typeArgument();
    if (type_arguments.size() != 1) {
      AddError(ctx, td::ParserErrorInfo::INVALID_TYPE_ARGUMENTS,
               "1 type arguments expected.");
    }
    // TODO check type argument.
  } else if (ctx->typeIdentifier()->KW_MAP()) {
    auto type_arguments = ctx->typeArgument();
    if (type_arguments.size() != 2) {
      AddError(ctx, td::ParserErrorInfo::INVALID_TYPE_ARGUMENTS,
               "2 type argument expected.");
    }
    if (!type_arguments[0]->typeIdentifier()->primitiveTypeIdentifier()) {
      AddError(type_arguments[0],
               td::ParserErrorInfo::TYPE_CONSTRAINT_VIOLATION,
               "Primitive key type expected.");
    }
    // TODO check second type argument.
  }
}

void FirstPassListener::AddError(antlr4::ParserRuleContext* ctx,
                                 td::ParserErrorInfo::Type type,
                                 std::string msg) {
  errors_list_.push_back(
      td::PEIBuilder()
          .SetType(type)
          .SetMessage(msg)
          .SetCharOffset(ctx->start->getStartIndex())
          .SetLine(ctx->start->getLine())
          .SetLineOffset(ctx->start->getCharPositionInLine())
          .SetLength(ctx->stop->getStopIndex() - ctx->start->getStartIndex())
          .build());
}

void FirstPassListener::AddError(TypedefParser::IdentifierContext* identifier,
                                 td::ParserErrorInfo::Type type) {
  AddError(identifier->nki, type);
}

void FirstPassListener::AddError(antlr4::Token* token,
                                 td::ParserErrorInfo::Type type,
                                 std::string msg) {
  errors_list_.push_back(td::PEIBuilder()
                             .SetType(type)
                             .SetMessage(msg)
                             .SetCharOffset(token->getStartIndex())
                             .SetLine(token->getLine())
                             .SetLineOffset(token->getCharPositionInLine())
                             .SetLength(token->getText().length())
                             .build());
}
