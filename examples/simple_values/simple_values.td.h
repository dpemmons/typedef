
#ifndef SIMPLE_VALUES_TD_CPP_H__
#define SIMPLE_VALUES_TD_CPP_H__

#include <cstdint>
#include <memory>
#include <string>
#include <variant>
#include <ostream>

#include <typedef/builtin_types.h>

// PRODUCED BY SELF-HOSTED TYPEDEF CODEGEN

#ifndef TD_THROW
#define TD_STRINGIZE_DETAIL(x) #x
#define TD_STRINGIZE(x) TD_STRINGIZE_DETAIL(x)
#define TD_THROW(msg) (throw msg __FILE__ ":" TD_STRINGIZE(__LINE__))
#endif

#ifndef TD_AUTO_ALLOC
#define TD_AUTO_ALLOC 1
#endif

namespace simple_values {


// Forward declarations.

class StructA;

class StructB;

class StructC;

class VariantA;

class VariantB;

class StructD;

class StructE;

class VariantC;





// simple_values::StructA struct declaration.
class StructA {
 public:
  // Nested type declarations
  
  // Inline type declarations
  

  StructA() {}
  ~StructA() {}

  StructA(const StructA&) = delete;
  StructA& operator=(const StructA&) = delete;
  StructA(StructA&&) = default;
  StructA& operator=(StructA&&) = default;

  
  

  
  
  bool get_example_bool() const {
    return example_bool_;
  }
  void set_example_bool(bool val) {
    example_bool_ = val;
  }
  bool& example_bool() {
    return example_bool_;
  }
  const bool& example_bool() const {
    return example_bool_;
  }
  
  
  
  char32_t get_example_char() const {
    return example_char_;
  }
  void set_example_char(char32_t val) {
    example_char_ = val;
  }
  char32_t& example_char() {
    return example_char_;
  }
  const char32_t& example_char() const {
    return example_char_;
  }
  
  
  
  void set_example_str(std::string&& val) {
    example_str_ = std::move(val);
  }
  std::string& example_str() {
    return example_str_;
  }
  const std::string& example_str() const {
    return example_str_;
  }
  
  
  
  float get_example_f32() const {
    return example_f32_;
  }
  void set_example_f32(float val) {
    example_f32_ = val;
  }
  float& example_f32() {
    return example_f32_;
  }
  const float& example_f32() const {
    return example_f32_;
  }
  
  
  
  double get_example_f64() const {
    return example_f64_;
  }
  void set_example_f64(double val) {
    example_f64_ = val;
  }
  double& example_f64() {
    return example_f64_;
  }
  const double& example_f64() const {
    return example_f64_;
  }
  
  
  
  std::uint8_t get_example_u8() const {
    return example_u8_;
  }
  void set_example_u8(std::uint8_t val) {
    example_u8_ = val;
  }
  std::uint8_t& example_u8() {
    return example_u8_;
  }
  const std::uint8_t& example_u8() const {
    return example_u8_;
  }
  
  
  
  std::uint16_t get_example_u16() const {
    return example_u16_;
  }
  void set_example_u16(std::uint16_t val) {
    example_u16_ = val;
  }
  std::uint16_t& example_u16() {
    return example_u16_;
  }
  const std::uint16_t& example_u16() const {
    return example_u16_;
  }
  
  
  
  std::uint32_t get_example_u32() const {
    return example_u32_;
  }
  void set_example_u32(std::uint32_t val) {
    example_u32_ = val;
  }
  std::uint32_t& example_u32() {
    return example_u32_;
  }
  const std::uint32_t& example_u32() const {
    return example_u32_;
  }
  
  
  
  std::uint64_t get_example_u64() const {
    return example_u64_;
  }
  void set_example_u64(std::uint64_t val) {
    example_u64_ = val;
  }
  std::uint64_t& example_u64() {
    return example_u64_;
  }
  const std::uint64_t& example_u64() const {
    return example_u64_;
  }
  
  
  
  std::int8_t get_example_i8() const {
    return example_i8_;
  }
  void set_example_i8(std::int8_t val) {
    example_i8_ = val;
  }
  std::int8_t& example_i8() {
    return example_i8_;
  }
  const std::int8_t& example_i8() const {
    return example_i8_;
  }
  
  
  
  std::int16_t get_example_i16() const {
    return example_i16_;
  }
  void set_example_i16(std::int16_t val) {
    example_i16_ = val;
  }
  std::int16_t& example_i16() {
    return example_i16_;
  }
  const std::int16_t& example_i16() const {
    return example_i16_;
  }
  
  
  
  std::int32_t get_example_i32() const {
    return example_i32_;
  }
  void set_example_i32(std::int32_t val) {
    example_i32_ = val;
  }
  std::int32_t& example_i32() {
    return example_i32_;
  }
  const std::int32_t& example_i32() const {
    return example_i32_;
  }
  
  
  
  std::int64_t get_example_i64() const {
    return example_i64_;
  }
  void set_example_i64(std::int64_t val) {
    example_i64_ = val;
  }
  std::int64_t& example_i64() {
    return example_i64_;
  }
  const std::int64_t& example_i64() const {
    return example_i64_;
  }
  
  

 private:
  bool example_bool_;
  char32_t example_char_;
  std::string example_str_;
  float example_f32_;
  double example_f64_;
  std::uint8_t example_u8_;
  std::uint16_t example_u16_;
  std::uint32_t example_u32_;
  std::uint64_t example_u64_;
  std::int8_t example_i8_;
  std::int16_t example_i16_;
  std::int32_t example_i32_;
  std::int64_t example_i64_;
  
}; // class StructA



// simple_values::StructB struct declaration.
class StructB {
 public:
  // Nested type declarations
  
  // Inline type declarations
  

  StructB() {}
  ~StructB() {}

  StructB(const StructB&) = delete;
  StructB& operator=(const StructB&) = delete;
  StructB(StructB&&) = default;
  StructB& operator=(StructB&&) = default;

  
  

  
  
  bool get_example_bool() const {
    return example_bool_;
  }
  void set_example_bool(bool val) {
    example_bool_ = val;
  }
  bool& example_bool() {
    return example_bool_;
  }
  const bool& example_bool() const {
    return example_bool_;
  }
  
  
  
  char32_t get_example_char() const {
    return example_char_;
  }
  void set_example_char(char32_t val) {
    example_char_ = val;
  }
  char32_t& example_char() {
    return example_char_;
  }
  const char32_t& example_char() const {
    return example_char_;
  }
  
  
  
  void set_example_str(std::string&& val) {
    example_str_ = std::move(val);
  }
  std::string& example_str() {
    return example_str_;
  }
  const std::string& example_str() const {
    return example_str_;
  }
  
  
  
  float get_example_f32() const {
    return example_f32_;
  }
  void set_example_f32(float val) {
    example_f32_ = val;
  }
  float& example_f32() {
    return example_f32_;
  }
  const float& example_f32() const {
    return example_f32_;
  }
  
  
  
  double get_example_f64() const {
    return example_f64_;
  }
  void set_example_f64(double val) {
    example_f64_ = val;
  }
  double& example_f64() {
    return example_f64_;
  }
  const double& example_f64() const {
    return example_f64_;
  }
  
  
  
  std::uint8_t get_example_u8() const {
    return example_u8_;
  }
  void set_example_u8(std::uint8_t val) {
    example_u8_ = val;
  }
  std::uint8_t& example_u8() {
    return example_u8_;
  }
  const std::uint8_t& example_u8() const {
    return example_u8_;
  }
  
  
  
  std::uint16_t get_example_u16() const {
    return example_u16_;
  }
  void set_example_u16(std::uint16_t val) {
    example_u16_ = val;
  }
  std::uint16_t& example_u16() {
    return example_u16_;
  }
  const std::uint16_t& example_u16() const {
    return example_u16_;
  }
  
  
  
  std::uint32_t get_example_u32() const {
    return example_u32_;
  }
  void set_example_u32(std::uint32_t val) {
    example_u32_ = val;
  }
  std::uint32_t& example_u32() {
    return example_u32_;
  }
  const std::uint32_t& example_u32() const {
    return example_u32_;
  }
  
  
  
  std::uint64_t get_example_u64() const {
    return example_u64_;
  }
  void set_example_u64(std::uint64_t val) {
    example_u64_ = val;
  }
  std::uint64_t& example_u64() {
    return example_u64_;
  }
  const std::uint64_t& example_u64() const {
    return example_u64_;
  }
  
  
  
  std::int8_t get_example_i8() const {
    return example_i8_;
  }
  void set_example_i8(std::int8_t val) {
    example_i8_ = val;
  }
  std::int8_t& example_i8() {
    return example_i8_;
  }
  const std::int8_t& example_i8() const {
    return example_i8_;
  }
  
  
  
  std::int16_t get_example_i16() const {
    return example_i16_;
  }
  void set_example_i16(std::int16_t val) {
    example_i16_ = val;
  }
  std::int16_t& example_i16() {
    return example_i16_;
  }
  const std::int16_t& example_i16() const {
    return example_i16_;
  }
  
  
  
  std::int32_t get_example_i32() const {
    return example_i32_;
  }
  void set_example_i32(std::int32_t val) {
    example_i32_ = val;
  }
  std::int32_t& example_i32() {
    return example_i32_;
  }
  const std::int32_t& example_i32() const {
    return example_i32_;
  }
  
  
  
  std::int64_t get_example_i64() const {
    return example_i64_;
  }
  void set_example_i64(std::int64_t val) {
    example_i64_ = val;
  }
  std::int64_t& example_i64() {
    return example_i64_;
  }
  const std::int64_t& example_i64() const {
    return example_i64_;
  }
  
  

 private:
  bool example_bool_;
  char32_t example_char_;
  std::string example_str_;
  float example_f32_;
  double example_f64_;
  std::uint8_t example_u8_;
  std::uint16_t example_u16_;
  std::uint32_t example_u32_;
  std::uint64_t example_u64_;
  std::int8_t example_i8_;
  std::int16_t example_i16_;
  std::int32_t example_i32_;
  std::int64_t example_i64_;
  
}; // class StructB



// simple_values::StructC struct declaration.
class StructC {
 public:
  // Nested type declarations
  
  // Inline type declarations
  

  StructC() {}
  ~StructC() {}

  StructC(const StructC&) = delete;
  StructC& operator=(const StructC&) = delete;
  StructC(StructC&&) = default;
  StructC& operator=(StructC&&) = default;

  
  

  
  
  bool has_asdf() const {
    return asdf_.operator bool();
  }
  void alloc_asdf() {
    asdf_ = std::make_unique<StructA>();
  }
  void delete_asdf() {
    return asdf_.reset(nullptr);
  }
  void set_asdf(std::unique_ptr<StructA> val) {
    asdf_ = std::move(val);
  }
  void set_asdf(StructA* val) {
    asdf_.reset(std::move(val));
  }
  StructA* ptr_asdf() {
    #if TD_AUTO_ALLOC
    if (!has_asdf()) {
      alloc_asdf();
    }
    #endif
    #ifdef DEBUG
    if (!has_asdf()) {
      TD_THROW("Attempted null reference");
    }
    #endif
    return asdf_.get();
  }
  StructA& asdf() {
    return *ptr_asdf();
  }
  const StructA& asdf() const {
    #ifdef DEBUG
    if (!has_asdf()) {
      TD_THROW("Attempted null reference");
    }
    #endif
    return *asdf_.get();
  }
  
  
  
  std::int32_t get_zxcv() const {
    return zxcv_;
  }
  void set_zxcv(std::int32_t val) {
    zxcv_ = val;
  }
  std::int32_t& zxcv() {
    return zxcv_;
  }
  const std::int32_t& zxcv() const {
    return zxcv_;
  }
  
  
  
  std::int32_t get_jkl() const {
    return jkl_;
  }
  void set_jkl(std::int32_t val) {
    jkl_ = val;
  }
  std::int32_t& jkl() {
    return jkl_;
  }
  const std::int32_t& jkl() const {
    return jkl_;
  }
  
  

 private:
  std::unique_ptr<StructA> asdf_;
  std::int32_t zxcv_;
  std::int32_t jkl_;
  
}; // class StructC



// simple_values::VariantA variant declaration.
class VariantA {
 public:
  // Nested type declarations
  
  // Inline type declarations
  

  VariantA() {}
  ~VariantA() {
    tag = Tag::__TAG__UNSET;
  }

  VariantA(const VariantA&) = delete;
  VariantA& operator=(const VariantA&) = delete;
  VariantA(VariantA&&) = default;
  VariantA& operator=(VariantA&&) = default;

  enum class Tag {
    __TAG__UNSET = 0,
    TAG_a = 1,
    TAG_b = 2,
    
  };
  Tag Which() const { return tag; }

  
  bool is_a() const {
    return val_.index() == 1;
  }
  
  bool get_a() const {
    return std::get<1>(val_);
  }
  void set_a(bool val) {
    tag = Tag::TAG_a;
    val_.emplace<1>(val);
  }
  bool& a() {
    if (!is_a()) {
      tag = Tag::TAG_a;
      val_.emplace<1>();
    }
    return std::get<1>(val_);
  }
  const bool& a() const {
    return std::get<1>(val_);
  }
  
  bool is_b() const {
    return val_.index() == 2;
  }
  
  std::int8_t get_b() const {
    return std::get<2>(val_);
  }
  void set_b(std::int8_t val) {
    tag = Tag::TAG_b;
    val_.emplace<2>(val);
  }
  std::int8_t& b() {
    if (!is_b()) {
      tag = Tag::TAG_b;
      val_.emplace<2>();
    }
    return std::get<2>(val_);
  }
  const std::int8_t& b() const {
    return std::get<2>(val_);
  }
  

 private:
  Tag tag = Tag::__TAG__UNSET;

  std::variant<
    std::monostate
  , bool
  , std::int8_t
  
  > val_;

};  // class VariantA



// simple_values::VariantB variant declaration.
class VariantB {
 public:
  // Nested type declarations
  
  // Inline type declarations
  

  VariantB() {}
  ~VariantB() {
    tag = Tag::__TAG__UNSET;
  }

  VariantB(const VariantB&) = delete;
  VariantB& operator=(const VariantB&) = delete;
  VariantB(VariantB&&) = default;
  VariantB& operator=(VariantB&&) = default;

  enum class Tag {
    __TAG__UNSET = 0,
    TAG_a = 1,
    TAG_b = 2,
    TAG_c = 3,
    TAG_d = 4,
    TAG_e = 5,
    TAG_f = 6,
    TAG_g = 7,
    TAG_h = 8,
    TAG_i = 9,
    TAG_j = 10,
    TAG_k = 11,
    TAG_sa = 12,
    TAG_sb = 13,
    TAG_sc = 14,
    TAG_va = 15,
    TAG_vara = 16,
    TAG_mapa = 17,
    
  };
  Tag Which() const { return tag; }

  
  bool is_a() const {
    return val_.index() == 1;
  }
  
  bool get_a() const {
    return std::get<1>(val_);
  }
  void set_a(bool val) {
    tag = Tag::TAG_a;
    val_.emplace<1>(val);
  }
  bool& a() {
    if (!is_a()) {
      tag = Tag::TAG_a;
      val_.emplace<1>();
    }
    return std::get<1>(val_);
  }
  const bool& a() const {
    return std::get<1>(val_);
  }
  
  bool is_b() const {
    return val_.index() == 2;
  }
  
  char32_t get_b() const {
    return std::get<2>(val_);
  }
  void set_b(char32_t val) {
    tag = Tag::TAG_b;
    val_.emplace<2>(val);
  }
  char32_t& b() {
    if (!is_b()) {
      tag = Tag::TAG_b;
      val_.emplace<2>();
    }
    return std::get<2>(val_);
  }
  const char32_t& b() const {
    return std::get<2>(val_);
  }
  
  bool is_c() const {
    return val_.index() == 3;
  }
  
  std::string& c() {
    if (!is_c()) {
      tag = Tag::TAG_c;
      val_.emplace<3>();
    }
    return std::get<3>(val_);
  }
  const std::string& c() const {
    return std::get<3>(val_);
  }
  void set_c(std::string&& val) {
    tag = Tag::TAG_c;
    val_.emplace<3>(std::move(val));
  }
  
  bool is_d() const {
    return val_.index() == 4;
  }
  
  std::uint8_t get_d() const {
    return std::get<4>(val_);
  }
  void set_d(std::uint8_t val) {
    tag = Tag::TAG_d;
    val_.emplace<4>(val);
  }
  std::uint8_t& d() {
    if (!is_d()) {
      tag = Tag::TAG_d;
      val_.emplace<4>();
    }
    return std::get<4>(val_);
  }
  const std::uint8_t& d() const {
    return std::get<4>(val_);
  }
  
  bool is_e() const {
    return val_.index() == 5;
  }
  
  std::uint16_t get_e() const {
    return std::get<5>(val_);
  }
  void set_e(std::uint16_t val) {
    tag = Tag::TAG_e;
    val_.emplace<5>(val);
  }
  std::uint16_t& e() {
    if (!is_e()) {
      tag = Tag::TAG_e;
      val_.emplace<5>();
    }
    return std::get<5>(val_);
  }
  const std::uint16_t& e() const {
    return std::get<5>(val_);
  }
  
  bool is_f() const {
    return val_.index() == 6;
  }
  
  std::uint32_t get_f() const {
    return std::get<6>(val_);
  }
  void set_f(std::uint32_t val) {
    tag = Tag::TAG_f;
    val_.emplace<6>(val);
  }
  std::uint32_t& f() {
    if (!is_f()) {
      tag = Tag::TAG_f;
      val_.emplace<6>();
    }
    return std::get<6>(val_);
  }
  const std::uint32_t& f() const {
    return std::get<6>(val_);
  }
  
  bool is_g() const {
    return val_.index() == 7;
  }
  
  std::uint64_t get_g() const {
    return std::get<7>(val_);
  }
  void set_g(std::uint64_t val) {
    tag = Tag::TAG_g;
    val_.emplace<7>(val);
  }
  std::uint64_t& g() {
    if (!is_g()) {
      tag = Tag::TAG_g;
      val_.emplace<7>();
    }
    return std::get<7>(val_);
  }
  const std::uint64_t& g() const {
    return std::get<7>(val_);
  }
  
  bool is_h() const {
    return val_.index() == 8;
  }
  
  std::int8_t get_h() const {
    return std::get<8>(val_);
  }
  void set_h(std::int8_t val) {
    tag = Tag::TAG_h;
    val_.emplace<8>(val);
  }
  std::int8_t& h() {
    if (!is_h()) {
      tag = Tag::TAG_h;
      val_.emplace<8>();
    }
    return std::get<8>(val_);
  }
  const std::int8_t& h() const {
    return std::get<8>(val_);
  }
  
  bool is_i() const {
    return val_.index() == 9;
  }
  
  std::int16_t get_i() const {
    return std::get<9>(val_);
  }
  void set_i(std::int16_t val) {
    tag = Tag::TAG_i;
    val_.emplace<9>(val);
  }
  std::int16_t& i() {
    if (!is_i()) {
      tag = Tag::TAG_i;
      val_.emplace<9>();
    }
    return std::get<9>(val_);
  }
  const std::int16_t& i() const {
    return std::get<9>(val_);
  }
  
  bool is_j() const {
    return val_.index() == 10;
  }
  
  std::int32_t get_j() const {
    return std::get<10>(val_);
  }
  void set_j(std::int32_t val) {
    tag = Tag::TAG_j;
    val_.emplace<10>(val);
  }
  std::int32_t& j() {
    if (!is_j()) {
      tag = Tag::TAG_j;
      val_.emplace<10>();
    }
    return std::get<10>(val_);
  }
  const std::int32_t& j() const {
    return std::get<10>(val_);
  }
  
  bool is_k() const {
    return val_.index() == 11;
  }
  
  std::int64_t get_k() const {
    return std::get<11>(val_);
  }
  void set_k(std::int64_t val) {
    tag = Tag::TAG_k;
    val_.emplace<11>(val);
  }
  std::int64_t& k() {
    if (!is_k()) {
      tag = Tag::TAG_k;
      val_.emplace<11>();
    }
    return std::get<11>(val_);
  }
  const std::int64_t& k() const {
    return std::get<11>(val_);
  }
  
  bool is_sa() const {
    return val_.index() == 12;
  }
  
  bool has_sa() const {
    return is_sa() && std::get<12>(val_).operator bool();
  }
  void alloc_sa() {
    tag = Tag::TAG_sa;
    val_.emplace<12>(std::make_unique<StructA>());
  }
  void delete_sa() {
    return std::get<12>(val_).reset(nullptr);
  }
  void set_sa(std::unique_ptr<StructA> val) {
    tag = Tag::TAG_sa;
    val_.emplace<12>(std::move(val));
  }
  void set_sa(StructA* val) {
    tag = Tag::TAG_sa;
    std::get<12>(val_).reset(std::move(val));
  }
  StructA* ptr_sa() {
    #if TD_AUTO_ALLOC
    if (!has_sa()) {
      alloc_sa();
    }
    #endif
    return std::get<12>(val_).get();
  }
  StructA& sa() {
    return *ptr_sa();
  }
  const StructA& sa() const {
    return *std::get<12>(val_).get();
  }
  
  bool is_sb() const {
    return val_.index() == 13;
  }
  
  bool has_sb() const {
    return is_sb() && std::get<13>(val_).operator bool();
  }
  void alloc_sb() {
    tag = Tag::TAG_sb;
    val_.emplace<13>(std::make_unique<StructB>());
  }
  void delete_sb() {
    return std::get<13>(val_).reset(nullptr);
  }
  void set_sb(std::unique_ptr<StructB> val) {
    tag = Tag::TAG_sb;
    val_.emplace<13>(std::move(val));
  }
  void set_sb(StructB* val) {
    tag = Tag::TAG_sb;
    std::get<13>(val_).reset(std::move(val));
  }
  StructB* ptr_sb() {
    #if TD_AUTO_ALLOC
    if (!has_sb()) {
      alloc_sb();
    }
    #endif
    return std::get<13>(val_).get();
  }
  StructB& sb() {
    return *ptr_sb();
  }
  const StructB& sb() const {
    return *std::get<13>(val_).get();
  }
  
  bool is_sc() const {
    return val_.index() == 14;
  }
  
  bool has_sc() const {
    return is_sc() && std::get<14>(val_).operator bool();
  }
  void alloc_sc() {
    tag = Tag::TAG_sc;
    val_.emplace<14>(std::make_unique<StructC>());
  }
  void delete_sc() {
    return std::get<14>(val_).reset(nullptr);
  }
  void set_sc(std::unique_ptr<StructC> val) {
    tag = Tag::TAG_sc;
    val_.emplace<14>(std::move(val));
  }
  void set_sc(StructC* val) {
    tag = Tag::TAG_sc;
    std::get<14>(val_).reset(std::move(val));
  }
  StructC* ptr_sc() {
    #if TD_AUTO_ALLOC
    if (!has_sc()) {
      alloc_sc();
    }
    #endif
    return std::get<14>(val_).get();
  }
  StructC& sc() {
    return *ptr_sc();
  }
  const StructC& sc() const {
    return *std::get<14>(val_).get();
  }
  
  bool is_va() const {
    return val_.index() == 15;
  }
  
  td::Vector<std::uint8_t>& va() {
    if (!is_va()) {
      tag = Tag::TAG_va;
      val_.emplace<15>();
    }
    return std::get<15>(val_);
  }
  const td::Vector<std::uint8_t>& va() const {
    return std::get<15>(val_);
  }
  void set_va(td::Vector<std::uint8_t>&& val) {
    tag = Tag::TAG_va;
    val_.emplace<15>(std::move(val));
  }
  
  bool is_vara() const {
    return val_.index() == 16;
  }
  
  bool has_vara() const {
    return is_vara() && std::get<16>(val_).operator bool();
  }
  void alloc_vara() {
    tag = Tag::TAG_vara;
    val_.emplace<16>(std::make_unique<VariantA>());
  }
  void delete_vara() {
    return std::get<16>(val_).reset(nullptr);
  }
  void set_vara(std::unique_ptr<VariantA> val) {
    tag = Tag::TAG_vara;
    val_.emplace<16>(std::move(val));
  }
  void set_vara(VariantA* val) {
    tag = Tag::TAG_vara;
    std::get<16>(val_).reset(std::move(val));
  }
  VariantA* ptr_vara() {
    #if TD_AUTO_ALLOC
    if (!has_vara()) {
      alloc_vara();
    }
    #endif
    return std::get<16>(val_).get();
  }
  VariantA& vara() {
    return *ptr_vara();
  }
  const VariantA& vara() const {
    return *std::get<16>(val_).get();
  }
  
  bool is_mapa() const {
    return val_.index() == 17;
  }
  
  td::Map<std::int32_t, VariantB>& mapa() {
    if (!is_mapa()) {
      tag = Tag::TAG_mapa;
      val_.emplace<17>();
    }
    return std::get<17>(val_);
  }
  const td::Map<std::int32_t, VariantB>& mapa() const {
    return std::get<17>(val_);
  }
  void set_mapa(td::Map<std::int32_t, VariantB>&& val) {
    tag = Tag::TAG_mapa;
    val_.emplace<17>(std::move(val));
  }
  

 private:
  Tag tag = Tag::__TAG__UNSET;

  std::variant<
    std::monostate
  , bool
  , char32_t
  , std::string
  , std::uint8_t
  , std::uint16_t
  , std::uint32_t
  , std::uint64_t
  , std::int8_t
  , std::int16_t
  , std::int32_t
  , std::int64_t
  , std::unique_ptr<StructA>
  , std::unique_ptr<StructB>
  , std::unique_ptr<StructC>
  , td::Vector<std::uint8_t>
  , std::unique_ptr<VariantA>
  , td::Map<std::int32_t, VariantB>
  
  > val_;

};  // class VariantB



// simple_values::StructD struct declaration.
class StructD {
 public:
  // Nested type declarations
  
  // Inline type declarations
  

  StructD() {}
  ~StructD() {}

  StructD(const StructD&) = delete;
  StructD& operator=(const StructD&) = delete;
  StructD(StructD&&) = default;
  StructD& operator=(StructD&&) = default;

  
  

  
  
  bool has_a_struct() const {
    return a_struct_.operator bool();
  }
  void alloc_a_struct() {
    a_struct_ = std::make_unique<StructA>();
  }
  void delete_a_struct() {
    return a_struct_.reset(nullptr);
  }
  void set_a_struct(std::unique_ptr<StructA> val) {
    a_struct_ = std::move(val);
  }
  void set_a_struct(StructA* val) {
    a_struct_.reset(std::move(val));
  }
  StructA* ptr_a_struct() {
    #if TD_AUTO_ALLOC
    if (!has_a_struct()) {
      alloc_a_struct();
    }
    #endif
    #ifdef DEBUG
    if (!has_a_struct()) {
      TD_THROW("Attempted null reference");
    }
    #endif
    return a_struct_.get();
  }
  StructA& a_struct() {
    return *ptr_a_struct();
  }
  const StructA& a_struct() const {
    #ifdef DEBUG
    if (!has_a_struct()) {
      TD_THROW("Attempted null reference");
    }
    #endif
    return *a_struct_.get();
  }
  
  
  
  bool has_b_variant() const {
    return b_variant_.operator bool();
  }
  void alloc_b_variant() {
    b_variant_ = std::make_unique<VariantA>();
  }
  void delete_b_variant() {
    return b_variant_.reset(nullptr);
  }
  void set_b_variant(std::unique_ptr<VariantA> val) {
    b_variant_ = std::move(val);
  }
  void set_b_variant(VariantA* val) {
    b_variant_.reset(std::move(val));
  }
  VariantA* ptr_b_variant() {
    #if TD_AUTO_ALLOC
    if (!has_b_variant()) {
      alloc_b_variant();
    }
    #endif
    #ifdef DEBUG
    if (!has_b_variant()) {
      TD_THROW("Attempted null reference");
    }
    #endif
    return b_variant_.get();
  }
  VariantA& b_variant() {
    return *ptr_b_variant();
  }
  const VariantA& b_variant() const {
    #ifdef DEBUG
    if (!has_b_variant()) {
      TD_THROW("Attempted null reference");
    }
    #endif
    return *b_variant_.get();
  }
  
  
  
  void set_c_vec(td::Vector<std::uint8_t>&& val) {
    c_vec_ = std::move(val);
  }
  td::Vector<std::uint8_t>& c_vec() {
    return c_vec_;
  }
  const td::Vector<std::uint8_t>& c_vec() const {
    return c_vec_;
  }
  
  
  
  void set_d_map(td::Map<std::int32_t, VariantB>&& val) {
    d_map_ = std::move(val);
  }
  td::Map<std::int32_t, VariantB>& d_map() {
    return d_map_;
  }
  const td::Map<std::int32_t, VariantB>& d_map() const {
    return d_map_;
  }
  
  

 private:
  std::unique_ptr<StructA> a_struct_;
  std::unique_ptr<VariantA> b_variant_;
  td::Vector<std::uint8_t> c_vec_;
  td::Map<std::int32_t, VariantB> d_map_;
  
}; // class StructD



// simple_values::StructE struct declaration.
class StructE {
 public:
  // Nested type declarations
  

// simple_values::StructE::VariantE variant declaration.
class VariantE {
 public:
  // Nested type declarations
  
  // Inline type declarations
  

  VariantE() {}
  ~VariantE() {
    tag = Tag::__TAG__UNSET;
  }

  VariantE(const VariantE&) = delete;
  VariantE& operator=(const VariantE&) = delete;
  VariantE(VariantE&&) = default;
  VariantE& operator=(VariantE&&) = default;

  enum class Tag {
    __TAG__UNSET = 0,
    TAG_va = 1,
    TAG_vb = 2,
    
  };
  Tag Which() const { return tag; }

  
  bool is_va() const {
    return val_.index() == 1;
  }
  
  std::int32_t get_va() const {
    return std::get<1>(val_);
  }
  void set_va(std::int32_t val) {
    tag = Tag::TAG_va;
    val_.emplace<1>(val);
  }
  std::int32_t& va() {
    if (!is_va()) {
      tag = Tag::TAG_va;
      val_.emplace<1>();
    }
    return std::get<1>(val_);
  }
  const std::int32_t& va() const {
    return std::get<1>(val_);
  }
  
  bool is_vb() const {
    return val_.index() == 2;
  }
  
  std::string& vb() {
    if (!is_vb()) {
      tag = Tag::TAG_vb;
      val_.emplace<2>();
    }
    return std::get<2>(val_);
  }
  const std::string& vb() const {
    return std::get<2>(val_);
  }
  void set_vb(std::string&& val) {
    tag = Tag::TAG_vb;
    val_.emplace<2>(std::move(val));
  }
  

 private:
  Tag tag = Tag::__TAG__UNSET;

  std::variant<
    std::monostate
  , std::int32_t
  , std::string
  
  > val_;

};  // class VariantE



// simple_values::StructE::NestedStruct struct declaration.
class NestedStruct {
 public:
  // Nested type declarations
  
  // Inline type declarations
  

  NestedStruct() {}
  ~NestedStruct() {}

  NestedStruct(const NestedStruct&) = delete;
  NestedStruct& operator=(const NestedStruct&) = delete;
  NestedStruct(NestedStruct&&) = default;
  NestedStruct& operator=(NestedStruct&&) = default;

  
  

  
  
  std::int32_t get_a() const {
    return a_;
  }
  void set_a(std::int32_t val) {
    a_ = val;
  }
  std::int32_t& a() {
    return a_;
  }
  const std::int32_t& a() const {
    return a_;
  }
  
  

 private:
  std::int32_t a_;
  
}; // class NestedStruct



// simple_values::StructE::NestedVariant variant declaration.
class NestedVariant {
 public:
  // Nested type declarations
  
  // Inline type declarations
  

  NestedVariant() {}
  ~NestedVariant() {
    tag = Tag::__TAG__UNSET;
  }

  NestedVariant(const NestedVariant&) = delete;
  NestedVariant& operator=(const NestedVariant&) = delete;
  NestedVariant(NestedVariant&&) = default;
  NestedVariant& operator=(NestedVariant&&) = default;

  enum class Tag {
    __TAG__UNSET = 0,
    TAG_a = 1,
    
  };
  Tag Which() const { return tag; }

  
  bool is_a() const {
    return val_.index() == 1;
  }
  
  std::int64_t get_a() const {
    return std::get<1>(val_);
  }
  void set_a(std::int64_t val) {
    tag = Tag::TAG_a;
    val_.emplace<1>(val);
  }
  std::int64_t& a() {
    if (!is_a()) {
      tag = Tag::TAG_a;
      val_.emplace<1>();
    }
    return std::get<1>(val_);
  }
  const std::int64_t& a() const {
    return std::get<1>(val_);
  }
  

 private:
  Tag tag = Tag::__TAG__UNSET;

  std::variant<
    std::monostate
  , std::int64_t
  
  > val_;

};  // class NestedVariant


  // Inline type declarations
  

// simple_values::StructE::inlineStructT struct declaration.
class inlineStructT {
 public:
  // Nested type declarations
  
  // Inline type declarations
  

  inlineStructT() {}
  ~inlineStructT() {}

  inlineStructT(const inlineStructT&) = delete;
  inlineStructT& operator=(const inlineStructT&) = delete;
  inlineStructT(inlineStructT&&) = default;
  inlineStructT& operator=(inlineStructT&&) = default;

  
  

  
  
  std::int32_t get_a() const {
    return a_;
  }
  void set_a(std::int32_t val) {
    a_ = val;
  }
  std::int32_t& a() {
    return a_;
  }
  const std::int32_t& a() const {
    return a_;
  }
  
  

 private:
  std::int32_t a_;
  
}; // class inlineStructT



  StructE() {}
  ~StructE() {}

  StructE(const StructE&) = delete;
  StructE& operator=(const StructE&) = delete;
  StructE(StructE&&) = default;
  StructE& operator=(StructE&&) = default;

  
  

  
  
  bool has_inlineStruct() const {
    return inlineStruct_.operator bool();
  }
  void alloc_inlineStruct() {
    inlineStruct_ = std::make_unique<inlineStructT>();
  }
  void delete_inlineStruct() {
    return inlineStruct_.reset(nullptr);
  }
  void set_inlineStruct(std::unique_ptr<inlineStructT> val) {
    inlineStruct_ = std::move(val);
  }
  void set_inlineStruct(inlineStructT* val) {
    inlineStruct_.reset(std::move(val));
  }
  inlineStructT* ptr_inlineStruct() {
    #if TD_AUTO_ALLOC
    if (!has_inlineStruct()) {
      alloc_inlineStruct();
    }
    #endif
    #ifdef DEBUG
    if (!has_inlineStruct()) {
      TD_THROW("Attempted null reference");
    }
    #endif
    return inlineStruct_.get();
  }
  inlineStructT& inlineStruct() {
    return *ptr_inlineStruct();
  }
  const inlineStructT& inlineStruct() const {
    #ifdef DEBUG
    if (!has_inlineStruct()) {
      TD_THROW("Attempted null reference");
    }
    #endif
    return *inlineStruct_.get();
  }
  
  
  
  void set_vec_a(td::Vector<std::int32_t>&& val) {
    vec_a_ = std::move(val);
  }
  td::Vector<std::int32_t>& vec_a() {
    return vec_a_;
  }
  const td::Vector<std::int32_t>& vec_a() const {
    return vec_a_;
  }
  
  
  
  void set_map_a(td::Map<std::string, StructD>&& val) {
    map_a_ = std::move(val);
  }
  td::Map<std::string, StructD>& map_a() {
    return map_a_;
  }
  const td::Map<std::string, StructD>& map_a() const {
    return map_a_;
  }
  
  
  
  bool has_nestedStructField() const {
    return nestedStructField_.operator bool();
  }
  void alloc_nestedStructField() {
    nestedStructField_ = std::make_unique<NestedStruct>();
  }
  void delete_nestedStructField() {
    return nestedStructField_.reset(nullptr);
  }
  void set_nestedStructField(std::unique_ptr<NestedStruct> val) {
    nestedStructField_ = std::move(val);
  }
  void set_nestedStructField(NestedStruct* val) {
    nestedStructField_.reset(std::move(val));
  }
  NestedStruct* ptr_nestedStructField() {
    #if TD_AUTO_ALLOC
    if (!has_nestedStructField()) {
      alloc_nestedStructField();
    }
    #endif
    #ifdef DEBUG
    if (!has_nestedStructField()) {
      TD_THROW("Attempted null reference");
    }
    #endif
    return nestedStructField_.get();
  }
  NestedStruct& nestedStructField() {
    return *ptr_nestedStructField();
  }
  const NestedStruct& nestedStructField() const {
    #ifdef DEBUG
    if (!has_nestedStructField()) {
      TD_THROW("Attempted null reference");
    }
    #endif
    return *nestedStructField_.get();
  }
  
  
  
  bool has_nestedVariantField() const {
    return nestedVariantField_.operator bool();
  }
  void alloc_nestedVariantField() {
    nestedVariantField_ = std::make_unique<NestedVariant>();
  }
  void delete_nestedVariantField() {
    return nestedVariantField_.reset(nullptr);
  }
  void set_nestedVariantField(std::unique_ptr<NestedVariant> val) {
    nestedVariantField_ = std::move(val);
  }
  void set_nestedVariantField(NestedVariant* val) {
    nestedVariantField_.reset(std::move(val));
  }
  NestedVariant* ptr_nestedVariantField() {
    #if TD_AUTO_ALLOC
    if (!has_nestedVariantField()) {
      alloc_nestedVariantField();
    }
    #endif
    #ifdef DEBUG
    if (!has_nestedVariantField()) {
      TD_THROW("Attempted null reference");
    }
    #endif
    return nestedVariantField_.get();
  }
  NestedVariant& nestedVariantField() {
    return *ptr_nestedVariantField();
  }
  const NestedVariant& nestedVariantField() const {
    #ifdef DEBUG
    if (!has_nestedVariantField()) {
      TD_THROW("Attempted null reference");
    }
    #endif
    return *nestedVariantField_.get();
  }
  
  

 private:
  std::unique_ptr<inlineStructT> inlineStruct_;
  td::Vector<std::int32_t> vec_a_;
  td::Map<std::string, StructD> map_a_;
  std::unique_ptr<NestedStruct> nestedStructField_;
  std::unique_ptr<NestedVariant> nestedVariantField_;
  
}; // class StructE



// simple_values::VariantC variant declaration.
class VariantC {
 public:
  // Nested type declarations
  

// simple_values::VariantC::NestedStruct struct declaration.
class NestedStruct {
 public:
  // Nested type declarations
  
  // Inline type declarations
  

  NestedStruct() {}
  ~NestedStruct() {}

  NestedStruct(const NestedStruct&) = delete;
  NestedStruct& operator=(const NestedStruct&) = delete;
  NestedStruct(NestedStruct&&) = default;
  NestedStruct& operator=(NestedStruct&&) = default;

  
  

  
  
  std::int32_t get_a() const {
    return a_;
  }
  void set_a(std::int32_t val) {
    a_ = val;
  }
  std::int32_t& a() {
    return a_;
  }
  const std::int32_t& a() const {
    return a_;
  }
  
  

 private:
  std::int32_t a_;
  
}; // class NestedStruct



// simple_values::VariantC::NestedVariant variant declaration.
class NestedVariant {
 public:
  // Nested type declarations
  
  // Inline type declarations
  

  NestedVariant() {}
  ~NestedVariant() {
    tag = Tag::__TAG__UNSET;
  }

  NestedVariant(const NestedVariant&) = delete;
  NestedVariant& operator=(const NestedVariant&) = delete;
  NestedVariant(NestedVariant&&) = default;
  NestedVariant& operator=(NestedVariant&&) = default;

  enum class Tag {
    __TAG__UNSET = 0,
    TAG_a = 1,
    
  };
  Tag Which() const { return tag; }

  
  bool is_a() const {
    return val_.index() == 1;
  }
  
  std::int64_t get_a() const {
    return std::get<1>(val_);
  }
  void set_a(std::int64_t val) {
    tag = Tag::TAG_a;
    val_.emplace<1>(val);
  }
  std::int64_t& a() {
    if (!is_a()) {
      tag = Tag::TAG_a;
      val_.emplace<1>();
    }
    return std::get<1>(val_);
  }
  const std::int64_t& a() const {
    return std::get<1>(val_);
  }
  

 private:
  Tag tag = Tag::__TAG__UNSET;

  std::variant<
    std::monostate
  , std::int64_t
  
  > val_;

};  // class NestedVariant


  // Inline type declarations
  

// simple_values::VariantC::inlineStructT struct declaration.
class inlineStructT {
 public:
  // Nested type declarations
  
  // Inline type declarations
  

  inlineStructT() {}
  ~inlineStructT() {}

  inlineStructT(const inlineStructT&) = delete;
  inlineStructT& operator=(const inlineStructT&) = delete;
  inlineStructT(inlineStructT&&) = default;
  inlineStructT& operator=(inlineStructT&&) = default;

  
  

  
  
  std::int32_t get_a() const {
    return a_;
  }
  void set_a(std::int32_t val) {
    a_ = val;
  }
  std::int32_t& a() {
    return a_;
  }
  const std::int32_t& a() const {
    return a_;
  }
  
  

 private:
  std::int32_t a_;
  
}; // class inlineStructT



// simple_values::VariantC::VariantFT variant declaration.
class VariantFT {
 public:
  // Nested type declarations
  
  // Inline type declarations
  

  VariantFT() {}
  ~VariantFT() {
    tag = Tag::__TAG__UNSET;
  }

  VariantFT(const VariantFT&) = delete;
  VariantFT& operator=(const VariantFT&) = delete;
  VariantFT(VariantFT&&) = default;
  VariantFT& operator=(VariantFT&&) = default;

  enum class Tag {
    __TAG__UNSET = 0,
    TAG_va = 1,
    TAG_vb = 2,
    
  };
  Tag Which() const { return tag; }

  
  bool is_va() const {
    return val_.index() == 1;
  }
  
  std::int32_t get_va() const {
    return std::get<1>(val_);
  }
  void set_va(std::int32_t val) {
    tag = Tag::TAG_va;
    val_.emplace<1>(val);
  }
  std::int32_t& va() {
    if (!is_va()) {
      tag = Tag::TAG_va;
      val_.emplace<1>();
    }
    return std::get<1>(val_);
  }
  const std::int32_t& va() const {
    return std::get<1>(val_);
  }
  
  bool is_vb() const {
    return val_.index() == 2;
  }
  
  std::string& vb() {
    if (!is_vb()) {
      tag = Tag::TAG_vb;
      val_.emplace<2>();
    }
    return std::get<2>(val_);
  }
  const std::string& vb() const {
    return std::get<2>(val_);
  }
  void set_vb(std::string&& val) {
    tag = Tag::TAG_vb;
    val_.emplace<2>(std::move(val));
  }
  

 private:
  Tag tag = Tag::__TAG__UNSET;

  std::variant<
    std::monostate
  , std::int32_t
  , std::string
  
  > val_;

};  // class VariantFT



  VariantC() {}
  ~VariantC() {
    tag = Tag::__TAG__UNSET;
  }

  VariantC(const VariantC&) = delete;
  VariantC& operator=(const VariantC&) = delete;
  VariantC(VariantC&&) = default;
  VariantC& operator=(VariantC&&) = default;

  enum class Tag {
    __TAG__UNSET = 0,
    TAG_inlineStruct = 1,
    TAG_VariantF = 2,
    TAG_vec_a = 3,
    TAG_map_a = 4,
    TAG_nestedStructField = 5,
    TAG_nestedVariantField = 6,
    TAG_map_b = 7,
    TAG_vec_b = 8,
    
  };
  Tag Which() const { return tag; }

  
  bool is_inlineStruct() const {
    return val_.index() == 1;
  }
  
  bool has_inlineStruct() const {
    return is_inlineStruct() && std::get<1>(val_).operator bool();
  }
  void alloc_inlineStruct() {
    tag = Tag::TAG_inlineStruct;
    val_.emplace<1>(std::make_unique<inlineStructT>());
  }
  void delete_inlineStruct() {
    return std::get<1>(val_).reset(nullptr);
  }
  void set_inlineStruct(std::unique_ptr<inlineStructT> val) {
    tag = Tag::TAG_inlineStruct;
    val_.emplace<1>(std::move(val));
  }
  void set_inlineStruct(inlineStructT* val) {
    tag = Tag::TAG_inlineStruct;
    std::get<1>(val_).reset(std::move(val));
  }
  inlineStructT* ptr_inlineStruct() {
    #if TD_AUTO_ALLOC
    if (!has_inlineStruct()) {
      alloc_inlineStruct();
    }
    #endif
    return std::get<1>(val_).get();
  }
  inlineStructT& inlineStruct() {
    return *ptr_inlineStruct();
  }
  const inlineStructT& inlineStruct() const {
    return *std::get<1>(val_).get();
  }
  
  bool is_VariantF() const {
    return val_.index() == 2;
  }
  
  bool has_VariantF() const {
    return is_VariantF() && std::get<2>(val_).operator bool();
  }
  void alloc_VariantF() {
    tag = Tag::TAG_VariantF;
    val_.emplace<2>(std::make_unique<VariantFT>());
  }
  void delete_VariantF() {
    return std::get<2>(val_).reset(nullptr);
  }
  void set_VariantF(std::unique_ptr<VariantFT> val) {
    tag = Tag::TAG_VariantF;
    val_.emplace<2>(std::move(val));
  }
  void set_VariantF(VariantFT* val) {
    tag = Tag::TAG_VariantF;
    std::get<2>(val_).reset(std::move(val));
  }
  VariantFT* ptr_VariantF() {
    #if TD_AUTO_ALLOC
    if (!has_VariantF()) {
      alloc_VariantF();
    }
    #endif
    return std::get<2>(val_).get();
  }
  VariantFT& VariantF() {
    return *ptr_VariantF();
  }
  const VariantFT& VariantF() const {
    return *std::get<2>(val_).get();
  }
  
  bool is_vec_a() const {
    return val_.index() == 3;
  }
  
  td::Vector<std::int32_t>& vec_a() {
    if (!is_vec_a()) {
      tag = Tag::TAG_vec_a;
      val_.emplace<3>();
    }
    return std::get<3>(val_);
  }
  const td::Vector<std::int32_t>& vec_a() const {
    return std::get<3>(val_);
  }
  void set_vec_a(td::Vector<std::int32_t>&& val) {
    tag = Tag::TAG_vec_a;
    val_.emplace<3>(std::move(val));
  }
  
  bool is_map_a() const {
    return val_.index() == 4;
  }
  
  td::Map<std::string, StructD>& map_a() {
    if (!is_map_a()) {
      tag = Tag::TAG_map_a;
      val_.emplace<4>();
    }
    return std::get<4>(val_);
  }
  const td::Map<std::string, StructD>& map_a() const {
    return std::get<4>(val_);
  }
  void set_map_a(td::Map<std::string, StructD>&& val) {
    tag = Tag::TAG_map_a;
    val_.emplace<4>(std::move(val));
  }
  
  bool is_nestedStructField() const {
    return val_.index() == 5;
  }
  
  bool has_nestedStructField() const {
    return is_nestedStructField() && std::get<5>(val_).operator bool();
  }
  void alloc_nestedStructField() {
    tag = Tag::TAG_nestedStructField;
    val_.emplace<5>(std::make_unique<NestedStruct>());
  }
  void delete_nestedStructField() {
    return std::get<5>(val_).reset(nullptr);
  }
  void set_nestedStructField(std::unique_ptr<NestedStruct> val) {
    tag = Tag::TAG_nestedStructField;
    val_.emplace<5>(std::move(val));
  }
  void set_nestedStructField(NestedStruct* val) {
    tag = Tag::TAG_nestedStructField;
    std::get<5>(val_).reset(std::move(val));
  }
  NestedStruct* ptr_nestedStructField() {
    #if TD_AUTO_ALLOC
    if (!has_nestedStructField()) {
      alloc_nestedStructField();
    }
    #endif
    return std::get<5>(val_).get();
  }
  NestedStruct& nestedStructField() {
    return *ptr_nestedStructField();
  }
  const NestedStruct& nestedStructField() const {
    return *std::get<5>(val_).get();
  }
  
  bool is_nestedVariantField() const {
    return val_.index() == 6;
  }
  
  bool has_nestedVariantField() const {
    return is_nestedVariantField() && std::get<6>(val_).operator bool();
  }
  void alloc_nestedVariantField() {
    tag = Tag::TAG_nestedVariantField;
    val_.emplace<6>(std::make_unique<NestedVariant>());
  }
  void delete_nestedVariantField() {
    return std::get<6>(val_).reset(nullptr);
  }
  void set_nestedVariantField(std::unique_ptr<NestedVariant> val) {
    tag = Tag::TAG_nestedVariantField;
    val_.emplace<6>(std::move(val));
  }
  void set_nestedVariantField(NestedVariant* val) {
    tag = Tag::TAG_nestedVariantField;
    std::get<6>(val_).reset(std::move(val));
  }
  NestedVariant* ptr_nestedVariantField() {
    #if TD_AUTO_ALLOC
    if (!has_nestedVariantField()) {
      alloc_nestedVariantField();
    }
    #endif
    return std::get<6>(val_).get();
  }
  NestedVariant& nestedVariantField() {
    return *ptr_nestedVariantField();
  }
  const NestedVariant& nestedVariantField() const {
    return *std::get<6>(val_).get();
  }
  
  bool is_map_b() const {
    return val_.index() == 7;
  }
  
  td::Map<std::int32_t, NestedVariant>& map_b() {
    if (!is_map_b()) {
      tag = Tag::TAG_map_b;
      val_.emplace<7>();
    }
    return std::get<7>(val_);
  }
  const td::Map<std::int32_t, NestedVariant>& map_b() const {
    return std::get<7>(val_);
  }
  void set_map_b(td::Map<std::int32_t, NestedVariant>&& val) {
    tag = Tag::TAG_map_b;
    val_.emplace<7>(std::move(val));
  }
  
  bool is_vec_b() const {
    return val_.index() == 8;
  }
  
  td::Vector<std::int32_t>& vec_b() {
    if (!is_vec_b()) {
      tag = Tag::TAG_vec_b;
      val_.emplace<8>();
    }
    return std::get<8>(val_);
  }
  const td::Vector<std::int32_t>& vec_b() const {
    return std::get<8>(val_);
  }
  void set_vec_b(td::Vector<std::int32_t>&& val) {
    tag = Tag::TAG_vec_b;
    val_.emplace<8>(std::move(val));
  }
  

 private:
  Tag tag = Tag::__TAG__UNSET;

  std::variant<
    std::monostate
  , std::unique_ptr<inlineStructT>
  , std::unique_ptr<VariantFT>
  , td::Vector<std::int32_t>
  , td::Map<std::string, StructD>
  , std::unique_ptr<NestedStruct>
  , std::unique_ptr<NestedVariant>
  , td::Map<std::int32_t, NestedVariant>
  , td::Vector<std::int32_t>
  
  > val_;

};  // class VariantC





} // namespace simple_values


#endif  // SIMPLE_VALUES_TD_CPP_H__
