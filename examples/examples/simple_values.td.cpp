#include "simple_values.td.h"

VAL _VAL = R"LITERAL(hello)LITERAL";
ValB _ValB = *(char32_t*)"😀";
ValBool _ValBool = true;
ValBool2 _ValBool2 = true;
ValC _ValC = *(char32_t*)"🔥";
ValD _ValD = R"LITERAL(hello world)LITERAL";
ValE _ValE = R"LITERAL(Hello,
 😀!)LITERAL";
ValRaw _ValRaw = R"LITERAL(
👋 Hello world, oh how you spin!
🌍 A place of wonder, let the journey begin.
💻 Code and keystrokes, a language we share.
👨‍💻 Together we create, a world beyond compare.
)LITERAL";
Val_u16 _Val_u16 = 88;
Val_u16_suffix _Val_u16_suffix = 88;
Val_u32 _Val_u32 = 88;
Val_u32_suffix _Val_u32_suffix = 88;
Val_u64 _Val_u64 = 88;
Val_u64_suffix _Val_u64_suffix = 88;
Val_u8 _Val_u8 = 88;
Val_u8_suffix _Val_u8_suffix = 88;
impliedChar _impliedChar = *(char32_t*)"c";
impliedStr _impliedStr = R"LITERAL(a string)LITERAL";
val_f32 _val_f32 = 3.1415927;
val_f32_bare _val_f32_bare = 3.14;
val_f32_suffix _val_f32_suffix = 3.14;
val_f64 _val_f64 = 3.141592653589793;
val_f64_suffix _val_f64_suffix = 3.141592653589793;
val_i32 _val_i32 = -32;
val_i32_bare2 _val_i32_bare2 = 214748364;
val_i32_bare__2118 _val_i32_bare__2118 = 2147483647;
_0440_0443_0441_0441_043a_0438_0439__0438_0434_0435_043d_0442_0438_0444_0438_043a_0430_0442_043e_0440 __0440_0443_0441_0441_043a_0438_0439__0438_0434_0435_043d_0442_0438_0444_0438_043a_0430_0442_043e_0440 = 2;

std::ostream& operator<<(std::ostream& os, const MutableMapA& obj) {
  os << "map MutableMapA :\n";
  os << "  something.\n";
  return os;
}

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
    (lhs.asdf() == rhs.asdf()) &&
    (lhs.jkl() == rhs.jkl()) &&
    (lhs.zxcv() == rhs.zxcv()) &&
    true;
}

std::ostream& operator<<(std::ostream& os, const MutableStructC& obj) {
  os << "struct MutableStructC :\n";
  if (obj.asdf()) {
    os << "  asdf = " << *obj.asdf() << "\n";
  } else {
    os << "  asdf = empty;\n";
  }
  os << "  jkl = " << obj.jkl() << "\n";
  os << "  zxcv = " << obj.zxcv() << "\n";
  return os;
}

bool operator==(const MutableStructD &lhs, const MutableStructD &rhs) {
  return
    (lhs.a_struct() == rhs.a_struct()) &&
    (lhs.b_variant() == rhs.b_variant()) &&
    (lhs.c_vec() == rhs.c_vec()) &&
    (lhs.d_map() == rhs.d_map()) &&
    true;
}

std::ostream& operator<<(std::ostream& os, const MutableStructD& obj) {
  os << "struct MutableStructD :\n";
  if (obj.a_struct()) {
    os << "  a_struct = " << *obj.a_struct() << "\n";
  } else {
    os << "  a_struct = empty;\n";
  }
  if (obj.b_variant()) {
    os << "  b_variant = " << *obj.b_variant() << "\n";
  } else {
    os << "  b_variant = empty;\n";
  }
  if (obj.c_vec()) {
    os << "  c_vec = " << *obj.c_vec() << "\n";
  } else {
    os << "  c_vec = empty;\n";
  }
  if (obj.d_map()) {
    os << "  d_map = " << *obj.d_map() << "\n";
  } else {
    os << "  d_map = empty;\n";
  }
  return os;
}

bool operator==(const MutableVariantA &lhs, const MutableVariantA &rhs) {
  return lhs.isEqual(rhs);
}

std::ostream& operator<<(std::ostream& os, const MutableVariantA& obj) {
  os << "variant MutableVariantA :\n";
  os << "  something.\n";
  return os;
}

std::ostream& operator<<(std::ostream& os, const MutableVecA& obj) {
  os << "vector MutableVecA :\n";
  os << "  something.\n";
  return os;
}

std::ostream& operator<<(std::ostream& os, const MutableVecB& obj) {
  os << "vector MutableVecB :\n";
  os << "  something.\n";
  return os;
}

