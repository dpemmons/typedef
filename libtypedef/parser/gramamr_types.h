#ifndef TYPEDEF_LIBTYPEDEF_PARSER_GRAMAMR_TYPES_H_
#define TYPEDEF_LIBTYPEDEF_PARSER_GRAMAMR_TYPES_H_

#include <cstdint>
#include <variant>

// This file contains types used by the grammar's class
// declarations (and thus included by TypedefParser.h).

namespace td {

class TypeDefinition {};
class FieldDefinition {};
class FunctionParameter {};
class TypeParameter {};

// ---- Float Literal functions ------------------------------------------------

using FloatLiteral = std::variant<float, double>;

bool IsF32(FloatLiteral float_literal) {
  return std::holds_alternative<float>(float_literal);
}
float GetF32(FloatLiteral float_literal) {
  return std::get<float>(float_literal);
}
bool IsF64(FloatLiteral float_literal) {
  return std::holds_alternative<double>(float_literal);
}
double GetF64(FloatLiteral float_literal) {
  return std::get<double>(float_literal);
}

// ---- Integer Literal functions ----------------------------------------------

using IntegerLiteral =
    std::variant<std::uint8_t, std::uint16_t, std::uint32_t, std::uint64_t,
                 std::int8_t, std::int16_t, std::int32_t, std::int64_t>;

bool IsU8(IntegerLiteral integer_literal) {
  return std::holds_alternative<std::uint8_t>(integer_literal);
}
std::uint8_t GetU8(IntegerLiteral integer_literal) {
  return std::get<std::uint8_t>(integer_literal);
}
bool IsU16(IntegerLiteral integer_literal) {
  return std::holds_alternative<std::uint16_t>(integer_literal);
}
std::uint16_t GetU16(IntegerLiteral integer_literal) {
  return std::get<std::uint16_t>(integer_literal);
}
bool IsU32(IntegerLiteral integer_literal) {
  return std::holds_alternative<std::uint32_t>(integer_literal);
}
std::uint32_t GetU32(IntegerLiteral integer_literal) {
  return std::get<std::uint32_t>(integer_literal);
}
bool IsU64(IntegerLiteral integer_literal) {
  return std::holds_alternative<std::uint64_t>(integer_literal);
}
std::uint64_t GetU64(IntegerLiteral integer_literal) {
  return std::get<std::uint64_t>(integer_literal);
}
bool IsI8(IntegerLiteral integer_literal) {
  return std::holds_alternative<std::int8_t>(integer_literal);
}
std::int8_t GetI8(IntegerLiteral integer_literal) {
  return std::get<std::int8_t>(integer_literal);
}
bool IsI16(IntegerLiteral integer_literal) {
  return std::holds_alternative<std::int16_t>(integer_literal);
}
std::int16_t GetI16(IntegerLiteral integer_literal) {
  return std::get<std::int16_t>(integer_literal);
}
bool IsI32(IntegerLiteral integer_literal) {
  return std::holds_alternative<std::int32_t>(integer_literal);
}
std::int32_t GetI32(IntegerLiteral integer_literal) {
  return std::get<std::int32_t>(integer_literal);
}
bool IsI64(IntegerLiteral integer_literal) {
  return std::holds_alternative<std::int64_t>(integer_literal);
}
std::int64_t GetI64(IntegerLiteral integer_literal) {
  return std::get<std::int64_t>(integer_literal);
}

}  // namespace td

#endif  // TYPEDEF_LIBTYPEDEF_PARSER_GRAMAMR_TYPES_H_