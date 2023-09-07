#include "libtypedef/parser/grammar_functions.h"

#include <sstream>

#include "grammar_functions.h"

namespace td {

std::string ToString(TypedefParser::SymbolPathContext* ctx,
                     const std::string& delimiter) {
  auto id_vec = ctx->identifier();
  if (!id_vec.size()) {
    return std::string();
  }

  std::stringstream ss;
  ss << id_vec[0]->id;
  for (size_t ii = 1; ii < id_vec.size(); ii++) {
    ss << delimiter << id_vec[ii]->id;
  }

  return ss.str();
}

// ---- User types -------------------------------------------------------------

bool DefinesUserType(TypedefParser::TypeDefinitionContext* type) {
  return DefinesStruct(type) || DefinesVariant(type);
}
bool DefinesStruct(TypedefParser::TypeDefinitionContext* type) {
  return type->KW_STRUCT() != nullptr;
}
bool DefinesVariant(TypedefParser::TypeDefinitionContext* type) {
  return type->KW_VARIANT() != nullptr;
}

bool DefinesAndUsesInlineUserType(
    TypedefParser::FieldDefinitionContext* field) {
  return field->typeDefinition() != nullptr;
}

bool ReferencesUserType(TypedefParser::TypeIdentifierContext* ctx) {
  return ctx->userType() != nullptr && ctx->userType()->identifier() != nullptr;
}

TypedefParser::UserTypeContext* GetReferencedUserType(
    TypedefParser::TypeIdentifierContext* ctx) {
  return ReferencesUserType(ctx) ? ctx->userType() : nullptr;
}

// ---- Builtin types ----------------------------------------------------------

bool ReferencesBuiltinType(TypedefParser::TypeAnnotationContext* ctx) {
  return ctx->typeIdentifier() && ReferencesBuiltinType(ctx->typeIdentifier());
}

bool ReferencesBuiltinType(TypedefParser::TypeIdentifierContext* ctx) {
  return ReferencesBuiltinVectorType(ctx) || ReferencesBuiltinMapType(ctx);
}

bool ReferencesBuiltinVectorType(TypedefParser::TypeAnnotationContext* ctx) {
  return ctx->typeIdentifier() && ctx->typeIdentifier()->KW_VECTOR() != nullptr;
}

bool ReferencesBuiltinVectorType(TypedefParser::TypeIdentifierContext* ctx) {
  return ctx->KW_VECTOR() != nullptr;
}

bool ReferencesBuiltinMapType(TypedefParser::TypeAnnotationContext* ctx) {
  return ctx->typeIdentifier() && ctx->typeIdentifier()->KW_MAP() != nullptr;
}

bool ReferencesBuiltinMapType(TypedefParser::TypeIdentifierContext* ctx) {
  return ctx->KW_MAP() != nullptr;
}

// ---- Primitive field types --------------------------------------------------

bool ReferencesPrimitiveType(TypedefParser::TypeAnnotationContext* ctx) {
  return ctx->typeIdentifier() &&
         ReferencesPrimitiveType(ctx->typeIdentifier());
}

bool ReferencesPrimitiveType(TypedefParser::TypeIdentifierContext* ctx) {
  return ctx->primitiveTypeIdentifier() != nullptr;
}

TypedefParser::PrimitiveTypeIdentifierContext* GetReferencedPrimitive(
    TypedefParser::TypeAnnotationContext* ctx) {
  return ReferencesPrimitiveType(ctx)
             ? ctx->typeIdentifier()->primitiveTypeIdentifier()
             : nullptr;
}

bool IsBool(TypedefParser::PrimitiveTypeIdentifierContext* ctx) {
  return ctx->KW_BOOL() != nullptr;
}
bool IsChar(TypedefParser::PrimitiveTypeIdentifierContext* ctx) {
  return ctx->KW_CHAR() != nullptr;
}
bool IsStr(TypedefParser::PrimitiveTypeIdentifierContext* ctx) {
  return ctx->KW_STRING() != nullptr;
}
bool IsF32(TypedefParser::PrimitiveTypeIdentifierContext* ctx) {
  return ctx->KW_F32() != nullptr;
}
bool IsF64(TypedefParser::PrimitiveTypeIdentifierContext* ctx) {
  return ctx->KW_F64() != nullptr;
}
bool IsU8(TypedefParser::PrimitiveTypeIdentifierContext* ctx) {
  return ctx->KW_U8() != nullptr;
}
bool IsU16(TypedefParser::PrimitiveTypeIdentifierContext* ctx) {
  return ctx->KW_U16() != nullptr;
}
bool IsU32(TypedefParser::PrimitiveTypeIdentifierContext* ctx) {
  return ctx->KW_U32() != nullptr;
}
bool IsU64(TypedefParser::PrimitiveTypeIdentifierContext* ctx) {
  return ctx->KW_U64() != nullptr;
}
bool IsI8(TypedefParser::PrimitiveTypeIdentifierContext* ctx) {
  return ctx->KW_I8() != nullptr;
}
bool IsI16(TypedefParser::PrimitiveTypeIdentifierContext* ctx) {
  return ctx->KW_I16() != nullptr;
}
bool IsI32(TypedefParser::PrimitiveTypeIdentifierContext* ctx) {
  return ctx->KW_I32() != nullptr;
}
bool IsI64(TypedefParser::PrimitiveTypeIdentifierContext* ctx) {
  return ctx->KW_I64() != nullptr;
}

}  // namespace td
