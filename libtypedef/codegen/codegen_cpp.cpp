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

json GetMap(TypeAnnotationContext* ctx, string identifier);
json GetVector(TypeAnnotationContext* ctx, string identifier);
json GetUserTypeDecls(vector<TypeDefinitionContext*> types);
json GetTypeDeclaration(TypedefParser::TypeDefinitionContext* type,
                        optional<string> maybe_identifier);

std::string GetNestedTypeIdentifier(FieldDefinitionContext* field) {
  return escape_utf8_to_cpp_identifier(field->field_identifier->id + "T");
}

string HeaderGuard(const filesystem::path& source_filename) {
  string hdr_guard = source_filename.string() + "_H__";
  replace(hdr_guard.begin(), hdr_guard.end(), '.', '_');
  replace(hdr_guard.begin(), hdr_guard.end(), ' ', '_');
  replace(hdr_guard.begin(), hdr_guard.end(), '/', '_');
  transform(hdr_guard.begin(), hdr_guard.end(), hdr_guard.begin(), ::toupper);
  return hdr_guard;
}

json GetAccessInfoForType(TypeDefinitionContext* type) {
  json j;
  if (DefinesStruct(type) || DefinesVariant(type)) {
    j["cpp_type"] = escape_utf8_to_cpp_identifier(type->type_identifier->id);
    j["access_by"] = "pointer";
  } else {
    throw_logic_error("invalid state");
  }
  return j;
}

json GetAccessInfoForType(TypeIdentifierContext* ctx) {
  json j;
  if (ctx->primitiveTypeIdentifier()) {
    PrimitiveTypeIdentifierContext* p = ctx->primitiveTypeIdentifier();
    if (IsBool(p)) {
      j["cpp_type"] = "bool";
      j["access_by"] = "value";
    } else if (IsChar(p)) {
      j["cpp_type"] = "char32_t";
      j["access_by"] = "value";
    } else if (IsStr(p)) {
      j["cpp_type"] = "std::string";
      j["access_by"] = "reference";
    } else if (IsF32(p)) {
      j["cpp_type"] = "float";
      j["access_by"] = "value";
    } else if (IsF64(p)) {
      j["cpp_type"] = "double";
      j["access_by"] = "value";
    } else if (IsU8(p)) {
      j["cpp_type"] = "std::uint8_t";
      j["access_by"] = "value";
    } else if (IsU16(p)) {
      j["cpp_type"] = "std::uint16_t";
      j["access_by"] = "value";
    } else if (IsU32(p)) {
      j["cpp_type"] = "std::uint32_t";
      j["access_by"] = "value";
    } else if (IsU64(p)) {
      j["cpp_type"] = "std::uint64_t";
      j["access_by"] = "value";
    } else if (IsI8(p)) {
      j["cpp_type"] = "std::int8_t";
      j["access_by"] = "value";
    } else if (IsI16(p)) {
      j["cpp_type"] = "std::int16_t";
      j["access_by"] = "value";
    } else if (IsI32(p)) {
      j["cpp_type"] = "std::int32_t";
      j["access_by"] = "value";
    } else if (IsI64(p)) {
      j["cpp_type"] = "std::int64_t";
      j["access_by"] = "value";
    } else {
      throw_logic_error("invalid state");
    }
  } else if (ReferencesUserType(ctx)) {
    UserTypeContext* user_type = GetReferencedUserType(ctx);
    if (!user_type->type_definition) {
      throw_logic_error("Unresolved user type reference.");
    }
    j = GetAccessInfoForType(user_type->type_definition);
  }
  return j;
}

json GetField(FieldDefinitionContext* field) {
  json j;
  j["identifier"] = escape_utf8_to_cpp_identifier(field->field_identifier->id);
  if (DefinesAndUsesInlineUserType(field)) {
    j["cpp_type"] = GetNestedTypeIdentifier(field);
    j["access_by"] = "pointer";
  } else if (field->typeAnnotation()) {
    TypeAnnotationContext* tac = field->typeAnnotation();
    TypeIdentifierContext* tic = tac->typeIdentifier();
    if (ReferencesPrimitiveType(tic) || ReferencesUserType(tic)) {
      j.merge_patch(GetAccessInfoForType(tic));
    } else if (ReferencesBuiltinType(tic)) {
      j["cpp_type"] = GetNestedTypeIdentifier(field);
      j["access_by"] = "reference";
    } else {
      throw_logic_error("invalid state");
    }
  } else {
    throw_logic_error("invalid state");
  }

  return j;
}

json GetReferencedBuiltinTypeDeclaration(
    TypedefParser::TypeAnnotationContext* type, const string& identifier) {
  json j;
  j["access_by"] = "reference";
  if (ReferencesBuiltinMapType(type->typeIdentifier()) ||
      ReferencesBuiltinMapType(type->typeIdentifier())) {
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
    } else if (field->typeAnnotation()) {
      TypeAnnotationContext* tac = field->typeAnnotation();
      if (ReferencesBuiltinType(tac)) {
        json ilt;
        if (ReferencesBuiltinVectorType(tac)) {
          ilt["vector"] = GetVector(tac, GetNestedTypeIdentifier(field));
        } else if (ReferencesBuiltinMapType(tac)) {
          ilt["map"] = GetMap(tac, GetNestedTypeIdentifier(field));
        } else {
          throw_logic_error("invalid state");
        }
        j["inline_type_decls"].push_back(ilt);
      }
    }
  }

  for (FieldDefinitionContext* field : type->fieldBlock()->fieldDefinition()) {
    j["fields"].push_back(GetField(field));
  }

  return j;
}

json GetVector(TypeAnnotationContext* ctx, string identifier) {
  json j;
  j["identifier"] = identifier;
  TypeIdentifierContext* element_ctx = ctx->typeArgument(0)->typeIdentifier();
  j["element"] = GetAccessInfoForType(element_ctx);
  return j;
}

json GetMap(TypeAnnotationContext* ctx, string identifier) {
  json j;
  j["identifier"] = identifier;
  TypeIdentifierContext* key_ctx = ctx->typeArgument(0)->typeIdentifier();
  j["key"] = GetAccessInfoForType(key_ctx);
  TypeIdentifierContext* value_ctx = ctx->typeArgument(1)->typeIdentifier();
  j["value"] = GetAccessInfoForType(value_ctx);
  return j;
}

// json GetTemplateInsertion(td::TmplStrTable::InsertionPtr insertion) {
//   json j;
//   return j;
// }
// json GetTemplateFunctionCall(td::TmplStrTable::FunctionCallPtr fc) {
//   json j;
//   return j;
// }
// json GetTemplateIfBlock(td::TmplStrTable::IfBlockPtr ib) {
//   json j;
//   return j;
// }
// json GetTemplateForBlock(td::TmplStrTable::ForBlockPtr fb) {
//   json j;
//   return j;
// }

// json GetTemplateItem(td::TmplStrTable::ItemPtr item) {
//   json j;
//   if (item->text) {
//     j["text"] = *item->text;
//   } else if (item->insertion) {
//     j["insertion"] = GetTemplateInsertion(item->insertion);
//   } else if (item->function_call) {
//     j["function_call"] = GetTemplateFunctionCall(item->function_call);
//   } else if (item->if_block) {
//     j["if_block"] = GetTemplateIfBlock(item->if_block);
//   } else if (item->for_block) {
//     j["for_block"] = GetTemplateForBlock(item->for_block);
//   } else {
//     throw_logic_error("invalid state");
//   }
//   return j;
// }

// json GetTemplate(TemplateFunctionDefinition* template_function) {
//   json j;

//   j["identifier"] =
//       escape_utf8_to_cpp_identifier(*template_function->identifier);
//   for (td::table::FunctionParameter* param : template_function->params) {
//     json p;

//     p["identifier"] = escape_utf8_to_cpp_identifier(*param->param_name);
//     if (param->parameter_type->IsPrimitive()) {
//       if (param->parameter_type->IsBool()) {
//         p["cpp_type"] = "bool";
//         p["access_by"] = "value";
//       } else if (param->parameter_type->IsChar()) {
//         p["cpp_type"] = "char32_t";
//         p["access_by"] = "value";
//       } else if (param->parameter_type->IsStr()) {
//         p["cpp_type"] = "std::string";
//         p["access_by"] = "reference";
//       } else if (param->parameter_type->IsF32()) {
//         p["cpp_type"] = "float";
//         p["access_by"] = "value";
//       } else if (param->parameter_type->IsF64()) {
//         p["cpp_type"] = "double";
//         p["access_by"] = "value";
//       } else if (param->parameter_type->IsU8()) {
//         p["cpp_type"] = "std::uint8_t";
//         p["access_by"] = "value";
//       } else if (param->parameter_type->IsU16()) {
//         p["cpp_type"] = "std::uint16_t";
//         p["access_by"] = "value";
//       } else if (param->parameter_type->IsU32()) {
//         p["cpp_type"] = "std::uint32_t";
//         p["access_by"] = "value";
//       } else if (param->parameter_type->IsU64()) {
//         p["cpp_type"] = "std::uint64_t";
//         p["access_by"] = "value";
//       } else if (param->parameter_type->IsI8()) {
//         p["cpp_type"] = "std::int8_t";
//         p["access_by"] = "value";
//       } else if (param->parameter_type->IsI16()) {
//         p["cpp_type"] = "std::int16_t";
//         p["access_by"] = "value";
//       } else if (param->parameter_type->IsI32()) {
//         p["cpp_type"] = "std::int32_t";
//         p["access_by"] = "value";
//       } else if (param->parameter_type->IsI64()) {
//         p["cpp_type"] = "std::int64_t";
//         p["access_by"] = "value";
//       } else {
//         throw_logic_error("invalid state");
//       }
//     } else if (param->parameter_type->IsSymref()) {
//       CppTypeInfo cpp_type_info =
//           GetAccessInfoForType(param->parameter_type->symref_target.get());
//       p["cpp_type"] = cpp_type_info.cpp_type;
//       p["access_by"] = cpp_type_info.access_by;
//     } else {
//       throw_logic_error("invalid state");
//     }

//     j["params"].push_back(p);
//   }

//   j["items"] = json::array();
//   for (td::TmplStrTable::ItemPtr item :
//        template_function->tmpl_string_table->items) {
//     j["items"].push_back(GetTemplateItem(item));
//   }

//   return j;
// }

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

void CodegenCpp(OutPathBase* out_path,
                TypedefParser::CompilationUnitContext* compilation_unit_ctx) {
  filesystem::path hdr_filename =
      ToString(compilation_unit_ctx->moduleDeclaration(), "/") + ".h";
  filesystem::path source_filename =
      ToString(compilation_unit_ctx->moduleDeclaration(), "/") + ".cpp";

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

  std::cout << data.dump(1) << std::endl;

  Environment env;
  env.set_trim_blocks(true);
  env.set_lstrip_blocks(true);

  Template struct_tmpl;
  env.add_callback("struct", 1, [&](Arguments& args) mutable {
    json arg = args.at(0)->get<json>();
    // std::cout << arg.dump(1) << std::endl;
    return env.render(struct_tmpl, arg);
  });

  Template variant_tmpl;
  env.add_callback("variant", 1, [&](Arguments& args) mutable {
    json arg = args.at(0)->get<json>();
    // std::cout << arg.dump(1) << std::endl;
    return env.render(variant_tmpl, arg);
  });

  Template vector_tmpl;
  env.add_callback("vector", 1, [&](Arguments& args) mutable {
    json arg = args.at(0)->get<json>();
    // std::cout << arg.dump(1) << std::endl;
    return env.render(vector_tmpl, arg);
  });

  Template map_tmpl;
  env.add_callback("map", 1, [&](Arguments& args) mutable {
    json arg = args.at(0)->get<json>();
    // std::cout << arg.dump(1) << std::endl;
    return env.render(map_tmpl, arg);
  });

  Template params_list;
  env.add_callback("params_list", 1, [&](Arguments& args) mutable {
    json arg;
    arg["params"] = args.at(0)->get<json>();
    // std::cout << arg.dump(1) << std::endl;
    return env.render(params_list, arg);
  });

  Template tmpl_hdr_tmpl;
  env.add_callback("tmpl_hdr", 1, [&](Arguments& args) mutable {
    json arg = args.at(0)->get<json>();
    // std::cout << arg.dump(1) << std::endl;
    return env.render(tmpl_hdr_tmpl, arg);
  });

  Template tmpl_src_tmpl;
  env.add_callback("tmpl_src", 1, [&](Arguments& args) mutable {
    json arg = args.at(0)->get<json>();
    // std::cout << arg.dump(1) << std::endl;
    return env.render(tmpl_src_tmpl, arg);
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
## else if existsIn(type_decl, "vector")
  {{ vector(type_decl.vector) }}
## else if existsIn(type_decl, "map")
  {{ map(type_decl.map) }}
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
## else if existsIn(type_decl, "vector")
  {{ vector(type_decl.vector) }}
## else if existsIn(type_decl, "map")
  {{ map(type_decl.map) }}
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
  {{field.cpp_type}} get_{{field.identifier}}() {
    return {{field.identifier}}_;
  }
  void set_{{field.identifier}}({{field.cpp_type}} val) {
    {{field.identifier}}_ = val;
  }
  {{field.cpp_type}}& ref_{{field.identifier}}() {
    return {{field.identifier}}_;
  }
## else if field.access_by == "reference" 
  void set_{{field.identifier}}({{field.cpp_type}}&& val) {
    {{field.identifier}}_ = std::move(val);
  }
  {{field.cpp_type}}& ref_{{field.identifier}}() {
    return {{field.identifier}}_;
  }
## else if field.access_by == "pointer" 
  bool has_{{field.identifier}}() const {
    return {{field.identifier}}_.operator bool();
  }
  void alloc_{{field.identifier}}() {
    {{field.identifier}}_ = std::make_unique<{{field.cpp_type}}>();
  }
  void delete_{{field.identifier}}() {
    return {{field.identifier}}_.reset(nullptr);
  }
  void set_{{field.identifier}}(std::unique_ptr<{{field.cpp_type}}> val) {
    {{field.identifier}}_ = std::move(val);
  }
  void set_{{field.identifier}}({{field.cpp_type}}* val) {
    {{field.identifier}}_.reset(std::move(val));
  }
  {{field.cpp_type}}* ptr_{{field.identifier}}() {
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
## endif

## endfor
## endif

 private:
## if exists("fields")
## for field in fields
## if field.access_by == "pointer" 
  std::unique_ptr<{{field.cpp_type}}> {{field.identifier}}_;
## else
  {{field.cpp_type}} {{field.identifier}}_;
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
## else if existsIn(type_decl, "vector")
  {{ vector(type_decl.vector) }}
## else if existsIn(type_decl, "map")
  {{ map(type_decl.map) }}
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
## else if existsIn(type_decl, "vector")
  {{ vector(type_decl.vector) }}
## else if existsIn(type_decl, "map")
  {{ map(type_decl.map) }}
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
  {{field.cpp_type}} get_{{field.identifier}}() {
    if (!is_{{field.identifier}}()) {
      TD_THROW("Attempted invalid variant access");
    }
    return {{field.identifier}}_;
  }
  void set_{{field.identifier}}({{field.cpp_type}} val) {
    MaybeDeleteExistingMember();
    tag = Tag::TAG_{{field.identifier}};
    {{field.identifier}}_ = val;
  }
## else if field.access_by == "reference"
  {{field.cpp_type}}& ref_{{field.identifier}}() {
    if (!is_{{field.identifier}}()) {
      TD_THROW("Attempted invalid variant access");
    }
    return {{field.identifier}}_;
  }
  void set_{{field.identifier}}({{field.cpp_type}}&& val) {
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
    {{field.identifier}}_ = std::make_unique<{{field.cpp_type}}>();
  }
  void delete_{{field.identifier}}() {
    if (!is_{{field.identifier}}()) {
      TD_THROW("Attempted invalid variant access");
    }
    return {{field.identifier}}_.reset(nullptr);
  }
  void set_{{field.identifier}}(std::unique_ptr<{{field.cpp_type}}> val) {
    MaybeDeleteExistingMember();
    tag = Tag::TAG_{{field.identifier}};
    {{field.identifier}}_ = std::move(val);
  }
  void set_{{field.identifier}}({{field.cpp_type}}* val) {
    MaybeDeleteExistingMember();
    tag = Tag::TAG_{{field.identifier}};
    {{field.identifier}}_.reset(std::move(val));
  }
  {{field.cpp_type}}* ptr_{{field.identifier}}() {
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
## endif

## endfor
## endif
 private:
  Tag tag = Tag::__TAGS_BEGIN;

  union {
## if exists("fields")
## for field in fields
## if field.access_by == "pointer" 
    std::unique_ptr<{{field.cpp_type}}> {{field.identifier}}_;
## else
    {{field.cpp_type}} {{field.identifier}}_;
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

  vector_tmpl = env.parse(R"(
class {{identifier}} : public std::vector<{{element.cpp_type}}> {
 public:
  {{identifier}}() = default;
  ~{{identifier}}() = default;

  {{identifier}}({{identifier}}&& other) noexcept = default;
  {{identifier}}& operator=({{identifier}}&& other) noexcept = default;

 private:
};  // class {{identifier}}
  )");
  map_tmpl = env.parse(R"(
class {{identifier}} : public std::map<{{key.cpp_type}}, {{value.cpp_type}}> {
 public:
  {{identifier}}() = default;
  ~{{identifier}}() = default;

  {{identifier}}({{identifier}}&& other) noexcept = default;
  {{identifier}}& operator=({{identifier}}&& other) noexcept = default;

 private:
};  // class {{identifier}}
  )");

  params_list = env.parse(R"({%- for param in params -%}
, const {{ param.cpp_type -}}
{% if param.access_by == "reference" %}&{% else if param.access_by == "pointer" %}*{% endif %}
 {{ param.identifier -}}
{%- endfor %})");

  tmpl_hdr_tmpl = env.parse(R"(
void {{identifier}}(std::ostream& os{{params_list(params)}});
  )");

  tmpl_src_tmpl = env.parse(R"(
void {{identifier}}(std::ostream& os{{params_list(params)}}) {
  
}
  )");

  auto header_tmpl = env.parse(R"(
#ifndef {{header_guard}}
#define {{header_guard}}

#include <cstdint>
#include <memory>
#include <string>
#include <vector>
#include <map>

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
## else if existsIn(type_decl, "vector")
  {{ vector(type_decl.vector) }}
## else if existsIn(type_decl, "map")
  {{ map(type_decl.map) }}
## else if existsIn(type_decl, "template")
  {{ tmpl_hdr(type_decl.template) }}
## endif
## endfor

## for namespace in namespaces
}  // namespace {{namespace}}
## endfor

#endif  // {{header_guard}}
  )");

  auto source_tmpl = env.parse(R"(
#include "{{header_filename}}"

#include <string>
#include <vector>
#include <map>

## for namespace in namespaces
namespace {{namespace}} {
## endfor

## for type_decl in user_type_decls
## if existsIn(type_decl, "template")
{{ tmpl_src(type_decl.template) }}
## endif
## endfor

## for namespace in namespaces
}  // namespace {{namespace}}
## endfor
  )");

  env.render_to(hdr_file->OStream(), header_tmpl, data);
  env.render_to(src_file->OStream(), source_tmpl, data);
}

}  // namespace td