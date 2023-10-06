
#ifndef TD_CODEGEN_EXPERIMENTAL_CPP_TD_CPP_H__
#define TD_CODEGEN_EXPERIMENTAL_CPP_TD_CPP_H__

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

namespace td {
namespace codegen {
namespace experimental {
namespace cpp {


// Forward declarations.

class AccessInfo;

class StructDecl;

class UserTypeDeclaration;

class TmplValueDereference;

class TmplExpression;

class TmplIf;

class TmplIfBlock;

class TmplForBlock;

class SwitchCase;

class SwitchBlock;

class TmplItem;

class TmplFunction;

class Options;

class CppData;




// AccessInfo struct declaration.
class AccessInfo {
 public:
  // Nested type declarations
  
  // Inline type declarations
  

class access_byT {
 public:
  // Nested type declarations
  
  // Inline type declarations
  

  access_byT() {}
  ~access_byT() {
    tag = Tag::__TAG__UNSET;
  }

  access_byT(const access_byT&) = delete;
  access_byT& operator=(const access_byT&) = delete;
  access_byT(access_byT&&) = default;
  access_byT& operator=(access_byT&&) = default;

  enum class Tag {
    __TAG__UNSET = 0,
    TAG_value = 1,
    TAG_reference = 2,
    TAG_pointer = 3,
    
  };
  Tag Which() const { return tag; }

  
  bool is_value() const {
    return val_.index() == 1;
  }
  
  bool get_value() const {
    return std::get<1>(val_);
  }
  void set_value(bool val) {
    tag = Tag::TAG_value;
    val_.emplace<1>(val);
  }
  bool& value() {
    if (!is_value()) {
      tag = Tag::TAG_value;
      val_.emplace<1>();
    }
    return std::get<1>(val_);
  }
  const bool& value() const {
    return std::get<1>(val_);
  }
  
  bool is_reference() const {
    return val_.index() == 2;
  }
  
  bool get_reference() const {
    return std::get<2>(val_);
  }
  void set_reference(bool val) {
    tag = Tag::TAG_reference;
    val_.emplace<2>(val);
  }
  bool& reference() {
    if (!is_reference()) {
      tag = Tag::TAG_reference;
      val_.emplace<2>();
    }
    return std::get<2>(val_);
  }
  const bool& reference() const {
    return std::get<2>(val_);
  }
  
  bool is_pointer() const {
    return val_.index() == 3;
  }
  
  bool get_pointer() const {
    return std::get<3>(val_);
  }
  void set_pointer(bool val) {
    tag = Tag::TAG_pointer;
    val_.emplace<3>(val);
  }
  bool& pointer() {
    if (!is_pointer()) {
      tag = Tag::TAG_pointer;
      val_.emplace<3>();
    }
    return std::get<3>(val_);
  }
  const bool& pointer() const {
    return std::get<3>(val_);
  }
  

 private:
  Tag tag = Tag::__TAG__UNSET;

  std::variant<
    std::monostate
  , bool
  , bool
  , bool
  
  > val_;

};  // class access_byT



  AccessInfo() {}
  ~AccessInfo() {}

  AccessInfo(const AccessInfo&) = delete;
  AccessInfo& operator=(const AccessInfo&) = delete;
  AccessInfo(AccessInfo&&) = default;
  AccessInfo& operator=(AccessInfo&&) = default;

  
  
  void set_identifier(std::string&& val) {
    identifier_ = std::move(val);
  }
  std::string& identifier() {
    return identifier_;
  }
  const std::string& identifier() const {
    return identifier_;
  }
  
  
  
  void set_cpp_type(std::string&& val) {
    cpp_type_ = std::move(val);
  }
  std::string& cpp_type() {
    return cpp_type_;
  }
  const std::string& cpp_type() const {
    return cpp_type_;
  }
  
  
  
  bool has_access_by() const {
    return access_by_.operator bool();
  }
  void alloc_access_by() {
    access_by_ = std::make_unique<access_byT>();
  }
  void delete_access_by() {
    return access_by_.reset(nullptr);
  }
  void set_access_by(std::unique_ptr<access_byT> val) {
    access_by_ = std::move(val);
  }
  void set_access_by(access_byT* val) {
    access_by_.reset(std::move(val));
  }
  access_byT* ptr_access_by() {
    #if TD_AUTO_ALLOC
    if (!has_access_by()) {
      alloc_access_by();
    }
    #endif
    #ifdef DEBUG
    if (!has_access_by()) {
      TD_THROW("Attempted null reference");
    }
    #endif
    return access_by_.get();
  }
  access_byT& access_by() {
    return *ptr_access_by();
  }
  const access_byT& access_by() const {
    #ifdef DEBUG
    if (!has_access_by()) {
      TD_THROW("Attempted null reference");
    }
    #endif
    return *access_by_.get();
  }
  
  
  
  bool get_is_required() const {
    return is_required_;
  }
  void set_is_required(bool val) {
    is_required_ = val;
  }
  bool& is_required() {
    return is_required_;
  }
  const bool& is_required() const {
    return is_required_;
  }
  
  
  
  void set_type_arguments(td::Vector<AccessInfo>&& val) {
    type_arguments_ = std::move(val);
  }
  td::Vector<AccessInfo>& type_arguments() {
    return type_arguments_;
  }
  const td::Vector<AccessInfo>& type_arguments() const {
    return type_arguments_;
  }
  
  

 private:
  std::string identifier_;
  std::string cpp_type_;
  std::unique_ptr<access_byT> access_by_;
  bool is_required_;
  td::Vector<AccessInfo> type_arguments_;
  
}; // class AccessInfo



// StructDecl struct declaration.
class StructDecl {
 public:
  // Nested type declarations
  
  // Inline type declarations
  

  StructDecl() {}
  ~StructDecl() {}

  StructDecl(const StructDecl&) = delete;
  StructDecl& operator=(const StructDecl&) = delete;
  StructDecl(StructDecl&&) = default;
  StructDecl& operator=(StructDecl&&) = default;

  
  
  void set_identifier(std::string&& val) {
    identifier_ = std::move(val);
  }
  std::string& identifier() {
    return identifier_;
  }
  const std::string& identifier() const {
    return identifier_;
  }
  
  
  
  void set_nested_type_decls(td::Vector<UserTypeDeclaration>&& val) {
    nested_type_decls_ = std::move(val);
  }
  td::Vector<UserTypeDeclaration>& nested_type_decls() {
    return nested_type_decls_;
  }
  const td::Vector<UserTypeDeclaration>& nested_type_decls() const {
    return nested_type_decls_;
  }
  
  
  
  void set_inline_type_decls(td::Vector<UserTypeDeclaration>&& val) {
    inline_type_decls_ = std::move(val);
  }
  td::Vector<UserTypeDeclaration>& inline_type_decls() {
    return inline_type_decls_;
  }
  const td::Vector<UserTypeDeclaration>& inline_type_decls() const {
    return inline_type_decls_;
  }
  
  
  
  void set_fields(td::Vector<AccessInfo>&& val) {
    fields_ = std::move(val);
  }
  td::Vector<AccessInfo>& fields() {
    return fields_;
  }
  const td::Vector<AccessInfo>& fields() const {
    return fields_;
  }
  
  

 private:
  std::string identifier_;
  td::Vector<UserTypeDeclaration> nested_type_decls_;
  td::Vector<UserTypeDeclaration> inline_type_decls_;
  td::Vector<AccessInfo> fields_;
  
}; // class StructDecl



class UserTypeDeclaration {
 public:
  // Nested type declarations
  
  // Inline type declarations
  

  UserTypeDeclaration() {}
  ~UserTypeDeclaration() {
    tag = Tag::__TAG__UNSET;
  }

  UserTypeDeclaration(const UserTypeDeclaration&) = delete;
  UserTypeDeclaration& operator=(const UserTypeDeclaration&) = delete;
  UserTypeDeclaration(UserTypeDeclaration&&) = default;
  UserTypeDeclaration& operator=(UserTypeDeclaration&&) = default;

  enum class Tag {
    __TAG__UNSET = 0,
    TAG_struct_decl = 1,
    TAG_variant_decl = 2,
    
  };
  Tag Which() const { return tag; }

  
  bool is_struct_decl() const {
    return val_.index() == 1;
  }
  
  bool has_struct_decl() const {
    return is_struct_decl() && std::get<1>(val_).operator bool();
  }
  void alloc_struct_decl() {
    tag = Tag::TAG_struct_decl;
    val_.emplace<1>(std::make_unique<StructDecl>());
  }
  void delete_struct_decl() {
    return std::get<1>(val_).reset(nullptr);
  }
  void set_struct_decl(std::unique_ptr<StructDecl> val) {
    tag = Tag::TAG_struct_decl;
    val_.emplace<1>(std::move(val));
  }
  void set_struct_decl(StructDecl* val) {
    tag = Tag::TAG_struct_decl;
    std::get<1>(val_).reset(std::move(val));
  }
  StructDecl* ptr_struct_decl() {
    #if TD_AUTO_ALLOC
    if (!has_struct_decl()) {
      alloc_struct_decl();
    }
    #endif
    return std::get<1>(val_).get();
  }
  StructDecl& struct_decl() {
    return *ptr_struct_decl();
  }
  const StructDecl& struct_decl() const {
    return *std::get<1>(val_).get();
  }
  
  bool is_variant_decl() const {
    return val_.index() == 2;
  }
  
  bool has_variant_decl() const {
    return is_variant_decl() && std::get<2>(val_).operator bool();
  }
  void alloc_variant_decl() {
    tag = Tag::TAG_variant_decl;
    val_.emplace<2>(std::make_unique<StructDecl>());
  }
  void delete_variant_decl() {
    return std::get<2>(val_).reset(nullptr);
  }
  void set_variant_decl(std::unique_ptr<StructDecl> val) {
    tag = Tag::TAG_variant_decl;
    val_.emplace<2>(std::move(val));
  }
  void set_variant_decl(StructDecl* val) {
    tag = Tag::TAG_variant_decl;
    std::get<2>(val_).reset(std::move(val));
  }
  StructDecl* ptr_variant_decl() {
    #if TD_AUTO_ALLOC
    if (!has_variant_decl()) {
      alloc_variant_decl();
    }
    #endif
    return std::get<2>(val_).get();
  }
  StructDecl& variant_decl() {
    return *ptr_variant_decl();
  }
  const StructDecl& variant_decl() const {
    return *std::get<2>(val_).get();
  }
  

 private:
  Tag tag = Tag::__TAG__UNSET;

  std::variant<
    std::monostate
  , std::unique_ptr<StructDecl>
  , std::unique_ptr<StructDecl>
  
  > val_;

};  // class UserTypeDeclaration



// TmplValueDereference struct declaration.
class TmplValueDereference {
 public:
  // Nested type declarations
  
  // Inline type declarations
  

  TmplValueDereference() {}
  ~TmplValueDereference() {}

  TmplValueDereference(const TmplValueDereference&) = delete;
  TmplValueDereference& operator=(const TmplValueDereference&) = delete;
  TmplValueDereference(TmplValueDereference&&) = default;
  TmplValueDereference& operator=(TmplValueDereference&&) = default;

  
  
  void set_val_ref_path(td::Vector<std::string>&& val) {
    val_ref_path_ = std::move(val);
  }
  td::Vector<std::string>& val_ref_path() {
    return val_ref_path_;
  }
  const td::Vector<std::string>& val_ref_path() const {
    return val_ref_path_;
  }
  
  

 private:
  td::Vector<std::string> val_ref_path_;
  
}; // class TmplValueDereference



class TmplExpression {
 public:
  // Nested type declarations
  

// TmplFuncCall struct declaration.
class TmplFuncCall {
 public:
  // Nested type declarations
  
  // Inline type declarations
  

  TmplFuncCall() {}
  ~TmplFuncCall() {}

  TmplFuncCall(const TmplFuncCall&) = delete;
  TmplFuncCall& operator=(const TmplFuncCall&) = delete;
  TmplFuncCall(TmplFuncCall&&) = default;
  TmplFuncCall& operator=(TmplFuncCall&&) = default;

  
  
  void set_func(std::string&& val) {
    func_ = std::move(val);
  }
  std::string& func() {
    return func_;
  }
  const std::string& func() const {
    return func_;
  }
  
  
  
  void set_args(td::Vector<TmplValueDereference>&& val) {
    args_ = std::move(val);
  }
  td::Vector<TmplValueDereference>& args() {
    return args_;
  }
  const td::Vector<TmplValueDereference>& args() const {
    return args_;
  }
  
  

 private:
  std::string func_;
  td::Vector<TmplValueDereference> args_;
  
}; // class TmplFuncCall


  // Inline type declarations
  

  TmplExpression() {}
  ~TmplExpression() {
    tag = Tag::__TAG__UNSET;
  }

  TmplExpression(const TmplExpression&) = delete;
  TmplExpression& operator=(const TmplExpression&) = delete;
  TmplExpression(TmplExpression&&) = default;
  TmplExpression& operator=(TmplExpression&&) = default;

  enum class Tag {
    __TAG__UNSET = 0,
    TAG_call = 1,
    TAG_val_ref = 2,
    TAG_expr = 3,
    TAG_not_expr = 4,
    
  };
  Tag Which() const { return tag; }

  
  bool is_call() const {
    return val_.index() == 1;
  }
  
  bool has_call() const {
    return is_call() && std::get<1>(val_).operator bool();
  }
  void alloc_call() {
    tag = Tag::TAG_call;
    val_.emplace<1>(std::make_unique<TmplFuncCall>());
  }
  void delete_call() {
    return std::get<1>(val_).reset(nullptr);
  }
  void set_call(std::unique_ptr<TmplFuncCall> val) {
    tag = Tag::TAG_call;
    val_.emplace<1>(std::move(val));
  }
  void set_call(TmplFuncCall* val) {
    tag = Tag::TAG_call;
    std::get<1>(val_).reset(std::move(val));
  }
  TmplFuncCall* ptr_call() {
    #if TD_AUTO_ALLOC
    if (!has_call()) {
      alloc_call();
    }
    #endif
    return std::get<1>(val_).get();
  }
  TmplFuncCall& call() {
    return *ptr_call();
  }
  const TmplFuncCall& call() const {
    return *std::get<1>(val_).get();
  }
  
  bool is_val_ref() const {
    return val_.index() == 2;
  }
  
  bool has_val_ref() const {
    return is_val_ref() && std::get<2>(val_).operator bool();
  }
  void alloc_val_ref() {
    tag = Tag::TAG_val_ref;
    val_.emplace<2>(std::make_unique<TmplValueDereference>());
  }
  void delete_val_ref() {
    return std::get<2>(val_).reset(nullptr);
  }
  void set_val_ref(std::unique_ptr<TmplValueDereference> val) {
    tag = Tag::TAG_val_ref;
    val_.emplace<2>(std::move(val));
  }
  void set_val_ref(TmplValueDereference* val) {
    tag = Tag::TAG_val_ref;
    std::get<2>(val_).reset(std::move(val));
  }
  TmplValueDereference* ptr_val_ref() {
    #if TD_AUTO_ALLOC
    if (!has_val_ref()) {
      alloc_val_ref();
    }
    #endif
    return std::get<2>(val_).get();
  }
  TmplValueDereference& val_ref() {
    return *ptr_val_ref();
  }
  const TmplValueDereference& val_ref() const {
    return *std::get<2>(val_).get();
  }
  
  bool is_expr() const {
    return val_.index() == 3;
  }
  
  bool has_expr() const {
    return is_expr() && std::get<3>(val_).operator bool();
  }
  void alloc_expr() {
    tag = Tag::TAG_expr;
    val_.emplace<3>(std::make_unique<TmplExpression>());
  }
  void delete_expr() {
    return std::get<3>(val_).reset(nullptr);
  }
  void set_expr(std::unique_ptr<TmplExpression> val) {
    tag = Tag::TAG_expr;
    val_.emplace<3>(std::move(val));
  }
  void set_expr(TmplExpression* val) {
    tag = Tag::TAG_expr;
    std::get<3>(val_).reset(std::move(val));
  }
  TmplExpression* ptr_expr() {
    #if TD_AUTO_ALLOC
    if (!has_expr()) {
      alloc_expr();
    }
    #endif
    return std::get<3>(val_).get();
  }
  TmplExpression& expr() {
    return *ptr_expr();
  }
  const TmplExpression& expr() const {
    return *std::get<3>(val_).get();
  }
  
  bool is_not_expr() const {
    return val_.index() == 4;
  }
  
  bool has_not_expr() const {
    return is_not_expr() && std::get<4>(val_).operator bool();
  }
  void alloc_not_expr() {
    tag = Tag::TAG_not_expr;
    val_.emplace<4>(std::make_unique<TmplExpression>());
  }
  void delete_not_expr() {
    return std::get<4>(val_).reset(nullptr);
  }
  void set_not_expr(std::unique_ptr<TmplExpression> val) {
    tag = Tag::TAG_not_expr;
    val_.emplace<4>(std::move(val));
  }
  void set_not_expr(TmplExpression* val) {
    tag = Tag::TAG_not_expr;
    std::get<4>(val_).reset(std::move(val));
  }
  TmplExpression* ptr_not_expr() {
    #if TD_AUTO_ALLOC
    if (!has_not_expr()) {
      alloc_not_expr();
    }
    #endif
    return std::get<4>(val_).get();
  }
  TmplExpression& not_expr() {
    return *ptr_not_expr();
  }
  const TmplExpression& not_expr() const {
    return *std::get<4>(val_).get();
  }
  

 private:
  Tag tag = Tag::__TAG__UNSET;

  std::variant<
    std::monostate
  , std::unique_ptr<TmplFuncCall>
  , std::unique_ptr<TmplValueDereference>
  , std::unique_ptr<TmplExpression>
  , std::unique_ptr<TmplExpression>
  
  > val_;

};  // class TmplExpression



// TmplIf struct declaration.
class TmplIf {
 public:
  // Nested type declarations
  
  // Inline type declarations
  

  TmplIf() {}
  ~TmplIf() {}

  TmplIf(const TmplIf&) = delete;
  TmplIf& operator=(const TmplIf&) = delete;
  TmplIf(TmplIf&&) = default;
  TmplIf& operator=(TmplIf&&) = default;

  
  
  bool has_expr() const {
    return expr_.operator bool();
  }
  void alloc_expr() {
    expr_ = std::make_unique<TmplExpression>();
  }
  void delete_expr() {
    return expr_.reset(nullptr);
  }
  void set_expr(std::unique_ptr<TmplExpression> val) {
    expr_ = std::move(val);
  }
  void set_expr(TmplExpression* val) {
    expr_.reset(std::move(val));
  }
  TmplExpression* ptr_expr() {
    #if TD_AUTO_ALLOC
    if (!has_expr()) {
      alloc_expr();
    }
    #endif
    #ifdef DEBUG
    if (!has_expr()) {
      TD_THROW("Attempted null reference");
    }
    #endif
    return expr_.get();
  }
  TmplExpression& expr() {
    return *ptr_expr();
  }
  const TmplExpression& expr() const {
    #ifdef DEBUG
    if (!has_expr()) {
      TD_THROW("Attempted null reference");
    }
    #endif
    return *expr_.get();
  }
  
  
  
  void set_items(td::Vector<TmplItem>&& val) {
    items_ = std::move(val);
  }
  td::Vector<TmplItem>& items() {
    return items_;
  }
  const td::Vector<TmplItem>& items() const {
    return items_;
  }
  
  

 private:
  std::unique_ptr<TmplExpression> expr_;
  td::Vector<TmplItem> items_;
  
}; // class TmplIf



// TmplIfBlock struct declaration.
class TmplIfBlock {
 public:
  // Nested type declarations
  
  // Inline type declarations
  

  TmplIfBlock() {}
  ~TmplIfBlock() {}

  TmplIfBlock(const TmplIfBlock&) = delete;
  TmplIfBlock& operator=(const TmplIfBlock&) = delete;
  TmplIfBlock(TmplIfBlock&&) = default;
  TmplIfBlock& operator=(TmplIfBlock&&) = default;

  
  
  bool has_if_sublock() const {
    return if_sublock_.operator bool();
  }
  void alloc_if_sublock() {
    if_sublock_ = std::make_unique<TmplIf>();
  }
  void delete_if_sublock() {
    return if_sublock_.reset(nullptr);
  }
  void set_if_sublock(std::unique_ptr<TmplIf> val) {
    if_sublock_ = std::move(val);
  }
  void set_if_sublock(TmplIf* val) {
    if_sublock_.reset(std::move(val));
  }
  TmplIf* ptr_if_sublock() {
    #if TD_AUTO_ALLOC
    if (!has_if_sublock()) {
      alloc_if_sublock();
    }
    #endif
    #ifdef DEBUG
    if (!has_if_sublock()) {
      TD_THROW("Attempted null reference");
    }
    #endif
    return if_sublock_.get();
  }
  TmplIf& if_sublock() {
    return *ptr_if_sublock();
  }
  const TmplIf& if_sublock() const {
    #ifdef DEBUG
    if (!has_if_sublock()) {
      TD_THROW("Attempted null reference");
    }
    #endif
    return *if_sublock_.get();
  }
  
  
  
  void set_elifs(td::Vector<TmplIf>&& val) {
    elifs_ = std::move(val);
  }
  td::Vector<TmplIf>& elifs() {
    return elifs_;
  }
  const td::Vector<TmplIf>& elifs() const {
    return elifs_;
  }
  
  
  
  void set_else_items(td::Vector<TmplItem>&& val) {
    else_items_ = std::move(val);
  }
  td::Vector<TmplItem>& else_items() {
    return else_items_;
  }
  const td::Vector<TmplItem>& else_items() const {
    return else_items_;
  }
  
  

 private:
  std::unique_ptr<TmplIf> if_sublock_;
  td::Vector<TmplIf> elifs_;
  td::Vector<TmplItem> else_items_;
  
}; // class TmplIfBlock



// TmplForBlock struct declaration.
class TmplForBlock {
 public:
  // Nested type declarations
  
  // Inline type declarations
  

class binding_varsT {
 public:
  // Nested type declarations
  
  // Inline type declarations
  

// key_valT struct declaration.
class key_valT {
 public:
  // Nested type declarations
  
  // Inline type declarations
  

  key_valT() {}
  ~key_valT() {}

  key_valT(const key_valT&) = delete;
  key_valT& operator=(const key_valT&) = delete;
  key_valT(key_valT&&) = default;
  key_valT& operator=(key_valT&&) = default;

  
  
  void set_key(std::string&& val) {
    key_ = std::move(val);
  }
  std::string& key() {
    return key_;
  }
  const std::string& key() const {
    return key_;
  }
  
  
  
  void set_val(std::string&& val) {
    val_ = std::move(val);
  }
  std::string& val() {
    return val_;
  }
  const std::string& val() const {
    return val_;
  }
  
  

 private:
  std::string key_;
  std::string val_;
  
}; // class key_valT



  binding_varsT() {}
  ~binding_varsT() {
    tag = Tag::__TAG__UNSET;
  }

  binding_varsT(const binding_varsT&) = delete;
  binding_varsT& operator=(const binding_varsT&) = delete;
  binding_varsT(binding_varsT&&) = default;
  binding_varsT& operator=(binding_varsT&&) = default;

  enum class Tag {
    __TAG__UNSET = 0,
    TAG_var = 1,
    TAG_key_val = 2,
    
  };
  Tag Which() const { return tag; }

  
  bool is_var() const {
    return val_.index() == 1;
  }
  
  std::string& var() {
    if (!is_var()) {
      tag = Tag::TAG_var;
      val_.emplace<1>();
    }
    return std::get<1>(val_);
  }
  const std::string& var() const {
    return std::get<1>(val_);
  }
  void set_var(std::string&& val) {
    tag = Tag::TAG_var;
    val_.emplace<1>(std::move(val));
  }
  
  bool is_key_val() const {
    return val_.index() == 2;
  }
  
  bool has_key_val() const {
    return is_key_val() && std::get<2>(val_).operator bool();
  }
  void alloc_key_val() {
    tag = Tag::TAG_key_val;
    val_.emplace<2>(std::make_unique<key_valT>());
  }
  void delete_key_val() {
    return std::get<2>(val_).reset(nullptr);
  }
  void set_key_val(std::unique_ptr<key_valT> val) {
    tag = Tag::TAG_key_val;
    val_.emplace<2>(std::move(val));
  }
  void set_key_val(key_valT* val) {
    tag = Tag::TAG_key_val;
    std::get<2>(val_).reset(std::move(val));
  }
  key_valT* ptr_key_val() {
    #if TD_AUTO_ALLOC
    if (!has_key_val()) {
      alloc_key_val();
    }
    #endif
    return std::get<2>(val_).get();
  }
  key_valT& key_val() {
    return *ptr_key_val();
  }
  const key_valT& key_val() const {
    return *std::get<2>(val_).get();
  }
  

 private:
  Tag tag = Tag::__TAG__UNSET;

  std::variant<
    std::monostate
  , std::string
  , std::unique_ptr<key_valT>
  
  > val_;

};  // class binding_varsT



  TmplForBlock() {}
  ~TmplForBlock() {}

  TmplForBlock(const TmplForBlock&) = delete;
  TmplForBlock& operator=(const TmplForBlock&) = delete;
  TmplForBlock(TmplForBlock&&) = default;
  TmplForBlock& operator=(TmplForBlock&&) = default;

  
  
  bool has_binding_vars() const {
    return binding_vars_.operator bool();
  }
  void alloc_binding_vars() {
    binding_vars_ = std::make_unique<binding_varsT>();
  }
  void delete_binding_vars() {
    return binding_vars_.reset(nullptr);
  }
  void set_binding_vars(std::unique_ptr<binding_varsT> val) {
    binding_vars_ = std::move(val);
  }
  void set_binding_vars(binding_varsT* val) {
    binding_vars_.reset(std::move(val));
  }
  binding_varsT* ptr_binding_vars() {
    #if TD_AUTO_ALLOC
    if (!has_binding_vars()) {
      alloc_binding_vars();
    }
    #endif
    #ifdef DEBUG
    if (!has_binding_vars()) {
      TD_THROW("Attempted null reference");
    }
    #endif
    return binding_vars_.get();
  }
  binding_varsT& binding_vars() {
    return *ptr_binding_vars();
  }
  const binding_varsT& binding_vars() const {
    #ifdef DEBUG
    if (!has_binding_vars()) {
      TD_THROW("Attempted null reference");
    }
    #endif
    return *binding_vars_.get();
  }
  
  
  
  bool has_collection() const {
    return collection_.operator bool();
  }
  void alloc_collection() {
    collection_ = std::make_unique<TmplValueDereference>();
  }
  void delete_collection() {
    return collection_.reset(nullptr);
  }
  void set_collection(std::unique_ptr<TmplValueDereference> val) {
    collection_ = std::move(val);
  }
  void set_collection(TmplValueDereference* val) {
    collection_.reset(std::move(val));
  }
  TmplValueDereference* ptr_collection() {
    #if TD_AUTO_ALLOC
    if (!has_collection()) {
      alloc_collection();
    }
    #endif
    #ifdef DEBUG
    if (!has_collection()) {
      TD_THROW("Attempted null reference");
    }
    #endif
    return collection_.get();
  }
  TmplValueDereference& collection() {
    return *ptr_collection();
  }
  const TmplValueDereference& collection() const {
    #ifdef DEBUG
    if (!has_collection()) {
      TD_THROW("Attempted null reference");
    }
    #endif
    return *collection_.get();
  }
  
  
  
  void set_items(td::Vector<TmplItem>&& val) {
    items_ = std::move(val);
  }
  td::Vector<TmplItem>& items() {
    return items_;
  }
  const td::Vector<TmplItem>& items() const {
    return items_;
  }
  
  

 private:
  std::unique_ptr<binding_varsT> binding_vars_;
  std::unique_ptr<TmplValueDereference> collection_;
  td::Vector<TmplItem> items_;
  
}; // class TmplForBlock



// SwitchCase struct declaration.
class SwitchCase {
 public:
  // Nested type declarations
  
  // Inline type declarations
  

  SwitchCase() {}
  ~SwitchCase() {}

  SwitchCase(const SwitchCase&) = delete;
  SwitchCase& operator=(const SwitchCase&) = delete;
  SwitchCase(SwitchCase&&) = default;
  SwitchCase& operator=(SwitchCase&&) = default;

  
  
  bool has_label() const {
    return label_.operator bool();
  }
  void alloc_label() {
    label_ = std::make_unique<TmplValueDereference>();
  }
  void delete_label() {
    return label_.reset(nullptr);
  }
  void set_label(std::unique_ptr<TmplValueDereference> val) {
    label_ = std::move(val);
  }
  void set_label(TmplValueDereference* val) {
    label_.reset(std::move(val));
  }
  TmplValueDereference* ptr_label() {
    #if TD_AUTO_ALLOC
    if (!has_label()) {
      alloc_label();
    }
    #endif
    #ifdef DEBUG
    if (!has_label()) {
      TD_THROW("Attempted null reference");
    }
    #endif
    return label_.get();
  }
  TmplValueDereference& label() {
    return *ptr_label();
  }
  const TmplValueDereference& label() const {
    #ifdef DEBUG
    if (!has_label()) {
      TD_THROW("Attempted null reference");
    }
    #endif
    return *label_.get();
  }
  
  
  
  void set_items(td::Vector<TmplItem>&& val) {
    items_ = std::move(val);
  }
  td::Vector<TmplItem>& items() {
    return items_;
  }
  const td::Vector<TmplItem>& items() const {
    return items_;
  }
  
  

 private:
  std::unique_ptr<TmplValueDereference> label_;
  td::Vector<TmplItem> items_;
  
}; // class SwitchCase



// SwitchBlock struct declaration.
class SwitchBlock {
 public:
  // Nested type declarations
  
  // Inline type declarations
  

  SwitchBlock() {}
  ~SwitchBlock() {}

  SwitchBlock(const SwitchBlock&) = delete;
  SwitchBlock& operator=(const SwitchBlock&) = delete;
  SwitchBlock(SwitchBlock&&) = default;
  SwitchBlock& operator=(SwitchBlock&&) = default;

  
  
  bool has_identifier() const {
    return identifier_.operator bool();
  }
  void alloc_identifier() {
    identifier_ = std::make_unique<TmplValueDereference>();
  }
  void delete_identifier() {
    return identifier_.reset(nullptr);
  }
  void set_identifier(std::unique_ptr<TmplValueDereference> val) {
    identifier_ = std::move(val);
  }
  void set_identifier(TmplValueDereference* val) {
    identifier_.reset(std::move(val));
  }
  TmplValueDereference* ptr_identifier() {
    #if TD_AUTO_ALLOC
    if (!has_identifier()) {
      alloc_identifier();
    }
    #endif
    #ifdef DEBUG
    if (!has_identifier()) {
      TD_THROW("Attempted null reference");
    }
    #endif
    return identifier_.get();
  }
  TmplValueDereference& identifier() {
    return *ptr_identifier();
  }
  const TmplValueDereference& identifier() const {
    #ifdef DEBUG
    if (!has_identifier()) {
      TD_THROW("Attempted null reference");
    }
    #endif
    return *identifier_.get();
  }
  
  
  
  void set_cases(td::Vector<SwitchCase>&& val) {
    cases_ = std::move(val);
  }
  td::Vector<SwitchCase>& cases() {
    return cases_;
  }
  const td::Vector<SwitchCase>& cases() const {
    return cases_;
  }
  
  
  
  void set_default_subblock(td::Vector<TmplItem>&& val) {
    default_subblock_ = std::move(val);
  }
  td::Vector<TmplItem>& default_subblock() {
    return default_subblock_;
  }
  const td::Vector<TmplItem>& default_subblock() const {
    return default_subblock_;
  }
  
  

 private:
  std::unique_ptr<TmplValueDereference> identifier_;
  td::Vector<SwitchCase> cases_;
  td::Vector<TmplItem> default_subblock_;
  
}; // class SwitchBlock



class TmplItem {
 public:
  // Nested type declarations
  
  // Inline type declarations
  

  TmplItem() {}
  ~TmplItem() {
    tag = Tag::__TAG__UNSET;
  }

  TmplItem(const TmplItem&) = delete;
  TmplItem& operator=(const TmplItem&) = delete;
  TmplItem(TmplItem&&) = default;
  TmplItem& operator=(TmplItem&&) = default;

  enum class Tag {
    __TAG__UNSET = 0,
    TAG_text = 1,
    TAG_expression = 2,
    TAG_if_block = 3,
    TAG_for_block = 4,
    TAG_switch_block = 5,
    
  };
  Tag Which() const { return tag; }

  
  bool is_text() const {
    return val_.index() == 1;
  }
  
  std::string& text() {
    if (!is_text()) {
      tag = Tag::TAG_text;
      val_.emplace<1>();
    }
    return std::get<1>(val_);
  }
  const std::string& text() const {
    return std::get<1>(val_);
  }
  void set_text(std::string&& val) {
    tag = Tag::TAG_text;
    val_.emplace<1>(std::move(val));
  }
  
  bool is_expression() const {
    return val_.index() == 2;
  }
  
  bool has_expression() const {
    return is_expression() && std::get<2>(val_).operator bool();
  }
  void alloc_expression() {
    tag = Tag::TAG_expression;
    val_.emplace<2>(std::make_unique<TmplExpression>());
  }
  void delete_expression() {
    return std::get<2>(val_).reset(nullptr);
  }
  void set_expression(std::unique_ptr<TmplExpression> val) {
    tag = Tag::TAG_expression;
    val_.emplace<2>(std::move(val));
  }
  void set_expression(TmplExpression* val) {
    tag = Tag::TAG_expression;
    std::get<2>(val_).reset(std::move(val));
  }
  TmplExpression* ptr_expression() {
    #if TD_AUTO_ALLOC
    if (!has_expression()) {
      alloc_expression();
    }
    #endif
    return std::get<2>(val_).get();
  }
  TmplExpression& expression() {
    return *ptr_expression();
  }
  const TmplExpression& expression() const {
    return *std::get<2>(val_).get();
  }
  
  bool is_if_block() const {
    return val_.index() == 3;
  }
  
  bool has_if_block() const {
    return is_if_block() && std::get<3>(val_).operator bool();
  }
  void alloc_if_block() {
    tag = Tag::TAG_if_block;
    val_.emplace<3>(std::make_unique<TmplIfBlock>());
  }
  void delete_if_block() {
    return std::get<3>(val_).reset(nullptr);
  }
  void set_if_block(std::unique_ptr<TmplIfBlock> val) {
    tag = Tag::TAG_if_block;
    val_.emplace<3>(std::move(val));
  }
  void set_if_block(TmplIfBlock* val) {
    tag = Tag::TAG_if_block;
    std::get<3>(val_).reset(std::move(val));
  }
  TmplIfBlock* ptr_if_block() {
    #if TD_AUTO_ALLOC
    if (!has_if_block()) {
      alloc_if_block();
    }
    #endif
    return std::get<3>(val_).get();
  }
  TmplIfBlock& if_block() {
    return *ptr_if_block();
  }
  const TmplIfBlock& if_block() const {
    return *std::get<3>(val_).get();
  }
  
  bool is_for_block() const {
    return val_.index() == 4;
  }
  
  bool has_for_block() const {
    return is_for_block() && std::get<4>(val_).operator bool();
  }
  void alloc_for_block() {
    tag = Tag::TAG_for_block;
    val_.emplace<4>(std::make_unique<TmplForBlock>());
  }
  void delete_for_block() {
    return std::get<4>(val_).reset(nullptr);
  }
  void set_for_block(std::unique_ptr<TmplForBlock> val) {
    tag = Tag::TAG_for_block;
    val_.emplace<4>(std::move(val));
  }
  void set_for_block(TmplForBlock* val) {
    tag = Tag::TAG_for_block;
    std::get<4>(val_).reset(std::move(val));
  }
  TmplForBlock* ptr_for_block() {
    #if TD_AUTO_ALLOC
    if (!has_for_block()) {
      alloc_for_block();
    }
    #endif
    return std::get<4>(val_).get();
  }
  TmplForBlock& for_block() {
    return *ptr_for_block();
  }
  const TmplForBlock& for_block() const {
    return *std::get<4>(val_).get();
  }
  
  bool is_switch_block() const {
    return val_.index() == 5;
  }
  
  bool has_switch_block() const {
    return is_switch_block() && std::get<5>(val_).operator bool();
  }
  void alloc_switch_block() {
    tag = Tag::TAG_switch_block;
    val_.emplace<5>(std::make_unique<SwitchBlock>());
  }
  void delete_switch_block() {
    return std::get<5>(val_).reset(nullptr);
  }
  void set_switch_block(std::unique_ptr<SwitchBlock> val) {
    tag = Tag::TAG_switch_block;
    val_.emplace<5>(std::move(val));
  }
  void set_switch_block(SwitchBlock* val) {
    tag = Tag::TAG_switch_block;
    std::get<5>(val_).reset(std::move(val));
  }
  SwitchBlock* ptr_switch_block() {
    #if TD_AUTO_ALLOC
    if (!has_switch_block()) {
      alloc_switch_block();
    }
    #endif
    return std::get<5>(val_).get();
  }
  SwitchBlock& switch_block() {
    return *ptr_switch_block();
  }
  const SwitchBlock& switch_block() const {
    return *std::get<5>(val_).get();
  }
  

 private:
  Tag tag = Tag::__TAG__UNSET;

  std::variant<
    std::monostate
  , std::string
  , std::unique_ptr<TmplExpression>
  , std::unique_ptr<TmplIfBlock>
  , std::unique_ptr<TmplForBlock>
  , std::unique_ptr<SwitchBlock>
  
  > val_;

};  // class TmplItem



// TmplFunction struct declaration.
class TmplFunction {
 public:
  // Nested type declarations
  
  // Inline type declarations
  

  TmplFunction() {}
  ~TmplFunction() {}

  TmplFunction(const TmplFunction&) = delete;
  TmplFunction& operator=(const TmplFunction&) = delete;
  TmplFunction(TmplFunction&&) = default;
  TmplFunction& operator=(TmplFunction&&) = default;

  
  
  void set_identifier(std::string&& val) {
    identifier_ = std::move(val);
  }
  std::string& identifier() {
    return identifier_;
  }
  const std::string& identifier() const {
    return identifier_;
  }
  
  
  
  void set_params(td::Vector<AccessInfo>&& val) {
    params_ = std::move(val);
  }
  td::Vector<AccessInfo>& params() {
    return params_;
  }
  const td::Vector<AccessInfo>& params() const {
    return params_;
  }
  
  
  
  void set_items(td::Vector<TmplItem>&& val) {
    items_ = std::move(val);
  }
  td::Vector<TmplItem>& items() {
    return items_;
  }
  const td::Vector<TmplItem>& items() const {
    return items_;
  }
  
  

 private:
  std::string identifier_;
  td::Vector<AccessInfo> params_;
  td::Vector<TmplItem> items_;
  
}; // class TmplFunction



// Options struct declaration.
class Options {
 public:
  // Nested type declarations
  
  // Inline type declarations
  

  Options() {}
  ~Options() {}

  Options(const Options&) = delete;
  Options& operator=(const Options&) = delete;
  Options(Options&&) = default;
  Options& operator=(Options&&) = default;

  
  
  bool get_generate_json_writer() const {
    return generate_json_writer_;
  }
  void set_generate_json_writer(bool val) {
    generate_json_writer_ = val;
  }
  bool& generate_json_writer() {
    return generate_json_writer_;
  }
  const bool& generate_json_writer() const {
    return generate_json_writer_;
  }
  
  
  
  bool get_generate_json_parser() const {
    return generate_json_parser_;
  }
  void set_generate_json_parser(bool val) {
    generate_json_parser_ = val;
  }
  bool& generate_json_parser() {
    return generate_json_parser_;
  }
  const bool& generate_json_parser() const {
    return generate_json_parser_;
  }
  
  

 private:
  bool generate_json_writer_;
  bool generate_json_parser_;
  
}; // class Options



// CppData struct declaration.
class CppData {
 public:
  // Nested type declarations
  
  // Inline type declarations
  

  CppData() {}
  ~CppData() {}

  CppData(const CppData&) = delete;
  CppData& operator=(const CppData&) = delete;
  CppData(CppData&&) = default;
  CppData& operator=(CppData&&) = default;

  
  
  void set_header_guard(std::string&& val) {
    header_guard_ = std::move(val);
  }
  std::string& header_guard() {
    return header_guard_;
  }
  const std::string& header_guard() const {
    return header_guard_;
  }
  
  
  
  void set_header_filename(std::string&& val) {
    header_filename_ = std::move(val);
  }
  std::string& header_filename() {
    return header_filename_;
  }
  const std::string& header_filename() const {
    return header_filename_;
  }
  
  
  
  void set_namespaces(td::Vector<std::string>&& val) {
    namespaces_ = std::move(val);
  }
  td::Vector<std::string>& namespaces() {
    return namespaces_;
  }
  const td::Vector<std::string>& namespaces() const {
    return namespaces_;
  }
  
  
  
  void set_user_type_decls(td::Vector<UserTypeDeclaration>&& val) {
    user_type_decls_ = std::move(val);
  }
  td::Vector<UserTypeDeclaration>& user_type_decls() {
    return user_type_decls_;
  }
  const td::Vector<UserTypeDeclaration>& user_type_decls() const {
    return user_type_decls_;
  }
  
  
  
  void set_tmpl_funcs(td::Vector<TmplFunction>&& val) {
    tmpl_funcs_ = std::move(val);
  }
  td::Vector<TmplFunction>& tmpl_funcs() {
    return tmpl_funcs_;
  }
  const td::Vector<TmplFunction>& tmpl_funcs() const {
    return tmpl_funcs_;
  }
  
  

 private:
  std::string header_guard_;
  std::string header_filename_;
  td::Vector<std::string> namespaces_;
  td::Vector<UserTypeDeclaration> user_type_decls_;
  td::Vector<TmplFunction> tmpl_funcs_;
  
}; // class CppData



void VecUserTypeDeclarationT(std::ostream& os, const td::Vector<UserTypeDeclaration>& ut);void TmplStructDeclaration(std::ostream& os, const StructDecl& s);void TmplVariantDeclaration(std::ostream& os, const StructDecl& v);void TmplFuncDeclaration(std::ostream& os, const TmplFunction& t);void CppType(std::ostream& os, const AccessInfo& a);void ParamsList(std::ostream& os, const td::Vector<AccessInfo>& params);void TmplValueDereferenceT(std::ostream& os, const TmplValueDereference& v);void TmplStringExpression(std::ostream& os, const TmplExpression& i);void TmplBoolExpression(std::ostream& os, const TmplExpression& i);void TmplIfT(std::ostream& os, const TmplIf& i);void TmplIfBlockT(std::ostream& os, const TmplIfBlock& i);void TmplForT(std::ostream& os, const TmplForBlock& f);void TmplHasValRef(std::ostream& os, const TmplValueDereference& val);void TmplSwitchT(std::ostream& os, const SwitchBlock& s);void TmplItemsT(std::ostream& os, const td::Vector<TmplItem>& v);void TmplItemT(std::ostream& os, const TmplItem& i);void TmplFuncDefinition(std::ostream& os, const TmplFunction& t);void CppHeader(std::ostream& os, const CppData& d, const Options& opt);void CppSource(std::ostream& os, const CppData& d, const Options& opt);

} // namesapce td
} // namesapce codegen
} // namesapce experimental
} // namesapce cpp


#endif  // TD_CODEGEN_EXPERIMENTAL_CPP_TD_CPP_H__
