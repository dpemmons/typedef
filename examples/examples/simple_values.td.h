#ifndef __EXAMPLES_SIMPLE_VALUES_TD_CPP_H__
#define __EXAMPLES_SIMPLE_VALUES_TD_CPP_H__

#include <cstdint>
#include <map>
#include <memory>
#include <ostream>
#include <string>
#include <variant>
#include <vector>


// clang-format off
#if defined(_MSC_VER)

  #ifndef TD_MANUALLY_ALIGNED_STRUCT
  #define TD_MANUALLY_ALIGNED_STRUCT(alignment) \
    __pragma(pack(1)) \
    struct __declspec(align(alignment))
  #endif  // TD_MANUALLY_ALIGNED_STRUCT

  #ifndef TD_STRUCT_END
  #define TD_STRUCT_END(name, size) \
    __pragma(pack()) \
    static_assert(sizeof(name) == size, "compiler breaks packing rules")
  #endif  // TD_STRUCT_END

#elif defined(__GNUC__) || defined(__clang__) || defined(__ICCARM__)

  #ifndef TD_MANUALLY_ALIGNED_STRUCT
  #define TD_MANUALLY_ALIGNED_STRUCT(alignment) \
    _Pragma("pack(1)") \
    struct __attribute__((aligned(alignment)))
  #endif  // TD_MANUALLY_ALIGNED_STRUCT

  #ifndef TD_STRUCT_END
  #define TD_STRUCT_END(name, size) \
    _Pragma("pack()") \
    static_assert(sizeof(name) == size, "compiler breaks packing rules")
  #endif  // TD_STRUCT_END

#else
  #error Please define structure alignment macros for this compiler.
#endif
// clang-format on

#if (!defined(_MSC_VER) || _MSC_VER > 1600) && \
    (!defined(__GNUC__) || (__GNUC__ * 100 + __GNUC_MINOR__ >= 407)) || \
    defined(__clang__)
  #define TD_FINAL_CLASS final
  #define TD_OVERRIDE override
  #define TD_EXPLICIT_CPP11 explicit
#else
  #define TD_FINAL_CLASS
  #define TD_OVERRIDE
  #define TD_EXPLICIT_CPP11
#endif


// struct forward declarations
class MutableMapA;
class MutableStructA;
class MutableStructB;
class MutableStructC;
class MutableStructD;
class MutableVariantA;
class MutableVecA;
class MutableVecB;

// value declarations
typedef std::string VAL;
extern VAL _VAL;
typedef char32_t ValB;
extern ValB _ValB;
typedef bool ValBool;
extern ValBool _ValBool;
typedef bool ValBool2;
extern ValBool2 _ValBool2;
typedef char32_t ValC;
extern ValC _ValC;
typedef std::string ValD;
extern ValD _ValD;
typedef std::string ValE;
extern ValE _ValE;
typedef std::string ValRaw;
extern ValRaw _ValRaw;
typedef uint16_t Val_u16;
extern Val_u16 _Val_u16;
typedef uint16_t Val_u16_suffix;
extern Val_u16_suffix _Val_u16_suffix;
typedef uint32_t Val_u32;
extern Val_u32 _Val_u32;
typedef uint32_t Val_u32_suffix;
extern Val_u32_suffix _Val_u32_suffix;
typedef uint64_t Val_u64;
extern Val_u64 _Val_u64;
typedef uint64_t Val_u64_suffix;
extern Val_u64_suffix _Val_u64_suffix;
typedef uint8_t Val_u8;
extern Val_u8 _Val_u8;
typedef uint8_t Val_u8_suffix;
extern Val_u8_suffix _Val_u8_suffix;
typedef char32_t impliedChar;
extern impliedChar _impliedChar;
typedef std::string impliedStr;
extern impliedStr _impliedStr;
typedef float val_f32;
extern val_f32 _val_f32;
typedef float val_f32_bare;
extern val_f32_bare _val_f32_bare;
typedef float val_f32_suffix;
extern val_f32_suffix _val_f32_suffix;
typedef double val_f64;
extern val_f64 _val_f64;
typedef double val_f64_suffix;
extern val_f64_suffix _val_f64_suffix;
typedef int32_t val_i32;
extern val_i32 _val_i32;
typedef int32_t val_i32_bare2;
extern val_i32_bare2 _val_i32_bare2;
typedef int32_t val_i32_bare__2118;
extern val_i32_bare__2118 _val_i32_bare__2118;
typedef int32_t _0440_0443_0441_0441_043a_0438_0439__0438_0434_0435_043d_0442_0438_0444_0438_043a_0430_0442_043e_0440;
extern _0440_0443_0441_0441_043a_0438_0439__0438_0434_0435_043d_0442_0438_0444_0438_043a_0430_0442_043e_0440 __0440_0443_0441_0441_043a_0438_0439__0438_0434_0435_043d_0442_0438_0444_0438_043a_0430_0442_043e_0440;

class MutableMapA : public std::map<int32_t, std::string> {

  public:
    MutableMapA() {};

    friend std::ostream& operator<<(std::ostream& os, const MutableMapA& obj);

  private:

};


class MutableStructA TD_FINAL_CLASS {
  public:
    MutableStructA() {};
    MutableStructA(
      bool _example_bool,
      char32_t _example_char,
      float _example_f32,
      double _example_f64,
      int16_t _example_i16,
      int32_t _example_i32,
      int64_t _example_i64,
      int8_t _example_i8,
      std::string const& _example_str,
      uint16_t _example_u16,
      uint32_t _example_u32,
      uint64_t _example_u64,
      uint8_t _example_u8,
      bool __foo = false) :
      example_bool_(std::move(_example_bool)),
      example_char_(std::move(_example_char)),
      example_f32_(std::move(_example_f32)),
      example_f64_(std::move(_example_f64)),
      example_i16_(std::move(_example_i16)),
      example_i32_(std::move(_example_i32)),
      example_i64_(std::move(_example_i64)),
      example_i8_(std::move(_example_i8)),
      example_str_(std::move(_example_str)),
      example_u16_(std::move(_example_u16)),
      example_u32_(std::move(_example_u32)),
      example_u64_(std::move(_example_u64)),
      example_u8_(std::move(_example_u8)),
      __foo(false) {}

    bool example_bool() const { return example_bool_; }
    void example_bool(bool val) { example_bool_ = val; }

    char32_t example_char() const { return example_char_; }
    void example_char(char32_t val) { example_char_ = val; }

    float example_f32() const { return example_f32_; }
    void example_f32(float val) { example_f32_ = val; }

    double example_f64() const { return example_f64_; }
    void example_f64(double val) { example_f64_ = val; }

    int16_t example_i16() const { return example_i16_; }
    void example_i16(int16_t val) { example_i16_ = val; }

    int32_t example_i32() const { return example_i32_; }
    void example_i32(int32_t val) { example_i32_ = val; }

    int64_t example_i64() const { return example_i64_; }
    void example_i64(int64_t val) { example_i64_ = val; }

    int8_t example_i8() const { return example_i8_; }
    void example_i8(int8_t val) { example_i8_ = val; }

    std::string_view example_str() const { return example_str_; }
    void example_str(std::string_view const& val) { example_str_ = val; }

    uint16_t example_u16() const { return example_u16_; }
    void example_u16(uint16_t val) { example_u16_ = val; }

    uint32_t example_u32() const { return example_u32_; }
    void example_u32(uint32_t val) { example_u32_ = val; }

    uint64_t example_u64() const { return example_u64_; }
    void example_u64(uint64_t val) { example_u64_ = val; }

    uint8_t example_u8() const { return example_u8_; }
    void example_u8(uint8_t val) { example_u8_ = val; }

    friend std::ostream& operator<<(std::ostream& os, const MutableStructA& obj);

  private:
    bool example_bool_ = false;
    char32_t example_char_ = 0;
    float example_f32_ = 0;
    double example_f64_ = 0;
    int16_t example_i16_ = 0;
    int32_t example_i32_ = 0;
    int64_t example_i64_ = 0;
    int8_t example_i8_ = 0;
    std::string example_str_;
    uint16_t example_u16_ = 0;
    uint32_t example_u32_ = 0;
    uint64_t example_u64_ = 0;
    uint8_t example_u8_ = 0;
    bool __foo; // to simplify codegen. will remove in future versions...
};

bool operator==(const MutableStructA &lhs, const MutableStructA &rhs);
inline bool operator!=(const MutableStructA &lhs, const MutableStructA &rhs) { return !(lhs == rhs); };


class MutableStructB TD_FINAL_CLASS {
  public:
    MutableStructB() {};
    MutableStructB(
      bool _example_bool,
      char32_t _example_char,
      float _example_f32,
      double _example_f64,
      int16_t _example_i16,
      int32_t _example_i32,
      int64_t _example_i64,
      int8_t _example_i8,
      std::string const& _example_str,
      uint16_t _example_u16,
      uint32_t _example_u32,
      uint64_t _example_u64,
      uint8_t _example_u8,
      bool __foo = false) :
      example_bool_(std::move(_example_bool)),
      example_char_(std::move(_example_char)),
      example_f32_(std::move(_example_f32)),
      example_f64_(std::move(_example_f64)),
      example_i16_(std::move(_example_i16)),
      example_i32_(std::move(_example_i32)),
      example_i64_(std::move(_example_i64)),
      example_i8_(std::move(_example_i8)),
      example_str_(std::move(_example_str)),
      example_u16_(std::move(_example_u16)),
      example_u32_(std::move(_example_u32)),
      example_u64_(std::move(_example_u64)),
      example_u8_(std::move(_example_u8)),
      __foo(false) {}

    bool example_bool() const { return example_bool_; }
    void example_bool(bool val) { example_bool_ = val; }

    char32_t example_char() const { return example_char_; }
    void example_char(char32_t val) { example_char_ = val; }

    float example_f32() const { return example_f32_; }
    void example_f32(float val) { example_f32_ = val; }

    double example_f64() const { return example_f64_; }
    void example_f64(double val) { example_f64_ = val; }

    int16_t example_i16() const { return example_i16_; }
    void example_i16(int16_t val) { example_i16_ = val; }

    int32_t example_i32() const { return example_i32_; }
    void example_i32(int32_t val) { example_i32_ = val; }

    int64_t example_i64() const { return example_i64_; }
    void example_i64(int64_t val) { example_i64_ = val; }

    int8_t example_i8() const { return example_i8_; }
    void example_i8(int8_t val) { example_i8_ = val; }

    std::string_view example_str() const { return example_str_; }
    void example_str(std::string_view const& val) { example_str_ = val; }

    uint16_t example_u16() const { return example_u16_; }
    void example_u16(uint16_t val) { example_u16_ = val; }

    uint32_t example_u32() const { return example_u32_; }
    void example_u32(uint32_t val) { example_u32_ = val; }

    uint64_t example_u64() const { return example_u64_; }
    void example_u64(uint64_t val) { example_u64_ = val; }

    uint8_t example_u8() const { return example_u8_; }
    void example_u8(uint8_t val) { example_u8_ = val; }

    friend std::ostream& operator<<(std::ostream& os, const MutableStructB& obj);

  private:
    bool example_bool_ = true;
    char32_t example_char_ = *(char32_t*)"🔥";
    float example_f32_ = 3.14;
    double example_f64_ = 5.16;
    int16_t example_i16_ = -16;
    int32_t example_i32_ = -32;
    int64_t example_i64_ = -64;
    int8_t example_i8_ = -8;
    std::string example_str_ = R"LITERAL(hello world)LITERAL";
    uint16_t example_u16_ = 16;
    uint32_t example_u32_ = 32;
    uint64_t example_u64_ = 64;
    uint8_t example_u8_ = 8;
    bool __foo; // to simplify codegen. will remove in future versions...
};

bool operator==(const MutableStructB &lhs, const MutableStructB &rhs);
inline bool operator!=(const MutableStructB &lhs, const MutableStructB &rhs) { return !(lhs == rhs); };


class MutableStructC TD_FINAL_CLASS {
  public:
    MutableStructC() {};
    MutableStructC(
      std::string const& _asdf,
      int32_t _jkl,
      int32_t _zxcv,
      bool __foo = false) :
      asdf_(std::move(_asdf)),
      jkl_(std::move(_jkl)),
      zxcv_(std::move(_zxcv)),
      __foo(false) {}

    std::string_view asdf() const { return asdf_; }
    void asdf(std::string_view const& val) { asdf_ = val; }

    int32_t jkl() const { return jkl_; }
    void jkl(int32_t val) { jkl_ = val; }

    int32_t zxcv() const { return zxcv_; }
    void zxcv(int32_t val) { zxcv_ = val; }

    friend std::ostream& operator<<(std::ostream& os, const MutableStructC& obj);

  private:
    std::string asdf_ = R"LITERAL(StructA)LITERAL";
    int32_t jkl_ = 0;
    int32_t zxcv_ = 0;
    bool __foo; // to simplify codegen. will remove in future versions...
};

bool operator==(const MutableStructC &lhs, const MutableStructC &rhs);
inline bool operator!=(const MutableStructC &lhs, const MutableStructC &rhs) { return !(lhs == rhs); };


class MutableStructD TD_FINAL_CLASS {
  public:
    MutableStructD() {};
    MutableStructD(
      std::string const& _a_struct,
      std::string const& _b_variant,
      std::string const& _c_vec,
      std::string const& _d_map,
      bool __foo = false) :
      a_struct_(std::move(_a_struct)),
      b_variant_(std::move(_b_variant)),
      c_vec_(std::move(_c_vec)),
      d_map_(std::move(_d_map)),
      __foo(false) {}

    std::string_view a_struct() const { return a_struct_; }
    void a_struct(std::string_view const& val) { a_struct_ = val; }

    std::string_view b_variant() const { return b_variant_; }
    void b_variant(std::string_view const& val) { b_variant_ = val; }

    std::string_view c_vec() const { return c_vec_; }
    void c_vec(std::string_view const& val) { c_vec_ = val; }

    std::string_view d_map() const { return d_map_; }
    void d_map(std::string_view const& val) { d_map_ = val; }

    friend std::ostream& operator<<(std::ostream& os, const MutableStructD& obj);

  private:
    std::string a_struct_ = R"LITERAL(StructA)LITERAL";
    std::string b_variant_ = R"LITERAL(VariantA)LITERAL";
    std::string c_vec_ = R"LITERAL(VecA)LITERAL";
    std::string d_map_ = R"LITERAL(MapA)LITERAL";
    bool __foo; // to simplify codegen. will remove in future versions...
};

bool operator==(const MutableStructD &lhs, const MutableStructD &rhs);
inline bool operator!=(const MutableStructD &lhs, const MutableStructD &rhs) { return !(lhs == rhs); };


class MutableVariantA TD_FINAL_CLASS {
  public:
    MutableVariantA() {};
    bool Isa() const { return std::holds_alternative<a_t>(value_); };
    std::string_view a() const { return std::get<a_t>(value_); };
    std::string& a() { return std::get<a_t>(value_); };
    void a(std::string_view _val) { value_ = std::string(_val); };

    bool Isb() const { return std::holds_alternative<b_t>(value_); };
    std::string_view b() const { return std::get<b_t>(value_); };
    std::string& b() { return std::get<b_t>(value_); };
    void b(std::string_view _val) { value_ = std::string(_val); };

    bool Isc() const { return std::holds_alternative<c_t>(value_); };
    std::string_view c() const { return std::get<c_t>(value_); };
    std::string& c() { return std::get<c_t>(value_); };
    void c(std::string_view _val) { value_ = std::string(_val); };

    bool Isd() const { return std::holds_alternative<d_t>(value_); };
    bool d() const { return std::get<d_t>(value_); };
    void d(bool _val) { value_ = (d_t)_val; };

    bool Ise() const { return std::holds_alternative<e_t>(value_); };
    bool e() const { return std::get<e_t>(value_); };
    void e(bool _val) { value_ = (e_t)_val; };

    bool Isf() const { return std::holds_alternative<f_t>(value_); };
    int32_t f() const { return std::get<f_t>(value_); };
    void f(int32_t _val) { value_ = _val; };

    bool Isg() const { return std::holds_alternative<g_t>(value_); };
    char32_t g() const { return std::get<g_t>(value_); };
    void g(char32_t _val) { value_ = _val; };

    bool Ish() const { return std::holds_alternative<h_t>(value_); };
    std::string_view h() const { return std::get<h_t>(value_); };
    std::string& h() { return std::get<h_t>(value_); };
    void h(std::string_view _val) { value_ = std::string(_val); };

    bool isEqual(const MutableVariantA &rhs) const { return value_ == rhs.value_; }

    friend std::ostream& operator<<(std::ostream& os, const MutableVariantA& obj);

  private:
    typedef std::string a_t;
    typedef std::string b_t;
    typedef std::string c_t;
    typedef bool d_t;
    typedef bool e_t;
    typedef int32_t f_t;
    typedef char32_t g_t;
    typedef std::string h_t;

  std::variant<
      a_t,
      b_t,
      c_t,
      d_t,
      e_t,
      f_t,
      g_t,
      h_t
  > value_;

};

bool operator==(const MutableVariantA &lhs, const MutableVariantA &rhs);
inline bool operator!=(const MutableVariantA &lhs, const MutableVariantA &rhs) { return !(lhs == rhs); };


class MutableVecA : public std::vector<std::unique_ptr<MutableVecA>> {

  public:
    MutableVecA() {};

    friend std::ostream& operator<<(std::ostream& os, const MutableVecA& obj);

  private:

};


class MutableVecB : public std::vector<std::unique_ptr<MutableVecB>> {

  public:
    MutableVecB() {};

    friend std::ostream& operator<<(std::ostream& os, const MutableVecB& obj);

  private:

};




#endif  // __EXAMPLES_SIMPLE_VALUES_TD_CPP_H__
