#ifndef PARSER_AST_FUNCTIONS_H__
#define PARSER_AST_FUNCTIONS_H__

#include <antlr4/antlr4-runtime.h>

#include <filesystem>
#include <optional>
#include <string>

#include "libtypedef/parser/grammar/TypedefParser.h"

namespace td {

std::string ToString(TypedefParser::SymbolPathContext* ctx,
                     const std::string& delimiter = "::");

std::string ToString(TypedefParser::ModuleDeclarationContext* ctx,
                     const std::string& delimiter = "::");

std::filesystem::path ToPath(TypedefParser::ModuleDeclarationContext* ctx);

bool DefinesUserType(TypedefParser::TypeDefinitionContext* type);
bool DefinesStruct(TypedefParser::TypeDefinitionContext* type);
bool DefinesVariant(TypedefParser::TypeDefinitionContext* type);

bool DefinesAndUsesInlineUserType(TypedefParser::FieldDefinitionContext* field);
TypedefParser::TypeDefinitionContext* GetInlineUserType(
    TypedefParser::FieldDefinitionContext* ctx);

bool ReferencesUserType(TypedefParser::FieldDefinitionContext* ctx);
bool ReferencesUserType(TypedefParser::TypeAnnotationContext* ctx);
TypedefParser::TypeDefinitionContext* GetReferencedUserType(
    TypedefParser::FieldDefinitionContext* ctx);
TypedefParser::TypeDefinitionContext* GetReferencedUserType(
    TypedefParser::TypeAnnotationContext* ctx);

bool HasTypeAnnotation(TypedefParser::FieldDefinitionContext* ctx);
TypedefParser::TypeAnnotationContext* GetTypeAnnotation(
    TypedefParser::FieldDefinitionContext* ctx);
bool HasTypeDefinition(TypedefParser::FieldDefinitionContext* ctx);
TypedefParser::TypeDefinitionContext* GetTypeDefinition(
    TypedefParser::FieldDefinitionContext* ctx);
bool IsRequired(TypedefParser::FieldDefinitionContext* ctx);

// nullopt values indicate anonymous namespaces.
std::vector<std::optional<std::string>> GetFQN(
    TypedefParser::TypeDefinitionContext* type);
bool HasIdentifier(TypedefParser::TypeDefinitionContext* type);
const std::string& GetIdentifier(TypedefParser::TypeDefinitionContext* type);
// If it's anonymous, but we can retrieve the field's identifier
bool HasFieldIdentifier(TypedefParser::TypeDefinitionContext* type);
const std::string& GetFieldIdentifier(
    TypedefParser::TypeDefinitionContext* type);

// Returns nullptr if the IdentifierCtx doesn't contain a
// CompilationUnitContext*
TypedefParser::CompilationUnitContext* GetCompilationUnitContext(
    TypedefParser::IdentifierCtx& idctx);
TypedefParser::TypeDefinitionContext* GetTypeDefinition(
    TypedefParser::IdentifierCtx& idctx);
TypedefParser::FieldDefinitionContext* GetFieldDefinition(
    TypedefParser::IdentifierCtx& idctx);

size_t HasTypeArguments(TypedefParser::TypeAnnotationContext* ctx);
TypedefParser::TypeAnnotationContext* GetTypeArgument(
    TypedefParser::TypeAnnotationContext* ctx, size_t ii = 0);

bool ReferencesBuiltinType(TypedefParser::TypeAnnotationContext* ctx);
bool ReferencesBuiltinVectorType(TypedefParser::TypeAnnotationContext* ctx);
bool ReferencesBuiltinMapType(TypedefParser::TypeAnnotationContext* ctx);

bool ReferencesPrimitiveType(TypedefParser::TypeAnnotationContext* ctx);
bool ReferencesPrimitiveFloatType(TypedefParser::TypeAnnotationContext* ctx);
bool ReferencesPrimitiveIntegerType(TypedefParser::TypeAnnotationContext* ctx);
bool ReferencesPrimitiveStringType(TypedefParser::TypeAnnotationContext* ctx);
TypedefParser::PrimitiveTypeIdentifierContext* GetReferencedPrimitiveIdentifier(
    TypedefParser::TypeAnnotationContext* ctx);

bool ReferencesTruthyType(TypedefParser::TypeAnnotationContext* ctx);

bool ReferencesPrimitiveType(TypedefParser::FieldDefinitionContext* ctx);
TypedefParser::PrimitiveTypeIdentifierContext* GetReferencedPrimitiveIdentifier(
    TypedefParser::FieldDefinitionContext* ctx);
TypedefParser::PrimitiveLiteralContext* GetPrimitiveLiteral(
    TypedefParser::FieldDefinitionContext* ctx);

bool IsBool(TypedefParser::TypeAnnotationContext* ctx);
bool IsBool(TypedefParser::FieldDefinitionContext* ctx);
bool IsChar(TypedefParser::TypeAnnotationContext* ctx);
bool IsChar(TypedefParser::FieldDefinitionContext* ctx);
bool IsStr(TypedefParser::TypeAnnotationContext* ctx);
bool IsStr(TypedefParser::FieldDefinitionContext* ctx);
bool IsF32(TypedefParser::TypeAnnotationContext* ctx);
bool IsF32(TypedefParser::FieldDefinitionContext* ctx);
bool IsF64(TypedefParser::TypeAnnotationContext* ctx);
bool IsF64(TypedefParser::FieldDefinitionContext* ctx);
bool IsU8(TypedefParser::TypeAnnotationContext* ctx);
bool IsU8(TypedefParser::FieldDefinitionContext* ctx);
bool IsU16(TypedefParser::TypeAnnotationContext* ctx);
bool IsU16(TypedefParser::FieldDefinitionContext* ctx);
bool IsU32(TypedefParser::TypeAnnotationContext* ctx);
bool IsU32(TypedefParser::FieldDefinitionContext* ctx);
bool IsU64(TypedefParser::TypeAnnotationContext* ctx);
bool IsU64(TypedefParser::FieldDefinitionContext* ctx);
bool IsI8(TypedefParser::TypeAnnotationContext* ctx);
bool IsI8(TypedefParser::FieldDefinitionContext* ctx);
bool IsI16(TypedefParser::TypeAnnotationContext* ctx);
bool IsI16(TypedefParser::FieldDefinitionContext* ctx);
bool IsI32(TypedefParser::TypeAnnotationContext* ctx);
bool IsI32(TypedefParser::FieldDefinitionContext* ctx);
bool IsI64(TypedefParser::TypeAnnotationContext* ctx);
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
TypedefParser::PrimitiveLiteralContext* GetBoolLiteral(
    TypedefParser::FieldDefinitionContext* ctx);
char32_t GetChar(TypedefParser::PrimitiveLiteralContext* ctx);
char32_t GetChar(TypedefParser::FieldDefinitionContext* ctx);
TypedefParser::PrimitiveLiteralContext* GetCharLiteral(
    TypedefParser::FieldDefinitionContext* ctx);
std::string* GetStr(TypedefParser::PrimitiveLiteralContext* ctx);
std::string* GetStr(TypedefParser::FieldDefinitionContext* ctx);
TypedefParser::PrimitiveLiteralContext* GetStrLiteral(
    TypedefParser::FieldDefinitionContext* ctx);
float GetF32(TypedefParser::PrimitiveLiteralContext* ctx);
float GetF32(TypedefParser::FieldDefinitionContext* ctx);
TypedefParser::PrimitiveLiteralContext* GetF32Literal(
    TypedefParser::FieldDefinitionContext* ctx);
double GetF64(TypedefParser::PrimitiveLiteralContext* ctx);
double GetF64(TypedefParser::FieldDefinitionContext* ctx);
TypedefParser::PrimitiveLiteralContext* GetF64Literal(
    TypedefParser::FieldDefinitionContext* ctx);
uint8_t GetU8(TypedefParser::PrimitiveLiteralContext* ctx);
uint8_t GetU8(TypedefParser::FieldDefinitionContext* ctx);
TypedefParser::PrimitiveLiteralContext* GetU8Literal(
    TypedefParser::FieldDefinitionContext* ctx);
uint16_t GetU16(TypedefParser::PrimitiveLiteralContext* ctx);
uint16_t GetU16(TypedefParser::FieldDefinitionContext* ctx);
TypedefParser::PrimitiveLiteralContext* GetU16Literal(
    TypedefParser::FieldDefinitionContext* ctx);
uint32_t GetU32(TypedefParser::PrimitiveLiteralContext* ctx);
uint32_t GetU32(TypedefParser::FieldDefinitionContext* ctx);
TypedefParser::PrimitiveLiteralContext* GetU32Literal(
    TypedefParser::FieldDefinitionContext* ctx);
uint64_t GetU64(TypedefParser::PrimitiveLiteralContext* ctx);
uint64_t GetU64(TypedefParser::FieldDefinitionContext* ctx);
TypedefParser::PrimitiveLiteralContext* GetU64Literal(
    TypedefParser::FieldDefinitionContext* ctx);
int8_t GetI8(TypedefParser::PrimitiveLiteralContext* ctx);
int8_t GetI8(TypedefParser::FieldDefinitionContext* ctx);
TypedefParser::PrimitiveLiteralContext* GetI8Literal(
    TypedefParser::FieldDefinitionContext* ctx);
int16_t GetI16(TypedefParser::PrimitiveLiteralContext* ctx);
int16_t GetI16(TypedefParser::FieldDefinitionContext* ctx);
TypedefParser::PrimitiveLiteralContext* GetI16Literal(
    TypedefParser::FieldDefinitionContext* ctx);
int32_t GetI32(TypedefParser::PrimitiveLiteralContext* ctx);
int32_t GetI32(TypedefParser::FieldDefinitionContext* ctx);
TypedefParser::PrimitiveLiteralContext* GetI32Literal(
    TypedefParser::FieldDefinitionContext* ctx);
int64_t GetI64(TypedefParser::PrimitiveLiteralContext* ctx);
int64_t GetI64(TypedefParser::FieldDefinitionContext* ctx);
TypedefParser::PrimitiveLiteralContext* GetI64Literal(
    TypedefParser::FieldDefinitionContext* ctx);

// Returns nullptr if there isn't one.
TypedefParser::TypeDefinitionContext* FindType(
    TypedefParser::CompilationUnitContext* cu_ctx,
    const std::string& identifier);

TypedefParser::TmplDefinitionContext* FindTempalteFunc(
    TypedefParser::CompilationUnitContext* cu_ctx,
    const std::string& identifier);

// Returns nullptr if there isn't one.
TypedefParser::TypeDefinitionContext* FindType(
    TypedefParser::FieldBlockContext* ctx, const std::string& identifier);

// Returns nullptr if there isn't one.
TypedefParser::TypeDefinitionContext* FindType(
    TypedefParser::TypeDefinitionContext* td_ctx,
    const std::string& identifier);

// Returns nullptr if there isn't one.
TypedefParser::FieldDefinitionContext* FindField(
    TypedefParser::TypeDefinitionContext* td_ctx,
    const std::string& identifier);

TypedefParser::TmplExpressionContext* GetTmplExpression(
    TypedefParser::TmplDefinitionContext* ctx, size_t idx);

}  // namespace td

#endif  // PARSER_AST_FUNCTIONS_H__
