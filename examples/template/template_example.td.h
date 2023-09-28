
#ifndef TEMPLATE_EXAMPLE_TD_CPP_H__
#define TEMPLATE_EXAMPLE_TD_CPP_H__

#include <cstdint>
#include <memory>
#include <string>
#include <variant>
#include <ostream>

#include <typedef/builtin_types.h>

#define TD_STRINGIZE_DETAIL(x) #x
#define TD_STRINGIZE(x) TD_STRINGIZE_DETAIL(x)
#define TD_THROW(msg) (throw msg __FILE__ ":" TD_STRINGIZE(__LINE__))

#ifndef TD_AUTO_ALLOC
#define TD_AUTO_ALLOC 1
#endif

namespace template_example {

// Forward declarations.
class StructC;
class TemplateData;
class SomeVariant;

  
class StructC {
 public:

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
    asdf_ = std::make_unique<TemplateData>();
  }
  void delete_asdf() {
    return asdf_.reset(nullptr);
  }
  void set_asdf(std::unique_ptr<TemplateData> val) {
    asdf_ = std::move(val);
  }
  void set_asdf(TemplateData* val) {
    asdf_.reset(std::move(val));
  }
  TemplateData* ptr_asdf() {
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
  TemplateData& asdf() {
    return *ptr_asdf();
  }
  const TemplateData& asdf() const {
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
  std::unique_ptr<TemplateData> asdf_;
  std::int32_t zxcv_;
  std::int32_t jkl_;
};  // class StructC
  
  
class TemplateData {
 public:

  TemplateData() {}
  ~TemplateData() {}

  TemplateData(const TemplateData&) = delete;
  TemplateData& operator=(const TemplateData&) = delete;
  TemplateData(TemplateData&&) = default;
  TemplateData& operator=(TemplateData&&) = default;

  void set_name(std::string&& val) {
    name_ = std::move(val);
  }
  std::string& name() {
    return name_;
  }
  const std::string& name() const {
    return name_;
  }

  bool get_has_name() const {
    return has_name_;
  }
  void set_has_name(bool val) {
    has_name_ = val;
  }
  bool& has_name() {
    return has_name_;
  }
  const bool& has_name() const {
    return has_name_;
  }

  void set_name2(std::string&& val) {
    name2_ = std::move(val);
  }
  std::string& name2() {
    return name2_;
  }
  const std::string& name2() const {
    return name2_;
  }

  bool get_has_name2() const {
    return has_name2_;
  }
  void set_has_name2(bool val) {
    has_name2_ = val;
  }
  bool& has_name2() {
    return has_name2_;
  }
  const bool& has_name2() const {
    return has_name2_;
  }

  void set_someVec(td::Vector<std::int32_t>&& val) {
    someVec_ = std::move(val);
  }
  td::Vector<std::int32_t>& someVec() {
    return someVec_;
  }
  const td::Vector<std::int32_t>& someVec() const {
    return someVec_;
  }

  void set_someMap(td::Map<std::string, std::string>&& val) {
    someMap_ = std::move(val);
  }
  td::Map<std::string, std::string>& someMap() {
    return someMap_;
  }
  const td::Map<std::string, std::string>& someMap() const {
    return someMap_;
  }

  bool has_structC() const {
    return structC_.operator bool();
  }
  void alloc_structC() {
    structC_ = std::make_unique<StructC>();
  }
  void delete_structC() {
    return structC_.reset(nullptr);
  }
  void set_structC(std::unique_ptr<StructC> val) {
    structC_ = std::move(val);
  }
  void set_structC(StructC* val) {
    structC_.reset(std::move(val));
  }
  StructC* ptr_structC() {
    #if TD_AUTO_ALLOC
    if (!has_structC()) {
      alloc_structC();
    }
    #endif
    #ifdef DEBUG
    if (!has_structC()) {
      TD_THROW("Attempted null reference");
    }
    #endif
    return structC_.get();
  }
  StructC& structC() {
    return *ptr_structC();
  }
  const StructC& structC() const {
    #ifdef DEBUG
    if (!has_structC()) {
      TD_THROW("Attempted null reference");
    }
    #endif
    return *structC_.get();
  }


 private:
  std::string name_;
  bool has_name_;
  std::string name2_;
  bool has_name2_;
  td::Vector<std::int32_t> someVec_;
  td::Map<std::string, std::string> someMap_;
  std::unique_ptr<StructC> structC_;
};  // class TemplateData
  
  
class SomeVariant {
 public:

  SomeVariant() {}
  ~SomeVariant() {
    tag = Tag::__TAG__UNSET;
  }

  SomeVariant(const SomeVariant&) = delete;
  SomeVariant& operator=(const SomeVariant&) = delete;
  SomeVariant(SomeVariant&&) = default;
  SomeVariant& operator=(SomeVariant&&) = default;

  enum class Tag {
    __TAG__UNSET = 0,
    TAG_a_string = 1,
    TAG_b_int = 2,
    TAG_c_char = 3,
    TAG_d_struct = 4,
  };
  Tag Which() const { return tag; }

  bool is_a_string() const {
    return val_.index() == 1;
  }
  std::string& a_string() {
    if (!is_a_string()) {
      tag = Tag::TAG_a_string;
      val_.emplace<1>();
    }
    return std::get<1>(val_);
  }
  const std::string& a_string() const {
    return std::get<1>(val_);
  }
  void set_a_string(std::string&& val) {
    tag = Tag::TAG_a_string;
    val_.emplace<1>(std::move(val));
  }

  bool is_b_int() const {
    return val_.index() == 2;
  }
  std::int32_t get_b_int() const {
    return std::get<2>(val_);
  }
  void set_b_int(std::int32_t val) {
    tag = Tag::TAG_b_int;
    val_.emplace<2>(val);
  }
  std::int32_t& b_int() {
    if (!is_b_int()) {
      tag = Tag::TAG_b_int;
      val_.emplace<2>();
    }
    return std::get<2>(val_);
  }
  const std::int32_t& b_int() const {
    return std::get<2>(val_);
  }

  bool is_c_char() const {
    return val_.index() == 3;
  }
  char32_t get_c_char() const {
    return std::get<3>(val_);
  }
  void set_c_char(char32_t val) {
    tag = Tag::TAG_c_char;
    val_.emplace<3>(val);
  }
  char32_t& c_char() {
    if (!is_c_char()) {
      tag = Tag::TAG_c_char;
      val_.emplace<3>();
    }
    return std::get<3>(val_);
  }
  const char32_t& c_char() const {
    return std::get<3>(val_);
  }

  bool is_d_struct() const {
    return val_.index() == 4;
  }
  bool has_d_struct() const {
    return is_d_struct() && std::get<4>(val_).operator bool();
  }
  void alloc_d_struct() {
    tag = Tag::TAG_d_struct;
    val_.emplace<4>(std::make_unique<StructC>());
  }
  void delete_d_struct() {
    return std::get<4>(val_).reset(nullptr);
  }
  void set_d_struct(std::unique_ptr<StructC> val) {
    tag = Tag::TAG_d_struct;
    val_.emplace<4>(std::move(val));
  }
  void set_d_struct(StructC* val) {
    tag = Tag::TAG_d_struct;
    std::get<4>(val_).reset(std::move(val));
  }
  StructC* ptr_d_struct() {
    #if TD_AUTO_ALLOC
    if (!has_d_struct()) {
      alloc_d_struct();
    }
    #endif
    return std::get<4>(val_).get();
  }
  StructC& d_struct() {
    return *ptr_d_struct();
  }
  const StructC& d_struct() const {
    return *std::get<4>(val_).get();
  }

 private:
  Tag tag = Tag::__TAG__UNSET;

  std::variant<
    std::monostate
    , std::string
    , std::int32_t
    , char32_t
    , std::unique_ptr<StructC>
  > val_;

};  // class SomeVariant
  


void PrintStructC(std::ostream& os, const StructC& sc);
  

void PrintTemplateData(std::ostream& os, const TemplateData& t);
  

void DoSomeVariant(std::ostream& os, const SomeVariant& v);
  

}  // namespace template_example

#endif  // TEMPLATE_EXAMPLE_TD_CPP_H__
  