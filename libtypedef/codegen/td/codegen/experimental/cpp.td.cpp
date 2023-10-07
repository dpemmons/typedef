
#include "td/codegen/experimental/cpp.td.h"

#include <string>

// PRODUCED BY SELF-HOSTED TYPEDEF CODEGEN

namespace td {
namespace codegen {
namespace experimental {
namespace cpp {



void VecUserTypeDeclarationT(std::ostream& os, const td::Vector<UserTypeDeclaration>& ut, const Options& opt) {


for (size_t td_iter_ = 0; td_iter_ < ut.size(); td_iter_++) {
  auto& n = ut[td_iter_];
  auto IsFirst = [&]() { return td_iter_ == 0; };
  auto IsLast = [&]() { return td_iter_ == ut.size() - 1; };
  auto Index0 = [&](std::ostream& os) { os << std::to_string(td_iter_); };
  auto Index1 = [&](std::ostream& os) { os << std::to_string(td_iter_ + 1); };
os << "\n";
// Switch n

if (n.is_struct_decl()) {
TmplStructDeclaration(os, n.struct_decl(), opt);
} else 
if (n.is_variant_decl()) {
TmplVariantDeclaration(os, n.variant_decl(), opt);
} else  {
}
os << "\n";
}


}
void FQN(std::ostream& os, const td::Vector<std::string>& fqn) {


for (size_t td_iter_ = 0; td_iter_ < fqn.size(); td_iter_++) {
  auto& n = fqn[td_iter_];
  auto IsFirst = [&]() { return td_iter_ == 0; };
  auto IsLast = [&]() { return td_iter_ == fqn.size() - 1; };
  auto Index0 = [&](std::ostream& os) { os << std::to_string(td_iter_); };
  auto Index1 = [&](std::ostream& os) { os << std::to_string(td_iter_ + 1); };
os << n;
if (!IsLast()) {
os << "::";
} else {
}
}


}
void TmplStructDeclaration(std::ostream& os, const StructDecl& s, const Options& opt) {
os << "\n// ";
FQN(os, s.fqn());
os << " struct declaration.\nclass ";
os << s.identifier();
os << " {\n public:\n  // Nested type declarations\n  ";
VecUserTypeDeclarationT(os, s.nested_type_decls(), opt);
os << "\n  // Inline type declarations\n  ";
VecUserTypeDeclarationT(os, s.inline_type_decls(), opt);
os << "\n\n  ";
os << s.identifier();
os << "() {}\n  ~";
os << s.identifier();
os << "() {}\n\n  ";
os << s.identifier();
os << "(const ";
os << s.identifier();
os << "&) = delete;\n  ";
os << s.identifier();
os << "& operator=(const ";
os << s.identifier();
os << "&) = delete;\n  ";
os << s.identifier();
os << "(";
os << s.identifier();
os << "&&) = default;\n  ";
os << s.identifier();
os << "& operator=(";
os << s.identifier();
os << "&&) = default;\n\n  ";
if (opt.generate_json_writer()) {
os << "\n  std::string ToJson();\n  void ToJson(std::ostream& os);\n  void ToJson(rapidjson::Writer* writer);\n  void ToJson(rapidjson::PrettyWriter* writer);\n  ";
} else {
}
os << "\n  ";
if (opt.generate_json_parser()) {
os << "\n  static void FromJson(";
os << s.identifier();
os << "* target, const std::string& str);\n  ";
} else {
}
os << "\n\n  ";


for (size_t td_iter_ = 0; td_iter_ < s.fields().size(); td_iter_++) {
  auto& field = s.fields()[td_iter_];
  auto IsFirst = [&]() { return td_iter_ == 0; };
  auto IsLast = [&]() { return td_iter_ == s.fields().size() - 1; };
  auto Index0 = [&](std::ostream& os) { os << std::to_string(td_iter_); };
  auto Index1 = [&](std::ostream& os) { os << std::to_string(td_iter_ + 1); };
os << "\n  ";
// Switch field.access_by()

if (field.access_by().is_value()) {
os << "\n  ";
CppType(os, field);
os << " get_";
os << field.identifier();
os << "() const {\n    return ";
os << field.identifier();
os << "_;\n  }\n  void set_";
os << field.identifier();
os << "(";
CppType(os, field);
os << " val) {\n    ";
os << field.identifier();
os << "_ = val;\n  }\n  ";
CppType(os, field);
os << "& ";
os << field.identifier();
os << "() {\n    return ";
os << field.identifier();
os << "_;\n  }\n  const ";
CppType(os, field);
os << "& ";
os << field.identifier();
os << "() const {\n    return ";
os << field.identifier();
os << "_;\n  }\n  ";
} else 
if (field.access_by().is_reference()) {
os << "\n  void set_";
os << field.identifier();
os << "(";
CppType(os, field);
os << "&& val) {\n    ";
os << field.identifier();
os << "_ = std::move(val);\n  }\n  ";
CppType(os, field);
os << "& ";
os << field.identifier();
os << "() {\n    return ";
os << field.identifier();
os << "_;\n  }\n  const ";
CppType(os, field);
os << "& ";
os << field.identifier();
os << "() const {\n    return ";
os << field.identifier();
os << "_;\n  }\n  ";
} else 
if (field.access_by().is_pointer()) {
os << "\n  bool has_";
os << field.identifier();
os << "() const {\n    return ";
os << field.identifier();
os << "_.operator bool();\n  }\n  void alloc_";
os << field.identifier();
os << "() {\n    ";
os << field.identifier();
os << "_ = std::make_unique<";
CppType(os, field);
os << ">();\n  }\n  void delete_";
os << field.identifier();
os << "() {\n    return ";
os << field.identifier();
os << "_.reset(nullptr);\n  }\n  void set_";
os << field.identifier();
os << "(std::unique_ptr<";
CppType(os, field);
os << "> val) {\n    ";
os << field.identifier();
os << "_ = std::move(val);\n  }\n  void set_";
os << field.identifier();
os << "(";
CppType(os, field);
os << "* val) {\n    ";
os << field.identifier();
os << "_.reset(std::move(val));\n  }\n  ";
CppType(os, field);
os << "* ptr_";
os << field.identifier();
os << "() {\n    #if TD_AUTO_ALLOC\n    if (!has_";
os << field.identifier();
os << "()) {\n      alloc_";
os << field.identifier();
os << "();\n    }\n    #endif\n    #ifdef DEBUG\n    if (!has_";
os << field.identifier();
os << "()) {\n      TD_THROW(\"Attempted null reference\");\n    }\n    #endif\n    return ";
os << field.identifier();
os << "_.get();\n  }\n  ";
CppType(os, field);
os << "& ";
os << field.identifier();
os << "() {\n    return *ptr_";
os << field.identifier();
os << "();\n  }\n  const ";
CppType(os, field);
os << "& ";
os << field.identifier();
os << "() const {\n    #ifdef DEBUG\n    if (!has_";
os << field.identifier();
os << "()) {\n      TD_THROW(\"Attempted null reference\");\n    }\n    #endif\n    return *";
os << field.identifier();
os << "_.get();\n  }\n  ";
} else  {
}
os << "\n  ";
}

os << "\n\n private:\n  ";


for (size_t td_iter_ = 0; td_iter_ < s.fields().size(); td_iter_++) {
  auto& field = s.fields()[td_iter_];
  auto IsFirst = [&]() { return td_iter_ == 0; };
  auto IsLast = [&]() { return td_iter_ == s.fields().size() - 1; };
  auto Index0 = [&](std::ostream& os) { os << std::to_string(td_iter_); };
  auto Index1 = [&](std::ostream& os) { os << std::to_string(td_iter_ + 1); };
// Switch field.access_by()

if (field.access_by().is_pointer()) {
os << "std::unique_ptr<";
CppType(os, field);
os << "> ";
os << field.identifier();
os << "_;";
} else  {
CppType(os, field);
os << " ";
os << field.identifier();
os << "_;";
}
os << "\n  ";
}

os << "\n}; // class ";
os << s.identifier();
os << "\n";

}
void TmplStructDefinition(std::ostream& os, const StructDecl& s, const Options& opt) {
os << "\n";

}
void TmplVariantDefinition(std::ostream& os, const StructDecl& v, const Options& opt) {
os << "\n";

}
void TmplVariantDeclaration(std::ostream& os, const StructDecl& v, const Options& opt) {
os << "\n// ";
FQN(os, v.fqn());
os << " variant declaration.\nclass ";
os << v.identifier();
os << " {\n public:\n  // Nested type declarations\n  ";
VecUserTypeDeclarationT(os, v.nested_type_decls(), opt);
os << "\n  // Inline type declarations\n  ";
VecUserTypeDeclarationT(os, v.inline_type_decls(), opt);
os << "\n\n  ";
os << v.identifier();
os << "() {}\n  ~";
os << v.identifier();
os << "() {\n    tag = Tag::__TAG__UNSET;\n  }\n\n  ";
os << v.identifier();
os << "(const ";
os << v.identifier();
os << "&) = delete;\n  ";
os << v.identifier();
os << "& operator=(const ";
os << v.identifier();
os << "&) = delete;\n  ";
os << v.identifier();
os << "(";
os << v.identifier();
os << "&&) = default;\n  ";
os << v.identifier();
os << "& operator=(";
os << v.identifier();
os << "&&) = default;\n\n  enum class Tag {\n    __TAG__UNSET = 0,\n    ";


for (size_t td_iter_ = 0; td_iter_ < v.fields().size(); td_iter_++) {
  auto& field = v.fields()[td_iter_];
  auto IsFirst = [&]() { return td_iter_ == 0; };
  auto IsLast = [&]() { return td_iter_ == v.fields().size() - 1; };
  auto Index0 = [&](std::ostream& os) { os << std::to_string(td_iter_); };
  auto Index1 = [&](std::ostream& os) { os << std::to_string(td_iter_ + 1); };
os << "TAG_";
os << field.identifier();
os << " = ";
Index1(os);
os << ",\n    ";
}

os << "\n  };\n  Tag Which() const { return tag; }\n\n  ";


for (size_t td_iter_ = 0; td_iter_ < v.fields().size(); td_iter_++) {
  auto& field = v.fields()[td_iter_];
  auto IsFirst = [&]() { return td_iter_ == 0; };
  auto IsLast = [&]() { return td_iter_ == v.fields().size() - 1; };
  auto Index0 = [&](std::ostream& os) { os << std::to_string(td_iter_); };
  auto Index1 = [&](std::ostream& os) { os << std::to_string(td_iter_ + 1); };
os << "\n  bool is_";
os << field.identifier();
os << "() const {\n    return val_.index() == ";
Index1(os);
os << ";\n  }\n  ";
// Switch field.access_by()

if (field.access_by().is_value()) {
os << "\n  ";
CppType(os, field);
os << " get_";
os << field.identifier();
os << "() const {\n    return std::get<";
Index1(os);
os << ">(val_);\n  }\n  void set_";
os << field.identifier();
os << "(";
CppType(os, field);
os << " val) {\n    tag = Tag::TAG_";
os << field.identifier();
os << ";\n    val_.emplace<";
Index1(os);
os << ">(val);\n  }\n  ";
CppType(os, field);
os << "& ";
os << field.identifier();
os << "() {\n    if (!is_";
os << field.identifier();
os << "()) {\n      tag = Tag::TAG_";
os << field.identifier();
os << ";\n      val_.emplace<";
Index1(os);
os << ">();\n    }\n    return std::get<";
Index1(os);
os << ">(val_);\n  }\n  const ";
CppType(os, field);
os << "& ";
os << field.identifier();
os << "() const {\n    return std::get<";
Index1(os);
os << ">(val_);\n  }\n  ";
} else 
if (field.access_by().is_reference()) {
os << "\n  ";
CppType(os, field);
os << "& ";
os << field.identifier();
os << "() {\n    if (!is_";
os << field.identifier();
os << "()) {\n      tag = Tag::TAG_";
os << field.identifier();
os << ";\n      val_.emplace<";
Index1(os);
os << ">();\n    }\n    return std::get<";
Index1(os);
os << ">(val_);\n  }\n  const ";
CppType(os, field);
os << "& ";
os << field.identifier();
os << "() const {\n    return std::get<";
Index1(os);
os << ">(val_);\n  }\n  void set_";
os << field.identifier();
os << "(";
CppType(os, field);
os << "&& val) {\n    tag = Tag::TAG_";
os << field.identifier();
os << ";\n    val_.emplace<";
Index1(os);
os << ">(std::move(val));\n  }\n  ";
} else 
if (field.access_by().is_pointer()) {
os << "\n  bool has_";
os << field.identifier();
os << "() const {\n    return is_";
os << field.identifier();
os << "() && std::get<";
Index1(os);
os << ">(val_).operator bool();\n  }\n  void alloc_";
os << field.identifier();
os << "() {\n    tag = Tag::TAG_";
os << field.identifier();
os << ";\n    val_.emplace<";
Index1(os);
os << ">(std::make_unique<";
CppType(os, field);
os << ">());\n  }\n  void delete_";
os << field.identifier();
os << "() {\n    return std::get<";
Index1(os);
os << ">(val_).reset(nullptr);\n  }\n  void set_";
os << field.identifier();
os << "(std::unique_ptr<";
CppType(os, field);
os << "> val) {\n    tag = Tag::TAG_";
os << field.identifier();
os << ";\n    val_.emplace<";
Index1(os);
os << ">(std::move(val));\n  }\n  void set_";
os << field.identifier();
os << "(";
CppType(os, field);
os << "* val) {\n    tag = Tag::TAG_";
os << field.identifier();
os << ";\n    std::get<";
Index1(os);
os << ">(val_).reset(std::move(val));\n  }\n  ";
CppType(os, field);
os << "* ptr_";
os << field.identifier();
os << "() {\n    #if TD_AUTO_ALLOC\n    if (!has_";
os << field.identifier();
os << "()) {\n      alloc_";
os << field.identifier();
os << "();\n    }\n    #endif\n    return std::get<";
Index1(os);
os << ">(val_).get();\n  }\n  ";
CppType(os, field);
os << "& ";
os << field.identifier();
os << "() {\n    return *ptr_";
os << field.identifier();
os << "();\n  }\n  const ";
CppType(os, field);
os << "& ";
os << field.identifier();
os << "() const {\n    return *std::get<";
Index1(os);
os << ">(val_).get();\n  }\n  ";
} else  {
}
}

os << "\n\n private:\n  Tag tag = Tag::__TAG__UNSET;\n\n  std::variant<\n    std::monostate\n  ";


for (size_t td_iter_ = 0; td_iter_ < v.fields().size(); td_iter_++) {
  auto& field = v.fields()[td_iter_];
  auto IsFirst = [&]() { return td_iter_ == 0; };
  auto IsLast = [&]() { return td_iter_ == v.fields().size() - 1; };
  auto Index0 = [&](std::ostream& os) { os << std::to_string(td_iter_); };
  auto Index1 = [&](std::ostream& os) { os << std::to_string(td_iter_ + 1); };
// Switch field.access_by()

if (field.access_by().is_pointer()) {
os << ", std::unique_ptr<";
CppType(os, field);
os << ">";
} else  {
os << ", ";
CppType(os, field);
}
os << "\n  ";
}

os << "\n  > val_;\n\n};  // class ";
os << v.identifier();
os << "\n";

}
void TmplFuncDeclaration(std::ostream& os, const TmplFunction& t) {
os << "void ";
os << t.identifier();
os << "(std::ostream& os";
ParamsList(os, t.params());
os << ");";

}
void CppType(std::ostream& os, const AccessInfo& a) {
os << a.cpp_type();
if (!IsEmpty(a.type_arguments())) {
os << "<";


for (size_t td_iter_ = 0; td_iter_ < a.type_arguments().size(); td_iter_++) {
  auto& arg = a.type_arguments()[td_iter_];
  auto IsFirst = [&]() { return td_iter_ == 0; };
  auto IsLast = [&]() { return td_iter_ == a.type_arguments().size() - 1; };
  auto Index0 = [&](std::ostream& os) { os << std::to_string(td_iter_); };
  auto Index1 = [&](std::ostream& os) { os << std::to_string(td_iter_ + 1); };
CppType(os, arg);
if (!IsLast()) {
os << ", ";
} else {
}
}

os << ">";
} else {
}

}
void ParamsList(std::ostream& os, const td::Vector<AccessInfo>& params) {


for (size_t td_iter_ = 0; td_iter_ < params.size(); td_iter_++) {
  auto& param = params[td_iter_];
  auto IsFirst = [&]() { return td_iter_ == 0; };
  auto IsLast = [&]() { return td_iter_ == params.size() - 1; };
  auto Index0 = [&](std::ostream& os) { os << std::to_string(td_iter_); };
  auto Index1 = [&](std::ostream& os) { os << std::to_string(td_iter_ + 1); };
os << ", const ";
CppType(os, param);
os << "& ";
os << param.identifier();
}


}
void TmplValueDereferenceT(std::ostream& os, const TmplValueDereference& v) {


for (size_t td_iter_ = 0; td_iter_ < v.val_ref_path().size(); td_iter_++) {
  auto& part = v.val_ref_path()[td_iter_];
  auto IsFirst = [&]() { return td_iter_ == 0; };
  auto IsLast = [&]() { return td_iter_ == v.val_ref_path().size() - 1; };
  auto Index0 = [&](std::ostream& os) { os << std::to_string(td_iter_); };
  auto Index1 = [&](std::ostream& os) { os << std::to_string(td_iter_ + 1); };
os << part;
if (!IsFirst()) {
os << "()";
} else {
}
if (!IsLast()) {
os << ".";
} else {
}
}


}
void TmplStringExpression(std::ostream& os, const TmplExpression& i) {
// Switch i

if (i.is_call()) {
os << i.call().func();
os << "(os";


for (size_t td_iter_ = 0; td_iter_ < i.call().args().size(); td_iter_++) {
  auto& arg = i.call().args()[td_iter_];
  auto IsFirst = [&]() { return td_iter_ == 0; };
  auto IsLast = [&]() { return td_iter_ == i.call().args().size() - 1; };
  auto Index0 = [&](std::ostream& os) { os << std::to_string(td_iter_); };
  auto Index1 = [&](std::ostream& os) { os << std::to_string(td_iter_ + 1); };
os << ", ";
TmplValueDereferenceT(os, arg);
}

os << ")";
} else 
if (i.is_val_ref()) {
os << "os << ";
TmplValueDereferenceT(os, i.val_ref());
} else 
if (i.is_expr()) {
os << "(";
TmplStringExpression(os, i.expr());
os << ")";
} else  {
os << "#error If this was emitted then there's a problem with type checking.";
}

}
void TmplBoolExpression(std::ostream& os, const TmplExpression& i) {
// Switch i

if (i.is_call()) {
os << i.call().func();
os << "(";


for (size_t td_iter_ = 0; td_iter_ < i.call().args().size(); td_iter_++) {
  auto& arg = i.call().args()[td_iter_];
  auto IsFirst = [&]() { return td_iter_ == 0; };
  auto IsLast = [&]() { return td_iter_ == i.call().args().size() - 1; };
  auto Index0 = [&](std::ostream& os) { os << std::to_string(td_iter_); };
  auto Index1 = [&](std::ostream& os) { os << std::to_string(td_iter_ + 1); };
TmplValueDereferenceT(os, arg);
if (!IsLast()) {
os << ", ";
} else {
}
}

os << ")";
} else 
if (i.is_val_ref()) {
TmplValueDereferenceT(os, i.val_ref());
} else 
if (i.is_expr()) {
os << "(";
TmplBoolExpression(os, i.expr());
os << ")";
} else 
if (i.is_not_expr()) {
os << "!";
TmplBoolExpression(os, i.not_expr());
} else  {
}

}
void TmplIfT(std::ostream& os, const TmplIf& i) {
os << "if (";
TmplBoolExpression(os, i.expr());
os << ") {\n";
TmplItemsT(os, i.items());
os << "}";

}
void TmplIfBlockT(std::ostream& os, const TmplIfBlock& i) {
TmplIfT(os, i.if_sublock());


for (size_t td_iter_ = 0; td_iter_ < i.elifs().size(); td_iter_++) {
  auto& e = i.elifs()[td_iter_];
  auto IsFirst = [&]() { return td_iter_ == 0; };
  auto IsLast = [&]() { return td_iter_ == i.elifs().size() - 1; };
  auto Index0 = [&](std::ostream& os) { os << std::to_string(td_iter_); };
  auto Index1 = [&](std::ostream& os) { os << std::to_string(td_iter_ + 1); };
os << " else ";
TmplIfT(os, e);
}

os << " else {\n";
TmplItemsT(os, i.else_items());
os << "}";

}
void TmplForT(std::ostream& os, const TmplForBlock& f) {
os << "\n";
// Switch f.binding_vars()

if (f.binding_vars().is_var()) {
os << "\nfor (size_t td_iter_ = 0; td_iter_ < ";
TmplValueDereferenceT(os, f.collection());
os << ".size(); td_iter_++) {\n  auto& ";
os << f.binding_vars().var();
os << " = ";
TmplValueDereferenceT(os, f.collection());
os << "[td_iter_];\n  auto IsFirst = [&]() { return td_iter_ == 0; };\n  auto IsLast = [&]() { return td_iter_ == ";
TmplValueDereferenceT(os, f.collection());
os << ".size() - 1; };\n  auto Index0 = [&](std::ostream& os) { os << std::to_string(td_iter_); };\n  auto Index1 = [&](std::ostream& os) { os << std::to_string(td_iter_ + 1); };\n";
} else 
if (f.binding_vars().is_key_val()) {
os << "\nfor (auto const& [";
os << f.binding_vars().key_val().key();
os << ", ";
os << f.binding_vars().key_val().val();
os << "] : ";
TmplValueDereferenceT(os, f.collection());
os << ") {\n";
} else  {
}
TmplItemsT(os, f.items());
os << "}\n";

}
void TmplHasValRef(std::ostream& os, const TmplValueDereference& val) {


for (size_t td_iter_ = 0; td_iter_ < val.val_ref_path().size(); td_iter_++) {
  auto& part = val.val_ref_path()[td_iter_];
  auto IsFirst = [&]() { return td_iter_ == 0; };
  auto IsLast = [&]() { return td_iter_ == val.val_ref_path().size() - 1; };
  auto Index0 = [&](std::ostream& os) { os << std::to_string(td_iter_); };
  auto Index1 = [&](std::ostream& os) { os << std::to_string(td_iter_ + 1); };
if (IsLast()) {
os << "is_";
} else {
}
os << part;
if (!IsFirst()) {
os << "()";
} else {
}
if (!IsLast()) {
os << ".";
} else {
}
}


}
void TmplSwitchT(std::ostream& os, const SwitchBlock& s) {
os << "// Switch ";
TmplValueDereferenceT(os, s.identifier());
os << "\n";


for (size_t td_iter_ = 0; td_iter_ < s.cases().size(); td_iter_++) {
  auto& c = s.cases()[td_iter_];
  auto IsFirst = [&]() { return td_iter_ == 0; };
  auto IsLast = [&]() { return td_iter_ == s.cases().size() - 1; };
  auto Index0 = [&](std::ostream& os) { os << std::to_string(td_iter_); };
  auto Index1 = [&](std::ostream& os) { os << std::to_string(td_iter_ + 1); };
os << "\nif (";
TmplHasValRef(os, c.label());
os << ") {\n";
TmplItemsT(os, c.items());
os << "} else ";
}

os << " {\n";
TmplItemsT(os, s.default_subblock());
os << "}";

}
void TmplItemsT(std::ostream& os, const td::Vector<TmplItem>& v) {


for (size_t td_iter_ = 0; td_iter_ < v.size(); td_iter_++) {
  auto& i = v[td_iter_];
  auto IsFirst = [&]() { return td_iter_ == 0; };
  auto IsLast = [&]() { return td_iter_ == v.size() - 1; };
  auto Index0 = [&](std::ostream& os) { os << std::to_string(td_iter_); };
  auto Index1 = [&](std::ostream& os) { os << std::to_string(td_iter_ + 1); };
TmplItemT(os, i);
os << "\n";
}


}
void TmplItemT(std::ostream& os, const TmplItem& i) {
// Switch i

if (i.is_text()) {
os << "os << \"";
os << i.text();
os << "\";";
} else 
if (i.is_expression()) {
TmplStringExpression(os, i.expression());
os << ";";
} else 
if (i.is_if_block()) {
TmplIfBlockT(os, i.if_block());
} else 
if (i.is_for_block()) {
TmplForT(os, i.for_block());
} else 
if (i.is_switch_block()) {
TmplSwitchT(os, i.switch_block());
} else  {
}

}
void TmplFuncDefinition(std::ostream& os, const TmplFunction& t) {
os << "\nvoid ";
os << t.identifier();
os << "(std::ostream& os";
ParamsList(os, t.params());
os << ") {\n";
TmplItemsT(os, t.items());
os << "\n}";

}
void CppHeader(std::ostream& os, const CppData& d, const Options& opt) {
os << "\n#ifndef ";
os << d.header_guard();
os << "\n#define ";
os << d.header_guard();
os << "\n\n#include <cstdint>\n#include <memory>\n#include <string>\n#include <variant>\n#include <ostream>\n\n#include <typedef/builtin_types.h>\n\n// PRODUCED BY SELF-HOSTED TYPEDEF CODEGEN\n\n#ifndef TD_THROW\n#define TD_STRINGIZE_DETAIL(x) #x\n#define TD_STRINGIZE(x) TD_STRINGIZE_DETAIL(x)\n#define TD_THROW(msg) (throw msg __FILE__ \":\" TD_STRINGIZE(__LINE__))\n#endif\n\n#ifndef TD_AUTO_ALLOC\n#define TD_AUTO_ALLOC 1\n#endif\n\n";


for (size_t td_iter_ = 0; td_iter_ < d.namespaces().size(); td_iter_++) {
  auto& ns = d.namespaces()[td_iter_];
  auto IsFirst = [&]() { return td_iter_ == 0; };
  auto IsLast = [&]() { return td_iter_ == d.namespaces().size() - 1; };
  auto Index0 = [&](std::ostream& os) { os << std::to_string(td_iter_); };
  auto Index1 = [&](std::ostream& os) { os << std::to_string(td_iter_ + 1); };
os << "namespace ";
os << ns;
os << " {\n";
}

os << "\n\n// Forward declarations.\n";


for (size_t td_iter_ = 0; td_iter_ < d.user_type_decls().size(); td_iter_++) {
  auto& type_decl = d.user_type_decls()[td_iter_];
  auto IsFirst = [&]() { return td_iter_ == 0; };
  auto IsLast = [&]() { return td_iter_ == d.user_type_decls().size() - 1; };
  auto Index0 = [&](std::ostream& os) { os << std::to_string(td_iter_); };
  auto Index1 = [&](std::ostream& os) { os << std::to_string(td_iter_ + 1); };
os << "\n";
// Switch type_decl

if (type_decl.is_struct_decl()) {
os << "class ";
os << type_decl.struct_decl().identifier();
os << ";";
} else 
if (type_decl.is_variant_decl()) {
os << "class ";
os << type_decl.variant_decl().identifier();
os << ";";
} else  {
}
os << "\n";
}

os << "\n";
if (opt.generate_json_parser()) {
os << "\nnamespace rapidjson {\n}\n";
} else if (opt.generate_json_writer()) {
os << "\nnamespace rapidjson {\nclass Writer;\nclass PrettyWriter;\n}\n";
} else {
}
os << "\n\n";


for (size_t td_iter_ = 0; td_iter_ < d.user_type_decls().size(); td_iter_++) {
  auto& type_decl = d.user_type_decls()[td_iter_];
  auto IsFirst = [&]() { return td_iter_ == 0; };
  auto IsLast = [&]() { return td_iter_ == d.user_type_decls().size() - 1; };
  auto Index0 = [&](std::ostream& os) { os << std::to_string(td_iter_); };
  auto Index1 = [&](std::ostream& os) { os << std::to_string(td_iter_ + 1); };
os << "\n";
// Switch type_decl

if (type_decl.is_struct_decl()) {
TmplStructDeclaration(os, type_decl.struct_decl(), opt);
} else 
if (type_decl.is_variant_decl()) {
TmplVariantDeclaration(os, type_decl.variant_decl(), opt);
} else  {
}
os << "\n";
}

os << "\n\n";


for (size_t td_iter_ = 0; td_iter_ < d.tmpl_funcs().size(); td_iter_++) {
  auto& tmpl_func = d.tmpl_funcs()[td_iter_];
  auto IsFirst = [&]() { return td_iter_ == 0; };
  auto IsLast = [&]() { return td_iter_ == d.tmpl_funcs().size() - 1; };
  auto Index0 = [&](std::ostream& os) { os << std::to_string(td_iter_); };
  auto Index1 = [&](std::ostream& os) { os << std::to_string(td_iter_ + 1); };
TmplFuncDeclaration(os, tmpl_func);
}

os << "\n\n";


for (size_t td_iter_ = 0; td_iter_ < d.namespaces().size(); td_iter_++) {
  auto& ns = d.namespaces()[td_iter_];
  auto IsFirst = [&]() { return td_iter_ == 0; };
  auto IsLast = [&]() { return td_iter_ == d.namespaces().size() - 1; };
  auto Index0 = [&](std::ostream& os) { os << std::to_string(td_iter_); };
  auto Index1 = [&](std::ostream& os) { os << std::to_string(td_iter_ + 1); };
os << "} // namespace ";
os << ns;
os << "\n";
}

os << "\n\n#endif  // ";
os << d.header_guard();
os << "\n";

}
void CppSource(std::ostream& os, const CppData& d, const Options& opt) {
os << "\n#include \"";
os << d.header_filename();
os << "\"\n\n#include <string>\n";
if (opt.generate_json_parser()) {
os << "\n#include \"rapidjson/document.h\"\n";
} else if (opt.generate_json_writer()) {
os << "\n#include \"rapidjson/document.h\"\n#include \"rapidjson/writer.h\"\n#include \"rapidjson/stringbuffer.h\"\n";
} else {
}
os << "\n\n// PRODUCED BY SELF-HOSTED TYPEDEF CODEGEN\n\n";


for (size_t td_iter_ = 0; td_iter_ < d.namespaces().size(); td_iter_++) {
  auto& ns = d.namespaces()[td_iter_];
  auto IsFirst = [&]() { return td_iter_ == 0; };
  auto IsLast = [&]() { return td_iter_ == d.namespaces().size() - 1; };
  auto Index0 = [&](std::ostream& os) { os << std::to_string(td_iter_); };
  auto Index1 = [&](std::ostream& os) { os << std::to_string(td_iter_ + 1); };
os << "namespace ";
os << ns;
os << " {\n";
}

os << "\n\n";


for (size_t td_iter_ = 0; td_iter_ < d.tmpl_funcs().size(); td_iter_++) {
  auto& tmpl_func = d.tmpl_funcs()[td_iter_];
  auto IsFirst = [&]() { return td_iter_ == 0; };
  auto IsLast = [&]() { return td_iter_ == d.tmpl_funcs().size() - 1; };
  auto Index0 = [&](std::ostream& os) { os << std::to_string(td_iter_); };
  auto Index1 = [&](std::ostream& os) { os << std::to_string(td_iter_ + 1); };
TmplFuncDefinition(os, tmpl_func);
}

os << "\n\n";


for (size_t td_iter_ = 0; td_iter_ < d.user_type_decls().size(); td_iter_++) {
  auto& type_decl = d.user_type_decls()[td_iter_];
  auto IsFirst = [&]() { return td_iter_ == 0; };
  auto IsLast = [&]() { return td_iter_ == d.user_type_decls().size() - 1; };
  auto Index0 = [&](std::ostream& os) { os << std::to_string(td_iter_); };
  auto Index1 = [&](std::ostream& os) { os << std::to_string(td_iter_ + 1); };
os << "\n";
// Switch type_decl

if (type_decl.is_struct_decl()) {
TmplStructDefinition(os, type_decl.struct_decl(), opt);
} else 
if (type_decl.is_variant_decl()) {
TmplVariantDefinition(os, type_decl.variant_decl(), opt);
} else  {
}
os << "\n";
}

os << "\n\n";


for (size_t td_iter_ = 0; td_iter_ < d.namespaces().size(); td_iter_++) {
  auto& ns = d.namespaces()[td_iter_];
  auto IsFirst = [&]() { return td_iter_ == 0; };
  auto IsLast = [&]() { return td_iter_ == d.namespaces().size() - 1; };
  auto Index0 = [&](std::ostream& os) { os << std::to_string(td_iter_); };
  auto Index1 = [&](std::ostream& os) { os << std::to_string(td_iter_ + 1); };
os << "} // namespace ";
os << ns;
os << "\n";
}

os << "\n";

}

} // namesapce td
} // namesapce codegen
} // namesapce experimental
} // namesapce cpp

