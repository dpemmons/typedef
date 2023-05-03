#ifndef __EXAMPLES_SIMPLE_VALUES_TD_CPP_H__
#define __EXAMPLES_SIMPLE_VALUES_TD_CPP_H__

#include <cassert>
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


namespace sv {
namespace t {

// struct forward declarations
class MutableMapA;
class MutableMapB;
class MutableMapC;
class MutableMapD;
class MutableStructA;
class MutableStructB;
class MutableStructC;
class MutableStructD;
class MutableVariantA;
class MutableVariantB;
class MutableVecA;
class MutableVecB;
class MutableVecC;
class MutableVecD;

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


class MutableMapB : public std::map<std::string, std::unique_ptr<MutableStructC>> {

  public:
    MutableMapB() {};

    friend std::ostream& operator<<(std::ostream& os, const MutableMapB& obj);

  private:

};


class MutableMapC : public std::map<std::string, std::unique_ptr<MutableVecA>> {

  public:
    MutableMapC() {};

    friend std::ostream& operator<<(std::ostream& os, const MutableMapC& obj);

  private:

};


class MutableMapD : public std::map<std::string, std::unique_ptr<MutableVariantA>> {

  public:
    MutableMapD() {};

    friend std::ostream& operator<<(std::ostream& os, const MutableMapD& obj);

  private:

};


class MutableStructA TD_FINAL_CLASS {
  public:
    MutableStructA() {};
    ~MutableStructA() {};
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
    ~MutableStructB() {};
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
    ~MutableStructC() {};
    MutableStructC(
      std::unique_ptr<MutableStructA> _asdf,
      int32_t _jkl,
      int32_t _zxcv,
      bool __foo = false) :
      asdf_(std::move(_asdf)),
      jkl_(std::move(_jkl)),
      zxcv_(std::move(_zxcv)),
      __foo(false) {}

    std::unique_ptr<MutableStructA>& asdf() { return asdf_; }
    const std::unique_ptr<MutableStructA>& asdf() const { return asdf_; }
    void asdf(std::unique_ptr<MutableStructA> val) { asdf_ = std::move(val); }

    int32_t jkl() const { return jkl_; }
    void jkl(int32_t val) { jkl_ = val; }

    int32_t zxcv() const { return zxcv_; }
    void zxcv(int32_t val) { zxcv_ = val; }

    friend std::ostream& operator<<(std::ostream& os, const MutableStructC& obj);

  private:
    std::unique_ptr<MutableStructA> asdf_;
    int32_t jkl_ = 0;
    int32_t zxcv_ = 0;
    bool __foo; // to simplify codegen. will remove in future versions...
};

bool operator==(const MutableStructC &lhs, const MutableStructC &rhs);
inline bool operator!=(const MutableStructC &lhs, const MutableStructC &rhs) { return !(lhs == rhs); };


class MutableStructD TD_FINAL_CLASS {
  public:
    MutableStructD() {};
    ~MutableStructD() {};
    MutableStructD(
      std::unique_ptr<MutableStructA> _a_struct,
      std::unique_ptr<MutableVariantA> _b_variant,
      std::unique_ptr<MutableVecA> _c_vec,
      std::unique_ptr<MutableMapA> _d_map,
      bool __foo = false) :
      a_struct_(std::move(_a_struct)),
      b_variant_(std::move(_b_variant)),
      c_vec_(std::move(_c_vec)),
      d_map_(std::move(_d_map)),
      __foo(false) {}

    std::unique_ptr<MutableStructA>& a_struct() { return a_struct_; }
    const std::unique_ptr<MutableStructA>& a_struct() const { return a_struct_; }
    void a_struct(std::unique_ptr<MutableStructA> val) { a_struct_ = std::move(val); }

    std::unique_ptr<MutableVariantA>& b_variant() { return b_variant_; }
    const std::unique_ptr<MutableVariantA>& b_variant() const { return b_variant_; }
    void b_variant(std::unique_ptr<MutableVariantA> val) { b_variant_ = std::move(val); }

    std::unique_ptr<MutableVecA>& c_vec() { return c_vec_; }
    const std::unique_ptr<MutableVecA>& c_vec() const { return c_vec_; }
    void c_vec(std::unique_ptr<MutableVecA> val) { c_vec_ = std::move(val); }

    std::unique_ptr<MutableMapA>& d_map() { return d_map_; }
    const std::unique_ptr<MutableMapA>& d_map() const { return d_map_; }
    void d_map(std::unique_ptr<MutableMapA> val) { d_map_ = std::move(val); }

    friend std::ostream& operator<<(std::ostream& os, const MutableStructD& obj);

  private:
    std::unique_ptr<MutableStructA> a_struct_;
    std::unique_ptr<MutableVariantA> b_variant_;
    std::unique_ptr<MutableVecA> c_vec_;
    std::unique_ptr<MutableMapA> d_map_;
    bool __foo; // to simplify codegen. will remove in future versions...
};

bool operator==(const MutableStructD &lhs, const MutableStructD &rhs);
inline bool operator!=(const MutableStructD &lhs, const MutableStructD &rhs) { return !(lhs == rhs); };


class MutableVariantA TD_FINAL_CLASS {
  public:
    MutableVariantA() {};
    ~MutableVariantA() {};
    enum class Tag {
    __TAGS_BEGIN = 0,
    TAG_a,
    TAG_b,
    __TAGS_END,
    };

    bool Isa() const { return tag_ == Tag::TAG_a; };
    bool a() const {
       assert(tag_ == Tag::TAG_a);
       return a_;
    };
    void a(bool _val) { a_ = _val; };

    bool Isb() const { return tag_ == Tag::TAG_b; };
    int8_t b() const {
       assert(tag_ == Tag::TAG_b);
       return b_;
    };
    void b(int8_t _val) { b_ = _val; };

    bool isEqual(const MutableVariantA &rhs) const {
      if (tag_ != rhs.tag_) { return false; };
      // TODO(dpemmons) this.
      return false;
    }

    friend std::ostream& operator<<(std::ostream& os, const MutableVariantA& obj);

  private:
    Tag tag_ = Tag::__TAGS_BEGIN;

  union {
      bool a_;
      int8_t b_;
  };

};

bool operator==(const MutableVariantA &lhs, const MutableVariantA &rhs);
inline bool operator!=(const MutableVariantA &lhs, const MutableVariantA &rhs) { return !(lhs == rhs); };


class MutableVariantB TD_FINAL_CLASS {
  public:
    MutableVariantB() {};
    ~MutableVariantB() {};
    enum class Tag {
    __TAGS_BEGIN = 0,
    TAG_a,
    TAG_b,
    TAG_c,
    TAG_d,
    TAG_e,
    TAG_f,
    TAG_g,
    TAG_h,
    TAG_i,
    TAG_j,
    TAG_k,
    TAG_mapa,
    TAG_sa,
    TAG_sb,
    TAG_sc,
    TAG_va,
    TAG_vara,
    __TAGS_END,
    };

    bool Isa() const { return tag_ == Tag::TAG_a; };
    bool a() const {
       assert(tag_ == Tag::TAG_a);
       return a_;
    };
    void a(bool _val) { a_ = _val; };

    bool Isb() const { return tag_ == Tag::TAG_b; };
    char32_t b() const {
       assert(tag_ == Tag::TAG_b);
       return b_;
    };
    void b(char32_t _val) { b_ = _val; };

    bool Isc() const { return tag_ == Tag::TAG_c; };
    std::string_view c() const {
       assert(tag_ == Tag::TAG_c);
       return c_;
    };
    std::string& c() {
       assert(tag_ == Tag::TAG_c);
       return c_;
    };
    void c(std::string_view _val) { c_ = std::string(_val); };

    bool Isd() const { return tag_ == Tag::TAG_d; };
    uint8_t d() const {
       assert(tag_ == Tag::TAG_d);
       return d_;
    };
    void d(uint8_t _val) { d_ = _val; };

    bool Ise() const { return tag_ == Tag::TAG_e; };
    uint16_t e() const {
       assert(tag_ == Tag::TAG_e);
       return e_;
    };
    void e(uint16_t _val) { e_ = _val; };

    bool Isf() const { return tag_ == Tag::TAG_f; };
    uint32_t f() const {
       assert(tag_ == Tag::TAG_f);
       return f_;
    };
    void f(uint32_t _val) { f_ = _val; };

    bool Isg() const { return tag_ == Tag::TAG_g; };
    uint64_t g() const {
       assert(tag_ == Tag::TAG_g);
       return g_;
    };
    void g(uint64_t _val) { g_ = _val; };

    bool Ish() const { return tag_ == Tag::TAG_h; };
    int8_t h() const {
       assert(tag_ == Tag::TAG_h);
       return h_;
    };
    void h(int8_t _val) { h_ = _val; };

    bool Isi() const { return tag_ == Tag::TAG_i; };
    int16_t i() const {
       assert(tag_ == Tag::TAG_i);
       return i_;
    };
    void i(int16_t _val) { i_ = _val; };

    bool Isj() const { return tag_ == Tag::TAG_j; };
    int32_t j() const {
       assert(tag_ == Tag::TAG_j);
       return j_;
    };
    void j(int32_t _val) { j_ = _val; };

    bool Isk() const { return tag_ == Tag::TAG_k; };
    int64_t k() const {
       assert(tag_ == Tag::TAG_k);
       return k_;
    };
    void k(int64_t _val) { k_ = _val; };

    bool Ismapa() const { return tag_ == Tag::TAG_mapa; };
    std::unique_ptr<MutableMapA>& mapa() {
       assert(tag_ == Tag::TAG_mapa);
       return mapa_;
    };
    const std::unique_ptr<MutableMapA>& mapa() const {
       assert(tag_ == Tag::TAG_mapa);
       return mapa_;
    };
    void mapa(std::unique_ptr<MutableMapA> _val) { mapa_ = std::move(_val); };

    bool Issa() const { return tag_ == Tag::TAG_sa; };
    std::unique_ptr<MutableStructA>& sa() {
       assert(tag_ == Tag::TAG_sa);
       return sa_;
    };
    const std::unique_ptr<MutableStructA>& sa() const {
       assert(tag_ == Tag::TAG_sa);
       return sa_;
    };
    void sa(std::unique_ptr<MutableStructA> _val) { sa_ = std::move(_val); };

    bool Issb() const { return tag_ == Tag::TAG_sb; };
    std::unique_ptr<MutableStructB>& sb() {
       assert(tag_ == Tag::TAG_sb);
       return sb_;
    };
    const std::unique_ptr<MutableStructB>& sb() const {
       assert(tag_ == Tag::TAG_sb);
       return sb_;
    };
    void sb(std::unique_ptr<MutableStructB> _val) { sb_ = std::move(_val); };

    bool Issc() const { return tag_ == Tag::TAG_sc; };
    std::unique_ptr<MutableStructC>& sc() {
       assert(tag_ == Tag::TAG_sc);
       return sc_;
    };
    const std::unique_ptr<MutableStructC>& sc() const {
       assert(tag_ == Tag::TAG_sc);
       return sc_;
    };
    void sc(std::unique_ptr<MutableStructC> _val) { sc_ = std::move(_val); };

    bool Isva() const { return tag_ == Tag::TAG_va; };
    std::unique_ptr<MutableVecA>& va() {
       assert(tag_ == Tag::TAG_va);
       return va_;
    };
    const std::unique_ptr<MutableVecA>& va() const {
       assert(tag_ == Tag::TAG_va);
       return va_;
    };
    void va(std::unique_ptr<MutableVecA> _val) { va_ = std::move(_val); };

    bool Isvara() const { return tag_ == Tag::TAG_vara; };
    std::unique_ptr<MutableVariantA>& vara() {
       assert(tag_ == Tag::TAG_vara);
       return vara_;
    };
    const std::unique_ptr<MutableVariantA>& vara() const {
       assert(tag_ == Tag::TAG_vara);
       return vara_;
    };
    void vara(std::unique_ptr<MutableVariantA> _val) { vara_ = std::move(_val); };

    bool isEqual(const MutableVariantB &rhs) const {
      if (tag_ != rhs.tag_) { return false; };
      // TODO(dpemmons) this.
      return false;
    }

    friend std::ostream& operator<<(std::ostream& os, const MutableVariantB& obj);

  private:
    Tag tag_ = Tag::__TAGS_BEGIN;

  union {
      bool a_;
      char32_t b_;
      std::string c_;
      uint8_t d_;
      uint16_t e_;
      uint32_t f_;
      uint64_t g_;
      int8_t h_;
      int16_t i_;
      int32_t j_;
      int64_t k_;
      std::unique_ptr<MutableMapA> mapa_;
      std::unique_ptr<MutableStructA> sa_;
      std::unique_ptr<MutableStructB> sb_;
      std::unique_ptr<MutableStructC> sc_;
      std::unique_ptr<MutableVecA> va_;
      std::unique_ptr<MutableVariantA> vara_;
  };

};

bool operator==(const MutableVariantB &lhs, const MutableVariantB &rhs);
inline bool operator!=(const MutableVariantB &lhs, const MutableVariantB &rhs) { return !(lhs == rhs); };


class MutableVecA : public std::vector<uint8_t> {

  public:
    MutableVecA() {};
    ~MutableVecA() {};

    friend std::ostream& operator<<(std::ostream& os, const MutableVecA& obj);

  private:

};


class MutableVecB : public std::vector<std::unique_ptr<MutableStructC>> {

  public:
    MutableVecB() {};
    ~MutableVecB() {};

    friend std::ostream& operator<<(std::ostream& os, const MutableVecB& obj);

  private:

};


class MutableVecC : public std::vector<std::unique_ptr<MutableVariantB>> {

  public:
    MutableVecC() {};
    ~MutableVecC() {};

    friend std::ostream& operator<<(std::ostream& os, const MutableVecC& obj);

  private:

};


class MutableVecD : public std::vector<std::unique_ptr<MutableMapA>> {

  public:
    MutableVecD() {};
    ~MutableVecD() {};

    friend std::ostream& operator<<(std::ostream& os, const MutableVecD& obj);

  private:

};



}  // namespace sv
}  // namespace t


#endif  // __EXAMPLES_SIMPLE_VALUES_TD_CPP_H__
