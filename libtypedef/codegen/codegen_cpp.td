typedef=alpha;
module td::codegen::cpp;

struct AccessInfo {
  identifier: str;
  cpp_type: str;
  access_by: variant {
    value: bool;
    reference: bool;
    pointer: bool;
  };
  type_arguments: vector<AccessInfo>;
}

struct StructDecl {
  identifier: str;
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

struct TmplFuncCall {
  func: str;
  args: vector<TmplValueDereference>;
}

variant TmplExpression {
  call: TmplFuncCall;
  val_ref: TmplValueDereference;
}

struct TmplIfBlock {
  struct TmplIf {
    stmt: TmplValueDereference;
    items: vector<TmplItem>;   
  }
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

struct SwitchBlock {
  // Switch espression
  identifier: TmplValueDereference;
  struct SwitchCase {
    label: TmplValueDereference;
    items: vector<TmplItem>;
  }
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

struct CppData {
  header_guard: str;
  header_filename: str;
  namespaces: vector<str>;
  user_type_decls: vector<UserTypeDeclaration>;
  tmpl_funcs: vector<TmplFunction>;
}

template CppHeader(d: CppData) t#"

"#

template TmplFuncDefinition(t: TmplFunction) t#"
"#

template CppSource(d: CppData) t#"
#include <d.header_filename>

#include string.h

<for ns in d.namespaces>namesapce <ns> {
</for>

<for tmpl_func in d.tmpl_funcs><TmplFuncDefinition(tmpl_func)></for>

<for ns in d.namespaces>} // namesapce <ns>
</for>

"#