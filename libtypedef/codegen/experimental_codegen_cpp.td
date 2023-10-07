typedef=alpha;
module td::codegen::experimental::cpp;

struct AccessInfo {
  identifier: str;
  cpp_type: str;
  access_by: variant {
    value: bool;
    reference: bool;
    pointer: bool;
  };
  is_required: bool;
  type_arguments: vector<AccessInfo>;
}

struct StructDecl {
  identifier: str;
  fqn: vector<str>; // Fully qualified name
  nested_type_decls: vector<UserTypeDeclaration>;
  inline_type_decls: vector<UserTypeDeclaration>;
  fields: vector<AccessInfo>;
}

variant UserTypeDeclaration {
  struct_decl: StructDecl;
  variant_decl: StructDecl;
}

struct TmplValueDereference {
  val_ref_path: vector<str>;
}

variant TmplExpression {
  struct TmplFuncCall {
    func: str;
    args: vector<TmplValueDereference>;
  }
  call: TmplFuncCall;
  val_ref: TmplValueDereference;
  expr: TmplExpression;
  not_expr: TmplExpression;
}

struct TmplIf {
  expr: TmplExpression;
  items: vector<TmplItem>;   
}

struct TmplIfBlock {
  if_sublock: TmplIf;
  elifs: vector<TmplIf>;
  else_items: vector<TmplItem>;
}

struct TmplForBlock {
  binding_vars: variant {
    var: str;
    key_val: struct {
      key: str;
      val: str;
    };
  };
  collection: TmplValueDereference;
  items: vector<TmplItem>;
}

struct SwitchCase {
  label: TmplValueDereference;
  items: vector<TmplItem>;
}

struct SwitchBlock {
  // Switch espression
  identifier: TmplValueDereference;
  cases: vector<SwitchCase>; 
  default_subblock: vector<TmplItem>;
}

variant TmplItem {
  text: str;
  expression: TmplExpression;
  if_block: TmplIfBlock;
  for_block: TmplForBlock;
  switch_block: SwitchBlock;
}

struct TmplFunction {
  identifier: str;
  params: vector<AccessInfo>;
  items: vector<TmplItem>;
}

struct Options {
  generate_json_writer: bool;
  generate_json_parser: bool;
}

struct CppData {
  header_guard: str;
  header_filename: str;
  namespaces: vector<str>;
  user_type_decls: vector<UserTypeDeclaration>;
  tmpl_funcs: vector<TmplFunction>;
}

template VecUserTypeDeclarationT(ut: vector<UserTypeDeclaration>, opt: Options)
t"<for n in ut>
<switch n>
<case n.struct_decl><TmplStructDeclaration(n.struct_decl, opt)></case>
<case n.variant_decl><TmplVariantDeclaration(n.variant_decl, opt)></case>
</switch>
</for>"

template FQN(fqn: vector<str>) t"<for n in fqn><n><if !IsLast()>::</if></for>"

template TmplStructDeclaration(s: StructDecl, opt: Options) t"
// <FQN(s.fqn)> struct declaration.
class <s.identifier> {
 public:
  // Nested type declarations
  <VecUserTypeDeclarationT(s.nested_type_decls, opt)>
  // Inline type declarations
  <VecUserTypeDeclarationT(s.inline_type_decls, opt)>

  <s.identifier>() {}
  ~<s.identifier>() {}

  <s.identifier>(const <s.identifier>&) = delete;
  <s.identifier>& operator=(const <s.identifier>&) = delete;
  <s.identifier>(<s.identifier>&&) = default;
  <s.identifier>& operator=(<s.identifier>&&) = default;

  <if opt.generate_json_writer>
  std::string ToJson();
  void ToJson(std::ostream& os);
  void ToJson(rapidjson::Writer* writer);
  void ToJson(rapidjson::PrettyWriter* writer);
  </if>
  <if opt.generate_json_parser>
  static void FromJson(<s.identifier>* target, const std::string& str);
  </if>

  <for field in s.fields>
  <switch field.access_by>
  <case field.access_by.value>
  <CppType(field)> get_<field.identifier>() const {
    return <field.identifier>_;
  }
  void set_<field.identifier>(<CppType(field)> val) {
    <field.identifier>_ = val;
  }
  <CppType(field)>& <field.identifier>() {
    return <field.identifier>_;
  }
  const <CppType(field)>& <field.identifier>() const {
    return <field.identifier>_;
  }
  </case>
  <case field.access_by.reference>
  void set_<field.identifier>(<CppType(field)>&& val) {
    <field.identifier>_ = std::move(val);
  }
  <CppType(field)>& <field.identifier>() {
    return <field.identifier>_;
  }
  const <CppType(field)>& <field.identifier>() const {
    return <field.identifier>_;
  }
  </case>
  <case field.access_by.pointer>
  bool has_<field.identifier>() const {
    return <field.identifier>_.operator bool();
  }
  void alloc_<field.identifier>() {
    <field.identifier>_ = std::make_unique\<<CppType(field)>\>();
  }
  void delete_<field.identifier>() {
    return <field.identifier>_.reset(nullptr);
  }
  void set_<field.identifier>(std::unique_ptr\<<CppType(field)>\> val) {
    <field.identifier>_ = std::move(val);
  }
  void set_<field.identifier>(<CppType(field)>* val) {
    <field.identifier>_.reset(std::move(val));
  }
  <CppType(field)>* ptr_<field.identifier>() {
    #if TD_AUTO_ALLOC
    if (!has_<field.identifier>()) {
      alloc_<field.identifier>();
    }
    #endif
    #ifdef DEBUG
    if (!has_<field.identifier>()) {
      TD_THROW(\"Attempted null reference\");
    }
    #endif
    return <field.identifier>_.get();
  }
  <CppType(field)>& <field.identifier>() {
    return *ptr_<field.identifier>();
  }
  const <CppType(field)>& <field.identifier>() const {
    #ifdef DEBUG
    if (!has_<field.identifier>()) {
      TD_THROW(\"Attempted null reference\");
    }
    #endif
    return *<field.identifier>_.get();
  }
  </case>
  </switch>
  </for>

 private:
  <for field in s.fields><switch field.access_by>
  <case field.access_by.pointer>std::unique_ptr\<<CppType(field)>\> <field.identifier>_;</case>
  <default><CppType(field)> <field.identifier>_;</default>
  </switch>
  </for>
}; // class <s.identifier>
"

template TmplStructDefinition(s: StructDecl, opt: Options) t"
"

template TmplVariantDefinition(v: StructDecl, opt: Options) t"
"

template TmplVariantDeclaration(v: StructDecl, opt: Options) t"
// <FQN(v.fqn)> variant declaration.
class <v.identifier> {
 public:
  // Nested type declarations
  <VecUserTypeDeclarationT(v.nested_type_decls, opt)>
  // Inline type declarations
  <VecUserTypeDeclarationT(v.inline_type_decls, opt)>

  <v.identifier>() {}
  ~<v.identifier>() {
    tag = Tag::__TAG__UNSET;
  }

  <v.identifier>(const <v.identifier>&) = delete;
  <v.identifier>& operator=(const <v.identifier>&) = delete;
  <v.identifier>(<v.identifier>&&) = default;
  <v.identifier>& operator=(<v.identifier>&&) = default;

  enum class Tag {
    __TAG__UNSET = 0,
    <for field in v.fields>TAG_<field.identifier> = <Index1()>,
    </for>
  };
  Tag Which() const { return tag; }

  <for field in v.fields>
  bool is_<field.identifier>() const {
    return val_.index() == <Index1()>;
  }
  <switch field.access_by>
  <case field.access_by.value>
  <CppType(field)> get_<field.identifier>() const {
    return std::get\<<Index1()>\>(val_);
  }
  void set_<field.identifier>(<CppType(field)> val) {
    tag = Tag::TAG_<field.identifier>;
    val_.emplace\<<Index1()>\>(val);
  }
  <CppType(field)>& <field.identifier>() {
    if (!is_<field.identifier>()) {
      tag = Tag::TAG_<field.identifier>;
      val_.emplace\<<Index1()>\>();
    }
    return std::get\<<Index1()>\>(val_);
  }
  const <CppType(field)>& <field.identifier>() const {
    return std::get\<<Index1()>\>(val_);
  }
  </case>
  <case field.access_by.reference>
  <CppType(field)>& <field.identifier>() {
    if (!is_<field.identifier>()) {
      tag = Tag::TAG_<field.identifier>;
      val_.emplace\<<Index1()>\>();
    }
    return std::get\<<Index1()>\>(val_);
  }
  const <CppType(field)>& <field.identifier>() const {
    return std::get\<<Index1()>\>(val_);
  }
  void set_<field.identifier>(<CppType(field)>&& val) {
    tag = Tag::TAG_<field.identifier>;
    val_.emplace\<<Index1()>\>(std::move(val));
  }
  </case>
  <case field.access_by.pointer>
  bool has_<field.identifier>() const {
    return is_<field.identifier>() && std::get\<<Index1()>\>(val_).operator bool();
  }
  void alloc_<field.identifier>() {
    tag = Tag::TAG_<field.identifier>;
    val_.emplace\<<Index1()>\>(std::make_unique\<<CppType(field)>\>());
  }
  void delete_<field.identifier>() {
    return std::get\<<Index1()>\>(val_).reset(nullptr);
  }
  void set_<field.identifier>(std::unique_ptr\<<CppType(field)>\> val) {
    tag = Tag::TAG_<field.identifier>;
    val_.emplace\<<Index1()>\>(std::move(val));
  }
  void set_<field.identifier>(<CppType(field)>* val) {
    tag = Tag::TAG_<field.identifier>;
    std::get\<<Index1()>\>(val_).reset(std::move(val));
  }
  <CppType(field)>* ptr_<field.identifier>() {
    #if TD_AUTO_ALLOC
    if (!has_<field.identifier>()) {
      alloc_<field.identifier>();
    }
    #endif
    return std::get\<<Index1()>\>(val_).get();
  }
  <CppType(field)>& <field.identifier>() {
    return *ptr_<field.identifier>();
  }
  const <CppType(field)>& <field.identifier>() const {
    return *std::get\<<Index1()>\>(val_).get();
  }
  </case></switch></for>

 private:
  Tag tag = Tag::__TAG__UNSET;

  std::variant\<
    std::monostate
  <for field in v.fields><switch field.access_by>
  <case field.access_by.pointer>, std::unique_ptr\<<CppType(field)>\></case>
  <default>, <CppType(field)></default>
  </switch>
  </for>
  \> val_;

};  // class <v.identifier>
"

template TmplFuncDeclaration(t: TmplFunction)
t"void <t.identifier>(std::ostream& os<ParamsList(t.params)>);"

template CppType(a: AccessInfo) t"<a.cpp_type><if !IsEmpty(a.type_arguments)>\<<for arg in a.type_arguments><CppType(arg)><if !IsLast()>, </if></for>\></if>"

template ParamsList(params: vector<AccessInfo>)
t"<for param in params>, const <CppType(param)>& <param.identifier></for>"

template TmplValueDereferenceT(v: TmplValueDereference) t"<for part in v.val_ref_path><part><if !IsFirst()>()</if><if !IsLast()>.</if></for>"

template TmplStringExpression(i: TmplExpression) t"<switch i>
<case i.call><i.call.func>(os<for arg in i.call.args>, <TmplValueDereferenceT(arg)></for>)</case>
<case i.val_ref>os \<\< <TmplValueDereferenceT(i.val_ref)></case>
<case i.expr>(<TmplStringExpression(i.expr)>)</case>
<default>#error If this was emitted then there's a problem with type checking.</default>
</switch>"

template TmplBoolExpression(i: TmplExpression) t"<switch i>
<case i.call><i.call.func>(<for arg in i.call.args><TmplValueDereferenceT(arg)><if !IsLast()>, </if></for>)</case>
<case i.val_ref><TmplValueDereferenceT(i.val_ref)></case>
<case i.expr>(<TmplBoolExpression(i.expr)>)</case>
<case i.not_expr>!<TmplBoolExpression(i.not_expr)></case>
</switch>"

// TODO it would be useful to be able to template TmplIfBlock::TmplIf
// as a sub-struct.
template TmplIfT(i: TmplIf)
t"if (<TmplBoolExpression(i.expr)>) {
<TmplItemsT(i.items)>}"

template TmplIfBlockT(i: TmplIfBlock) t"<TmplIfT(i.if_sublock)><for e in i.elifs> else <TmplIfT(e)></for> else {
<TmplItemsT(i.else_items)>}"

template TmplForT(f: TmplForBlock) t"
<switch f.binding_vars>
<case f.binding_vars.var>
for (size_t td_iter_ = 0; td_iter_ \< <TmplValueDereferenceT(f.collection)>.size(); td_iter_++) {
  auto& <f.binding_vars.var> = <TmplValueDereferenceT(f.collection)>[td_iter_];
  auto IsFirst = [&]() { return td_iter_ == 0; };
  auto IsLast = [&]() { return td_iter_ == <TmplValueDereferenceT(f.collection)>.size() - 1; };
  auto Index0 = [&](std::ostream& os) { os \<\< std::to_string(td_iter_); };
  auto Index1 = [&](std::ostream& os) { os \<\< std::to_string(td_iter_ + 1); };
</case>
<case f.binding_vars.key_val>
for (auto const& [<f.binding_vars.key_val.key>, <f.binding_vars.key_val.val>] : <TmplValueDereferenceT(f.collection)>) {
</case>
</switch><TmplItemsT(f.items)>}
"

template TmplHasValRef(val: TmplValueDereference) t"<for part in val.val_ref_path><if IsLast()>is_</if><part><if !IsFirst()>()</if><if !IsLast()>.</if></for>"

template TmplSwitchT(s: SwitchBlock) t"// Switch <TmplValueDereferenceT(s.identifier)>
<for c in s.cases>
if (<TmplHasValRef(c.label)>) {
<TmplItemsT(c.items)>} else </for> {
<TmplItemsT(s.default_subblock)>}"

template TmplItemsT(v: vector<TmplItem>) t"<for i in v><TmplItemT(i)>
</for>"

template TmplItemT(i: TmplItem)
t"<switch i>
<case i.text>os \<\< \"<i.text>\";</case>
<case i.expression><TmplStringExpression(i.expression)>;</case>
<case i.if_block><TmplIfBlockT(i.if_block)></case>
<case i.for_block><TmplForT(i.for_block)></case>
<case i.switch_block><TmplSwitchT(i.switch_block)></case>
</switch>"

template TmplFuncDefinition(t: TmplFunction) t"
void <t.identifier>(std::ostream& os<ParamsList(t.params)>) {
<TmplItemsT(t.items)>
}"

template CppHeader(d: CppData, opt: Options) t"
#ifndef <d.header_guard>
#define <d.header_guard>

#include \<cstdint\>
#include \<memory\>
#include \<string\>
#include \<variant\>
#include \<ostream\>

#include \<typedef/builtin_types.h\>

// PRODUCED BY SELF-HOSTED TYPEDEF CODEGEN

#ifndef TD_THROW
#define TD_STRINGIZE_DETAIL(x) #x
#define TD_STRINGIZE(x) TD_STRINGIZE_DETAIL(x)
#define TD_THROW(msg) (throw msg __FILE__ \":\" TD_STRINGIZE(__LINE__))
#endif

#ifndef TD_AUTO_ALLOC
#define TD_AUTO_ALLOC 1
#endif

<for ns in d.namespaces>namespace <ns> {
</for>

// Forward declarations.
<for type_decl in d.user_type_decls>
<switch type_decl>
<case type_decl.struct_decl>class <type_decl.struct_decl.identifier>;</case>
<case type_decl.variant_decl>class <type_decl.variant_decl.identifier>;</case>
</switch>
</for>
<if opt.generate_json_parser>
namespace rapidjson {
}
<elif opt.generate_json_writer>
namespace rapidjson {
class Writer;
class PrettyWriter;
}
</if>

<for type_decl in d.user_type_decls>
<switch type_decl>
<case type_decl.struct_decl><TmplStructDeclaration(type_decl.struct_decl, opt)></case>
<case type_decl.variant_decl><TmplVariantDeclaration(type_decl.variant_decl, opt)></case>
</switch>
</for>

<for tmpl_func in d.tmpl_funcs><TmplFuncDeclaration(tmpl_func)></for>

<for ns in d.namespaces>} // namespace <ns>
</for>

#endif  // <d.header_guard>
"

template CppSource(d: CppData, opt: Options) t"
#include \"<d.header_filename>\"

#include \<string\>
<if opt.generate_json_parser>
#include \"rapidjson/document.h\"
<elif opt.generate_json_writer>
#include \"rapidjson/document.h\"
#include \"rapidjson/writer.h\"
#include \"rapidjson/stringbuffer.h\"
</if>

// PRODUCED BY SELF-HOSTED TYPEDEF CODEGEN

<for ns in d.namespaces>namespace <ns> {
</for>

<for tmpl_func in d.tmpl_funcs><TmplFuncDefinition(tmpl_func)></for>

<for type_decl in d.user_type_decls>
<switch type_decl>
<case type_decl.struct_decl><TmplStructDefinition(type_decl.struct_decl, opt)></case>
<case type_decl.variant_decl><TmplVariantDefinition(type_decl.variant_decl, opt)></case>
</switch>
</for>

<for ns in d.namespaces>} // namespace <ns>
</for>
"