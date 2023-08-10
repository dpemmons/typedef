#ifndef PARSER_TABLE_H__
#define PARSER_TABLE_H__

#include <memory>
#include <string>
#include <variant>
#include <vector>

namespace td {
namespace table2 {

using namespace std;

struct Struct;
struct Variant;
struct Vector;
struct Map;

struct Module {
  shared_ptr<string> name;

  struct Member {
    shared_ptr<string> symbol;

    enum Type { UNKNOWN, STRUCT, VARIANT, VECTOR, MAP } member_type = UNKNOWN;

    shared_ptr<Struct> st;
    shared_ptr<Variant> var;
    shared_ptr<Vector> vec;
    shared_ptr<Map> map;
  };

  vector<Member> members;
};

struct Struct {
  // If empty, it's an anonymous struct.
  shared_ptr<string> identifier;

  struct Member {
    shared_ptr<string> identifier;

    enum Type {
      UNKNOWN,
      BOOL,
      CHAR,
      STRING,
      F32,
      F64,
      I8,
      I16,
      I32,
      I64,
      U8,
      U16,
      U32,
      U64,
      STRUCT,
      VARIANT,
      VECTOR,
      MAP
    } member_type = UNKNOWN;
    variant<bool, char32_t, string, float, double, int8_t, int16_t, int32_t,
            int64_t, uint8_t, uint16_t, uint32_t, uint64_t>
        simple;

    // May be any of the following:
    shared_ptr<Struct> st;
    shared_ptr<Variant> var;
    shared_ptr<Vector> vec;
    shared_ptr<Map> map;
  };

  vector<Member> members;
};

struct Vector {
  // If empty, it's an anonymous struct.
  shared_ptr<string> identifier;

  enum Type {
    UNKNOWN,
    BOOL,
    CHAR,
    STRING,
    F32,
    F64,
    I8,
    I16,
    I32,
    I64,
    U8,
    U16,
    U32,
    U64,
    STRUCT,
    VARIANT,
    VECTOR,
    MAP
  } value_type = UNKNOWN;

  variant<bool, char32_t, string, float, double, int8_t, int16_t, int32_t,
          int64_t, uint8_t, uint16_t, uint32_t, uint64_t>
      simple_val;

  // May be any of the following:
  shared_ptr<Struct> st_val;
  shared_ptr<Variant> var_val;
  shared_ptr<Vector> vec_val;
  shared_ptr<Map> map_val;
};

struct Map {
  // If empty, it's an anonymous struct.
  shared_ptr<string> identifier;

  enum KeyType {
    KT_UNKNOWN,
    KT_BOOL,
    KT_CHAR,
    KT_STRING,
    KT_F32,
    KT_F64,
    KT_I8,
    KT_I16,
    KT_I32,
    KT_I64,
    KT_U8,
    KT_U16,
    KT_U32,
    KT_U64
  } key_type = KT_UNKNOWN;
  variant<bool, char32_t, string, float, double, int8_t, int16_t, int32_t,
          int64_t, uint8_t, uint16_t, uint32_t, uint64_t>
      simple_key;

  enum ValType {
    VT_UNKNOWN,
    VT_BOOL,
    VT_CHAR,
    VT_STRING,
    VT_F32,
    VT_F64,
    VT_I8,
    VT_I16,
    VT_I32,
    VT_I64,
    VT_U8,
    VT_U16,
    VT_U32,
    VT_U64,
    VT_STRUCT,
    VT_VARIANT,
    VT_VECTOR,
    VT_MAP
  } value_type = VT_UNKNOWN;
  variant<bool, char32_t, string, float, double, int8_t, int16_t, int32_t,
          int64_t, uint8_t, uint16_t, uint32_t, uint64_t>
      simple_val;
  shared_ptr<Struct> st_val;
  shared_ptr<Variant> var_val;
  shared_ptr<Vector> vec_val;
  shared_ptr<Map> map_val;
};

}  // namespace table2
}  // namespace td

#endif  // PARSER_TABLE_H__