#ifndef PARSER_GRAMMAR_FUNCTIONS_H__
#define PARSER_GRAMMAR_FUNCTIONS_H__

#include <antlr4/antlr4-runtime.h>

#include <string>

#include "libtypedef/parser/grammar/TypedefParser.h"

namespace td {

std::string ToString(TypedefParser::SymbolPathContext* ctx,
                     const std::string& delimiter = "::");

std::string ToString(TypedefParser::ModuleDeclarationContext* ctx,
                     const std::string& delimiter = "::");

bool DefinesUserType(TypedefParser::TypeDefinitionContext* type);
bool DefinesStruct(TypedefParser::TypeDefinitionContext* type);
bool DefinesVariant(TypedefParser::TypeDefinitionContext* type);

bool DefinesAndUsesInlineUserType(TypedefParser::FieldDefinitionContext* field);

bool ReferencesUserType(TypedefParser::TypeIdentifierContext* ctx);
TypedefParser::UserTypeContext* GetReferencedUserType(
    TypedefParser::TypeIdentifierContext* ctx);

bool ReferencesBuiltinType(TypedefParser::TypeAnnotationContext* ctx);
bool ReferencesBuiltinType(TypedefParser::TypeIdentifierContext* ctx);
bool ReferencesBuiltinVectorType(TypedefParser::TypeAnnotationContext* ctx);
bool ReferencesBuiltinVectorType(TypedefParser::TypeIdentifierContext* ctx);
bool ReferencesBuiltinMapType(TypedefParser::TypeAnnotationContext* ctx);
bool ReferencesBuiltinMapType(TypedefParser::TypeIdentifierContext* ctx);

bool ReferencesPrimitiveType(TypedefParser::TypeAnnotationContext* ctx);
bool ReferencesPrimitiveType(TypedefParser::TypeIdentifierContext* ctx);
TypedefParser::PrimitiveTypeIdentifierContext* GetReferencedPrimitive(
    TypedefParser::TypeAnnotationContext* ctx);
bool IsBool(TypedefParser::PrimitiveTypeIdentifierContext* ctx);
bool IsBool(TypedefParser::FieldDefinitionContext* ctx);
bool IsChar(TypedefParser::PrimitiveTypeIdentifierContext* ctx);
bool IsChar(TypedefParser::FieldDefinitionContext* ctx);
bool IsStr(TypedefParser::PrimitiveTypeIdentifierContext* ctx);
bool IsStr(TypedefParser::FieldDefinitionContext* ctx);
bool IsF32(TypedefParser::PrimitiveTypeIdentifierContext* ctx);
bool IsF32(TypedefParser::FieldDefinitionContext* ctx);
bool IsF64(TypedefParser::PrimitiveTypeIdentifierContext* ctx);
bool IsF64(TypedefParser::FieldDefinitionContext* ctx);
bool IsU8(TypedefParser::PrimitiveTypeIdentifierContext* ctx);
bool IsU8(TypedefParser::FieldDefinitionContext* ctx);
bool IsU16(TypedefParser::PrimitiveTypeIdentifierContext* ctx);
bool IsU16(TypedefParser::FieldDefinitionContext* ctx);
bool IsU32(TypedefParser::PrimitiveTypeIdentifierContext* ctx);
bool IsU32(TypedefParser::FieldDefinitionContext* ctx);
bool IsU64(TypedefParser::PrimitiveTypeIdentifierContext* ctx);
bool IsU64(TypedefParser::FieldDefinitionContext* ctx);
bool IsI8(TypedefParser::PrimitiveTypeIdentifierContext* ctx);
bool IsI8(TypedefParser::FieldDefinitionContext* ctx);
bool IsI16(TypedefParser::PrimitiveTypeIdentifierContext* ctx);
bool IsI16(TypedefParser::FieldDefinitionContext* ctx);
bool IsI32(TypedefParser::PrimitiveTypeIdentifierContext* ctx);
bool IsI32(TypedefParser::FieldDefinitionContext* ctx);
bool IsI64(TypedefParser::PrimitiveTypeIdentifierContext* ctx);
bool IsI64(TypedefParser::FieldDefinitionContext* ctx);

// Returns nullptr if there isn't one.
TypedefParser::TypeDefinitionContext* FindType(
    TypedefParser::CompilationUnitContext* cu_ctx,
    const std::string& identifier);

// Returns nullptr if there isn't one.
TypedefParser::TypeDefinitionContext* FindType(
    TypedefParser::TypeDefinitionContext* td_ctx,
    const std::string& identifier);

// Returns nullptr if there isn't one.
TypedefParser::FieldDefinitionContext* FindField(
    TypedefParser::TypeDefinitionContext* td_ctx,
    const std::string& identifier);

}  // namespace td

#endif  // PARSER_GRAMMAR_FUNCTIONS_H__
