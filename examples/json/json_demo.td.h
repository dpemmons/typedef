
#ifndef JSON_DEMO_TD_CPP_H__
#define JSON_DEMO_TD_CPP_H__

#include <cstdint>
#include <memory>
#include <string>
#include <variant>
#include <ostream>

#include <typedef/builtin_types.h>

// Generated by the Typedef compiler (EXPERIMENTAL)

#ifndef TD_THROW
#define TD_STRINGIZE_DETAIL(x) #x
#define TD_STRINGIZE(x) TD_STRINGIZE_DETAIL(x)
#define TD_THROW(msg) (throw msg __FILE__ ":" TD_STRINGIZE(__LINE__))
#endif

#ifndef TD_AUTO_ALLOC
#define TD_AUTO_ALLOC 1
#endif

namespace json_demo {

// Forward declarations.
class StructA;
class StructB;
class StructC;
class VariantA;

// Struct and variant declarations

// StructA struct declaration.
class StructA {
 public:
  // Nested type declarations
  

// StructA::NestedStruct struct declaration.
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

  
  static NestedStruct FromJson(const std::string& str);
  

  
  
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
  std::int32_t a_ = 0;
  
}; // class NestedStruct



// json_demo::StructA::NestedVariant variant declaration.
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

  
  static NestedVariant FromJson(const std::string& str);
  

  enum class Tag {
    __TAG__UNSET = 0,
    TAG_c = 1,
    TAG_d = 2,
    
  };
  Tag Which() const { return tag; }

  
  bool is_c() const {
    return val_.index() == 1;
  }
  
  std::int32_t get_c() const {
    return std::get<1>(val_);
  }
  void set_c(std::int32_t val) {
    tag = Tag::TAG_c;
    val_.emplace<1>(val);
  }
  std::int32_t& c() {
    if (!is_c()) {
      tag = Tag::TAG_c;
      val_.emplace<1>();
    }
    return std::get<1>(val_);
  }
  const std::int32_t& c() const {
    return std::get<1>(val_);
  }
  
  bool is_d() const {
    return val_.index() == 2;
  }
  
  std::string& d() {
    if (!is_d()) {
      tag = Tag::TAG_d;
      val_.emplace<2>();
    }
    return std::get<2>(val_);
  }
  const std::string& d() const {
    return std::get<2>(val_);
  }
  void set_d(std::string&& val) {
    tag = Tag::TAG_d;
    val_.emplace<2>(std::move(val));
  }
  

 private:
  Tag tag = Tag::__TAG__UNSET;

  std::variant<
    std::monostate
  , std::int32_t
  , std::string
  
  > val_;

};  // class NestedVariant


  // Inline type declarations
  

// StructA::inline_structT struct declaration.
class inline_structT {
 public:
  // Nested type declarations
  
  // Inline type declarations
  

  inline_structT() {}
  ~inline_structT() {}

  inline_structT(const inline_structT&) = delete;
  inline_structT& operator=(const inline_structT&) = delete;
  inline_structT(inline_structT&&) = default;
  inline_structT& operator=(inline_structT&&) = default;

  
  static inline_structT FromJson(const std::string& str);
  

  
  
  void set_b(std::string&& val) {
    b_ = std::move(val);
  }
  std::string& b() {
    return b_;
  }
  const std::string& b() const {
    return b_;
  }
  
  

 private:
  std::string b_;
  
}; // class inline_structT



// json_demo::StructA::inline_variantT variant declaration.
class inline_variantT {
 public:
  // Nested type declarations
  
  // Inline type declarations
  

  inline_variantT() {}
  ~inline_variantT() {
    tag = Tag::__TAG__UNSET;
  }

  inline_variantT(const inline_variantT&) = delete;
  inline_variantT& operator=(const inline_variantT&) = delete;
  inline_variantT(inline_variantT&&) = default;
  inline_variantT& operator=(inline_variantT&&) = default;

  
  static inline_variantT FromJson(const std::string& str);
  

  enum class Tag {
    __TAG__UNSET = 0,
    TAG_e = 1,
    TAG_f = 2,
    
  };
  Tag Which() const { return tag; }

  
  bool is_e() const {
    return val_.index() == 1;
  }
  
  std::int32_t get_e() const {
    return std::get<1>(val_);
  }
  void set_e(std::int32_t val) {
    tag = Tag::TAG_e;
    val_.emplace<1>(val);
  }
  std::int32_t& e() {
    if (!is_e()) {
      tag = Tag::TAG_e;
      val_.emplace<1>();
    }
    return std::get<1>(val_);
  }
  const std::int32_t& e() const {
    return std::get<1>(val_);
  }
  
  bool is_f() const {
    return val_.index() == 2;
  }
  
  std::string& f() {
    if (!is_f()) {
      tag = Tag::TAG_f;
      val_.emplace<2>();
    }
    return std::get<2>(val_);
  }
  const std::string& f() const {
    return std::get<2>(val_);
  }
  void set_f(std::string&& val) {
    tag = Tag::TAG_f;
    val_.emplace<2>(std::move(val));
  }
  

 private:
  Tag tag = Tag::__TAG__UNSET;

  std::variant<
    std::monostate
  , std::int32_t
  , std::string
  
  > val_;

};  // class inline_variantT



  StructA() {}
  ~StructA() {}

  StructA(const StructA&) = delete;
  StructA& operator=(const StructA&) = delete;
  StructA(StructA&&) = default;
  StructA& operator=(StructA&&) = default;

  
  static StructA FromJson(const std::string& str);
  

  
  
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
  
  
  
  bool has_nested_struct() const {
    return nested_struct_.operator bool();
  }
  void alloc_nested_struct() {
    nested_struct_ = std::make_unique<NestedStruct>();
  }
  void delete_nested_struct() {
    return nested_struct_.reset(nullptr);
  }
  void set_nested_struct(std::unique_ptr<NestedStruct> val) {
    nested_struct_ = std::move(val);
  }
  void set_nested_struct(NestedStruct* val) {
    nested_struct_.reset(std::move(val));
  }
  NestedStruct* ptr_nested_struct() {
    #if TD_AUTO_ALLOC
    if (!has_nested_struct()) {
      alloc_nested_struct();
    }
    #endif
    #ifdef DEBUG
    if (!has_nested_struct()) {
      TD_THROW("Attempted null reference");
    }
    #endif
    return nested_struct_.get();
  }
  NestedStruct& nested_struct() {
    return *ptr_nested_struct();
  }
  const NestedStruct& nested_struct() const {
    #ifdef DEBUG
    if (!has_nested_struct()) {
      TD_THROW("Attempted null reference");
    }
    #endif
    return *nested_struct_.get();
  }
  
  
  
  bool has_inline_struct() const {
    return inline_struct_.operator bool();
  }
  void alloc_inline_struct() {
    inline_struct_ = std::make_unique<inline_structT>();
  }
  void delete_inline_struct() {
    return inline_struct_.reset(nullptr);
  }
  void set_inline_struct(std::unique_ptr<inline_structT> val) {
    inline_struct_ = std::move(val);
  }
  void set_inline_struct(inline_structT* val) {
    inline_struct_.reset(std::move(val));
  }
  inline_structT* ptr_inline_struct() {
    #if TD_AUTO_ALLOC
    if (!has_inline_struct()) {
      alloc_inline_struct();
    }
    #endif
    #ifdef DEBUG
    if (!has_inline_struct()) {
      TD_THROW("Attempted null reference");
    }
    #endif
    return inline_struct_.get();
  }
  inline_structT& inline_struct() {
    return *ptr_inline_struct();
  }
  const inline_structT& inline_struct() const {
    #ifdef DEBUG
    if (!has_inline_struct()) {
      TD_THROW("Attempted null reference");
    }
    #endif
    return *inline_struct_.get();
  }
  
  
  
  bool has_nested_variant() const {
    return nested_variant_.operator bool();
  }
  void alloc_nested_variant() {
    nested_variant_ = std::make_unique<NestedVariant>();
  }
  void delete_nested_variant() {
    return nested_variant_.reset(nullptr);
  }
  void set_nested_variant(std::unique_ptr<NestedVariant> val) {
    nested_variant_ = std::move(val);
  }
  void set_nested_variant(NestedVariant* val) {
    nested_variant_.reset(std::move(val));
  }
  NestedVariant* ptr_nested_variant() {
    #if TD_AUTO_ALLOC
    if (!has_nested_variant()) {
      alloc_nested_variant();
    }
    #endif
    #ifdef DEBUG
    if (!has_nested_variant()) {
      TD_THROW("Attempted null reference");
    }
    #endif
    return nested_variant_.get();
  }
  NestedVariant& nested_variant() {
    return *ptr_nested_variant();
  }
  const NestedVariant& nested_variant() const {
    #ifdef DEBUG
    if (!has_nested_variant()) {
      TD_THROW("Attempted null reference");
    }
    #endif
    return *nested_variant_.get();
  }
  
  
  
  bool has_inline_variant() const {
    return inline_variant_.operator bool();
  }
  void alloc_inline_variant() {
    inline_variant_ = std::make_unique<inline_variantT>();
  }
  void delete_inline_variant() {
    return inline_variant_.reset(nullptr);
  }
  void set_inline_variant(std::unique_ptr<inline_variantT> val) {
    inline_variant_ = std::move(val);
  }
  void set_inline_variant(inline_variantT* val) {
    inline_variant_.reset(std::move(val));
  }
  inline_variantT* ptr_inline_variant() {
    #if TD_AUTO_ALLOC
    if (!has_inline_variant()) {
      alloc_inline_variant();
    }
    #endif
    #ifdef DEBUG
    if (!has_inline_variant()) {
      TD_THROW("Attempted null reference");
    }
    #endif
    return inline_variant_.get();
  }
  inline_variantT& inline_variant() {
    return *ptr_inline_variant();
  }
  const inline_variantT& inline_variant() const {
    #ifdef DEBUG
    if (!has_inline_variant()) {
      TD_THROW("Attempted null reference");
    }
    #endif
    return *inline_variant_.get();
  }
  
  

 private:
  bool example_bool_ = 0;
  char32_t example_char_ = 0;
  std::string example_str_;
  float example_f32_ = 0;
  double example_f64_ = 0;
  std::uint8_t example_u8_ = 0;
  std::uint16_t example_u16_ = 0;
  std::uint32_t example_u32_ = 0;
  std::uint64_t example_u64_ = 0;
  std::int8_t example_i8_ = 0;
  std::int16_t example_i16_ = 0;
  std::int32_t example_i32_ = 0;
  std::int64_t example_i64_ = 0;
  std::unique_ptr<NestedStruct> nested_struct_;
  std::unique_ptr<inline_structT> inline_struct_;
  std::unique_ptr<NestedVariant> nested_variant_;
  std::unique_ptr<inline_variantT> inline_variant_;
  
}; // class StructA


// StructB struct declaration.
class StructB {
 public:
  // Nested type declarations
  

// StructB::NestedStruct struct declaration.
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

  
  static NestedStruct FromJson(const std::string& str);
  

  
  
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
  std::int32_t a_ = 0;
  
}; // class NestedStruct


  // Inline type declarations
  

  StructB() {}
  ~StructB() {}

  StructB(const StructB&) = delete;
  StructB& operator=(const StructB&) = delete;
  StructB(StructB&&) = default;
  StructB& operator=(StructB&&) = default;

  
  static StructB FromJson(const std::string& str);
  

  
  
  void set_example_vec_bool(td::Vector<bool>&& val) {
    example_vec_bool_ = std::move(val);
  }
  td::Vector<bool>& example_vec_bool() {
    return example_vec_bool_;
  }
  const td::Vector<bool>& example_vec_bool() const {
    return example_vec_bool_;
  }
  
  
  
  void set_example_vec_char(td::Vector<char32_t>&& val) {
    example_vec_char_ = std::move(val);
  }
  td::Vector<char32_t>& example_vec_char() {
    return example_vec_char_;
  }
  const td::Vector<char32_t>& example_vec_char() const {
    return example_vec_char_;
  }
  
  
  
  void set_example_vec_str(td::Vector<std::string>&& val) {
    example_vec_str_ = std::move(val);
  }
  td::Vector<std::string>& example_vec_str() {
    return example_vec_str_;
  }
  const td::Vector<std::string>& example_vec_str() const {
    return example_vec_str_;
  }
  
  
  
  void set_example_vec_int(td::Vector<std::int32_t>&& val) {
    example_vec_int_ = std::move(val);
  }
  td::Vector<std::int32_t>& example_vec_int() {
    return example_vec_int_;
  }
  const td::Vector<std::int32_t>& example_vec_int() const {
    return example_vec_int_;
  }
  
  
  
  void set_example_vec_nested_struct(td::Vector<NestedStruct>&& val) {
    example_vec_nested_struct_ = std::move(val);
  }
  td::Vector<NestedStruct>& example_vec_nested_struct() {
    return example_vec_nested_struct_;
  }
  const td::Vector<NestedStruct>& example_vec_nested_struct() const {
    return example_vec_nested_struct_;
  }
  
  
  
  void set_example_vec_vec_int(td::Vector<td::Vector<std::int32_t>>&& val) {
    example_vec_vec_int_ = std::move(val);
  }
  td::Vector<td::Vector<std::int32_t>>& example_vec_vec_int() {
    return example_vec_vec_int_;
  }
  const td::Vector<td::Vector<std::int32_t>>& example_vec_vec_int() const {
    return example_vec_vec_int_;
  }
  
  
  
  void set_example_vec_map_str_int(td::Vector<td::Map<std::string, std::int32_t>>&& val) {
    example_vec_map_str_int_ = std::move(val);
  }
  td::Vector<td::Map<std::string, std::int32_t>>& example_vec_map_str_int() {
    return example_vec_map_str_int_;
  }
  const td::Vector<td::Map<std::string, std::int32_t>>& example_vec_map_str_int() const {
    return example_vec_map_str_int_;
  }
  
  

 private:
  td::Vector<bool> example_vec_bool_;
  td::Vector<char32_t> example_vec_char_;
  td::Vector<std::string> example_vec_str_;
  td::Vector<std::int32_t> example_vec_int_;
  td::Vector<NestedStruct> example_vec_nested_struct_;
  td::Vector<td::Vector<std::int32_t>> example_vec_vec_int_;
  td::Vector<td::Map<std::string, std::int32_t>> example_vec_map_str_int_;
  
}; // class StructB


// StructC struct declaration.
class StructC {
 public:
  // Nested type declarations
  

// StructC::NestedStruct struct declaration.
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

  
  static NestedStruct FromJson(const std::string& str);
  

  
  
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
  std::int32_t a_ = 0;
  
}; // class NestedStruct


  // Inline type declarations
  

  StructC() {}
  ~StructC() {}

  StructC(const StructC&) = delete;
  StructC& operator=(const StructC&) = delete;
  StructC(StructC&&) = default;
  StructC& operator=(StructC&&) = default;

  
  static StructC FromJson(const std::string& str);
  

  
  
  void set_example_map_bool_bool(td::Map<bool, bool>&& val) {
    example_map_bool_bool_ = std::move(val);
  }
  td::Map<bool, bool>& example_map_bool_bool() {
    return example_map_bool_bool_;
  }
  const td::Map<bool, bool>& example_map_bool_bool() const {
    return example_map_bool_bool_;
  }
  
  
  
  void set_example_map_char_char(td::Map<char32_t, char32_t>&& val) {
    example_map_char_char_ = std::move(val);
  }
  td::Map<char32_t, char32_t>& example_map_char_char() {
    return example_map_char_char_;
  }
  const td::Map<char32_t, char32_t>& example_map_char_char() const {
    return example_map_char_char_;
  }
  
  
  
  void set_example_map_str_str(td::Map<std::string, std::string>&& val) {
    example_map_str_str_ = std::move(val);
  }
  td::Map<std::string, std::string>& example_map_str_str() {
    return example_map_str_str_;
  }
  const td::Map<std::string, std::string>& example_map_str_str() const {
    return example_map_str_str_;
  }
  
  
  
  void set_example_map_int_int(td::Map<std::int32_t, std::int32_t>&& val) {
    example_map_int_int_ = std::move(val);
  }
  td::Map<std::int32_t, std::int32_t>& example_map_int_int() {
    return example_map_int_int_;
  }
  const td::Map<std::int32_t, std::int32_t>& example_map_int_int() const {
    return example_map_int_int_;
  }
  
  
  
  void set_example_map_str_nested_struct(td::Map<std::string, NestedStruct>&& val) {
    example_map_str_nested_struct_ = std::move(val);
  }
  td::Map<std::string, NestedStruct>& example_map_str_nested_struct() {
    return example_map_str_nested_struct_;
  }
  const td::Map<std::string, NestedStruct>& example_map_str_nested_struct() const {
    return example_map_str_nested_struct_;
  }
  
  
  
  void set_example_map_str_vec(td::Map<std::string, td::Vector<std::int32_t>>&& val) {
    example_map_str_vec_ = std::move(val);
  }
  td::Map<std::string, td::Vector<std::int32_t>>& example_map_str_vec() {
    return example_map_str_vec_;
  }
  const td::Map<std::string, td::Vector<std::int32_t>>& example_map_str_vec() const {
    return example_map_str_vec_;
  }
  
  
  
  void set_example_map_str_map(td::Map<std::string, td::Map<std::string, std::int32_t>>&& val) {
    example_map_str_map_ = std::move(val);
  }
  td::Map<std::string, td::Map<std::string, std::int32_t>>& example_map_str_map() {
    return example_map_str_map_;
  }
  const td::Map<std::string, td::Map<std::string, std::int32_t>>& example_map_str_map() const {
    return example_map_str_map_;
  }
  
  

 private:
  td::Map<bool, bool> example_map_bool_bool_;
  td::Map<char32_t, char32_t> example_map_char_char_;
  td::Map<std::string, std::string> example_map_str_str_;
  td::Map<std::int32_t, std::int32_t> example_map_int_int_;
  td::Map<std::string, NestedStruct> example_map_str_nested_struct_;
  td::Map<std::string, td::Vector<std::int32_t>> example_map_str_vec_;
  td::Map<std::string, td::Map<std::string, std::int32_t>> example_map_str_map_;
  
}; // class StructC


// json_demo::VariantA variant declaration.
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

  
  static VariantA FromJson(const std::string& str);
  

  enum class Tag {
    __TAG__UNSET = 0,
    TAG_example_bool = 1,
    TAG_example_char = 2,
    TAG_example_str = 3,
    TAG_example_f32 = 4,
    TAG_example_f64 = 5,
    TAG_example_u8 = 6,
    TAG_example_u16 = 7,
    TAG_example_u32 = 8,
    TAG_example_u64 = 9,
    TAG_example_i8 = 10,
    TAG_example_i16 = 11,
    TAG_example_i32 = 12,
    TAG_example_i64 = 13,
    
  };
  Tag Which() const { return tag; }

  
  bool is_example_bool() const {
    return val_.index() == 1;
  }
  
  bool get_example_bool() const {
    return std::get<1>(val_);
  }
  void set_example_bool(bool val) {
    tag = Tag::TAG_example_bool;
    val_.emplace<1>(val);
  }
  bool& example_bool() {
    if (!is_example_bool()) {
      tag = Tag::TAG_example_bool;
      val_.emplace<1>();
    }
    return std::get<1>(val_);
  }
  const bool& example_bool() const {
    return std::get<1>(val_);
  }
  
  bool is_example_char() const {
    return val_.index() == 2;
  }
  
  char32_t get_example_char() const {
    return std::get<2>(val_);
  }
  void set_example_char(char32_t val) {
    tag = Tag::TAG_example_char;
    val_.emplace<2>(val);
  }
  char32_t& example_char() {
    if (!is_example_char()) {
      tag = Tag::TAG_example_char;
      val_.emplace<2>();
    }
    return std::get<2>(val_);
  }
  const char32_t& example_char() const {
    return std::get<2>(val_);
  }
  
  bool is_example_str() const {
    return val_.index() == 3;
  }
  
  std::string& example_str() {
    if (!is_example_str()) {
      tag = Tag::TAG_example_str;
      val_.emplace<3>();
    }
    return std::get<3>(val_);
  }
  const std::string& example_str() const {
    return std::get<3>(val_);
  }
  void set_example_str(std::string&& val) {
    tag = Tag::TAG_example_str;
    val_.emplace<3>(std::move(val));
  }
  
  bool is_example_f32() const {
    return val_.index() == 4;
  }
  
  float get_example_f32() const {
    return std::get<4>(val_);
  }
  void set_example_f32(float val) {
    tag = Tag::TAG_example_f32;
    val_.emplace<4>(val);
  }
  float& example_f32() {
    if (!is_example_f32()) {
      tag = Tag::TAG_example_f32;
      val_.emplace<4>();
    }
    return std::get<4>(val_);
  }
  const float& example_f32() const {
    return std::get<4>(val_);
  }
  
  bool is_example_f64() const {
    return val_.index() == 5;
  }
  
  double get_example_f64() const {
    return std::get<5>(val_);
  }
  void set_example_f64(double val) {
    tag = Tag::TAG_example_f64;
    val_.emplace<5>(val);
  }
  double& example_f64() {
    if (!is_example_f64()) {
      tag = Tag::TAG_example_f64;
      val_.emplace<5>();
    }
    return std::get<5>(val_);
  }
  const double& example_f64() const {
    return std::get<5>(val_);
  }
  
  bool is_example_u8() const {
    return val_.index() == 6;
  }
  
  std::uint8_t get_example_u8() const {
    return std::get<6>(val_);
  }
  void set_example_u8(std::uint8_t val) {
    tag = Tag::TAG_example_u8;
    val_.emplace<6>(val);
  }
  std::uint8_t& example_u8() {
    if (!is_example_u8()) {
      tag = Tag::TAG_example_u8;
      val_.emplace<6>();
    }
    return std::get<6>(val_);
  }
  const std::uint8_t& example_u8() const {
    return std::get<6>(val_);
  }
  
  bool is_example_u16() const {
    return val_.index() == 7;
  }
  
  std::uint16_t get_example_u16() const {
    return std::get<7>(val_);
  }
  void set_example_u16(std::uint16_t val) {
    tag = Tag::TAG_example_u16;
    val_.emplace<7>(val);
  }
  std::uint16_t& example_u16() {
    if (!is_example_u16()) {
      tag = Tag::TAG_example_u16;
      val_.emplace<7>();
    }
    return std::get<7>(val_);
  }
  const std::uint16_t& example_u16() const {
    return std::get<7>(val_);
  }
  
  bool is_example_u32() const {
    return val_.index() == 8;
  }
  
  std::uint32_t get_example_u32() const {
    return std::get<8>(val_);
  }
  void set_example_u32(std::uint32_t val) {
    tag = Tag::TAG_example_u32;
    val_.emplace<8>(val);
  }
  std::uint32_t& example_u32() {
    if (!is_example_u32()) {
      tag = Tag::TAG_example_u32;
      val_.emplace<8>();
    }
    return std::get<8>(val_);
  }
  const std::uint32_t& example_u32() const {
    return std::get<8>(val_);
  }
  
  bool is_example_u64() const {
    return val_.index() == 9;
  }
  
  std::uint64_t get_example_u64() const {
    return std::get<9>(val_);
  }
  void set_example_u64(std::uint64_t val) {
    tag = Tag::TAG_example_u64;
    val_.emplace<9>(val);
  }
  std::uint64_t& example_u64() {
    if (!is_example_u64()) {
      tag = Tag::TAG_example_u64;
      val_.emplace<9>();
    }
    return std::get<9>(val_);
  }
  const std::uint64_t& example_u64() const {
    return std::get<9>(val_);
  }
  
  bool is_example_i8() const {
    return val_.index() == 10;
  }
  
  std::int8_t get_example_i8() const {
    return std::get<10>(val_);
  }
  void set_example_i8(std::int8_t val) {
    tag = Tag::TAG_example_i8;
    val_.emplace<10>(val);
  }
  std::int8_t& example_i8() {
    if (!is_example_i8()) {
      tag = Tag::TAG_example_i8;
      val_.emplace<10>();
    }
    return std::get<10>(val_);
  }
  const std::int8_t& example_i8() const {
    return std::get<10>(val_);
  }
  
  bool is_example_i16() const {
    return val_.index() == 11;
  }
  
  std::int16_t get_example_i16() const {
    return std::get<11>(val_);
  }
  void set_example_i16(std::int16_t val) {
    tag = Tag::TAG_example_i16;
    val_.emplace<11>(val);
  }
  std::int16_t& example_i16() {
    if (!is_example_i16()) {
      tag = Tag::TAG_example_i16;
      val_.emplace<11>();
    }
    return std::get<11>(val_);
  }
  const std::int16_t& example_i16() const {
    return std::get<11>(val_);
  }
  
  bool is_example_i32() const {
    return val_.index() == 12;
  }
  
  std::int32_t get_example_i32() const {
    return std::get<12>(val_);
  }
  void set_example_i32(std::int32_t val) {
    tag = Tag::TAG_example_i32;
    val_.emplace<12>(val);
  }
  std::int32_t& example_i32() {
    if (!is_example_i32()) {
      tag = Tag::TAG_example_i32;
      val_.emplace<12>();
    }
    return std::get<12>(val_);
  }
  const std::int32_t& example_i32() const {
    return std::get<12>(val_);
  }
  
  bool is_example_i64() const {
    return val_.index() == 13;
  }
  
  std::int64_t get_example_i64() const {
    return std::get<13>(val_);
  }
  void set_example_i64(std::int64_t val) {
    tag = Tag::TAG_example_i64;
    val_.emplace<13>(val);
  }
  std::int64_t& example_i64() {
    if (!is_example_i64()) {
      tag = Tag::TAG_example_i64;
      val_.emplace<13>();
    }
    return std::get<13>(val_);
  }
  const std::int64_t& example_i64() const {
    return std::get<13>(val_);
  }
  

 private:
  Tag tag = Tag::__TAG__UNSET;

  std::variant<
    std::monostate
  , bool
  , char32_t
  , std::string
  , float
  , double
  , std::uint8_t
  , std::uint16_t
  , std::uint32_t
  , std::uint64_t
  , std::int8_t
  , std::int16_t
  , std::int32_t
  , std::int64_t
  
  > val_;

};  // class VariantA


// Struct and variant JSON declarations

std::string ToJson(const StructA& from);
void ToJson(std::ostream& os, const StructA& from);


std::string ToJson(const StructA::NestedStruct& from);
void ToJson(std::ostream& os, const StructA::NestedStruct& from);



std::string ToJson(const StructA::NestedVariant& from);
void ToJson(std::ostream& os, const StructA::NestedVariant& from);




std::string ToJson(const StructA::inline_structT& from);
void ToJson(std::ostream& os, const StructA::inline_structT& from);



std::string ToJson(const StructA::inline_variantT& from);
void ToJson(std::ostream& os, const StructA::inline_variantT& from);




std::string ToJson(const StructB& from);
void ToJson(std::ostream& os, const StructB& from);


std::string ToJson(const StructB::NestedStruct& from);
void ToJson(std::ostream& os, const StructB::NestedStruct& from);





std::string ToJson(const StructC& from);
void ToJson(std::ostream& os, const StructC& from);


std::string ToJson(const StructC::NestedStruct& from);
void ToJson(std::ostream& os, const StructC::NestedStruct& from);





std::string ToJson(const VariantA& from);
void ToJson(std::ostream& os, const VariantA& from);





// Tmplate function declarations


} // namespace json_demo


#endif  // JSON_DEMO_TD_CPP_H__