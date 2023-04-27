#ifndef __EXAMPLES_SIMPLE_VALUES_TD_CPP_H__
#define __EXAMPLES_SIMPLE_VALUES_TD_CPP_H__

#include <cstdint>
#include <memory>
#include <ostream>
#include <string>


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
class StructA;
class StructB;
class StructC;
class VariantA;

// value declarations
extern std::string VAL;
extern char32_t ValB;
extern bool ValBool;
extern bool ValBool2;
extern char32_t ValC;
extern std::string ValD;
extern std::string ValE;
extern std::string ValRaw;
extern uint16_t Val_u16;
extern uint16_t Val_u16_suffix;
extern uint32_t Val_u32;
extern uint32_t Val_u32_suffix;
extern uint64_t Val_u64;
extern uint64_t Val_u64_suffix;
extern uint8_t Val_u8;
extern uint8_t Val_u8_suffix;
extern char32_t impliedChar;
extern std::string impliedStr;
extern float val_f32;
extern float val_f32_bare;
extern float val_f32_suffix;
extern double val_f64;
extern double val_f64_suffix;
extern int32_t val_i32;
extern int32_t val_i32_bare2;
extern int32_t val_i32_bare__2118;
extern int32_t _0440_0443_0441_0441_043a_0438_0439__0438_0434_0435_043d_0442_0438_0444_0438_043a_0430_0442_043e_0440;

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
      example_bool_(_example_bool),
      example_char_(_example_char),
      example_f32_(_example_f32),
      example_f64_(_example_f64),
      example_i16_(_example_i16),
      example_i32_(_example_i32),
      example_i64_(_example_i64),
      example_i8_(_example_i8),
      example_str_(_example_str),
      example_u16_(_example_u16),
      example_u32_(_example_u32),
      example_u64_(_example_u64),
      example_u8_(_example_u8),
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
      example_bool_(_example_bool),
      example_char_(_example_char),
      example_f32_(_example_f32),
      example_f64_(_example_f64),
      example_i16_(_example_i16),
      example_i32_(_example_i32),
      example_i64_(_example_i64),
      example_i8_(_example_i8),
      example_str_(_example_str),
      example_u16_(_example_u16),
      example_u32_(_example_u32),
      example_u64_(_example_u64),
      example_u8_(_example_u8),
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
      std::shared_ptr<MutableStructA> _asdf,
      int32_t _jkl,
      int32_t _zxcv,
      bool __foo = false) :
      asdf_(_asdf),
      jkl_(_jkl),
      zxcv_(_zxcv),
      __foo(false) {}

    std::shared_ptr<MutableStructA> asdf() const { return asdf_; }
    void asdf(std::shared_ptr<MutableStructA> val) { asdf_ = val; }

    int32_t jkl() const { return jkl_; }
    void jkl(int32_t val) { jkl_ = val; }

    int32_t zxcv() const { return zxcv_; }
    void zxcv(int32_t val) { zxcv_ = val; }

    friend std::ostream& operator<<(std::ostream& os, const MutableStructC& obj);

  private:
    std::shared_ptr<MutableStructA> asdf_;
    int32_t jkl_ = 0;
    int32_t zxcv_ = 0;
    bool __foo; // to simplify codegen. will remove in future versions...
};

bool operator==(const MutableStructC &lhs, const MutableStructC &rhs);
inline bool operator!=(const MutableStructC &lhs, const MutableStructC &rhs) { return !(lhs == rhs); };


class VariantA TD_FINAL_CLASS {
  public:

  private:
};




#endif  // __EXAMPLES_SIMPLE_VALUES_TD_CPP_H__
