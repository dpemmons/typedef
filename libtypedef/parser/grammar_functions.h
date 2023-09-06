#ifndef PARSER_GRAMMAR_FUNCTIONS_H__
#define PARSER_GRAMMAR_FUNCTIONS_H__

#include <antlr4/antlr4-runtime.h>

#include <string>

#include "libtypedef/parser/grammar/TypedefParser.h"

namespace td {

std::string ToString(TypedefParser::SymbolPathContext* ctx,
                     const std::string& delimiter = "");

std::string ToString(TypedefParser::ModuleDeclarationContext* ctx,
                     const std::string& delimiter = "") {
  return ToString(ctx->symbolPath(), delimiter);
}

bool DefinesUserType(TypedefParser::TypeDefinitionContext* type);
bool DefinesStruct(TypedefParser::TypeDefinitionContext* type);
bool DefinesVariant(TypedefParser::TypeDefinitionContext* type);

bool DefinesInlineUserType(TypedefParser::FieldDefinitionContext* field);

bool ReferencesUserType(TypedefParser::FieldDefinitionContext* field);
TypedefParser::UserTypeContext* GetReferencedUserType(
    TypedefParser::FieldDefinitionContext* field);

bool ReferencesBuiltinType(TypedefParser::FieldDefinitionContext* field);
bool ReferencesBuiltinVector(TypedefParser::FieldDefinitionContext* field);
bool ReferencesBuiltinMap(TypedefParser::FieldDefinitionContext* field);

bool ReferencesPrimitiveType(TypedefParser::FieldDefinitionContext* field);
TypedefParser::PrimitiveTypeIdentifierContext* GetReferencedPrimitive(
    TypedefParser::FieldDefinitionContext* field);

bool IsBool(TypedefParser::PrimitiveTypeIdentifierContext* ctx);
bool IsChar(TypedefParser::PrimitiveTypeIdentifierContext* ctx);
bool IsStr(TypedefParser::PrimitiveTypeIdentifierContext* ctx);
bool IsF32(TypedefParser::PrimitiveTypeIdentifierContext* ctx);
bool IsF64(TypedefParser::PrimitiveTypeIdentifierContext* ctx);
bool IsU8(TypedefParser::PrimitiveTypeIdentifierContext* ctx);
bool IsU16(TypedefParser::PrimitiveTypeIdentifierContext* ctx);
bool IsU32(TypedefParser::PrimitiveTypeIdentifierContext* ctx);
bool IsU64(TypedefParser::PrimitiveTypeIdentifierContext* ctx);
bool IsI8(TypedefParser::PrimitiveTypeIdentifierContext* ctx);
bool IsI16(TypedefParser::PrimitiveTypeIdentifierContext* ctx);
bool IsI32(TypedefParser::PrimitiveTypeIdentifierContext* ctx);
bool IsI64(TypedefParser::PrimitiveTypeIdentifierContext* ctx);

}  // namespace td

#endif  // PARSER_GRAMMAR_FUNCTIONS_H__
