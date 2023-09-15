#include "libtypedef/codegen/codegen_cpp.h"

#include <filesystem>
#include <inja/inja.hpp>
#include <nlohmann/json.hpp>
#include <optional>
#include <stdexcept>
#include <string>

#include "libtypedef/codegen/codegen_cpp_helpers.h"
#include "libtypedef/parser/grammar_functions.h"
#include "libtypedef/parser/tmpl_str_table.h"

#define FMT_HEADER_ONLY
#include <fmt/core.h>

#define throw_logic_error(str) \
  throw std::logic_error(      \
      fmt::format("\"{}\" in {}:{}", str, __FILE__, __LINE__));

namespace td {

using json = nlohmann::json;
using namespace inja;
using namespace std;
using TypeDefinitionContext = TypedefParser::TypeDefinitionContext;
using FieldDefinitionContext = TypedefParser::FieldDefinitionContext;
using PrimitiveTypeIdentifierContext =
    TypedefParser::PrimitiveTypeIdentifierContext;
using UserTypeContext = TypedefParser::UserTypeContext;
using TypeAnnotationContext = TypedefParser::TypeAnnotationContext;
using TypeIdentifierContext = TypedefParser::TypeIdentifierContext;
using TmplDefinitionContext = TypedefParser::TmplDefinitionContext;
using FunctionParameterContext = TypedefParser::FunctionParameterContext;

json GetUserTypeDecls(vector<TypeDefinitionContext*> types);
json GetTypeDeclaration(TypedefParser::TypeDefinitionContext* type,
                        optional<string> maybe_identifier);
json GetTemplateItems(vector<TypedefParser::TmplItemContext*> itm_ctxs);

std::string GetNestedTypeIdentifier(FieldDefinitionContext* field) {
  return escape_utf8_to_cpp_identifier(field->field_identifier->id + "T");
}

std::string GetInlineCppType(FieldDefinitionContext* ctx) {
  return escape_utf8_to_cpp_identifier(ctx->field_identifier->id + "T");
}

string HeaderGuard(const filesystem::path& source_filename) {
  string hdr_guard = source_filename.string() + "_H__";
  replace(hdr_guard.begin(), hdr_guard.end(), '.', '_');
  replace(hdr_guard.begin(), hdr_guard.end(), ' ', '_');
  replace(hdr_guard.begin(), hdr_guard.end(), '/', '_');
  transform(hdr_guard.begin(), hdr_guard.end(), hdr_guard.begin(), ::toupper);
  return hdr_guard;
}

json GetAccessInfoForType(TypeAnnotationContext* ctx) {
  json j;
  if (ReferencesPrimitiveType(ctx)) {
    if (IsBool(ctx)) {
      j["cpp_type"] = "bool";
      j["access_by"] = "value";
    } else if (IsChar(ctx)) {
      j["cpp_type"] = "char32_t";
      j["access_by"] = "value";
    } else if (IsStr(ctx)) {
      j["cpp_type"] = "std::string";
      j["access_by"] = "reference";
    } else if (IsF32(ctx)) {
      j["cpp_type"] = "float";
      j["access_by"] = "value";
    } else if (IsF64(ctx)) {
      j["cpp_type"] = "double";
      j["access_by"] = "value";
    } else if (IsU8(ctx)) {
      j["cpp_type"] = "std::uint8_t";
      j["access_by"] = "value";
    } else if (IsU16(ctx)) {
      j["cpp_type"] = "std::uint16_t";
      j["access_by"] = "value";
    } else if (IsU32(ctx)) {
      j["cpp_type"] = "std::uint32_t";
      j["access_by"] = "value";
    } else if (IsU64(ctx)) {
      j["cpp_type"] = "std::uint64_t";
      j["access_by"] = "value";
    } else if (IsI8(ctx)) {
      j["cpp_type"] = "std::int8_t";
      j["access_by"] = "value";
    } else if (IsI16(ctx)) {
      j["cpp_type"] = "std::int16_t";
      j["access_by"] = "value";
    } else if (IsI32(ctx)) {
      j["cpp_type"] = "std::int32_t";
      j["access_by"] = "value";
    } else if (IsI64(ctx)) {
      j["cpp_type"] = "std::int64_t";
      j["access_by"] = "value";
    } else {
      throw_logic_error("invalid state");
    }
  } else if (ReferencesBuiltinVectorType(ctx)) {
    j["cpp_type"] = "td::Vector";
    j["access_by"] = "reference";
    j["type_arguments"] = json::array();
    j["type_arguments"].push_back(
        GetAccessInfoForType(GetTypeArgument(ctx, 0)));
  } else if (ReferencesBuiltinMapType(ctx)) {
    j["cpp_type"] = "td::Map";
    j["access_by"] = "reference";
    j["type_arguments"] = json::array();
    j["type_arguments"].push_back(
        GetAccessInfoForType(GetTypeArgument(ctx, 0)));
    j["type_arguments"].push_back(
        GetAccessInfoForType(GetTypeArgument(ctx, 1)));
  } else if (ReferencesUserType(ctx)) {
    j["cpp_type"] = escape_utf8_to_cpp_identifier(
        GetReferencedUserType(ctx)->type_identifier->id);
    j["access_by"] = "pointer";
  } else {
    throw_logic_error("invalid state");
  }
  return j;
}

json GetField(FieldDefinitionContext* field) {
  json j;
  j["identifier"] = escape_utf8_to_cpp_identifier(field->field_identifier->id);
  if (DefinesAndUsesInlineUserType(field)) {
    j["cpp_type"] = GetNestedTypeIdentifier(field);
    j["access_by"] = "pointer";
  } else {
    j.merge_patch(GetAccessInfoForType(field->typeAnnotation()));
  }
  return j;
}

json GetReferencedBuiltinTypeDeclaration(
    TypedefParser::TypeAnnotationContext* type, const string& identifier) {
  json j;
  j["access_by"] = "reference";
  if (ReferencesBuiltinVectorType(type) || ReferencesBuiltinMapType(type)) {
    j["cpp_type"] = escape_utf8_to_cpp_identifier(identifier) + "T";
  } else {
    throw_logic_error("invalid state");
  }
  return j;
}

json GetStruct(TypeDefinitionContext* type, optional<string> maybe_identifier) {
  json j;
  // If it's an inline type, the identifier is the field name which has
  // to be passed in separately.
  j["identifier"] =
      maybe_identifier ? *maybe_identifier : type->type_identifier->id;

  if (type->fieldBlock()->typeDefinition().size()) {
    j["nested_type_decls"].push_back(
        GetUserTypeDecls(type->fieldBlock()->typeDefinition()));
  }

  // Some field types require inline type declarations.
  for (FieldDefinitionContext* field : type->fieldBlock()->fieldDefinition()) {
    if (DefinesAndUsesInlineUserType(field)) {
      j["inline_type_decls"].push_back(GetTypeDeclaration(
          field->typeDefinition(), GetNestedTypeIdentifier(field)));
    }
  }

  for (FieldDefinitionContext* field : type->fieldBlock()->fieldDefinition()) {
    j["fields"].push_back(GetField(field));
  }

  return j;
}

json GetTypeDeclaration(TypedefParser::TypeDefinitionContext* type,
                        optional<string> maybe_identifier) {
  json j;
  if (DefinesStruct(type)) {
    j["struct"] = GetStruct(type, maybe_identifier);
  } else if (DefinesVariant(type)) {
    // The data fed to the template is the same as for struct.
    j["variant"] = GetStruct(type, maybe_identifier);
  } else {
    throw_logic_error("invalid state");
  }
  return j;
}

json GetUserTypeDecls(vector<TypeDefinitionContext*> types) {
  json arr = json::array();
  for (TypeDefinitionContext* type : types) {
    arr.push_back(GetTypeDeclaration(type, nullopt));
  }
  return arr;
}

json GetTemplateValueDereference(
    TypedefParser::TmplValueReferencePathContext* ctx) {
  json j;
  j["val_ref_path"] = json::array();
  for (TypedefParser::TmplValueReferenceContext* val_ref :
       ctx->tmplValueReference()) {
    j["val_ref_path"].push_back(
        escape_utf8_to_cpp_identifier(val_ref->tmplIdentifier()->id));
  }
  return j;
}

json GetTemplateInsertion(TypedefParser::TmplInsertionContext* ctx) {
  json j;
  j["identifier"] = GetTemplateValueDereference(ctx->tmplValueReferencePath());
  return j;
}

json GetTemplateFunctionCall(TypedefParser::TmplCallContext* ctx) {
  json j;
  j["func"] = escape_utf8_to_cpp_identifier(ctx->tmplIdentifier()->id);
  j["args"] = json::array();
  for (TypedefParser::TmplValueReferencePathContext* path :
       ctx->tmplValueReferencePath()) {
    j["args"].push_back(GetTemplateValueDereference(path));
  }
  return j;
}

json GetTemplateIfBlock(TypedefParser::TmplIfContext* ctx) {
  json j;
  j["stmt"] = GetTemplateValueDereference(ctx->tmplIfBlock()
                                              ->tmplIfStmt()
                                              ->tmplExpression()
                                              ->tmplValueReferencePath());
  j["items"] = GetTemplateItems(ctx->tmplIfBlock()->tmplItem());

  j["elifs"] = json::array();
  for (auto* elif : ctx->tmplElifBlock()) {
    json e;
    e["stmt"] = GetTemplateValueDereference(
        elif->tmplElIfStmt()->tmplExpression()->tmplValueReferencePath());
    e["items"] = GetTemplateItems(elif->tmplItem());
    j["elifs"].push_back(e);
  }

  if (ctx->tmplElseBlock()) {
    j["else"]["items"] = GetTemplateItems(ctx->tmplElseBlock()->tmplItem());
  }

  return j;
}

json GetTemplateForBlock(TypedefParser::TmplForContext* ctx) {
  json j;
  if (ctx->tmplForStmt()->tmplIdentifier().size() == 1) {
    j["var"] = ctx->tmplForStmt()->tmplIdentifier()[0]->id;
  } else if (ctx->tmplForStmt()->tmplIdentifier().size() == 2) {
    j["key"] = ctx->tmplForStmt()->tmplIdentifier()[0]->id;
    j["val"] = ctx->tmplForStmt()->tmplIdentifier()[1]->id;
  }
  j["collection"] = GetTemplateValueDereference(ctx->tmplForStmt()->collection);
  j["items"] = GetTemplateItems(ctx->tmplItem());
  return j;
}

json GetFunctionParameter(FunctionParameterContext* func_param) {
  json j;
  j["identifier"] = escape_utf8_to_cpp_identifier(func_param->identifier()->id);
  j.merge_patch(GetAccessInfoForType(func_param->parameter_type));
  return j;
}

json GetTemplateItem(TypedefParser::TmplItemContext* itm_ctx) {
  json j;
  if (itm_ctx->tmplText()) {
    j["text"] = itm_ctx->tmplText()->text;
  } else if (itm_ctx->tmplInsertion()) {
    j["insertion"] = GetTemplateInsertion(itm_ctx->tmplInsertion());
  } else if (itm_ctx->tmplCall()) {
    j["call"] = GetTemplateFunctionCall(itm_ctx->tmplCall());
  } else if (itm_ctx->tmplIf()) {
    j["if"] = GetTemplateIfBlock(itm_ctx->tmplIf());
  } else if (itm_ctx->tmplFor()) {
    j["for"] = GetTemplateForBlock(itm_ctx->tmplFor());
  } else {
    throw_logic_error("invalid state");
  }
  return j;
}

json GetTemplateItems(vector<TypedefParser::TmplItemContext*> itm_ctxs) {
  json items = json::array();
  for (TypedefParser::TmplItemContext* itm_ctx : itm_ctxs) {
    items.push_back(GetTemplateItem(itm_ctx));
  }
  return items;
}

json GetTemplateFunc(TmplDefinitionContext* tmpl_def) {
  json j;
  j["identifier"] = tmpl_def->identifier()->id;
  json params = json::array();
  for (FunctionParameterContext* func_param : tmpl_def->functionParameter()) {
    params.push_back(GetFunctionParameter(func_param));
  }
  j["params"] = params;
  j["items"] = GetTemplateItems(tmpl_def->tmplBlock()->tmplItem());

  return j;
}

json GetTemplateFuncs(vector<TmplDefinitionContext*> tmpl_defs) {
  json j = json::array();
  for (TmplDefinitionContext* tmpl_def : tmpl_defs) {
    j.push_back(GetTemplateFunc(tmpl_def));
  }
  return j;
}

void CodegenCpp(OutPathBase* out_path,
                TypedefParser::CompilationUnitContext* compilation_unit_ctx) {
  filesystem::path hdr_filename =
      ToPath(compilation_unit_ctx->moduleDeclaration());
  filesystem::path source_filename = hdr_filename;
  hdr_filename.replace_extension(".h");
  source_filename.replace_extension(".cpp");

  auto hdr_file = out_path->OpenOutputFile(hdr_filename);
  hdr_file->Open();
  auto src_file = out_path->OpenOutputFile(source_filename);
  src_file->Open();

  json data;
  data["header_guard"] = HeaderGuard(source_filename);
  data["header_filename"] = hdr_filename;
  data["namespaces"] = json::array();
  for (auto& path_part :
       compilation_unit_ctx->moduleDeclaration()->symbolPath()->identifier()) {
    data["namespaces"].push_back(path_part->id);
  }

  data["user_type_decls"] =
      GetUserTypeDecls(compilation_unit_ctx->typeDefinition());
  data["tmpl_funcs"] = GetTemplateFuncs(compilation_unit_ctx->tmplDefinition());

  std::cout << data.dump(1) << std::endl;

  Environment env;
  env.set_trim_blocks(true);
  env.set_lstrip_blocks(true);

  Template struct_tmpl;
  env.add_callback("struct", 1, [&](Arguments& args) mutable {
    json arg = args.at(0)->get<json>();
    return env.render(struct_tmpl, arg);
  });

  Template variant_tmpl;
  env.add_callback("variant", 1, [&](Arguments& args) mutable {
    json arg = args.at(0)->get<json>();
    return env.render(variant_tmpl, arg);
  });

  Template params_list;
  env.add_callback("params_list", 1, [&](Arguments& args) mutable {
    json arg;
    arg["params"] = args.at(0)->get<json>();
    return env.render(params_list, arg);
  });

  Template cpp_type;
  env.add_callback("cpp_type", 1, [&](Arguments& args) mutable {
    json arg = args.at(0)->get<json>();
    return env.render(cpp_type, arg);
  });

  Template tmpl_func_declaration;
  env.add_callback("tmpl_func_declaration", 1, [&](Arguments& args) mutable {
    json arg = args.at(0)->get<json>();
    return env.render(tmpl_func_declaration, arg);
  });

  Template tmpl_func_definition;
  env.add_callback("tmpl_func_definition", 1, [&](Arguments& args) mutable {
    json arg = args.at(0)->get<json>();
    return env.render(tmpl_func_definition, arg);
  });

  Template tmpl_item;
  env.add_callback("tmpl_item", 1, [&](Arguments& args) mutable {
    json arg = args.at(0)->get<json>();
    // Text escape uses a long random* string to minimize chance of collision.
    // * well, once upon a time it was random.
    arg["escape"] = "";  //"oohequoh1Gah8AiYaida";
    return env.render(tmpl_item, arg);
  });

  Template tmpl_val_ref;
  env.add_callback("tmpl_val_ref", 1, [&](Arguments& args) mutable {
    json arg = args.at(0)->get<json>();
    return env.render(tmpl_val_ref, arg);
  });

  struct_tmpl = env.parse(R"(
class {{identifier}} {
 public:
## if exists("nested_type_decls")
  // Nested type declarations.
## for type_decl in nested_type_decls
## if existsIn(type_decl, "struct")
  {{ struct(type_decl.struct) }}
## else if existsIn(type_decl, "variant")
  {{ variant(type_decl.variant) }}
## endif
## endfor
## endif

## if exists("inline_type_decls")
  // Inline type declarations.
## for type_decl in inline_type_decls
## if existsIn(type_decl, "struct")
  {{ struct(type_decl.struct) }}
## else if existsIn(type_decl, "variant")
  {{ variant(type_decl.variant) }}
## endif
## endfor
## endif
  {{identifier}}() {}
  ~{{identifier}}() {}

  {{identifier}}(const {{identifier}}&) = delete;
  {{identifier}}& operator=(const {{identifier}}&) = delete;
  {{identifier}}({{identifier}}&&) = default;
  {{identifier}}& operator=({{identifier}}&&) = default;

## if exists("fields")
## for field in fields
## if field.access_by == "value" 
  {{cpp_type(field)}} get_{{field.identifier}}() const {
    return {{field.identifier}}_;
  }
  void set_{{field.identifier}}({{cpp_type(field)}} val) {
    {{field.identifier}}_ = val;
  }
  {{cpp_type(field)}}& {{field.identifier}}() {
    return {{field.identifier}}_;
  }
  const {{cpp_type(field)}}& {{field.identifier}}() const {
    return {{field.identifier}}_;
  }
## else if field.access_by == "reference" 
  void set_{{field.identifier}}({{cpp_type(field)}}&& val) {
    {{field.identifier}}_ = std::move(val);
  }
  {{cpp_type(field)}}& {{field.identifier}}() {
    return {{field.identifier}}_;
  }
  const {{cpp_type(field)}}& {{field.identifier}}() const {
    return {{field.identifier}}_;
  }
## else if field.access_by == "pointer" 
  bool has_{{field.identifier}}() const {
    return {{field.identifier}}_.operator bool();
  }
  void alloc_{{field.identifier}}() {
    {{field.identifier}}_ = std::make_unique<{{cpp_type(field)}}>();
  }
  void delete_{{field.identifier}}() {
    return {{field.identifier}}_.reset(nullptr);
  }
  void set_{{field.identifier}}(std::unique_ptr<{{cpp_type(field)}}> val) {
    {{field.identifier}}_ = std::move(val);
  }
  void set_{{field.identifier}}({{cpp_type(field)}}* val) {
    {{field.identifier}}_.reset(std::move(val));
  }
  {{cpp_type(field)}}* ptr_{{field.identifier}}() {
    #if TD_AUTO_ALLOC
    if (!has_{{field.identifier}}()) {
      alloc_{{field.identifier}}();
    }
    #endif
    #ifdef DEBUG
    if (!has_{{field.identifier}}()) {
      TD_THROW("Attempted null reference");
    }
    #endif
    return {{field.identifier}}_.get();
  }
  {{cpp_type(field)}}& {{field.identifier}}() {
    return *ptr_{{field.identifier}}();
  }
  const {{cpp_type(field)}}& {{field.identifier}}() const {
    #ifdef DEBUG
    if (!has_{{field.identifier}}()) {
      TD_THROW("Attempted null reference");
    }
    #endif
    return *{{field.identifier}}_.get();
  }
## endif

## endfor
## endif

 private:
## if exists("fields")
## for field in fields
## if field.access_by == "pointer" 
  std::unique_ptr<{{cpp_type(field)}}> {{field.identifier}}_;
## else
  {{cpp_type(field)}} {{field.identifier}}_;
## endif
## endfor
## endif
};  // class {{identifier}}
  )");

  variant_tmpl = env.parse(R"(
class {{identifier}} {
 public:
## if exists("nested_type_decls")
  // Nested type declarations.
## for type_decl in nested_type_decls
## if existsIn(type_decl, "struct")
  {{ struct(type_decl.struct) }}
## else if existsIn(type_decl, "variant")
  {{ variant(type_decl.variant) }}
## endif
## endfor
## endif

## if exists("inline_type_decls")
  // Inline type declarations.
## for type_decl in inline_type_decls
## if existsIn(type_decl, "struct")
  {{ struct(type_decl.struct) }}
## else if existsIn(type_decl, "variant")
  {{ variant(type_decl.variant) }}
## endif
## endfor
## endif
  {{identifier}}() {}
  ~{{identifier}}() {
    MaybeDeleteExistingMember();
    tag = Tag::__TAGS_BEGIN;
  }

  {{identifier}}(const {{identifier}}&) = delete;
  {{identifier}}& operator=(const {{identifier}}&) = delete;
  {{identifier}}({{identifier}}&&) = default;
  {{identifier}}& operator=({{identifier}}&&) = default;

  enum class Tag {
    __TAGS_BEGIN = 0,
## if exists("fields")
## for field in fields
    TAG_{{field.identifier}},
## endfor
## endif
    __TAGS_END
  };
  Tag Which() const { return tag; }

## if exists("fields")
## for field in fields
  bool is_{{field.identifier}}() const {
    return (tag == Tag::TAG_{{field.identifier}});
  }
## if field.access_by == "value" 
  {{cpp_type(field)}} get_{{field.identifier}}() const {
    if (!is_{{field.identifier}}()) {
      TD_THROW("Attempted invalid variant access");
    }
    return {{field.identifier}}_;
  }
  void set_{{field.identifier}}({{cpp_type(field)}} val) {
    MaybeDeleteExistingMember();
    tag = Tag::TAG_{{field.identifier}};
    {{field.identifier}}_ = val;
  }
  {{cpp_type(field)}}& {{field.identifier}}() {
    if (!is_{{field.identifier}}()) {
      MaybeDeleteExistingMember();
      tag = Tag::TAG_{{field.identifier}};
    }
    return {{field.identifier}}_;
  }
  const {{cpp_type(field)}}& {{field.identifier}}() const {
    if (!is_{{field.identifier}}()) {
      TD_THROW("Attempted invalid variant access");
    }
    return {{field.identifier}}_;
  }
## else if field.access_by == "reference"
  {{cpp_type(field)}}& {{field.identifier}}() {
    if (!is_{{field.identifier}}()) {
      MaybeDeleteExistingMember();
      tag = Tag::TAG_{{field.identifier}};
    }
    return {{field.identifier}}_;
  }
  const {{cpp_type(field)}}& {{field.identifier}}() const {
    if (!is_{{field.identifier}}()) {
      TD_THROW("Attempted invalid variant access");
    }
    return {{field.identifier}}_;
  }
  void set_{{field.identifier}}({{cpp_type(field)}}&& val) {
    MaybeDeleteExistingMember();
    tag = Tag::TAG_{{field.identifier}};
    {{field.identifier}}_ = std::move(val);
  }
## else if field.access_by == "pointer" 
  bool has_{{field.identifier}}() const {
    if (!is_{{field.identifier}}()) {
      TD_THROW("Attempted invalid variant access");
    }
    return {{field.identifier}}_.operator bool();
  }
  void alloc_{{field.identifier}}() {
    MaybeDeleteExistingMember();
    tag = Tag::TAG_{{field.identifier}};
    {{field.identifier}}_ = std::make_unique<{{cpp_type(field)}}>();
  }
  void delete_{{field.identifier}}() {
    if (!is_{{field.identifier}}()) {
      TD_THROW("Attempted invalid variant access");
    }
    return {{field.identifier}}_.reset(nullptr);
  }
  void set_{{field.identifier}}(std::unique_ptr<{{cpp_type(field)}}> val) {
    MaybeDeleteExistingMember();
    tag = Tag::TAG_{{field.identifier}};
    {{field.identifier}}_ = std::move(val);
  }
  void set_{{field.identifier}}({{cpp_type(field)}}* val) {
    MaybeDeleteExistingMember();
    tag = Tag::TAG_{{field.identifier}};
    {{field.identifier}}_.reset(std::move(val));
  }
  {{cpp_type(field)}}* ptr_{{field.identifier}}() {
    #if TD_AUTO_ALLOC
    if (!has_{{field.identifier}}()) {
      alloc_{{field.identifier}}();
    }
    #endif
    #ifdef DEBUG
    if (!has_{{field.identifier}}()) {
      TD_THROW("Attempted null reference");
    }
    #endif
    return {{field.identifier}}_.get();
  }
  {{cpp_type(field)}}& {{field.identifier}}() {
    if (!is_{{field.identifier}}()) {
      MaybeDeleteExistingMember();
      tag = Tag::TAG_{{field.identifier}};
    }
    return *ptr_{{field.identifier}}();
  }
  const {{cpp_type(field)}}& {{field.identifier}}() const {
    #ifdef DEBUG
    if (!has_{{field.identifier}}()) {
      TD_THROW("Attempted null reference");
    }
    #endif
    return *{{field.identifier}}_.get();
  }
## endif

## endfor
## endif
 private:
  Tag tag = Tag::__TAGS_BEGIN;

  union {
## if exists("fields")
## for field in fields
## if field.access_by == "pointer" 
    std::unique_ptr<{{cpp_type(field)}}> {{field.identifier}}_;
## else
    {{cpp_type(field)}} {{field.identifier}}_;
## endif
## endfor
## endif
  };  // union

  void MaybeDeleteExistingMember() {
    switch (tag) {
## if exists("fields")
## for field in fields
      case Tag::TAG_{{field.identifier}}:
## if field.access_by == "pointer" 
        {{field.identifier}}_.reset(nullptr);
## else if field.cpp_type == "std::string" 
        {{field.identifier}}_.~basic_string();
## endif
        break;
## endfor
## endif
    }
  }

};  // class {{identifier}}
  )");

  // cpp_type<cpp_type
  cpp_type = env.parse(
      R"({{ cpp_type }}{% if exists("type_arguments") %}<{% for type_argument in type_arguments %}{{ cpp_type(type_argument) }}{% if not loop.is_last %}, {% endif %}{% endfor %}>{% endif %})");

  params_list = env.parse(R"({%- for param in params -%}
, const {{ cpp_type(param) }}& {{ param.identifier -}}
{%- endfor %})");

  tmpl_val_ref = env.parse(
      R"({%for val_ref in val_ref_path%}{{val_ref}}{%if not loop.is_first%}(){%endif%}{%if not loop.is_last%}.{%endif%}{%endfor%})");

  tmpl_func_declaration = env.parse(R"(
void {{identifier}}(std::ostream& os{{params_list(params)}});
  )");

  tmpl_item = env.parse(
      R"(## if exists("text")
  os << R"{{escape}}({{text}}){{escape}}";
## else if exists("insertion")
  os << {{ tmpl_val_ref(insertion.identifier) }};
## else if exists("call")
  {{call.func}}(os, {%for arg in call.args%}{{tmpl_val_ref(arg)}} {% if not loop.is_last %}, {%endif%}{%endfor%});
## else if exists("if")
  if ({{tmpl_val_ref(if.stmt)}}) {
    {%for item in if.items%}{{tmpl_item(item)}}{%endfor%}
  {% for elif in if.elifs %}
  } else if ({{tmpl_val_ref(elif.stmt)}}) {
    {%for item in elif.items%}{{tmpl_item(item)}}{%endfor%}
  {%endfor%}
  } {% if existsIn(if, "else") %} else {
    {%for item in if.else.items%}{{tmpl_item(item)}}{%endfor%}
  }{%endif%}

## else if exists("for")
{%if existsIn(for, "var")%}
  for (auto& {{for.var}} : {{tmpl_val_ref(for.collection)}}) {
{%else%}
  auto _typedef__it = {{tmpl_val_ref(for.collection)}}.begin();
  while (_typedef__it != {{tmpl_val_ref(for.collection)}}.end()) {
    auto& {{for.key}} = _typedef__it->first;
    auto& {{for.val}} = _typedef__it->second;
{%endif%}
    {%for item in for.items%}{{tmpl_item(item)}}{%endfor%}
  }
## endif)");

  tmpl_func_definition = env.parse(R"(
void {{identifier}}(std::ostream& os{{params_list(params)}}) {
{% for item in items %}{{tmpl_item(item)}}{% endfor %}
})");

  auto header_tmpl = env.parse(R"(
#ifndef {{header_guard}}
#define {{header_guard}}

#include <cstdint>
#include <memory>
#include <string>
#include <ostream>

#include <typedef/builtin_types.h>

#define TD_STRINGIZE_DETAIL(x) #x
#define TD_STRINGIZE(x) TD_STRINGIZE_DETAIL(x)
#define TD_THROW(msg) (throw msg __FILE__ ":" TD_STRINGIZE(__LINE__))

#ifndef TD_AUTO_ALLOC
#define TD_AUTO_ALLOC 1
#endif

## for namespace in namespaces
namespace {{namespace}} {
## endfor

## for type_decl in user_type_decls
## if existsIn(type_decl, "struct")
  {{ struct(type_decl.struct) }}
## else if existsIn(type_decl, "variant")
  {{ variant(type_decl.variant) }}
## endif
## endfor

## for tmpl_func in tmpl_funcs
{{ tmpl_func_declaration(tmpl_func) }}
## endfor

## for namespace in namespaces
}  // namespace {{namespace}}
## endfor

#endif  // {{header_guard}}
  )");

  auto source_tmpl = env.parse(R"(
#include "{{header_filename}}"

#include <string>

## for namespace in namespaces
namespace {{namespace}} {
## endfor

## for tmpl_func in tmpl_funcs
{{ tmpl_func_definition(tmpl_func) }}
## endfor

## for namespace in namespaces
}  // namespace {{namespace}}
## endfor
  )");

  env.render_to(hdr_file->OStream(), header_tmpl, data);
  env.render_to(src_file->OStream(), source_tmpl, data);
}

}  // namespace td