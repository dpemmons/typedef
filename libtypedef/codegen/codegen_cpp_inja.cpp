#include <filesystem>
#include <inja/inja.hpp>
#include <nlohmann/json.hpp>
#include <optional>
#include <stdexcept>
#include <string>

#include "libtypedef/codegen/codegen_cpp.h"
#include "libtypedef/codegen/codegen_cpp_helpers.h"
#include "libtypedef/parser/ast_functions.h"
#include "libtypedef/parser/grammar/TypedefParser.h"

#define FMT_HEADER_ONLY
#include <fmt/core.h>

#define throw_logic_error(str) \
  throw std::logic_error(      \
      fmt::format("\"{}\" in {}:{}", str, __FILE__, __LINE__));

namespace td {
namespace {

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
    j["nested_type_decls"] =
        GetUserTypeDecls(type->fieldBlock()->typeDefinition());
  }

  // Some field types require inline type declarations.
  for (FieldDefinitionContext* field : type->fieldBlock()->fieldDefinition()) {
    if (DefinesAndUsesInlineUserType(field)) {
      j["inline_type_decls"].push_back(GetTypeDeclaration(
          field->typeDefinition(), GetNestedTypeIdentifier(field)));
    }
  }

  for (int ii = 0; ii < type->fieldBlock()->fieldDefinition().size(); ii++) {
    json f = GetField(type->fieldBlock()->fieldDefinition()[ii]);
    f["index"] = ii + 1;  // 1 indexed because std::variant monostate is 0
    j["fields"].push_back(f);
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

json GetTemplateFunctionCall(TypedefParser::TmplFunctionCallContext* ctx) {
  json j;
  j["func"] = escape_utf8_to_cpp_identifier(ctx->tmplIdentifier()->id);
  j["args"] = json::array();
  for (TypedefParser::TmplValueReferencePathContext* path :
       ctx->tmplValueReferencePath()) {
    j["args"].push_back(GetTemplateValueDereference(path));
  }
  return j;
}

json GetTemplateExpression(TypedefParser::TmplExpressionContext* ctx) {
  json j;
  if (ctx->tmplFunctionCall()) {
    j["call"] = GetTemplateFunctionCall(ctx->tmplFunctionCall());
  } else if (ctx->tmplValueReferencePath()) {
    j["value_ref"] = GetTemplateValueDereference(ctx->tmplValueReferencePath());
  } else if (ctx->tmplExpression()) {
    j["expression"] = GetTemplateExpression(ctx->tmplExpression());
    if (ctx->TMPL_NOT()) {
      j["not"] = true;
    }
  } else {
    throw_logic_error("invalid state");
  }
  return j;
}

json GetTemplateIfBlock(TypedefParser::TmplIfBlockContext* ctx) {
  json j;
  j["expression"] =
      GetTemplateExpression(ctx->tmplIfSubBlock()->tmplExpression());
  j["items"] = GetTemplateItems(ctx->tmplIfSubBlock()->tmplItem());
  j["elifs"] = json::array();
  for (auto* elif : ctx->tmplElIfSubBlock()) {
    json e;
    e["expression"] = GetTemplateExpression(elif->tmplExpression());
    e["items"] = GetTemplateItems(elif->tmplItem());
    j["elifs"].push_back(e);
  }
  if (ctx->tmplElseSubBlock()) {
    j["else"]["items"] = GetTemplateItems(ctx->tmplElseSubBlock()->tmplItem());
  }
  return j;
}

json GetTemplateForBlock(TypedefParser::TmplForBlockContext* ctx) {
  json j;
  auto binding_vars = ctx->tmplBindingVariables()->tmplBindingVariable();
  if (binding_vars.size() == 1) {
    j["var"] = binding_vars[0]->tmplIdentifier()->id;
  } else if (binding_vars.size() == 2) {
    j["key"] = binding_vars[0]->tmplIdentifier()->id;
    j["val"] = binding_vars[1]->tmplIdentifier()->id;
  } else {
    throw_logic_error("invalid state");
  }
  j["collection"] = GetTemplateValueDereference(ctx->collection);
  j["items"] = GetTemplateItems(ctx->tmplItem());
  return j;
}

json GetTemplateCaseBlock(TypedefParser::TmplCaseBlockContext* ctx) {
  json j;
  j["label"] = GetTemplateValueDereference(ctx->tmplValueReferencePath());
  j["items"] = GetTemplateItems(ctx->tmplItem());
  return j;
}

json GetTempalteSwitchBlock(TypedefParser::TmplSwitchBlockContext* ctx) {
  json j;
  j["case"] = json::array();
  j["identifier"] = GetTemplateValueDereference(ctx->tmplValueReferencePath());
  for (auto* c : ctx->tmplCaseBlock()) {
    j["case"].push_back(GetTemplateCaseBlock(c));
  }
  if (ctx->tmplDefaultBlock()) {
    j["default"]["items"] =
        GetTemplateItems(ctx->tmplDefaultBlock()->tmplItem());
  } else {
    j["default"]["items"] = json::array();
  }
  return j;
}

json GetFunctionParameter(TypedefParser::FunctionParameterContext* func_param) {
  json j;
  j["identifier"] = escape_utf8_to_cpp_identifier(func_param->identifier()->id);
  j.merge_patch(GetAccessInfoForType(func_param->parameter_type));
  return j;
}

json GetTemplateItem(TypedefParser::TmplItemContext* ctx) {
  json j;
  if (ctx->tmplText()) {
    j["text"] = ctx->tmplText()->text;
  } else if (ctx->tmplExpression()) {
    j["expression"] = GetTemplateExpression(ctx->tmplExpression());
  } else if (ctx->tmplIfBlock()) {
    j["if"] = GetTemplateIfBlock(ctx->tmplIfBlock());
  } else if (ctx->tmplForBlock()) {
    j["for"] = GetTemplateForBlock(ctx->tmplForBlock());
  } else if (ctx->tmplSwitchBlock()) {
    j["switch"] = GetTempalteSwitchBlock(ctx->tmplSwitchBlock());
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

json GetTemplateFunc(TypedefParser::TmplDefinitionContext* tmpl_def) {
  json j;
  j["identifier"] = tmpl_def->identifier()->id;
  json params = json::array();
  for (TypedefParser::FunctionParameterContext* func_param :
       tmpl_def->functionParameter()) {
    params.push_back(GetFunctionParameter(func_param));
  }
  j["params"] = params;
  j["items"] = GetTemplateItems(tmpl_def->tmplBlock()->tmplItem());

  return j;
}

json GetTemplateFuncs(vector<TypedefParser::TmplDefinitionContext*> tmpl_defs) {
  json j = json::array();
  for (TypedefParser::TmplDefinitionContext* tmpl_def : tmpl_defs) {
    j.push_back(GetTemplateFunc(tmpl_def));
  }
  return j;
}

}  // namespace

void CodegenCppInja(OutPathBase* out_path,
                    TypedefParser::CompilationUnitContext* compilation_unit_ctx,
                    std::ostream* json_dump_os) {
  filesystem::path hdr_filename =
      ToPath(compilation_unit_ctx->moduleDeclaration());
  filesystem::path source_filename = hdr_filename;
  hdr_filename.replace_extension(".td.h");
  source_filename.replace_extension(".td.cpp");

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

  if (json_dump_os) {
    *json_dump_os << data.dump(1) << std::endl;
  }

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

  Template tmpl_str_expression;
  env.add_callback("tmpl_str_expression", 1, [&](Arguments& args) mutable {
    json arg = args.at(0)->get<json>();
    return env.render(tmpl_str_expression, arg);
  });

  Template tmpl_bool_expression;
  env.add_callback("tmpl_bool_expression", 1, [&](Arguments& args) mutable {
    json arg = args.at(0)->get<json>();
    return env.render(tmpl_bool_expression, arg);
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

  Template tmpl_has_val_ref;
  env.add_callback("tmpl_has_val_ref", 1, [&](Arguments& args) mutable {
    json arg = args.at(0)->get<json>();
    return env.render(tmpl_has_val_ref, arg);
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
    tag = Tag::__TAG__UNSET;
  }

  {{identifier}}(const {{identifier}}&) = delete;
  {{identifier}}& operator=(const {{identifier}}&) = delete;
  {{identifier}}({{identifier}}&&) = default;
  {{identifier}}& operator=({{identifier}}&&) = default;

  enum class Tag {
    __TAG__UNSET = 0,
## if exists("fields")
## for field in fields
    TAG_{{field.identifier}} = {{field.index}},
## endfor
## endif
  };
  Tag Which() const { return tag; }

## if exists("fields")
## for field in fields
  bool is_{{field.identifier}}() const {
    return val_.index() == {{field.index}};
  }
## if field.access_by == "value" 
  {{cpp_type(field)}} get_{{field.identifier}}() const {
    return std::get<{{field.index}}>(val_);
  }
  void set_{{field.identifier}}({{cpp_type(field)}} val) {
    tag = Tag::TAG_{{field.identifier}};
    val_.emplace<{{field.index}}>(val);
  }
  {{cpp_type(field)}}& {{field.identifier}}() {
    if (!is_{{field.identifier}}()) {
      tag = Tag::TAG_{{field.identifier}};
      val_.emplace<{{field.index}}>();
    }
    return std::get<{{field.index}}>(val_);
  }
  const {{cpp_type(field)}}& {{field.identifier}}() const {
    return std::get<{{field.index}}>(val_);
  }
## else if field.access_by == "reference"
  {{cpp_type(field)}}& {{field.identifier}}() {
    if (!is_{{field.identifier}}()) {
      tag = Tag::TAG_{{field.identifier}};
      val_.emplace<{{field.index}}>();
    }
    return std::get<{{field.index}}>(val_);
  }
  const {{cpp_type(field)}}& {{field.identifier}}() const {
    return std::get<{{field.index}}>(val_);
  }
  void set_{{field.identifier}}({{cpp_type(field)}}&& val) {
    tag = Tag::TAG_{{field.identifier}};
    val_.emplace<{{field.index}}>(std::move(val));
  }
## else if field.access_by == "pointer" 
  bool has_{{field.identifier}}() const {
    return is_{{field.identifier}}() && std::get<{{field.index}}>(val_).operator bool();
  }
  void alloc_{{field.identifier}}() {
    tag = Tag::TAG_{{field.identifier}};
    val_.emplace<{{field.index}}>(std::make_unique<{{cpp_type(field)}}>());
  }
  void delete_{{field.identifier}}() {
    return std::get<{{field.index}}>(val_).reset(nullptr);
  }
  void set_{{field.identifier}}(std::unique_ptr<{{cpp_type(field)}}> val) {
    tag = Tag::TAG_{{field.identifier}};
    val_.emplace<{{field.index}}>(std::move(val));
  }
  void set_{{field.identifier}}({{cpp_type(field)}}* val) {
    tag = Tag::TAG_{{field.identifier}};
    std::get<{{field.index}}>(val_).reset(std::move(val));
  }
  {{cpp_type(field)}}* ptr_{{field.identifier}}() {
    #if TD_AUTO_ALLOC
    if (!has_{{field.identifier}}()) {
      alloc_{{field.identifier}}();
    }
    #endif
    return std::get<{{field.index}}>(val_).get();
  }
  {{cpp_type(field)}}& {{field.identifier}}() {
    return *ptr_{{field.identifier}}();
  }
  const {{cpp_type(field)}}& {{field.identifier}}() const {
    return *std::get<{{field.index}}>(val_).get();
  }
## endif

## endfor
## endif
 private:
  Tag tag = Tag::__TAG__UNSET;

  std::variant<
    std::monostate
## if exists("fields")
## for field in fields
## if field.access_by == "pointer" 
    , std::unique_ptr<{{cpp_type(field)}}>
## else
    , {{cpp_type(field)}}
## endif
## endfor
## endif
  > val_;

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

  tmpl_has_val_ref = env.parse(
      R"({%for val_ref in val_ref_path%}{%if loop.is_last%}is_{%endif%}{{val_ref}}{%if not loop.is_first%}(){%endif%}{%if not loop.is_last%}.{%endif%}{%endfor%})");

  tmpl_func_declaration = env.parse(R"(
void {{identifier}}(std::ostream& os{{params_list(params)}});
  )");

  tmpl_str_expression = env.parse(R"(
## if exists("value_ref")
  os << {{ tmpl_val_ref(value_ref) }};
## else if exists("call")
  {{call.func}}(os{%for arg in call.args%}, {{tmpl_val_ref(arg)}}{%endfor%});
## else if exists("expression")
  {{ tmpl_str_expression(expression) }}
## endif
  )");

  tmpl_bool_expression = env.parse(R"(
## if exists("value_ref")
  {{ tmpl_val_ref(value_ref) }}
## else if exists("call")
  {{call.func}}({%for arg in call.args%}{{tmpl_val_ref(arg)}}{%if not loop.is_last%}, {%endif%}{%endfor%})
## else if exists("expression")
  ({%if exists("not")%} ! {%endif%}{{tmpl_bool_expression(expression)}})
## endif
  )");

  // TODO change tmpl_val_ref to match "expression" logic in GetTemplateIfBlock
  tmpl_item = env.parse(
      R"(## if exists("text")
  os << R"{{escape}}({{text}}){{escape}}";
## else if exists("expression")
  {{ tmpl_str_expression(expression) }}
## else if exists("if")
  if ({{tmpl_bool_expression(if.expression)}}) {
    {%for item in if.items%}{{tmpl_item(item)}}{%endfor%}
  {% for elif in if.elifs %}
  } else if ({{tmpl_bool_expression(elif.expression)}}) {
    {%for item in elif.items%}{{tmpl_item(item)}}{%endfor%}
  {%endfor%}
  } {% if existsIn(if, "else") %} else {
    {%for item in if.else.items%}{{tmpl_item(item)}}{%endfor%}
  }{%endif%}

## else if exists("for")
{%if existsIn(for, "var")%}
  for (size_t ii = 0; ii < {{tmpl_val_ref(for.collection)}}.size(); ii++) {
    auto& {{for.var}} = {{tmpl_val_ref(for.collection)}}[ii];
    auto IsFirst = [&]() { return ii == 0; };
    auto IsLast = [&]() {
      return ii == {{tmpl_val_ref(for.collection)}}.size() - 1;
    };
{%else%}
  for (auto const& [{{for.key}}, {{for.val}}] : {{tmpl_val_ref(for.collection)}}) {
{%endif%}
    {%for item in for.items%}{{tmpl_item(item)}}{%endfor%}
  }
## else if exists("switch")
  // switch {{switch.identifier}}
## for case in switch.case
if ({{tmpl_has_val_ref(case.label)}}) {
  {%for item in case.items%}{{tmpl_item(item)}}{%endfor%}
} else 
## endfor
{
  {%for item in switch.default.items%}{{tmpl_item(item)}}{%endfor%}
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
#include <variant>
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

// Forward declarations.
## for type_decl in user_type_decls
## if existsIn(type_decl, "struct")
class {{type_decl.struct.identifier}};
## else if existsIn(type_decl, "variant")
class {{type_decl.variant.identifier}};
## endif
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