#include "simple_values.td.h"

bool operator==(const MutableStructA &lhs, const MutableStructA &rhs) {
  return
    (lhs.example_bool() == rhs.example_bool()) &&
    (lhs.example_char() == rhs.example_char()) &&
    (lhs.example_f32() == rhs.example_f32()) &&
    (lhs.example_f64() == rhs.example_f64()) &&
    (lhs.example_i16() == rhs.example_i16()) &&
    (lhs.example_i32() == rhs.example_i32()) &&
    (lhs.example_i64() == rhs.example_i64()) &&
    (lhs.example_i8() == rhs.example_i8()) &&
    (lhs.example_str() == rhs.example_str()) &&
    (lhs.example_u16() == rhs.example_u16()) &&
    (lhs.example_u32() == rhs.example_u32()) &&
    (lhs.example_u64() == rhs.example_u64()) &&
    (lhs.example_u8() == rhs.example_u8()) &&
    true;
}

std::ostream& operator<<(std::ostream& os, const MutableStructA& obj) {
  os << "struct MutableStructA :\n";
  os << "  example_bool = " << obj.example_bool() << "\n";
  os << "  example_char = " << obj.example_char() << "\n";
  os << "  example_f32 = " << obj.example_f32() << "\n";
  os << "  example_f64 = " << obj.example_f64() << "\n";
  os << "  example_i16 = " << obj.example_i16() << "\n";
  os << "  example_i32 = " << obj.example_i32() << "\n";
  os << "  example_i64 = " << obj.example_i64() << "\n";
  os << "  example_i8 = " << obj.example_i8() << "\n";
  os << "  example_str = " << obj.example_str() << "\n";
  os << "  example_u16 = " << obj.example_u16() << "\n";
  os << "  example_u32 = " << obj.example_u32() << "\n";
  os << "  example_u64 = " << obj.example_u64() << "\n";
  os << "  example_u8 = " << obj.example_u8() << "\n";
  return os;
}

bool operator==(const MutableStructB &lhs, const MutableStructB &rhs) {
  return
    (lhs.example_bool() == rhs.example_bool()) &&
    (lhs.example_char() == rhs.example_char()) &&
    (lhs.example_f32() == rhs.example_f32()) &&
    (lhs.example_f64() == rhs.example_f64()) &&
    (lhs.example_i16() == rhs.example_i16()) &&
    (lhs.example_i32() == rhs.example_i32()) &&
    (lhs.example_i64() == rhs.example_i64()) &&
    (lhs.example_i8() == rhs.example_i8()) &&
    (lhs.example_str() == rhs.example_str()) &&
    (lhs.example_u16() == rhs.example_u16()) &&
    (lhs.example_u32() == rhs.example_u32()) &&
    (lhs.example_u64() == rhs.example_u64()) &&
    (lhs.example_u8() == rhs.example_u8()) &&
    true;
}

std::ostream& operator<<(std::ostream& os, const MutableStructB& obj) {
  os << "struct MutableStructB :\n";
  os << "  example_bool = " << obj.example_bool() << "\n";
  os << "  example_char = " << obj.example_char() << "\n";
  os << "  example_f32 = " << obj.example_f32() << "\n";
  os << "  example_f64 = " << obj.example_f64() << "\n";
  os << "  example_i16 = " << obj.example_i16() << "\n";
  os << "  example_i32 = " << obj.example_i32() << "\n";
  os << "  example_i64 = " << obj.example_i64() << "\n";
  os << "  example_i8 = " << obj.example_i8() << "\n";
  os << "  example_str = " << obj.example_str() << "\n";
  os << "  example_u16 = " << obj.example_u16() << "\n";
  os << "  example_u32 = " << obj.example_u32() << "\n";
  os << "  example_u64 = " << obj.example_u64() << "\n";
  os << "  example_u8 = " << obj.example_u8() << "\n";
  return os;
}

bool operator==(const MutableStructC &lhs, const MutableStructC &rhs) {
  return
    (lhs.jkl() == rhs.jkl()) &&
    (lhs.zxcv() == rhs.zxcv()) &&
    true;
}

std::ostream& operator<<(std::ostream& os, const MutableStructC& obj) {
  os << "struct MutableStructC :\n";
  os << "  jkl = " << obj.jkl() << "\n";
  os << "  zxcv = " << obj.zxcv() << "\n";
  return os;
}

