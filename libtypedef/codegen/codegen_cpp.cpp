#include "libtypedef/codegen/codegen_cpp.h"

#include <filesystem>
#include <inja/inja.hpp>
#include <nlohmann/json.hpp>
#include <string>

#include "libtypedef/codegen/codegen_cpp_helpers.h"

#define throw_line(str) \
  throw fmt::format("Exception \"{}\" in {}:{}", str, __FILE__, __LINE__);

namespace td {

using json = nlohmann::json;
using namespace inja;
using namespace std;
using namespace td::table;

string HeaderGuard(const filesystem::path& source_filename) {
  string hdr_guard = source_filename.string() + "_H__";
  replace(hdr_guard.begin(), hdr_guard.end(), '.', '_');
  replace(hdr_guard.begin(), hdr_guard.end(), ' ', '_');
  replace(hdr_guard.begin(), hdr_guard.end(), '/', '_');
  transform(hdr_guard.begin(), hdr_guard.end(), hdr_guard.begin(), ::toupper);
  return hdr_guard;
}

// forward declarations.
json GetType(const TypeDeclaration& type);
json GetInlineType(const FieldDeclaration& field);

json GetField(const FieldDeclaration& field) {
  json f;
  f["identifier"] = escape_utf8_to_cpp_identifier(*field.identifier);
  if (field.IsPrimitive()) {
    if (field.IsBool()) {
      f["cpp_type"] = "bool";
      f["access_by"] = "value";
    } else if (field.IsChar()) {
      f["cpp_type"] = "char32_t";
      f["access_by"] = "value";
    } else if (field.IsStr()) {
      f["cpp_type"] = "std::string";
      f["access_by"] = "reference";
    } else if (field.IsF32()) {
      f["cpp_type"] = "float";
      f["access_by"] = "value";
    } else if (field.IsF64()) {
      f["cpp_type"] = "double";
      f["access_by"] = "value";
    } else if (field.IsU8()) {
      f["cpp_type"] = "std::uint8_t";
      f["access_by"] = "value";
    } else if (field.IsU16()) {
      f["cpp_type"] = "std::uint16_t";
      f["access_by"] = "value";
    } else if (field.IsU32()) {
      f["cpp_type"] = "std::uint32_t";
      f["access_by"] = "value";
    } else if (field.IsU64()) {
      f["cpp_type"] = "std::uint64_t";
      f["access_by"] = "value";
    } else if (field.IsI8()) {
      f["cpp_type"] = "std::int8_t";
      f["access_by"] = "value";
    } else if (field.IsI16()) {
      f["cpp_type"] = "std::int16_t";
      f["access_by"] = "value";
    } else if (field.IsI32()) {
      f["cpp_type"] = "std::int32_t";
      f["access_by"] = "value";
    } else if (field.IsI64()) {
      f["cpp_type"] = "std::int64_t";
      f["access_by"] = "value";
    } else {
      throw_line("invalid state");
    }
  } else if (field.IsStruct()) {
    if (field.GetStruct()->identifier) {
      f["cpp_type"] =
          escape_utf8_to_cpp_identifier(*field.GetStruct()->identifier);
    } else {
      // inline type.
      f["cpp_type"] = escape_utf8_to_cpp_identifier(*field.identifier) + "T";
    }
    f["access_by"] = "pointer";
  } else if (field.IsVariant()) {
    if (field.GetVariant()->identifier) {
      f["cpp_type"] =
          escape_utf8_to_cpp_identifier(*field.GetVariant()->identifier);
    } else {
      // inline type.
      f["cpp_type"] = escape_utf8_to_cpp_identifier(*field.identifier) + "T";
    }
    f["access_by"] = "pointer";
  } else if (field.IsVector()) {
    if (field.GetVector()->identifier) {
      f["cpp_type"] =
          escape_utf8_to_cpp_identifier(*field.GetVector()->identifier);
    } else {
      // inline type.
      f["cpp_type"] = escape_utf8_to_cpp_identifier(*field.identifier) + "T";
    }
    f["access_by"] = "reference";
  } else if (field.IsMap()) {
    if (field.GetMap()->identifier) {
      f["cpp_type"] =
          escape_utf8_to_cpp_identifier(*field.GetMap()->identifier);
    } else {
      // inline type.
      f["cpp_type"] = escape_utf8_to_cpp_identifier(*field.identifier) + "T";
    }
    f["access_by"] = "reference";
  } else {
    throw_line("invalid state");
  }
  return f;
}

json GetStruct(const Struct& st, std::optional<string> identifier = nullopt) {
  json s;
  // If it's an inline type, the identifier is the field name which has
  // to be passed in separately.
  s["identifier"] = identifier ? *identifier : *st.identifier;
  for (const auto& m : st.members) {
    if (m->IsField()) {
      s["fields"].push_back(GetField(*m->field_decl));
      if (!m->field_decl->IsPrimitive()) {
        // Non-primitive field types are inlines.
        // TODO really there should be an IsInline() ?
        s["type_decls"].push_back(GetInlineType(*m->field_decl));
      }
    } else if (m->IsType()) {
      s["type_decls"].push_back(GetType(*m->type_decl));
    } else {
      throw_line("invalid state");
    }
  }
  return s;
}

json GetVariant(const Variant& var,
                std::optional<string> identifier = nullopt) {
  json v;
  // If it's an inline type, the identifier is the field name which has
  // to be passed in separately.
  v["identifier"] = identifier ? *identifier : *var.identifier;
  for (const auto& m : var.members) {
    if (m->IsField()) {
      v["fields"].push_back(GetField(*m->field_decl));
    } else if (m->IsType()) {
      v["type_decls"].push_back(GetType(*m->type_decl));
    } else {
      throw_line("invalid state");
    }
  }
  return v;
}

json GetVector(const Vector& vec, std::optional<string> identifier = nullopt) {
  json v;
  // If it's an inline type, the identifier is the field name which has
  // to be passed in separately.
  v["identifier"] = identifier ? *identifier : *vec.identifier;

  return v;
}

json GetMap(const Map& map, std::optional<string> identifier = nullopt) {
  json m;
  // If it's an inline type, the identifier is the field name which has
  // to be passed in separately.
  m["identifier"] = identifier ? *identifier : *map.identifier;

  return m;
}

json GetInlineType(const FieldDeclaration& field) {
  json r;
  string identifier = *field.identifier + "T";
  if (field.IsStruct()) {
    r["struct"] = GetStruct(*field.st, identifier);
  } else if (field.IsVariant()) {
    r["variant"] = GetVariant(*field.var, identifier);
  } else if (field.IsVector()) {
    r["vector"] = GetVector(*field.vec, identifier);
  } else if (field.IsMap()) {
    r["map"] = GetMap(*field.map, identifier);
  } else {
    throw_line("invalid state");
  }
  return r;
}

json GetType(const TypeDeclaration& type) {
  json r;
  if (type.IsStruct()) {
    r["struct"] = GetStruct(*type.st);
  } else if (type.IsVariant()) {
    r["variant"] = GetVariant(*type.var);
  } else if (type.IsVector()) {
    r["vector"] = GetVector(*type.vec);
  } else if (type.IsMap()) {
    r["map"] = GetMap(*type.map);
  } else {
    throw_line("invalid state");
  }
  return r;
}

json GetTypeDecls(const vector<shared_ptr<TypeDeclaration>>& types) {
  json arr = json::array();
  for (const auto& tp : types) {
    arr.push_back(GetType(*tp));
  }
  return arr;
}

void CodegenCpp(std::shared_ptr<OutPathBase> out_path,
                std::shared_ptr<ParsedFile> parsed_file) {
  filesystem::path hdr_filename =
      parsed_file->mod->module_name->ToString("_", false) + ".h";
  filesystem::path source_filename =
      parsed_file->mod->module_name->ToString("_", false) + ".cpp";

  auto hdr_file = out_path->OpenOutputFile(hdr_filename);
  hdr_file->Open();
  auto src_file = out_path->OpenOutputFile(source_filename);
  src_file->Open();

  json data;
  data["header_guard"] = HeaderGuard(source_filename);
  data["header_filename"] = hdr_filename;
  data["namespaces"] = json::array();
  for (const auto& path_part : *parsed_file->mod->module_name) {
    data["namespaces"].push_back(*path_part);
  }

  data["type_decls"] = GetTypeDecls(parsed_file->mod->types);

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

  struct_tmpl = env.parse(R"(
class {{identifier}} {
 public:
## if exists("type_decls")
## for type_decl in type_decls
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

## if exists("fields")
## for field in fields
## if field.access_by == "value" 
  void {{field.identifier}}({{field.cpp_type}} val) {
    {{field.identifier}}_ = val;
  }
  {{field.cpp_type}} {{field.identifier}}() {
    return {{field.identifier}}_;
  }
## else if field.access_by == "reference" 
  void {{field.identifier}}(const {{field.cpp_type}}& val) {
    {{field.identifier}}_ = val;
  }
  {{field.cpp_type}} {{field.identifier}}() {
    return {{field.identifier}}_;
  }
  {{field.cpp_type}}& {{field.identifier}}_ref() {
    return {{field.identifier}}_;
  }
## else if field.access_by == "pointer" 
  bool has_{{field.identifier}}() const {
    return {{field.identifier}}_.operator bool();
  }
  void delete_{{field.identifier}}() {
    return {{field.identifier}}_.reset(nullptr);
  }
  void make_{{field.identifier}}() {
    {{field.identifier}}_ = std::make_unique<{{field.cpp_type}}>();
  }
  void {{field.identifier}}(std::unique_ptr<{{field.cpp_type}}> val) {
    {{field.identifier}}_ = std::move(val);
  }
  void {{field.identifier}}({{field.cpp_type}}* val) {
    {{field.identifier}}_.reset(std::move(val));
  }
  {{field.cpp_type}}* {{field.identifier}}() {
    #if TD_AUTO_ALLOC
    if (!has_{{field.identifier}}()) {
      make_{{field.identifier}}();
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
## if exists("type_decls")
## for type_decl in type_decls
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


## if exists("fields")
## for field in fields
  bool is_{{field.identifier}}() const {
    return (tag == Tag::TAG_{{field.identifier}});
  }
## if field.access_by == "value" 
  void {{field.identifier}}({{field.cpp_type}} val) {
    MaybeDeleteExistingMember();
    tag = Tag::TAG_{{field.identifier}};
    {{field.identifier}}_ = val;
  }
  {{field.cpp_type}} {{field.identifier}}() {
    if (!is_{{field.identifier}}()) {
      TD_THROW("Attempted invalid variant access");
    }
    return {{field.identifier}}_;
  }
## else if field.access_by == "reference" 
  void {{field.identifier}}(const {{field.cpp_type}}& val) {
    MaybeDeleteExistingMember();
    tag = Tag::TAG_{{field.identifier}};
    {{field.identifier}}_ = val;
  }
  {{field.cpp_type}} {{field.identifier}}() {
    if (!is_{{field.identifier}}()) {
      TD_THROW("Attempted invalid variant access");
    }
    return {{field.identifier}}_;
  }
  {{field.cpp_type}}& {{field.identifier}}_ref() {
    return {{field.identifier}}_;
  }
## else if field.access_by == "pointer" 
  bool has_{{field.identifier}}() const {
    if (!is_{{field.identifier}}()) {
      TD_THROW("Attempted invalid variant access");
    }
    return {{field.identifier}}_.operator bool();
  }
  void delete_{{field.identifier}}() {
    if (!is_{{field.identifier}}()) {
      TD_THROW("Attempted invalid variant access");
    }
    return {{field.identifier}}_.reset(nullptr);
  }
  void make_{{field.identifier}}() {
    MaybeDeleteExistingMember();
    tag = Tag::TAG_{{field.identifier}};
    {{field.identifier}}_ = std::make_unique<{{field.cpp_type}}>();
  }
  void {{field.identifier}}(std::unique_ptr<{{field.cpp_type}}> val) {
    MaybeDeleteExistingMember();
    tag = Tag::TAG_{{field.identifier}};
    {{field.identifier}}_ = std::move(val);
  }
  void {{field.identifier}}({{field.cpp_type}}* val) {
    MaybeDeleteExistingMember();
    tag = Tag::TAG_{{field.identifier}};
    {{field.identifier}}_.reset(std::move(val));
  }
  {{field.cpp_type}}* {{field.identifier}}() {
    #if TD_AUTO_ALLOC
    if (!has_{{field.identifier}}()) {
      make_{{field.identifier}}();
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
  enum class Tag {
    __TAGS_BEGIN = 0,
## if exists("fields")
## for field in fields
    TAG_{{field.identifier}},
## endfor
## endif
    __TAGS_END
  } tag = Tag::__TAGS_BEGIN;

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
class {{identifier}} {
 public:
 private:
};  // class {{identifier}}
  )");
  map_tmpl = env.parse(R"(
class {{identifier}} {
 public:
 private:
};  // class {{identifier}}
  )");

  auto header_tmpl = env.parse(R"(
#ifndef CODEGEN_CODEGEN_CPP_H__
#define CODEGEN_CODEGEN_CPP_H__

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

## for type_decl in type_decls
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

## for namespace in namespaces
}  // namespace {{namespace}}
## endfor

#endif  // CODEGEN_CODEGEN_CPP_H__
  )");

  auto source_tmpl = env.parse(R"(
#include "{{header_filename}}"

#include <string>
#include <vector>
#include <map>

## for namespace in namespaces
namespace {{namespace}} {
## endfor

## for namespace in namespaces
}  // namespace {{namespace}}
## endfor
  )");

  env.render_to(hdr_file->OStream(), header_tmpl, data);
  env.render_to(src_file->OStream(), source_tmpl, data);
}

}  // namespace td