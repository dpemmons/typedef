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

bool HasTypeAnnotation(TypedefParser::FieldDefinitionContext* ctx);
TypedefParser::TypeAnnotationContext* GetTypeAnnotation(
    TypedefParser::FieldDefinitionContext* ctx);
bool HasTypeDefinition(TypedefParser::FieldDefinitionContext* ctx);
TypedefParser::TypeDefinitionContext* GetTypeDefinition(
    TypedefParser::FieldDefinitionContext* ctx);

bool ReferencesBuiltinType(TypedefParser::TypeAnnotationContext* ctx);
bool ReferencesBuiltinType(TypedefParser::TypeIdentifierContext* ctx);
bool ReferencesBuiltinVectorType(TypedefParser::TypeAnnotationContext* ctx);
bool ReferencesBuiltinVectorType(TypedefParser::TypeIdentifierContext* ctx);
bool ReferencesBuiltinMapType(TypedefParser::TypeAnnotationContext* ctx);
bool ReferencesBuiltinMapType(TypedefParser::TypeIdentifierContext* ctx);

bool ReferencesPrimitiveType(TypedefParser::TypeAnnotationContext* ctx);
bool ReferencesPrimitiveType(TypedefParser::TypeIdentifierContext* ctx);
bool ReferencesPrimitiveFloatType(TypedefParser::TypeIdentifierContext* ctx);
bool ReferencesPrimitiveIntegerType(TypedefParser::TypeIdentifierContext* ctx);
TypedefParser::PrimitiveTypeIdentifierContext* GetReferencedPrimitiveIdentifier(
    TypedefParser::TypeAnnotationContext* ctx);

bool ReferencesPrimitiveType(TypedefParser::FieldDefinitionContext* ctx);
TypedefParser::PrimitiveTypeIdentifierContext* GetReferencedPrimitiveIdentifier(
    TypedefParser::FieldDefinitionContext* ctx);
TypedefParser::PrimitiveLiteralContext* GetPrimitiveLiteral(
    TypedefParser::FieldDefinitionContext* ctx);

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

bool IsBoolLiteral(TypedefParser::PrimitiveLiteralContext* ctx);
bool IsCharLiteral(TypedefParser::PrimitiveLiteralContext* ctx);
bool IsStrLiteral(TypedefParser::PrimitiveLiteralContext* ctx);
bool IsF32Literal(TypedefParser::PrimitiveLiteralContext* ctx);
bool IsF64Literal(TypedefParser::PrimitiveLiteralContext* ctx);
bool IsU8Literal(TypedefParser::PrimitiveLiteralContext* ctx);
bool IsU16Literal(TypedefParser::PrimitiveLiteralContext* ctx);
bool IsU32Literal(TypedefParser::PrimitiveLiteralContext* ctx);
bool IsU64Literal(TypedefParser::PrimitiveLiteralContext* ctx);
bool IsI8Literal(TypedefParser::PrimitiveLiteralContext* ctx);
bool IsI16Literal(TypedefParser::PrimitiveLiteralContext* ctx);
bool IsI32Literal(TypedefParser::PrimitiveLiteralContext* ctx);
bool IsI64Literal(TypedefParser::PrimitiveLiteralContext* ctx);

bool GetBool(TypedefParser::PrimitiveLiteralContext* ctx);
bool GetBool(TypedefParser::FieldDefinitionContext* ctx);
char32_t GetChar(TypedefParser::PrimitiveLiteralContext* ctx);
char32_t GetChar(TypedefParser::FieldDefinitionContext* ctx);
std::string* GetStr(TypedefParser::PrimitiveLiteralContext* ctx);
std::string* GetStr(TypedefParser::FieldDefinitionContext* ctx);
float GetF32(TypedefParser::PrimitiveLiteralContext* ctx);
float GetF32(TypedefParser::FieldDefinitionContext* ctx);
double GetF64(TypedefParser::PrimitiveLiteralContext* ctx);
double GetF64(TypedefParser::FieldDefinitionContext* ctx);
uint8_t GetU8(TypedefParser::PrimitiveLiteralContext* ctx);
uint8_t GetU8(TypedefParser::FieldDefinitionContext* ctx);
uint16_t GetU16(TypedefParser::PrimitiveLiteralContext* ctx);
uint16_t GetU16(TypedefParser::FieldDefinitionContext* ctx);
uint32_t GetU32(TypedefParser::PrimitiveLiteralContext* ctx);
uint32_t GetU32(TypedefParser::FieldDefinitionContext* ctx);
uint64_t GetU64(TypedefParser::PrimitiveLiteralContext* ctx);
uint64_t GetU64(TypedefParser::FieldDefinitionContext* ctx);
int8_t GetI8(TypedefParser::PrimitiveLiteralContext* ctx);
int8_t GetI8(TypedefParser::FieldDefinitionContext* ctx);
int16_t GetI16(TypedefParser::PrimitiveLiteralContext* ctx);
int16_t GetI16(TypedefParser::FieldDefinitionContext* ctx);
int32_t GetI32(TypedefParser::PrimitiveLiteralContext* ctx);
int32_t GetI32(TypedefParser::FieldDefinitionContext* ctx);
int64_t GetI64(TypedefParser::PrimitiveLiteralContext* ctx);
int64_t GetI64(TypedefParser::FieldDefinitionContext* ctx);

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