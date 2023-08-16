#ifndef PARSER_TABLE_H__
#define PARSER_TABLE_H__

#include <memory>
#include <optional>
#include <string>
#include <variant>
#include <vector>

namespace td {
namespace table {

using namespace std;

enum PrimitiveType {
  PRIMITIVE_TYPE_UNKNOWN = 0,
  PRIMITIVE_TYPE_BOOL,
  PRIMITIVE_TYPE_CHAR,
  PRIMITIVE_TYPE_STRING,
  PRIMITIVE_TYPE_F32,
  PRIMITIVE_TYPE_F64,
  PRIMITIVE_TYPE_U8,
  PRIMITIVE_TYPE_U16,
  PRIMITIVE_TYPE_U32,
  PRIMITIVE_TYPE_U64,
  PRIMITIVE_TYPE_I8,
  PRIMITIVE_TYPE_I16,
  PRIMITIVE_TYPE_I32,
  PRIMITIVE_TYPE_I64
};

enum NonPrimitiveType {
  NONPRIMITIVE_TYPE_UNKNOWN = 0,
  NONPRIMITIVE_TYPE_STRUCT,
  NONPRIMITIVE_TYPE_VARIANT,
  NONPRIMITIVE_TYPE_VECTOR,
  NONPRIMITIVE_TYPE_MAP
};

enum Type {
  TYPE_UNKNOWN = PRIMITIVE_TYPE_UNKNOWN,
  TYPE_BOOL = PRIMITIVE_TYPE_BOOL,
  TYPE_CHAR = PRIMITIVE_TYPE_CHAR,
  TYPE_STRING = PRIMITIVE_TYPE_STRING,
  TYPE_F32 = PRIMITIVE_TYPE_F32,
  TYPE_F64 = PRIMITIVE_TYPE_F64,
  TYPE_I8 = PRIMITIVE_TYPE_U8,
  TYPE_I16 = PRIMITIVE_TYPE_U16,
  TYPE_I32 = PRIMITIVE_TYPE_U32,
  TYPE_I64 = PRIMITIVE_TYPE_U64,
  TYPE_U8 = PRIMITIVE_TYPE_I8,
  TYPE_U16 = PRIMITIVE_TYPE_I16,
  TYPE_U32 = PRIMITIVE_TYPE_I32,
  TYPE_U64 = PRIMITIVE_TYPE_I64,
  TYPE_STRUCT = NONPRIMITIVE_TYPE_STRUCT,
  TYPE_VARIANT = NONPRIMITIVE_TYPE_VARIANT,
  TYPE_VECTOR = NONPRIMITIVE_TYPE_VECTOR,
  TYPE_MAP = NONPRIMITIVE_TYPE_MAP,
};

typedef std::variant<bool,                // bool
                     char32_t,            // char
                     shared_ptr<string>,  // str
                     float,               // f32
                     double,              // f64
                     int8_t,              // i8
                     int16_t,             // i16
                     int32_t,             // i32
                     int64_t,             // i64
                     uint8_t,             // u8
                     uint16_t,            // u16
                     uint32_t,            // u32
                     uint64_t             // u64
                     >
    PrimitiveValue;

struct Struct;
struct Variant;
struct Vector;
struct Map;
struct TypeDeclaration;
struct FieldDeclaration;

struct StructMember {
  // One of the following:
  shared_ptr<TypeDeclaration> type_decl;
  shared_ptr<FieldDeclaration> field_decl;
};

struct TypeDeclaration {
  NonPrimitiveType declaration_type = NONPRIMITIVE_TYPE_UNKNOWN;
  // May be one of the following.
  shared_ptr<Struct> st;
  shared_ptr<Variant> var;
  shared_ptr<Vector> vec;
  shared_ptr<Map> map;
};

struct FieldDeclaration {
  shared_ptr<string> identifier;
  Type member_type = TYPE_UNKNOWN;

  // May be any of the following:
  optional<PrimitiveValue> primitive_value;
  // Inline (anonymous) definitions + declarations.
  shared_ptr<Struct> st;
  shared_ptr<Variant> var;
  shared_ptr<Vector> vec;
  shared_ptr<Map> map;
};

struct NonPrimitive {
  // If empty, it's an anonymous struct.
  shared_ptr<string> identifier;
};

struct Struct : public NonPrimitive {
  vector<shared_ptr<StructMember>> members;
};

struct Variant : public NonPrimitive {
  vector<shared_ptr<StructMember>> members;
};

struct Vector : public NonPrimitive {
  Type value_type = TYPE_UNKNOWN;

  // If non-primitive, then may be any of the following:
  shared_ptr<Struct> st_val;
  shared_ptr<Variant> var_val;
  shared_ptr<Vector> vec_val;
  shared_ptr<Map> map_val;
};

struct Map : public NonPrimitive {
  PrimitiveType key_type = PrimitiveType::PRIMITIVE_TYPE_UNKNOWN;

  Type value_type = TYPE_UNKNOWN;
  // If non-primitive, then may be any of the following:
  shared_ptr<Struct> st_val;
  shared_ptr<Variant> var_val;
  shared_ptr<Vector> vec_val;
  shared_ptr<Map> map_val;
};

struct Module {
  shared_ptr<string> name;
  vector<shared_ptr<TypeDeclaration>> types;

  shared_ptr<TypeDeclaration> Get(const string& identifier) {
    for (auto t : types) {
      if (t->st && *t->st->identifier == identifier) {
        return t;
      } else if (t->var && *t->var->identifier == identifier) {
        return t;
      } else if (t->vec && *t->vec->identifier == identifier) {
        return t;
      } else if (t->map && *t->map->identifier == identifier) {
        return t;
      }
    }
    return nullptr;
  }
};

}  // namespace table
}  // namespace td

#endif  // PARSER_TABLE_H__
