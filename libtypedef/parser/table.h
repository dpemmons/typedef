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
  PRIMITIVE_TYPE_BOOL = 1,
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
  PRIMITIVE_TYPE_I64,
  PRIMITIVE_TYPE_MAX
};

enum NonPrimitiveType {
  NONPRIMITIVE_TYPE_UNKNOWN = 0,
  NONPRIMITIVE_TYPE_STRUCT = 100,
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
  TYPE_U8 = PRIMITIVE_TYPE_U8,
  TYPE_U16 = PRIMITIVE_TYPE_U16,
  TYPE_U32 = PRIMITIVE_TYPE_U32,
  TYPE_U64 = PRIMITIVE_TYPE_U64,
  TYPE_I8 = PRIMITIVE_TYPE_I8,
  TYPE_I16 = PRIMITIVE_TYPE_I16,
  TYPE_I32 = PRIMITIVE_TYPE_I32,
  TYPE_I64 = PRIMITIVE_TYPE_I64,

  TYPE_PRIMITIVE_MAX = PRIMITIVE_TYPE_MAX,

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
                     uint8_t,             // u8
                     uint16_t,            // u16
                     uint32_t,            // u32
                     uint64_t,            // u64
                     int8_t,              // i8
                     int16_t,             // i16
                     int32_t,             // i32
                     int64_t              // i64
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
  bool IsType() const { return type_decl.operator bool(); }
  bool IsField() const { return field_decl.operator bool(); }
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

  bool IsStruct() const { return (member_type == TYPE_STRUCT && st); }
  bool IsVariant() const { return (member_type == TYPE_VARIANT && var); }
  bool IsVector() const { return (member_type == TYPE_VECTOR && vec); }
  bool IsMap() const { return (member_type == TYPE_MAP && map); }

  bool IsPrimitive() const {
    return (member_type > TYPE_UNKNOWN && member_type < TYPE_PRIMITIVE_MAX);
  }
  bool IsBool() const { return member_type == TYPE_BOOL; }
  bool IsChar() const { return member_type == TYPE_CHAR; }
  bool IsStr() const { return member_type == TYPE_STRING; }
  bool IsF32() const { return member_type == TYPE_F32; }
  bool IsF64() const { return member_type == TYPE_F64; }
  bool IsI8() const { return member_type == TYPE_I8; }
  bool IsI16() const { return member_type == TYPE_I16; }
  bool IsI32() const { return member_type == TYPE_I32; }
  bool IsI64() const { return member_type == TYPE_I64; }
  bool IsU8() const { return member_type == TYPE_U8; }
  bool IsU16() const { return member_type == TYPE_U16; }
  bool IsU32() const { return member_type == TYPE_U32; }
  bool IsU64() const { return member_type == TYPE_U64; }

  shared_ptr<Struct> GetStruct() const { return st; }
  shared_ptr<Variant> GetVariant() const { return var; }
  shared_ptr<Vector> GetVector() const { return vec; }
  shared_ptr<Map> GetMap() const { return map; }

  bool GetBool() const { return get<bool>(*primitive_value); }
  char32_t GetChar() const { return get<char32_t>(*primitive_value); }
  shared_ptr<string> GetStr() const {
    return get<shared_ptr<string>>(*primitive_value);
  }
  float GetF32() const { return get<float>(*primitive_value); }
  double GetF64() const { return get<double>(*primitive_value); }
  uint8_t GetU8() const { return get<uint8_t>(*primitive_value); }
  uint16_t GetU16() const { return get<uint16_t>(*primitive_value); }
  uint32_t GetU32() const { return get<uint32_t>(*primitive_value); }
  uint64_t GetU64() const { return get<uint64_t>(*primitive_value); }
  int8_t GetI8() const { return get<int8_t>(*primitive_value); }
  int16_t GetI16() const { return get<int16_t>(*primitive_value); }
  int32_t GetI32() const { return get<int32_t>(*primitive_value); }
  int64_t GetI64() const { return get<int64_t>(*primitive_value); }
};

struct NonPrimitive {
  // If empty, it's an anonymous struct.
  shared_ptr<string> identifier;
};

struct Struct : public NonPrimitive {
  vector<shared_ptr<StructMember>> members;
  shared_ptr<FieldDeclaration> GetField(const string& id);
  shared_ptr<TypeDeclaration> GetType(const string& id);
};

struct Variant : public NonPrimitive {
  vector<shared_ptr<StructMember>> members;
  shared_ptr<FieldDeclaration> GetField(const string& id);
  shared_ptr<TypeDeclaration> GetType(const string& id);
};

struct Vector : public NonPrimitive {
  Type value_type = TYPE_UNKNOWN;

  // If non-primitive, then may be any of the following:
  shared_ptr<Struct> st;
  shared_ptr<Variant> var;
  shared_ptr<Vector> vec;
  shared_ptr<Map> map;

  bool IsStruct() const { return (value_type == TYPE_STRUCT && st); }
  bool IsVariant() const { return (value_type == TYPE_VARIANT && var); }
  bool IsVector() const { return (value_type == TYPE_VECTOR && vec); }
  bool IsMap() const { return (value_type == TYPE_MAP && map); }

  bool IsPrimitive() const {
    return (value_type > TYPE_UNKNOWN && value_type < TYPE_PRIMITIVE_MAX);
  }
  bool IsBool() const { return value_type == TYPE_BOOL; }
  bool IsChar() const { return value_type == TYPE_CHAR; }
  bool IsStr() const { return value_type == TYPE_STRING; }
  bool IsF32() const { return value_type == TYPE_F32; }
  bool IsF64() const { return value_type == TYPE_F64; }
  bool IsI8() const { return value_type == TYPE_I8; }
  bool IsI16() const { return value_type == TYPE_I16; }
  bool IsI32() const { return value_type == TYPE_I32; }
  bool IsI64() const { return value_type == TYPE_I64; }
  bool IsU8() const { return value_type == TYPE_U8; }
  bool IsU16() const { return value_type == TYPE_U16; }
  bool IsU32() const { return value_type == TYPE_U32; }
  bool IsU64() const { return value_type == TYPE_U64; }
};

struct Map : public NonPrimitive {
  PrimitiveType key_type = PrimitiveType::PRIMITIVE_TYPE_UNKNOWN;

  Type value_type = TYPE_UNKNOWN;
  // If non-primitive, then may be any of the following:
  shared_ptr<Struct> st_val;
  shared_ptr<Variant> var_val;
  shared_ptr<Vector> vec_val;
  shared_ptr<Map> map_val;

  bool KeyIsBool() const { return key_type == PRIMITIVE_TYPE_BOOL; }
  bool KeyIsChar() const { return key_type == PRIMITIVE_TYPE_CHAR; }
  bool KeyIsStr() const { return key_type == PRIMITIVE_TYPE_STRING; }
  bool KeyIsF32() const { return key_type == PRIMITIVE_TYPE_F32; }
  bool KeyIsF64() const { return key_type == PRIMITIVE_TYPE_F64; }
  bool KeyIsI8() const { return key_type == PRIMITIVE_TYPE_I8; }
  bool KeyIsI16() const { return key_type == PRIMITIVE_TYPE_I16; }
  bool KeyIsI32() const { return key_type == PRIMITIVE_TYPE_I32; }
  bool KeyIsI64() const { return key_type == PRIMITIVE_TYPE_I64; }
  bool KeyIsU8() const { return key_type == PRIMITIVE_TYPE_U8; }
  bool KeyIsU16() const { return key_type == PRIMITIVE_TYPE_U16; }
  bool KeyIsU32() const { return key_type == PRIMITIVE_TYPE_U32; }
  bool KeyIsU64() const { return key_type == PRIMITIVE_TYPE_U64; }

  bool ValueIsStruct() const { return (value_type == TYPE_STRUCT && st_val); }
  bool ValueIsVariant() const {
    return (value_type == TYPE_VARIANT && var_val);
  }
  bool ValueIsVector() const { return (value_type == TYPE_VECTOR && vec_val); }
  bool ValueIsMap() const { return (value_type == TYPE_MAP && map_val); }

  bool ValueIsPrimitive() const {
    return (value_type > TYPE_UNKNOWN && value_type < TYPE_PRIMITIVE_MAX);
  }
  bool ValueIsBool() const { return value_type == TYPE_BOOL; }
  bool ValueIsChar() const { return value_type == TYPE_CHAR; }
  bool ValueIsStr() const { return value_type == TYPE_STRING; }
  bool ValueIsF32() const { return value_type == TYPE_F32; }
  bool ValueIsF64() const { return value_type == TYPE_F64; }
  bool ValueIsI8() const { return value_type == TYPE_I8; }
  bool ValueIsI16() const { return value_type == TYPE_I16; }
  bool ValueIsI32() const { return value_type == TYPE_I32; }
  bool ValueIsI64() const { return value_type == TYPE_I64; }
  bool ValueIsU8() const { return value_type == TYPE_U8; }
  bool ValueIsU16() const { return value_type == TYPE_U16; }
  bool ValueIsU32() const { return value_type == TYPE_U32; }
  bool ValueIsU64() const { return value_type == TYPE_U64; }
};

struct TypeDeclaration {
  NonPrimitiveType declaration_type = NONPRIMITIVE_TYPE_UNKNOWN;
  // May be one of the following.
  shared_ptr<Struct> st;
  shared_ptr<Variant> var;
  shared_ptr<Vector> vec;
  shared_ptr<Map> map;
  bool IsStruct() const {
    return (declaration_type == NONPRIMITIVE_TYPE_STRUCT && st);
  }
  bool HasStructIdentifier(const string& identifier) const {
    return (st && *st->identifier == identifier);
  }
  bool IsVariant() const {
    return (declaration_type == NONPRIMITIVE_TYPE_VARIANT && var);
  }
  bool HasVaraintIdentifier(const string& identifier) const {
    return (var && *var->identifier == identifier);
  }
  bool IsVector() const {
    return (declaration_type == NONPRIMITIVE_TYPE_VECTOR && vec);
  }
  bool HasVectorIdentifier(const string& identifier) const {
    return (vec && *vec->identifier == identifier);
  }
  bool IsMap() const {
    return (declaration_type == NONPRIMITIVE_TYPE_MAP && map);
  }
  bool HasMapIdentifier(const string& identifier) const {
    return (map && *map->identifier == identifier);
  }

  shared_ptr<Struct> GetStruct() { return st; };
  shared_ptr<Variant> GetVariant() { return var; };
  shared_ptr<Vector> GetVector() { return vec; };
  shared_ptr<Map> GetMap() { return map; };
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

  shared_ptr<Struct> GetStruct(const string& identifier) {
    for (auto t : types) {
      if (t->IsStruct() && t->HasStructIdentifier(identifier)) {
        return t->st;
      }
    }
    return nullptr;
  }
};

struct SymRef {
  shared_ptr<string> id;
};

}  // namespace table
}  // namespace td

#endif  // PARSER_TABLE_H__
