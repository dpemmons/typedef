#include "libtypedef/parser/grammar_functions.h"

#include <sstream>

#define FMT_HEADER_ONLY
#include <fmt/core.h>

#include "grammar_functions.h"

#define throw_logic_error(str) \
  throw std::logic_error(      \
      fmt::format("\"{}\" in {}:{}", str, __FILE__, __LINE__));

namespace td {

std::string ToString(TypedefParser::SymbolPathContext* ctx,
                     const std::string& delimiter) {
  auto id_vec = ctx->identifier();
  if (!id_vec.size()) {
    return std::string();
  }

  std::stringstream ss;
  size_t ii = 0;
  if (!ctx->leading_pathsep) {
    ss << id_vec[ii]->id;
    ii++;
  }
  for (; ii < id_vec.size(); ii++) {
    ss << delimiter << id_vec[ii]->id;
  }

  return ss.str();
}

std::string ToString(TypedefParser::ModuleDeclarationContext* ctx,
                     const std::string& delimiter) {
  std::stringstream ss;
  for (auto identifier : ctx->symbolPath()->identifier()) {
    ss << delimiter << identifier->id;
  }
  return ss.str();
}

std::filesystem::path ToPath(TypedefParser::ModuleDeclarationContext* ctx) {
  std::filesystem::path path;

  for (auto identifier : ctx->symbolPath()->identifier()) {
    path /= identifier->id;
  }

  return path;
}

// ---- User types -------------------------------------------------------------

bool DefinesUserType(TypedefParser::TypeDefinitionContext* type) {
  return DefinesStruct(type) || DefinesVariant(type);
}
bool DefinesStruct(TypedefParser::TypeDefinitionContext* type) {
  return type->KW_STRUCT();
}
bool DefinesVariant(TypedefParser::TypeDefinitionContext* type) {
  return type->KW_VARIANT();
}

bool DefinesAndUsesInlineUserType(
    TypedefParser::FieldDefinitionContext* field) {
  return field->typeDefinition();
}

TypedefParser::TypeDefinitionContext* GetInlineUserType(
    TypedefParser::FieldDefinitionContext* ctx) {
  return ctx->typeDefinition();
}

bool ReferencesUserType(TypedefParser::TypeArgumentContext* ctx) {
  return ctx->typeIdentifier() && ctx->typeIdentifier()->userType();
}

TypedefParser::TypeDefinitionContext* GetReferencedUserType(
    TypedefParser::TypeArgumentContext* ctx) {
  return ReferencesUserType(ctx)
             ? ctx->typeIdentifier()->userType()->type_definition
             : nullptr;
}

bool ReferencesUserType(TypedefParser::FieldDefinitionContext* ctx) {
  return ctx->typeAnnotation() &&
         ReferencesUserType(ctx->typeAnnotation()->typeIdentifier());
}

bool ReferencesUserType(TypedefParser::TypeIdentifierContext* ctx) {
  return ctx->userType() && ctx->userType()->identifier();
}

TypedefParser::TypeDefinitionContext* GetReferencedUserType(
    TypedefParser::FieldDefinitionContext* ctx) {
  if (ReferencesUserType(ctx)) {
    return ctx->typeAnnotation()->typeIdentifier()->userType()->type_definition;
  }
  return nullptr;
}

TypedefParser::TypeDefinitionContext* GetReferencedUserType(
    TypedefParser::TypeIdentifierContext* ctx) {
  return ReferencesUserType(ctx) ? ctx->userType()->type_definition : nullptr;
}

bool HasTypeAnnotation(TypedefParser::FieldDefinitionContext* ctx) {
  return ctx->typeAnnotation();
}

TypedefParser::TypeAnnotationContext* GetTypeAnnotation(
    TypedefParser::FieldDefinitionContext* ctx) {
  return ctx->typeAnnotation();
}

bool HasTypeDefinition(TypedefParser::FieldDefinitionContext* ctx) {
  return ctx->typeDefinition();
}

TypedefParser::TypeDefinitionContext* GetTypeDefinition(
    TypedefParser::FieldDefinitionContext* ctx) {
  return ctx->typeDefinition();
}

size_t HasTypeArguments(TypedefParser::TypeAnnotationContext* ctx) {
  return ctx->typeArgument().size();
}

TypedefParser::TypeArgumentContext* GetTypeArgument(
    TypedefParser::TypeAnnotationContext* ctx, size_t ii) {
  return ctx->typeArgument(ii);
}

// ---- Builtin types ----------------------------------------------------------

bool ReferencesBuiltinType(TypedefParser::TypeAnnotationContext* ctx) {
  return ctx->typeIdentifier() && ReferencesBuiltinType(ctx->typeIdentifier());
}

bool ReferencesBuiltinType(TypedefParser::TypeIdentifierContext* ctx) {
  return ReferencesBuiltinVectorType(ctx) || ReferencesBuiltinMapType(ctx);
}

bool ReferencesBuiltinVectorType(TypedefParser::TypeAnnotationContext* ctx) {
  return ctx->typeIdentifier() && ctx->typeIdentifier()->KW_VECTOR();
}

bool ReferencesBuiltinVectorType(TypedefParser::TypeIdentifierContext* ctx) {
  return ctx->KW_VECTOR();
}

bool ReferencesBuiltinMapType(TypedefParser::TypeAnnotationContext* ctx) {
  return ctx->typeIdentifier() && ctx->typeIdentifier()->KW_MAP();
}

bool ReferencesBuiltinMapType(TypedefParser::TypeIdentifierContext* ctx) {
  return ctx->KW_MAP();
}

// ---- Primitive field types --------------------------------------------------

bool ReferencesPrimitiveType(TypedefParser::TypeAnnotationContext* ctx) {
  return ctx->typeIdentifier() &&
         ReferencesPrimitiveType(ctx->typeIdentifier());
}

bool ReferencesPrimitiveType(TypedefParser::TypeIdentifierContext* ctx) {
  return ctx->primitiveTypeIdentifier();
}

bool ReferencesPrimitiveFloatType(TypedefParser::TypeIdentifierContext* ctx) {
  return ctx->primitiveTypeIdentifier() &&
         (ctx->primitiveTypeIdentifier()->KW_F32() ||
          ctx->primitiveTypeIdentifier()->KW_F64());
}

bool ReferencesPrimitiveIntegerType(TypedefParser::TypeIdentifierContext* ctx) {
  return ctx->primitiveTypeIdentifier() &&
         (ctx->primitiveTypeIdentifier()->KW_U8() ||
          ctx->primitiveTypeIdentifier()->KW_U16() ||
          ctx->primitiveTypeIdentifier()->KW_U32() ||
          ctx->primitiveTypeIdentifier()->KW_U64() ||
          ctx->primitiveTypeIdentifier()->KW_I8() ||
          ctx->primitiveTypeIdentifier()->KW_I16() ||
          ctx->primitiveTypeIdentifier()->KW_I32() ||
          ctx->primitiveTypeIdentifier()->KW_I64());
}

TypedefParser::PrimitiveTypeIdentifierContext* GetReferencedPrimitiveIdentifier(
    TypedefParser::TypeAnnotationContext* ctx) {
  return ReferencesPrimitiveType(ctx)
             ? ctx->typeIdentifier()->primitiveTypeIdentifier()
             : nullptr;
}

bool ReferencesPrimitiveType(TypedefParser::FieldDefinitionContext* ctx) {
  return ctx->typeAnnotation() && ctx->typeAnnotation()->typeIdentifier() &&
         ctx->typeAnnotation()->typeIdentifier()->primitiveTypeIdentifier();
}

TypedefParser::PrimitiveTypeIdentifierContext* GetReferencedPrimitiveIdentifier(
    TypedefParser::FieldDefinitionContext* ctx) {
  return ReferencesPrimitiveType(ctx) ? ctx->typeAnnotation()
                                            ->typeIdentifier()
                                            ->primitiveTypeIdentifier()
                                      : nullptr;
}

TypedefParser::PrimitiveLiteralContext* GetPrimitiveLiteral(
    TypedefParser::FieldDefinitionContext* ctx) {
  return ctx->primitiveLiteral();
}

bool IsBool(TypedefParser::PrimitiveTypeIdentifierContext* ctx) {
  return ctx->KW_BOOL();
}
bool IsBool(TypedefParser::FieldDefinitionContext* ctx) {
  return ReferencesPrimitiveType(ctx) &&
         IsBool(GetReferencedPrimitiveIdentifier(ctx));
}
bool IsChar(TypedefParser::PrimitiveTypeIdentifierContext* ctx) {
  return ctx->KW_CHAR();
}
bool IsChar(TypedefParser::FieldDefinitionContext* ctx) {
  return ReferencesPrimitiveType(ctx) &&
         IsChar(GetReferencedPrimitiveIdentifier(ctx));
}
bool IsStr(TypedefParser::PrimitiveTypeIdentifierContext* ctx) {
  return ctx->KW_STRING();
}
bool IsStr(TypedefParser::FieldDefinitionContext* ctx) {
  return ReferencesPrimitiveType(ctx) &&
         IsStr(GetReferencedPrimitiveIdentifier(ctx));
}
bool IsF32(TypedefParser::PrimitiveTypeIdentifierContext* ctx) {
  return ctx->KW_F32();
}
bool IsF32(TypedefParser::FieldDefinitionContext* ctx) {
  return ReferencesPrimitiveType(ctx) &&
         IsF32(GetReferencedPrimitiveIdentifier(ctx));
}
bool IsF64(TypedefParser::PrimitiveTypeIdentifierContext* ctx) {
  return ctx->KW_F64();
}
bool IsF64(TypedefParser::FieldDefinitionContext* ctx) {
  return ReferencesPrimitiveType(ctx) &&
         IsF64(GetReferencedPrimitiveIdentifier(ctx));
}
bool IsU8(TypedefParser::PrimitiveTypeIdentifierContext* ctx) {
  return ctx->KW_U8();
}
bool IsU8(TypedefParser::FieldDefinitionContext* ctx) {
  return ReferencesPrimitiveType(ctx) &&
         IsU8(GetReferencedPrimitiveIdentifier(ctx));
}
bool IsU16(TypedefParser::PrimitiveTypeIdentifierContext* ctx) {
  return ctx->KW_U16();
}
bool IsU16(TypedefParser::FieldDefinitionContext* ctx) {
  return ReferencesPrimitiveType(ctx) &&
         IsU16(GetReferencedPrimitiveIdentifier(ctx));
}
bool IsU32(TypedefParser::PrimitiveTypeIdentifierContext* ctx) {
  return ctx->KW_U32();
}
bool IsU32(TypedefParser::FieldDefinitionContext* ctx) {
  return ReferencesPrimitiveType(ctx) &&
         IsU32(GetReferencedPrimitiveIdentifier(ctx));
}
bool IsU64(TypedefParser::PrimitiveTypeIdentifierContext* ctx) {
  return ctx->KW_U64();
}
bool IsU64(TypedefParser::FieldDefinitionContext* ctx) {
  return ReferencesPrimitiveType(ctx) &&
         IsU64(GetReferencedPrimitiveIdentifier(ctx));
}
bool IsI8(TypedefParser::PrimitiveTypeIdentifierContext* ctx) {
  return ctx->KW_I8();
}
bool IsI8(TypedefParser::FieldDefinitionContext* ctx) {
  return ReferencesPrimitiveType(ctx) &&
         IsI8(GetReferencedPrimitiveIdentifier(ctx));
}
bool IsI16(TypedefParser::PrimitiveTypeIdentifierContext* ctx) {
  return ctx->KW_I16();
}
bool IsI16(TypedefParser::FieldDefinitionContext* ctx) {
  return ReferencesPrimitiveType(ctx) &&
         IsI16(GetReferencedPrimitiveIdentifier(ctx));
}
bool IsI32(TypedefParser::PrimitiveTypeIdentifierContext* ctx) {
  return ctx->KW_I32();
}
bool IsI32(TypedefParser::FieldDefinitionContext* ctx) {
  return ReferencesPrimitiveType(ctx) &&
         IsI32(GetReferencedPrimitiveIdentifier(ctx));
}
bool IsI64(TypedefParser::PrimitiveTypeIdentifierContext* ctx) {
  return ctx->KW_I64();
}

bool IsI64(TypedefParser::FieldDefinitionContext* ctx) {
  return ReferencesPrimitiveType(ctx) &&
         IsI64(GetReferencedPrimitiveIdentifier(ctx));
}

bool IsBoolLiteral(TypedefParser::PrimitiveLiteralContext* ctx) {
  return ctx->boolLiteral();
}

bool IsCharLiteral(TypedefParser::PrimitiveLiteralContext* ctx) {
  return ctx->charLiteral();
}

bool IsStrLiteral(TypedefParser::PrimitiveLiteralContext* ctx) {
  return ctx->stringLiteral();
}

bool IsF32Literal(TypedefParser::PrimitiveLiteralContext* ctx) {
  return ctx->floatLiteral() && IsF32(ctx->floatLiteral()->float_literal);
}

bool IsF64Literal(TypedefParser::PrimitiveLiteralContext* ctx) {
  return ctx->floatLiteral() && IsF64(ctx->floatLiteral()->float_literal);
}

bool IsU8Literal(TypedefParser::PrimitiveLiteralContext* ctx) {
  return ctx->integerLiteral() && IsU8(ctx->integerLiteral()->integer_literal);
}

bool IsU16Literal(TypedefParser::PrimitiveLiteralContext* ctx) {
  return ctx->integerLiteral() && IsU16(ctx->integerLiteral()->integer_literal);
}

bool IsU32Literal(TypedefParser::PrimitiveLiteralContext* ctx) {
  return ctx->integerLiteral() && IsU32(ctx->integerLiteral()->integer_literal);
}

bool IsU64Literal(TypedefParser::PrimitiveLiteralContext* ctx) {
  return ctx->integerLiteral() && IsU64(ctx->integerLiteral()->integer_literal);
}

bool IsI8Literal(TypedefParser::PrimitiveLiteralContext* ctx) {
  return ctx->integerLiteral() && IsI8(ctx->integerLiteral()->integer_literal);
}

bool IsI16Literal(TypedefParser::PrimitiveLiteralContext* ctx) {
  return ctx->integerLiteral() && IsI16(ctx->integerLiteral()->integer_literal);
}

bool IsI32Literal(TypedefParser::PrimitiveLiteralContext* ctx) {
  return ctx->integerLiteral() && IsI32(ctx->integerLiteral()->integer_literal);
}

bool IsI64Literal(TypedefParser::PrimitiveLiteralContext* ctx) {
  return ctx->integerLiteral() && IsI64(ctx->integerLiteral()->integer_literal);
}

bool GetBool(TypedefParser::PrimitiveLiteralContext* pctx) {
  if (!pctx || !IsBoolLiteral(pctx)) {
    throw_logic_error("not a bool")
  }
  return pctx->boolLiteral()->bool_literal;
}

bool GetBool(TypedefParser::FieldDefinitionContext* ctx) {
  TypedefParser::PrimitiveLiteralContext* pctx = GetPrimitiveLiteral(ctx);
  if (!pctx || (!IsBool(ctx) || !IsBoolLiteral(pctx))) {
    throw_logic_error("not a bool")
  }
  return pctx->boolLiteral()->bool_literal;
}

char32_t GetChar(TypedefParser::PrimitiveLiteralContext* pctx) {
  if (!pctx || !IsCharLiteral(pctx)) {
    throw_logic_error("not a char")
  }
  return pctx->charLiteral()->char_literal;
}

char32_t GetChar(TypedefParser::FieldDefinitionContext* ctx) {
  TypedefParser::PrimitiveLiteralContext* pctx = GetPrimitiveLiteral(ctx);
  if (!pctx || (!IsChar(ctx) || !IsCharLiteral(pctx))) {
    throw_logic_error("not a char")
  }
  return pctx->charLiteral()->char_literal;
}

std::string* GetStr(TypedefParser::PrimitiveLiteralContext* pctx) {
  if (!pctx || !IsStrLiteral(pctx)) {
    throw_logic_error("not a str")
  }
  return &pctx->stringLiteral()->string_literal;
}

std::string* GetStr(TypedefParser::FieldDefinitionContext* ctx) {
  TypedefParser::PrimitiveLiteralContext* pctx = GetPrimitiveLiteral(ctx);
  if (!pctx || (!IsStr(ctx) || !IsStrLiteral(pctx))) {
    throw_logic_error("not a str")
  }
  return &pctx->stringLiteral()->string_literal;
}

float GetF32(TypedefParser::PrimitiveLiteralContext* pctx) {
  if (!pctx || !IsF32Literal(pctx)) {
    throw_logic_error("not a f32")
  }
  return GetF32(pctx->floatLiteral()->float_literal);
}

float GetF32(TypedefParser::FieldDefinitionContext* ctx) {
  TypedefParser::PrimitiveLiteralContext* pctx = GetPrimitiveLiteral(ctx);
  if (!pctx || (!IsF32(ctx) || !IsF32Literal(pctx))) {
    throw_logic_error("not a f32")
  }
  return GetF32(pctx->floatLiteral()->float_literal);
}

double GetF64(TypedefParser::PrimitiveLiteralContext* pctx) {
  if (!pctx || !IsF64Literal(pctx)) {
    throw_logic_error("not a f32")
  }
  return GetF64(pctx->floatLiteral()->float_literal);
}

double GetF64(TypedefParser::FieldDefinitionContext* ctx) {
  TypedefParser::PrimitiveLiteralContext* pctx = GetPrimitiveLiteral(ctx);
  if (!pctx || !(IsF64(ctx) || IsF64Literal(pctx))) {
    throw_logic_error("not a f64")
  }
  return GetF64(pctx->floatLiteral()->float_literal);
}

uint8_t GetU8(TypedefParser::PrimitiveLiteralContext* pctx) {
  if (!pctx || !IsU8Literal(pctx)) {
    throw_logic_error("not a u8")
  }
  return GetU8(pctx->integerLiteral()->integer_literal);
}

uint8_t GetU8(TypedefParser::FieldDefinitionContext* ctx) {
  TypedefParser::PrimitiveLiteralContext* pctx = GetPrimitiveLiteral(ctx);
  if (!pctx || (!IsU8(ctx) || !IsU8Literal(pctx))) {
    throw_logic_error("not a u8")
  }
  return GetU8(pctx->integerLiteral()->integer_literal);
}

uint16_t GetU16(TypedefParser::PrimitiveLiteralContext* pctx) {
  if (!pctx || !IsU16Literal(pctx)) {
    throw_logic_error("not a u16")
  }
  return GetU16(pctx->integerLiteral()->integer_literal);
}

uint16_t GetU16(TypedefParser::FieldDefinitionContext* ctx) {
  TypedefParser::PrimitiveLiteralContext* pctx = GetPrimitiveLiteral(ctx);
  if (!pctx || (!IsU16(ctx) || !IsU16Literal(pctx))) {
    throw_logic_error("not a u16")
  }
  return GetU16(pctx->integerLiteral()->integer_literal);
}

uint32_t GetU32(TypedefParser::PrimitiveLiteralContext* pctx) {
  if (!pctx || !IsU32Literal(pctx)) {
    throw_logic_error("not a u32")
  }
  return GetU32(pctx->integerLiteral()->integer_literal);
}

uint32_t GetU32(TypedefParser::FieldDefinitionContext* ctx) {
  TypedefParser::PrimitiveLiteralContext* pctx = GetPrimitiveLiteral(ctx);
  if (!pctx || (!IsU32(ctx) || !IsU32Literal(pctx))) {
    throw_logic_error("not a u32")
  }
  return GetU32(pctx->integerLiteral()->integer_literal);
}

uint64_t GetU64(TypedefParser::PrimitiveLiteralContext* pctx) {
  if (!pctx || !IsU64Literal(pctx)) {
    throw_logic_error("not a u64")
  }
  return GetU64(pctx->integerLiteral()->integer_literal);
}

uint64_t GetU64(TypedefParser::FieldDefinitionContext* ctx) {
  TypedefParser::PrimitiveLiteralContext* pctx = GetPrimitiveLiteral(ctx);
  if (!pctx || (!IsU64(ctx) || !IsU64Literal(pctx))) {
    throw_logic_error("not a u64")
  }
  return GetU64(pctx->integerLiteral()->integer_literal);
}

int8_t GetI8(TypedefParser::PrimitiveLiteralContext* pctx) {
  if (!pctx || !IsI8Literal(pctx)) {
    throw_logic_error("not a i8")
  }
  return GetI8(pctx->integerLiteral()->integer_literal);
}

int8_t GetI8(TypedefParser::FieldDefinitionContext* ctx) {
  TypedefParser::PrimitiveLiteralContext* pctx = GetPrimitiveLiteral(ctx);
  if (!pctx || (!IsI8(ctx) || !IsI8Literal(pctx))) {
    throw_logic_error("not a i8")
  }
  return GetI8(pctx->integerLiteral()->integer_literal);
}

int16_t GetI16(TypedefParser::PrimitiveLiteralContext* pctx) {
  if (!pctx || !IsI16Literal(pctx)) {
    throw_logic_error("not a i16")
  }
  return GetI16(pctx->integerLiteral()->integer_literal);
}

int16_t GetI16(TypedefParser::FieldDefinitionContext* ctx) {
  TypedefParser::PrimitiveLiteralContext* pctx = GetPrimitiveLiteral(ctx);
  if (!pctx || (!IsI16(ctx) || !IsI16Literal(pctx))) {
    throw_logic_error("not a i16")
  }
  return GetI16(pctx->integerLiteral()->integer_literal);
}

int32_t GetI32(TypedefParser::PrimitiveLiteralContext* pctx) {
  if (!pctx || !IsI32Literal(pctx)) {
    throw_logic_error("not a i32")
  }
  return GetI32(pctx->integerLiteral()->integer_literal);
}

int32_t GetI32(TypedefParser::FieldDefinitionContext* ctx) {
  TypedefParser::PrimitiveLiteralContext* pctx = GetPrimitiveLiteral(ctx);
  if (!pctx || (!IsI32(ctx) || !IsI32Literal(pctx))) {
    throw_logic_error("not a i32")
  }
  return GetI32(pctx->integerLiteral()->integer_literal);
}

int64_t GetI64(TypedefParser::PrimitiveLiteralContext* pctx) {
  if (!pctx || !IsI64Literal(pctx)) {
    throw_logic_error("not a i64")
  }
  return GetI64(pctx->integerLiteral()->integer_literal);
}

int64_t GetI64(TypedefParser::FieldDefinitionContext* ctx) {
  TypedefParser::PrimitiveLiteralContext* pctx = GetPrimitiveLiteral(ctx);
  if (!pctx || (!IsI64(ctx) || !IsI64Literal(pctx))) {
    throw_logic_error("not a i64")
  }
  return GetI64(pctx->integerLiteral()->integer_literal);
}

TypedefParser::TypeDefinitionContext* FindType(
    TypedefParser::CompilationUnitContext* cu_ctx,
    const std::string& identifier) {
  for (TypedefParser::TypeDefinitionContext* td : cu_ctx->typeDefinition()) {
    if (td->type_identifier->id == identifier) {
      return td;
    }
  }
  return nullptr;
}

TypedefParser::TypeDefinitionContext* FindType(
    TypedefParser::FieldBlockContext* ctx, const std::string& identifier) {
  for (TypedefParser::TypeDefinitionContext* td : ctx->typeDefinition()) {
    if (td->type_identifier->id == identifier) {
      return td;
    }
  }
  return nullptr;
}

TypedefParser::TypeDefinitionContext* FindType(
    TypedefParser::TypeDefinitionContext* td_ctx,
    const std::string& identifier) {
  return FindType(td_ctx->fieldBlock(), identifier);
}

TypedefParser::FieldDefinitionContext* FindField(
    TypedefParser::TypeDefinitionContext* td_ctx,
    const std::string& identifier) {
  for (auto* f : td_ctx->fieldBlock()->fieldDefinition()) {
    if (f->identifier()->id == identifier) {
      return f;
    }
  }
  return nullptr;
}

}  // namespace td
