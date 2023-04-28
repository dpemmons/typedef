#include "simple_values.td.h"

std::string VAL = R"LITERAL(hello)LITERAL";
char32_t ValB = *(char32_t*)"😀";
bool ValBool = true;
bool ValBool2 = true;
char32_t ValC = *(char32_t*)"🔥";
std::string ValD = R"LITERAL(hello world)LITERAL";
std::string ValE = R"LITERAL(Hello,
 😀!)LITERAL";
std::string ValRaw = R"LITERAL(
👋 Hello world, oh how you spin!
🌍 A place of wonder, let the journey begin.
💻 Code and keystrokes, a language we share.
👨‍💻 Together we create, a world beyond compare.
)LITERAL";
uint16_t Val_u16 = 88;
uint16_t Val_u16_suffix = 88;
uint32_t Val_u32 = 88;
uint32_t Val_u32_suffix = 88;
uint64_t Val_u64 = 88;
uint64_t Val_u64_suffix = 88;
uint8_t Val_u8 = 88;
uint8_t Val_u8_suffix = 88;
char32_t impliedChar = *(char32_t*)"c";
std::string impliedStr = R"LITERAL(a string)LITERAL";
float val_f32 = 3.1415927;
float val_f32_bare = 3.14;
float val_f32_suffix = 3.14;
double val_f64 = 3.141592653589793;
double val_f64_suffix = 3.141592653589793;
int32_t val_i32 = -32;
int32_t val_i32_bare2 = 214748364;
int32_t val_i32_bare__2118 = 2147483647;
int32_t _0440_0443_0441_0441_043a_0438_0439__0438_0434_0435_043d_0442_0438_0444_0438_043a_0430_0442_043e_0440 = 2;

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
  os << "  asdf = " << obj.asdf() << "\n";
  os << "  jkl = " << obj.jkl() << "\n";
  os << "  zxcv = " << obj.zxcv() << "\n";
  return os;
}

bool operator==(const MutableStructD &lhs, const MutableStructD &rhs) {
  return
    (lhs.i() == rhs.i()) &&
    (lhs.j() == rhs.j()) &&
    true;
}

std::ostream& operator<<(std::ostream& os, const MutableStructD& obj) {
  os << "struct MutableStructD :\n";
  os << "  i = " << obj.i() << "\n";
  os << "  j = " << obj.j() << "\n";
  return os;
}

bool operator==(const MutableVariantA &lhs, const MutableVariantA &rhs) {
  return lhs.isEqual(rhs);
}

std::ostream& operator<<(std::ostream& os, const MutableVariantA& obj) {
  os << "variant VariantA :\n";
  os << "  something.\n";
  return os;
}

