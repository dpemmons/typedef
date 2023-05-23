
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


// Forward Declarations
class MutableStructA;
class MutableStructB;
class MutableStructC;
class MutableStructD;
class MutableStructE;
class MutableTemplateExample;
class MutableVariantA;
class MutableVariantB;
class MutableVariantC;
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

    // Nested classes.





    // Accessors.

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
    // Members.
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

};  // class MutableStructA

class MutableStructB {
  public:
    MutableStructB() {};
    ~MutableStructB() {};

    // Nested classes.





    // Accessors.

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
    // Members.
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

};  // class MutableStructB

class MutableStructC {
  public:
    MutableStructC() {};
    ~MutableStructC() {};

    // Nested classes.





    // Accessors.

    std::unique_ptr<MutableStructA>& asdf() { return asdf_; }
    const std::unique_ptr<MutableStructA>& asdf() const { return asdf_; }
    void asdf(std::unique_ptr<MutableStructA> _val) { asdf_ = std::move(_val); }
    
    int32_t jkl() const { return jkl_; }
    void jkl(int32_t _val) { jkl_ = _val; }
    
    int32_t zxcv() const { return zxcv_; }
    void zxcv(int32_t _val) { zxcv_ = _val; }
    

    friend std::ostream& operator<<(std::ostream& os, const MutableStructC& obj);

  private:
    // Members.
    std::unique_ptr<MutableStructA> asdf_;
    int32_t jkl_;
    int32_t zxcv_;

};  // class MutableStructC

class MutableStructD {
  public:
    MutableStructD() {};
    ~MutableStructD() {};

    // Nested classes.





    // Accessors.

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
    // Members.
    std::unique_ptr<MutableStructA> a_struct_;
    std::unique_ptr<MutableVariantA> b_variant_;
    std::unique_ptr<MutableVecA> c_vec_;
    std::unique_ptr<MutableMapA> d_map_;

};  // class MutableStructD

class MutableStructE {
  public:
    MutableStructE() {};
    ~MutableStructE() {};

    // Nested classes.
    
    class MutableNestedStruct {
      public:
        MutableNestedStruct() {};
        ~MutableNestedStruct() {};
    
        // Nested classes.
    
    
    
    
    
        // Accessors.
    
        int32_t a() const { return a_; }
        void a(int32_t _val) { a_ = _val; }
        
    
        friend std::ostream& operator<<(std::ostream& os, const MutableNestedStruct& obj);
    
      private:
        // Members.
        int32_t a_;
    
    };  // class MutableNestedStruct
    
    class MutableinlineStruct {
      public:
        MutableinlineStruct() {};
        ~MutableinlineStruct() {};
    
        // Nested classes.
    
    
    
    
    
        // Accessors.
    
        int32_t a() const { return a_; }
        void a(int32_t _val) { a_ = _val; }
        
    
        friend std::ostream& operator<<(std::ostream& os, const MutableinlineStruct& obj);
    
      private:
        // Members.
        int32_t a_;
    
    };  // class MutableinlineStruct

    
    class MutableNestedVariant {
      public:
        MutableNestedVariant() {};
        ~MutableNestedVariant() {};
    
        // Nested classes.
    
    
    
    
    
        
        bool Isa() const { return tag == Tag::TAG_a; }
        int64_t a() const {
          assert(tag == Tag::TAG_a);
          return a_; 
        }
        void a(int64_t _val) {
          MaybeDeleteExistingMember();
          tag = Tag::TAG_a;
          a_ = _val;
        }
        
    
        friend std::ostream& operator<<(std::ostream& os, const MutableNestedVariant& obj);
    
      private:
        enum class Tag {
          __TAGS_BEGIN = 0,
          TAG_a,
    
          __TAGS_END
        } tag = Tag::__TAGS_BEGIN;
    
        union {
        int64_t a_;
    
        };  // union
    
        void MaybeDeleteExistingMember() {
          switch (tag) {
    
            default:
              return;
          }
        }
    
    };  // class MutableNestedVariant
    
    class MutableVariantB {
      public:
        MutableVariantB() {};
        ~MutableVariantB() {};
    
        // Nested classes.
    
    
    
    
    
        
        bool Isva() const { return tag == Tag::TAG_va; }
        int32_t va() const {
          assert(tag == Tag::TAG_va);
          return va_; 
        }
        void va(int32_t _val) {
          MaybeDeleteExistingMember();
          tag = Tag::TAG_va;
          va_ = _val;
        }
        
        bool Isvb() const { return tag == Tag::TAG_vb; }
        std::string vb() const {
          assert(tag == Tag::TAG_vb);
          return vb_; 
        }
        void vb(std::string _val) {
          MaybeDeleteExistingMember();
          tag = Tag::TAG_vb;
          vb_ = _val;
        }
        
    
        friend std::ostream& operator<<(std::ostream& os, const MutableVariantB& obj);
    
      private:
        enum class Tag {
          __TAGS_BEGIN = 0,
          TAG_va,
          TAG_vb,
    
          __TAGS_END
        } tag = Tag::__TAGS_BEGIN;
    
        union {
        int32_t va_;
        std::string vb_;
    
        };  // union
    
        void MaybeDeleteExistingMember() {
          switch (tag) {
    
            default:
              return;
          }
        }
    
    };  // class MutableVariantB

    
    class MutableNestedVector : public std::vector<int32_t> {
      public:
        MutableNestedVector() {};
        ~MutableNestedVector() {};
    
        friend std::ostream& operator<<(std::ostream& os, const MutableNestedVector& obj);
    
    };  // class MutableNestedVector
    
    class MutableinlineVector : public std::vector<int32_t> {
      public:
        MutableinlineVector() {};
        ~MutableinlineVector() {};
    
        friend std::ostream& operator<<(std::ostream& os, const MutableinlineVector& obj);
    
    };  // class MutableinlineVector

    
    class MutableNestedMap : public std::map<int32_t, std::unique_ptr<MutableNestedVariant>> {
      public:
        MutableNestedMap() {};
        ~MutableNestedMap() {};
    
        friend std::ostream& operator<<(std::ostream& os, const MutableNestedMap& obj);
    
    };  // class MutableNestedMap
    
    class MutableinlineMap : public std::map<std::string, std::unique_ptr<MutableStructD>> {
      public:
        MutableinlineMap() {};
        ~MutableinlineMap() {};
    
        friend std::ostream& operator<<(std::ostream& os, const MutableinlineMap& obj);
    
    };  // class MutableinlineMap


    // Accessors.

    std::unique_ptr<MutableNestedMap>& NestedMap() { return NestedMap_; }
    const std::unique_ptr<MutableNestedMap>& NestedMap() const { return NestedMap_; }
    void NestedMap(std::unique_ptr<MutableNestedMap> _val) { NestedMap_ = std::move(_val); }
    
    std::unique_ptr<MutableVariantB>& VariantB() { return VariantB_; }
    const std::unique_ptr<MutableVariantB>& VariantB() const { return VariantB_; }
    void VariantB(std::unique_ptr<MutableVariantB> _val) { VariantB_ = std::move(_val); }
    
    std::unique_ptr<MutableinlineMap>& inlineMap() { return inlineMap_; }
    const std::unique_ptr<MutableinlineMap>& inlineMap() const { return inlineMap_; }
    void inlineMap(std::unique_ptr<MutableinlineMap> _val) { inlineMap_ = std::move(_val); }
    
    std::unique_ptr<MutableinlineStruct>& inlineStruct() { return inlineStruct_; }
    const std::unique_ptr<MutableinlineStruct>& inlineStruct() const { return inlineStruct_; }
    void inlineStruct(std::unique_ptr<MutableinlineStruct> _val) { inlineStruct_ = std::move(_val); }
    
    std::unique_ptr<MutableinlineVector>& inlineVector() { return inlineVector_; }
    const std::unique_ptr<MutableinlineVector>& inlineVector() const { return inlineVector_; }
    void inlineVector(std::unique_ptr<MutableinlineVector> _val) { inlineVector_ = std::move(_val); }
    
    std::unique_ptr<MutableNestedMap>& nestedMapField() { return nestedMapField_; }
    const std::unique_ptr<MutableNestedMap>& nestedMapField() const { return nestedMapField_; }
    void nestedMapField(std::unique_ptr<MutableNestedMap> _val) { nestedMapField_ = std::move(_val); }
    
    std::unique_ptr<MutableNestedStruct>& nestedStructField() { return nestedStructField_; }
    const std::unique_ptr<MutableNestedStruct>& nestedStructField() const { return nestedStructField_; }
    void nestedStructField(std::unique_ptr<MutableNestedStruct> _val) { nestedStructField_ = std::move(_val); }
    
    std::unique_ptr<MutableNestedVariant>& nestedVariantField() { return nestedVariantField_; }
    const std::unique_ptr<MutableNestedVariant>& nestedVariantField() const { return nestedVariantField_; }
    void nestedVariantField(std::unique_ptr<MutableNestedVariant> _val) { nestedVariantField_ = std::move(_val); }
    
    std::unique_ptr<MutableNestedVector>& nestedVectorField() { return nestedVectorField_; }
    const std::unique_ptr<MutableNestedVector>& nestedVectorField() const { return nestedVectorField_; }
    void nestedVectorField(std::unique_ptr<MutableNestedVector> _val) { nestedVectorField_ = std::move(_val); }
    

    friend std::ostream& operator<<(std::ostream& os, const MutableStructE& obj);

  private:
    // Members.
    std::unique_ptr<MutableNestedMap> NestedMap_;
    std::unique_ptr<MutableVariantB> VariantB_;
    std::unique_ptr<MutableinlineMap> inlineMap_;
    std::unique_ptr<MutableinlineStruct> inlineStruct_;
    std::unique_ptr<MutableinlineVector> inlineVector_;
    std::unique_ptr<MutableNestedMap> nestedMapField_;
    std::unique_ptr<MutableNestedStruct> nestedStructField_;
    std::unique_ptr<MutableNestedVariant> nestedVariantField_;
    std::unique_ptr<MutableNestedVector> nestedVectorField_;

};  // class MutableStructE

class MutableTemplateExample {
  public:
    MutableTemplateExample() {};
    ~MutableTemplateExample() {};

    // Nested classes.
    
    class MutableTemplateData {
      public:
        MutableTemplateData() {};
        ~MutableTemplateData() {};
    
        // Nested classes.
    
    
        
        class MutablesomeVec : public std::vector<int32_t> {
          public:
            MutablesomeVec() {};
            ~MutablesomeVec() {};
        
            friend std::ostream& operator<<(std::ostream& os, const MutablesomeVec& obj);
        
        };  // class MutablesomeVec
    
    
    
        // Accessors.
    
        std::string name() const { return name_; }
        void name(std::string _val) { name_ = _val; }
        
        std::unique_ptr<MutablesomeVec>& someVec() { return someVec_; }
        const std::unique_ptr<MutablesomeVec>& someVec() const { return someVec_; }
        void someVec(std::unique_ptr<MutablesomeVec> _val) { someVec_ = std::move(_val); }
        
    
        friend std::ostream& operator<<(std::ostream& os, const MutableTemplateData& obj);
    
      private:
        // Members.
        std::string name_;
        std::unique_ptr<MutablesomeVec> someVec_;
    
    };  // class MutableTemplateData





    // Accessors.

    static std::string tmpl(const MutableTemplateData& arg) { return "tmpl_str"; }
    
    static std::string tmpl2(const MutableTemplateData& arg) { return "tmpl_str"; }
    
    static std::string tmpl3(const MutableTemplateData& arg) { return "tmpl_str"; }
    

    friend std::ostream& operator<<(std::ostream& os, const MutableTemplateExample& obj);

  private:
    // Members.

};  // class MutableTemplateExample


// Variants

class MutableVariantA {
  public:
    MutableVariantA() {};
    ~MutableVariantA() {};

    // Nested classes.





    
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

};  // class MutableVariantA

class MutableVariantB {
  public:
    MutableVariantB() {};
    ~MutableVariantB() {};

    // Nested classes.





    
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

};  // class MutableVariantB

class MutableVariantC {
  public:
    MutableVariantC() {};
    ~MutableVariantC() {};

    // Nested classes.
    
    class MutableNestedStruct {
      public:
        MutableNestedStruct() {};
        ~MutableNestedStruct() {};
    
        // Nested classes.
    
    
    
    
    
        // Accessors.
    
        int32_t a() const { return a_; }
        void a(int32_t _val) { a_ = _val; }
        
    
        friend std::ostream& operator<<(std::ostream& os, const MutableNestedStruct& obj);
    
      private:
        // Members.
        int32_t a_;
    
    };  // class MutableNestedStruct
    
    class MutableinlineStruct {
      public:
        MutableinlineStruct() {};
        ~MutableinlineStruct() {};
    
        // Nested classes.
    
    
    
    
    
        // Accessors.
    
        int32_t a() const { return a_; }
        void a(int32_t _val) { a_ = _val; }
        
    
        friend std::ostream& operator<<(std::ostream& os, const MutableinlineStruct& obj);
    
      private:
        // Members.
        int32_t a_;
    
    };  // class MutableinlineStruct

    
    class MutableNestedVariant {
      public:
        MutableNestedVariant() {};
        ~MutableNestedVariant() {};
    
        // Nested classes.
    
    
    
    
    
        
        bool Isa() const { return tag == Tag::TAG_a; }
        int64_t a() const {
          assert(tag == Tag::TAG_a);
          return a_; 
        }
        void a(int64_t _val) {
          MaybeDeleteExistingMember();
          tag = Tag::TAG_a;
          a_ = _val;
        }
        
    
        friend std::ostream& operator<<(std::ostream& os, const MutableNestedVariant& obj);
    
      private:
        enum class Tag {
          __TAGS_BEGIN = 0,
          TAG_a,
    
          __TAGS_END
        } tag = Tag::__TAGS_BEGIN;
    
        union {
        int64_t a_;
    
        };  // union
    
        void MaybeDeleteExistingMember() {
          switch (tag) {
    
            default:
              return;
          }
        }
    
    };  // class MutableNestedVariant
    
    class MutableVariantB {
      public:
        MutableVariantB() {};
        ~MutableVariantB() {};
    
        // Nested classes.
    
    
    
    
    
        
        bool Isva() const { return tag == Tag::TAG_va; }
        int32_t va() const {
          assert(tag == Tag::TAG_va);
          return va_; 
        }
        void va(int32_t _val) {
          MaybeDeleteExistingMember();
          tag = Tag::TAG_va;
          va_ = _val;
        }
        
        bool Isvb() const { return tag == Tag::TAG_vb; }
        std::string vb() const {
          assert(tag == Tag::TAG_vb);
          return vb_; 
        }
        void vb(std::string _val) {
          MaybeDeleteExistingMember();
          tag = Tag::TAG_vb;
          vb_ = _val;
        }
        
    
        friend std::ostream& operator<<(std::ostream& os, const MutableVariantB& obj);
    
      private:
        enum class Tag {
          __TAGS_BEGIN = 0,
          TAG_va,
          TAG_vb,
    
          __TAGS_END
        } tag = Tag::__TAGS_BEGIN;
    
        union {
        int32_t va_;
        std::string vb_;
    
        };  // union
    
        void MaybeDeleteExistingMember() {
          switch (tag) {
    
            default:
              return;
          }
        }
    
    };  // class MutableVariantB

    
    class MutableNestedVector : public std::vector<int32_t> {
      public:
        MutableNestedVector() {};
        ~MutableNestedVector() {};
    
        friend std::ostream& operator<<(std::ostream& os, const MutableNestedVector& obj);
    
    };  // class MutableNestedVector
    
    class MutableinlineVector : public std::vector<int32_t> {
      public:
        MutableinlineVector() {};
        ~MutableinlineVector() {};
    
        friend std::ostream& operator<<(std::ostream& os, const MutableinlineVector& obj);
    
    };  // class MutableinlineVector

    
    class MutableNestedMap : public std::map<int32_t, std::unique_ptr<MutableNestedVariant>> {
      public:
        MutableNestedMap() {};
        ~MutableNestedMap() {};
    
        friend std::ostream& operator<<(std::ostream& os, const MutableNestedMap& obj);
    
    };  // class MutableNestedMap
    
    class MutableinlineMap : public std::map<std::string, std::unique_ptr<MutableStructD>> {
      public:
        MutableinlineMap() {};
        ~MutableinlineMap() {};
    
        friend std::ostream& operator<<(std::ostream& os, const MutableinlineMap& obj);
    
    };  // class MutableinlineMap


    
    bool IsNestedMap() const { return tag == Tag::TAG_NestedMap; }
    std::unique_ptr<MutableNestedMap>& NestedMap() {
      assert(tag == Tag::TAG_NestedMap);
      return NestedMap_;
    }
    const std::unique_ptr<MutableNestedMap>& NestedMap() const {
      assert(tag == Tag::TAG_NestedMap);
      return NestedMap_;
    }
    void NestedMap(std::unique_ptr<MutableNestedMap> _val) {
      MaybeDeleteExistingMember();
      tag = Tag::TAG_NestedMap;
      NestedMap_ = std::move(_val);
    }
    
    bool IsVariantB() const { return tag == Tag::TAG_VariantB; }
    std::unique_ptr<MutableVariantB>& VariantB() {
      assert(tag == Tag::TAG_VariantB);
      return VariantB_;
    }
    const std::unique_ptr<MutableVariantB>& VariantB() const {
      assert(tag == Tag::TAG_VariantB);
      return VariantB_;
    }
    void VariantB(std::unique_ptr<MutableVariantB> _val) {
      MaybeDeleteExistingMember();
      tag = Tag::TAG_VariantB;
      VariantB_ = std::move(_val);
    }
    
    bool IsinlineMap() const { return tag == Tag::TAG_inlineMap; }
    std::unique_ptr<MutableinlineMap>& inlineMap() {
      assert(tag == Tag::TAG_inlineMap);
      return inlineMap_;
    }
    const std::unique_ptr<MutableinlineMap>& inlineMap() const {
      assert(tag == Tag::TAG_inlineMap);
      return inlineMap_;
    }
    void inlineMap(std::unique_ptr<MutableinlineMap> _val) {
      MaybeDeleteExistingMember();
      tag = Tag::TAG_inlineMap;
      inlineMap_ = std::move(_val);
    }
    
    bool IsinlineStruct() const { return tag == Tag::TAG_inlineStruct; }
    std::unique_ptr<MutableinlineStruct>& inlineStruct() {
      assert(tag == Tag::TAG_inlineStruct);
      return inlineStruct_;
    }
    const std::unique_ptr<MutableinlineStruct>& inlineStruct() const {
      assert(tag == Tag::TAG_inlineStruct);
      return inlineStruct_;
    }
    void inlineStruct(std::unique_ptr<MutableinlineStruct> _val) {
      MaybeDeleteExistingMember();
      tag = Tag::TAG_inlineStruct;
      inlineStruct_ = std::move(_val);
    }
    
    bool IsinlineVector() const { return tag == Tag::TAG_inlineVector; }
    std::unique_ptr<MutableinlineVector>& inlineVector() {
      assert(tag == Tag::TAG_inlineVector);
      return inlineVector_;
    }
    const std::unique_ptr<MutableinlineVector>& inlineVector() const {
      assert(tag == Tag::TAG_inlineVector);
      return inlineVector_;
    }
    void inlineVector(std::unique_ptr<MutableinlineVector> _val) {
      MaybeDeleteExistingMember();
      tag = Tag::TAG_inlineVector;
      inlineVector_ = std::move(_val);
    }
    
    bool IsnestedMapField() const { return tag == Tag::TAG_nestedMapField; }
    std::unique_ptr<MutableNestedMap>& nestedMapField() {
      assert(tag == Tag::TAG_nestedMapField);
      return nestedMapField_;
    }
    const std::unique_ptr<MutableNestedMap>& nestedMapField() const {
      assert(tag == Tag::TAG_nestedMapField);
      return nestedMapField_;
    }
    void nestedMapField(std::unique_ptr<MutableNestedMap> _val) {
      MaybeDeleteExistingMember();
      tag = Tag::TAG_nestedMapField;
      nestedMapField_ = std::move(_val);
    }
    
    bool IsnestedStructField() const { return tag == Tag::TAG_nestedStructField; }
    std::unique_ptr<MutableNestedStruct>& nestedStructField() {
      assert(tag == Tag::TAG_nestedStructField);
      return nestedStructField_;
    }
    const std::unique_ptr<MutableNestedStruct>& nestedStructField() const {
      assert(tag == Tag::TAG_nestedStructField);
      return nestedStructField_;
    }
    void nestedStructField(std::unique_ptr<MutableNestedStruct> _val) {
      MaybeDeleteExistingMember();
      tag = Tag::TAG_nestedStructField;
      nestedStructField_ = std::move(_val);
    }
    
    bool IsnestedVariantField() const { return tag == Tag::TAG_nestedVariantField; }
    std::unique_ptr<MutableNestedVariant>& nestedVariantField() {
      assert(tag == Tag::TAG_nestedVariantField);
      return nestedVariantField_;
    }
    const std::unique_ptr<MutableNestedVariant>& nestedVariantField() const {
      assert(tag == Tag::TAG_nestedVariantField);
      return nestedVariantField_;
    }
    void nestedVariantField(std::unique_ptr<MutableNestedVariant> _val) {
      MaybeDeleteExistingMember();
      tag = Tag::TAG_nestedVariantField;
      nestedVariantField_ = std::move(_val);
    }
    
    bool IsnestedVectorField() const { return tag == Tag::TAG_nestedVectorField; }
    std::unique_ptr<MutableNestedVector>& nestedVectorField() {
      assert(tag == Tag::TAG_nestedVectorField);
      return nestedVectorField_;
    }
    const std::unique_ptr<MutableNestedVector>& nestedVectorField() const {
      assert(tag == Tag::TAG_nestedVectorField);
      return nestedVectorField_;
    }
    void nestedVectorField(std::unique_ptr<MutableNestedVector> _val) {
      MaybeDeleteExistingMember();
      tag = Tag::TAG_nestedVectorField;
      nestedVectorField_ = std::move(_val);
    }
    
    bool IsoptionalField() const { return tag == Tag::TAG_optionalField; }
    int32_t optionalField() const {
      assert(tag == Tag::TAG_optionalField);
      return optionalField_; 
    }
    void optionalField(int32_t _val) {
      MaybeDeleteExistingMember();
      tag = Tag::TAG_optionalField;
      optionalField_ = _val;
    }
    

    friend std::ostream& operator<<(std::ostream& os, const MutableVariantC& obj);

  private:
    enum class Tag {
      __TAGS_BEGIN = 0,
      TAG_NestedMap,
      TAG_VariantB,
      TAG_inlineMap,
      TAG_inlineStruct,
      TAG_inlineVector,
      TAG_nestedMapField,
      TAG_nestedStructField,
      TAG_nestedVariantField,
      TAG_nestedVectorField,
      TAG_optionalField,

      __TAGS_END
    } tag = Tag::__TAGS_BEGIN;

    union {
    std::unique_ptr<MutableNestedMap> NestedMap_;
    std::unique_ptr<MutableVariantB> VariantB_;
    std::unique_ptr<MutableinlineMap> inlineMap_;
    std::unique_ptr<MutableinlineStruct> inlineStruct_;
    std::unique_ptr<MutableinlineVector> inlineVector_;
    std::unique_ptr<MutableNestedMap> nestedMapField_;
    std::unique_ptr<MutableNestedStruct> nestedStructField_;
    std::unique_ptr<MutableNestedVariant> nestedVariantField_;
    std::unique_ptr<MutableNestedVector> nestedVectorField_;
    int32_t optionalField_;

    };  // union

    void MaybeDeleteExistingMember() {
      switch (tag) {
        case Tag::TAG_NestedMap:
          NestedMap_.reset(nullptr);
          break;
        case Tag::TAG_VariantB:
          VariantB_.reset(nullptr);
          break;
        case Tag::TAG_inlineMap:
          inlineMap_.reset(nullptr);
          break;
        case Tag::TAG_inlineStruct:
          inlineStruct_.reset(nullptr);
          break;
        case Tag::TAG_inlineVector:
          inlineVector_.reset(nullptr);
          break;
        case Tag::TAG_nestedMapField:
          nestedMapField_.reset(nullptr);
          break;
        case Tag::TAG_nestedStructField:
          nestedStructField_.reset(nullptr);
          break;
        case Tag::TAG_nestedVariantField:
          nestedVariantField_.reset(nullptr);
          break;
        case Tag::TAG_nestedVectorField:
          nestedVectorField_.reset(nullptr);
          break;

        default:
          return;
      }
    }

};  // class MutableVariantC


// Vectors

class MutableVecA : public std::vector<uint8_t> {
  public:
    MutableVecA() {};
    ~MutableVecA() {};

    friend std::ostream& operator<<(std::ostream& os, const MutableVecA& obj);

};  // class MutableVecA

class MutableVecB : public std::vector<std::unique_ptr<MutableStructC>> {
  public:
    MutableVecB() {};
    ~MutableVecB() {};

    friend std::ostream& operator<<(std::ostream& os, const MutableVecB& obj);

};  // class MutableVecB

class MutableVecC : public std::vector<std::unique_ptr<MutableVariantB>> {
  public:
    MutableVecC() {};
    ~MutableVecC() {};

    friend std::ostream& operator<<(std::ostream& os, const MutableVecC& obj);

};  // class MutableVecC

class MutableVecD : public std::vector<std::unique_ptr<MutableMapA>> {
  public:
    MutableVecD() {};
    ~MutableVecD() {};

    friend std::ostream& operator<<(std::ostream& os, const MutableVecD& obj);

};  // class MutableVecD


// Maps

class MutableMapA : public std::map<int32_t, std::unique_ptr<MutableVariantB>> {
  public:
    MutableMapA() {};
    ~MutableMapA() {};

    friend std::ostream& operator<<(std::ostream& os, const MutableMapA& obj);

};  // class MutableMapA

class MutableMapB : public std::map<std::string, std::unique_ptr<MutableStructC>> {
  public:
    MutableMapB() {};
    ~MutableMapB() {};

    friend std::ostream& operator<<(std::ostream& os, const MutableMapB& obj);

};  // class MutableMapB

class MutableMapC : public std::map<std::string, std::unique_ptr<MutableVecA>> {
  public:
    MutableMapC() {};
    ~MutableMapC() {};

    friend std::ostream& operator<<(std::ostream& os, const MutableMapC& obj);

};  // class MutableMapC

class MutableMapD : public std::map<std::string, std::unique_ptr<MutableVariantA>> {
  public:
    MutableMapD() {};
    ~MutableMapD() {};

    friend std::ostream& operator<<(std::ostream& os, const MutableMapD& obj);

};  // class MutableMapD


}  // sv
}  // t


#endif  // __EXAMPLES_SIMPLE_VALUES_TD_H_H__
