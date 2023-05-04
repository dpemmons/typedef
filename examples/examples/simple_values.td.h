
#ifndef __EXAMPLES_SIMPLE_VALUES_TD_H_H__
#define __EXAMPLES_SIMPLE_VALUES_TD_H_H__

#include <cassert>
#include <cstdint>
#include <map>
#include <memory>
#include <ostream>
#include <string>
#include <variant>
#include <vector>

namespace sv {
namespace t {


// Value declarations
typedef std::string VAL;
typedef char32_t ValB;
typedef bool ValBool;
typedef bool ValBool2;
typedef char32_t ValC;
typedef std::string ValD;
typedef std::string ValE;
typedef std::string ValRaw;
typedef uint16_t Val_u16;
typedef uint16_t Val_u16_suffix;
typedef uint32_t Val_u32;
typedef uint32_t Val_u32_suffix;
typedef uint64_t Val_u64;
typedef uint64_t Val_u64_suffix;
typedef uint8_t Val_u8;
typedef uint8_t Val_u8_suffix;
typedef char32_t impliedChar;
typedef std::string impliedStr;
typedef float val_f32;
typedef float val_f32_bare;
typedef float val_f32_suffix;
typedef double val_f64;
typedef double val_f64_suffix;
typedef int32_t val_i32;
typedef int32_t val_i32_bare2;
typedef int32_t val_i32_bare__2118;
typedef int32_t _0440_0443_0441_0441_043a_0438_0439__0438_0434_0435_043d_0442_0438_0444_0438_043a_0430_0442_043e_0440;


// Forward Declarations
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
class MutableMapA;
class MutableMapB;
class MutableMapC;
class MutableMapD;


// Structs

class MutableStructA {
  public:
    MutableStructA() {};
    ~MutableStructA() {};


    bool example_bool() const { return example_bool_; }
    void example_bool(bool _val) { example_bool_ = _val; }
    
    char32_t example_char() const { return example_char_; }
    void example_char(char32_t _val) { example_char_ = _val; }
    
    float example_f32() const { return example_f32_; }
    void example_f32(float _val) { example_f32_ = _val; }
    
    double example_f64() const { return example_f64_; }
    void example_f64(double _val) { example_f64_ = _val; }
    
    int16_t example_i16() const { return example_i16_; }
    void example_i16(int16_t _val) { example_i16_ = _val; }
    
    int32_t example_i32() const { return example_i32_; }
    void example_i32(int32_t _val) { example_i32_ = _val; }
    
    int64_t example_i64() const { return example_i64_; }
    void example_i64(int64_t _val) { example_i64_ = _val; }
    
    int8_t example_i8() const { return example_i8_; }
    void example_i8(int8_t _val) { example_i8_ = _val; }
    
    std::string example_str() const { return example_str_; }
    void example_str(std::string _val) { example_str_ = _val; }
    
    uint16_t example_u16() const { return example_u16_; }
    void example_u16(uint16_t _val) { example_u16_ = _val; }
    
    uint32_t example_u32() const { return example_u32_; }
    void example_u32(uint32_t _val) { example_u32_ = _val; }
    
    uint64_t example_u64() const { return example_u64_; }
    void example_u64(uint64_t _val) { example_u64_ = _val; }
    
    uint8_t example_u8() const { return example_u8_; }
    void example_u8(uint8_t _val) { example_u8_ = _val; }
    

    friend std::ostream& operator<<(std::ostream& os, const MutableStructA& obj);

  private:
    bool example_bool_;
    char32_t example_char_;
    float example_f32_;
    double example_f64_;
    int16_t example_i16_;
    int32_t example_i32_;
    int64_t example_i64_;
    int8_t example_i8_;
    std::string example_str_;
    uint16_t example_u16_;
    uint32_t example_u32_;
    uint64_t example_u64_;
    uint8_t example_u8_;

};

class MutableStructB {
  public:
    MutableStructB() {};
    ~MutableStructB() {};


    bool example_bool() const { return example_bool_; }
    void example_bool(bool _val) { example_bool_ = _val; }
    
    char32_t example_char() const { return example_char_; }
    void example_char(char32_t _val) { example_char_ = _val; }
    
    float example_f32() const { return example_f32_; }
    void example_f32(float _val) { example_f32_ = _val; }
    
    double example_f64() const { return example_f64_; }
    void example_f64(double _val) { example_f64_ = _val; }
    
    int16_t example_i16() const { return example_i16_; }
    void example_i16(int16_t _val) { example_i16_ = _val; }
    
    int32_t example_i32() const { return example_i32_; }
    void example_i32(int32_t _val) { example_i32_ = _val; }
    
    int64_t example_i64() const { return example_i64_; }
    void example_i64(int64_t _val) { example_i64_ = _val; }
    
    int8_t example_i8() const { return example_i8_; }
    void example_i8(int8_t _val) { example_i8_ = _val; }
    
    std::string example_str() const { return example_str_; }
    void example_str(std::string _val) { example_str_ = _val; }
    
    uint16_t example_u16() const { return example_u16_; }
    void example_u16(uint16_t _val) { example_u16_ = _val; }
    
    uint32_t example_u32() const { return example_u32_; }
    void example_u32(uint32_t _val) { example_u32_ = _val; }
    
    uint64_t example_u64() const { return example_u64_; }
    void example_u64(uint64_t _val) { example_u64_ = _val; }
    
    uint8_t example_u8() const { return example_u8_; }
    void example_u8(uint8_t _val) { example_u8_ = _val; }
    

    friend std::ostream& operator<<(std::ostream& os, const MutableStructB& obj);

  private:
    bool example_bool_ = true;
    char32_t example_char_;
    float example_f32_;
    double example_f64_;
    int16_t example_i16_;
    int32_t example_i32_;
    int64_t example_i64_;
    int8_t example_i8_;
    std::string example_str_;
    uint16_t example_u16_;
    uint32_t example_u32_;
    uint64_t example_u64_;
    uint8_t example_u8_;

};

class MutableStructC {
  public:
    MutableStructC() {};
    ~MutableStructC() {};


    std::unique_ptr<MutableStructA>& asdf() { return asdf_; }
    const std::unique_ptr<MutableStructA>& asdf() const { return asdf_; }
    void asdf(std::unique_ptr<MutableStructA> _val) { asdf_ = std::move(_val); }
    
    int32_t jkl() const { return jkl_; }
    void jkl(int32_t _val) { jkl_ = _val; }
    
    int32_t zxcv() const { return zxcv_; }
    void zxcv(int32_t _val) { zxcv_ = _val; }
    

    friend std::ostream& operator<<(std::ostream& os, const MutableStructC& obj);

  private:
    std::unique_ptr<MutableStructA> asdf_;
    int32_t jkl_;
    int32_t zxcv_;

};

class MutableStructD {
  public:
    MutableStructD() {};
    ~MutableStructD() {};


    std::unique_ptr<MutableStructA>& a_struct() { return a_struct_; }
    const std::unique_ptr<MutableStructA>& a_struct() const { return a_struct_; }
    void a_struct(std::unique_ptr<MutableStructA> _val) { a_struct_ = std::move(_val); }
    
    std::unique_ptr<MutableVariantA>& b_variant() { return b_variant_; }
    const std::unique_ptr<MutableVariantA>& b_variant() const { return b_variant_; }
    void b_variant(std::unique_ptr<MutableVariantA> _val) { b_variant_ = std::move(_val); }
    
    std::unique_ptr<MutableVecA>& c_vec() { return c_vec_; }
    const std::unique_ptr<MutableVecA>& c_vec() const { return c_vec_; }
    void c_vec(std::unique_ptr<MutableVecA> _val) { c_vec_ = std::move(_val); }
    
    std::unique_ptr<MutableMapA>& d_map() { return d_map_; }
    const std::unique_ptr<MutableMapA>& d_map() const { return d_map_; }
    void d_map(std::unique_ptr<MutableMapA> _val) { d_map_ = std::move(_val); }
    

    friend std::ostream& operator<<(std::ostream& os, const MutableStructD& obj);

  private:
    std::unique_ptr<MutableStructA> a_struct_;
    std::unique_ptr<MutableVariantA> b_variant_;
    std::unique_ptr<MutableVecA> c_vec_;
    std::unique_ptr<MutableMapA> d_map_;

};


// Variants

class MutableVariantA {
  public:
    MutableVariantA() {};
    ~MutableVariantA() {};

    
    bool Isa() const { return tag == Tag::TAG_a; }
    bool a() const {
      assert(tag == Tag::TAG_a);
      return a_; 
    }
    void a(bool _val) {
      MaybeDeleteExistingMember();
      tag = Tag::TAG_a;
      a_ = _val;
    }
    
    bool Isb() const { return tag == Tag::TAG_b; }
    int8_t b() const {
      assert(tag == Tag::TAG_b);
      return b_; 
    }
    void b(int8_t _val) {
      MaybeDeleteExistingMember();
      tag = Tag::TAG_b;
      b_ = _val;
    }
    

    friend std::ostream& operator<<(std::ostream& os, const MutableVariantA& obj);

  private:
    enum class Tag {
      __TAGS_BEGIN = 0,
      TAG_a,
      TAG_b,

      __TAGS_END
    } tag = Tag::__TAGS_BEGIN;

    union {
    bool a_;
    int8_t b_;

    };  // union

    void MaybeDeleteExistingMember() {
      switch (tag) {

        default:
          return;
      }
    }

};

class MutableVariantB {
  public:
    MutableVariantB() {};
    ~MutableVariantB() {};

    
    bool Isa() const { return tag == Tag::TAG_a; }
    bool a() const {
      assert(tag == Tag::TAG_a);
      return a_; 
    }
    void a(bool _val) {
      MaybeDeleteExistingMember();
      tag = Tag::TAG_a;
      a_ = _val;
    }
    
    bool Isb() const { return tag == Tag::TAG_b; }
    char32_t b() const {
      assert(tag == Tag::TAG_b);
      return b_; 
    }
    void b(char32_t _val) {
      MaybeDeleteExistingMember();
      tag = Tag::TAG_b;
      b_ = _val;
    }
    
    bool Isc() const { return tag == Tag::TAG_c; }
    std::string c() const {
      assert(tag == Tag::TAG_c);
      return c_; 
    }
    void c(std::string _val) {
      MaybeDeleteExistingMember();
      tag = Tag::TAG_c;
      c_ = _val;
    }
    
    bool Isd() const { return tag == Tag::TAG_d; }
    uint8_t d() const {
      assert(tag == Tag::TAG_d);
      return d_; 
    }
    void d(uint8_t _val) {
      MaybeDeleteExistingMember();
      tag = Tag::TAG_d;
      d_ = _val;
    }
    
    bool Ise() const { return tag == Tag::TAG_e; }
    uint16_t e() const {
      assert(tag == Tag::TAG_e);
      return e_; 
    }
    void e(uint16_t _val) {
      MaybeDeleteExistingMember();
      tag = Tag::TAG_e;
      e_ = _val;
    }
    
    bool Isf() const { return tag == Tag::TAG_f; }
    uint32_t f() const {
      assert(tag == Tag::TAG_f);
      return f_; 
    }
    void f(uint32_t _val) {
      MaybeDeleteExistingMember();
      tag = Tag::TAG_f;
      f_ = _val;
    }
    
    bool Isg() const { return tag == Tag::TAG_g; }
    uint64_t g() const {
      assert(tag == Tag::TAG_g);
      return g_; 
    }
    void g(uint64_t _val) {
      MaybeDeleteExistingMember();
      tag = Tag::TAG_g;
      g_ = _val;
    }
    
    bool Ish() const { return tag == Tag::TAG_h; }
    int8_t h() const {
      assert(tag == Tag::TAG_h);
      return h_; 
    }
    void h(int8_t _val) {
      MaybeDeleteExistingMember();
      tag = Tag::TAG_h;
      h_ = _val;
    }
    
    bool Isi() const { return tag == Tag::TAG_i; }
    int16_t i() const {
      assert(tag == Tag::TAG_i);
      return i_; 
    }
    void i(int16_t _val) {
      MaybeDeleteExistingMember();
      tag = Tag::TAG_i;
      i_ = _val;
    }
    
    bool Isj() const { return tag == Tag::TAG_j; }
    int32_t j() const {
      assert(tag == Tag::TAG_j);
      return j_; 
    }
    void j(int32_t _val) {
      MaybeDeleteExistingMember();
      tag = Tag::TAG_j;
      j_ = _val;
    }
    
    bool Isk() const { return tag == Tag::TAG_k; }
    int64_t k() const {
      assert(tag == Tag::TAG_k);
      return k_; 
    }
    void k(int64_t _val) {
      MaybeDeleteExistingMember();
      tag = Tag::TAG_k;
      k_ = _val;
    }
    
    bool Ismapa() const { return tag == Tag::TAG_mapa; }
    std::unique_ptr<MutableMapA>& mapa() {
      assert(tag == Tag::TAG_mapa);
      return mapa_;
    }
    const std::unique_ptr<MutableMapA>& mapa() const {
      assert(tag == Tag::TAG_mapa);
      return mapa_;
    }
    void mapa(std::unique_ptr<MutableMapA> _val) {
      MaybeDeleteExistingMember();
      tag = Tag::TAG_mapa;
      mapa_ = std::move(_val);
    }
    
    bool Issa() const { return tag == Tag::TAG_sa; }
    std::unique_ptr<MutableStructA>& sa() {
      assert(tag == Tag::TAG_sa);
      return sa_;
    }
    const std::unique_ptr<MutableStructA>& sa() const {
      assert(tag == Tag::TAG_sa);
      return sa_;
    }
    void sa(std::unique_ptr<MutableStructA> _val) {
      MaybeDeleteExistingMember();
      tag = Tag::TAG_sa;
      sa_ = std::move(_val);
    }
    
    bool Issb() const { return tag == Tag::TAG_sb; }
    std::unique_ptr<MutableStructB>& sb() {
      assert(tag == Tag::TAG_sb);
      return sb_;
    }
    const std::unique_ptr<MutableStructB>& sb() const {
      assert(tag == Tag::TAG_sb);
      return sb_;
    }
    void sb(std::unique_ptr<MutableStructB> _val) {
      MaybeDeleteExistingMember();
      tag = Tag::TAG_sb;
      sb_ = std::move(_val);
    }
    
    bool Issc() const { return tag == Tag::TAG_sc; }
    std::unique_ptr<MutableStructC>& sc() {
      assert(tag == Tag::TAG_sc);
      return sc_;
    }
    const std::unique_ptr<MutableStructC>& sc() const {
      assert(tag == Tag::TAG_sc);
      return sc_;
    }
    void sc(std::unique_ptr<MutableStructC> _val) {
      MaybeDeleteExistingMember();
      tag = Tag::TAG_sc;
      sc_ = std::move(_val);
    }
    
    bool Isva() const { return tag == Tag::TAG_va; }
    std::unique_ptr<MutableVecA>& va() {
      assert(tag == Tag::TAG_va);
      return va_;
    }
    const std::unique_ptr<MutableVecA>& va() const {
      assert(tag == Tag::TAG_va);
      return va_;
    }
    void va(std::unique_ptr<MutableVecA> _val) {
      MaybeDeleteExistingMember();
      tag = Tag::TAG_va;
      va_ = std::move(_val);
    }
    
    bool Isvara() const { return tag == Tag::TAG_vara; }
    std::unique_ptr<MutableVariantA>& vara() {
      assert(tag == Tag::TAG_vara);
      return vara_;
    }
    const std::unique_ptr<MutableVariantA>& vara() const {
      assert(tag == Tag::TAG_vara);
      return vara_;
    }
    void vara(std::unique_ptr<MutableVariantA> _val) {
      MaybeDeleteExistingMember();
      tag = Tag::TAG_vara;
      vara_ = std::move(_val);
    }
    

    friend std::ostream& operator<<(std::ostream& os, const MutableVariantB& obj);

  private:
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

      __TAGS_END
    } tag = Tag::__TAGS_BEGIN;

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

    };  // union

    void MaybeDeleteExistingMember() {
      switch (tag) {
        case Tag::TAG_mapa:
          mapa_.reset(nullptr);
          break;
        case Tag::TAG_sa:
          sa_.reset(nullptr);
          break;
        case Tag::TAG_sb:
          sb_.reset(nullptr);
          break;
        case Tag::TAG_sc:
          sc_.reset(nullptr);
          break;
        case Tag::TAG_va:
          va_.reset(nullptr);
          break;
        case Tag::TAG_vara:
          vara_.reset(nullptr);
          break;

        default:
          return;
      }
    }

};


// Vectors

class MutableVecA : public std::vector<uint8_t> {
  public:
    MutableVecA() {};
    ~MutableVecA() {};

    friend std::ostream& operator<<(std::ostream& os, const MutableVecA& obj);
};

class MutableVecB : public std::vector<std::unique_ptr<MutableStructC>> {
  public:
    MutableVecB() {};
    ~MutableVecB() {};

    friend std::ostream& operator<<(std::ostream& os, const MutableVecB& obj);
};

class MutableVecC : public std::vector<std::unique_ptr<MutableVariantB>> {
  public:
    MutableVecC() {};
    ~MutableVecC() {};

    friend std::ostream& operator<<(std::ostream& os, const MutableVecC& obj);
};

class MutableVecD : public std::vector<std::unique_ptr<MutableMapA>> {
  public:
    MutableVecD() {};
    ~MutableVecD() {};

    friend std::ostream& operator<<(std::ostream& os, const MutableVecD& obj);
};


// Maps

class MutableMapA : public std::map<int32_t, std::string> {
  public:
    MutableMapA() {};
    ~MutableMapA() {};

    friend std::ostream& operator<<(std::ostream& os, const MutableMapA& obj);
};

class MutableMapB : public std::map<std::string, std::unique_ptr<MutableStructC>> {
  public:
    MutableMapB() {};
    ~MutableMapB() {};

    friend std::ostream& operator<<(std::ostream& os, const MutableMapB& obj);
};

class MutableMapC : public std::map<std::string, std::unique_ptr<MutableVecA>> {
  public:
    MutableMapC() {};
    ~MutableMapC() {};

    friend std::ostream& operator<<(std::ostream& os, const MutableMapC& obj);
};

class MutableMapD : public std::map<std::string, std::unique_ptr<MutableVariantA>> {
  public:
    MutableMapD() {};
    ~MutableMapD() {};

    friend std::ostream& operator<<(std::ostream& os, const MutableMapD& obj);
};


}  // sv
}  // t


#endif  // __EXAMPLES_SIMPLE_VALUES_TD_H_H__
