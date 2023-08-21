#include "libtypedef/codegen/codegen_cpp.h"

#include <filesystem>
#include <inja/inja.hpp>
#include <nlohmann/json.hpp>
#include <string>

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

json GetType(const TypeDeclaration& type);

json GetField(const FieldDeclaration& field) {
  json f;
  f["identifier"] = *field.identifier;
  if (field.IsPrimitive()) {
    if (field.IsBool()) {
      f["cpp_type"] = "bool";
      f["pass_by"] = "value";
    } else if (field.IsChar()) {
      f["cpp_type"] = "char32_t";
      f["pass_by"] = "value";
    } else if (field.IsStr()) {
      f["cpp_type"] = "std::string";
      f["pass_by"] = "reference";
    } else if (field.IsF32()) {
      f["cpp_type"] = "float";
      f["pass_by"] = "value";
    } else if (field.IsF64()) {
      f["cpp_type"] = "double";
      f["pass_by"] = "value";
    } else if (field.IsU8()) {
      f["cpp_type"] = "uint8_t";
      f["pass_by"] = "value";
    } else if (field.IsU16()) {
      f["cpp_type"] = "uint16_t";
      f["pass_by"] = "value";
    } else if (field.IsU32()) {
      f["cpp_type"] = "uint32_t";
      f["pass_by"] = "value";
    } else if (field.IsU64()) {
      f["cpp_type"] = "uint64_t";
      f["pass_by"] = "value";
    } else if (field.IsI8()) {
      f["cpp_type"] = "int8_t";
      f["pass_by"] = "value";
    } else if (field.IsI16()) {
      f["cpp_type"] = "int16_t";
      f["pass_by"] = "value";
    } else if (field.IsI32()) {
      f["cpp_type"] = "int32_t";
      f["pass_by"] = "value";
    } else if (field.IsI64()) {
      f["cpp_type"] = "int64_t";
      f["pass_by"] = "value";
    } else {
      throw_line("invalid state");
    }
  } else if (field.IsStruct()) {
    // TODO escaping and namespacing...
    if (field.GetStruct()->identifier) {
      f["cpp_type"] = *field.GetStruct()->identifier;
    } else {
      // TODO inline types
      f["cpp_type"] = "AnInlineThingy";
    }
  } else if (field.IsVariant()) {
    // TODO escaping and namespacing...
    if (field.GetVariant()->identifier) {
      f["cpp_type"] = *field.GetVariant()->identifier;
    } else {
      // TODO inline types
      f["cpp_type"] = "AnInlineThingy";
    }
  } else if (field.IsVector()) {
    // TODO escaping and namespacing...
    if (field.GetVector()->identifier) {
      f["cpp_type"] = *field.GetVector()->identifier;
    } else {
      // TODO inline types
      f["cpp_type"] = "AnInlineThingy";
    }
  } else if (field.IsMap()) {
    // TODO escaping and namespacing...
    if (field.GetMap()->identifier) {
      f["cpp_type"] = *field.GetMap()->identifier;
    } else {
      // TODO inline types
      f["cpp_type"] = "AnInlineThingy";
    }
  } else {
    throw_line("invalid state");
  }
  return f;
}

json GetStruct(const Struct& st) {
  json s;
  s["identifier"] = *st.identifier;
  for (const auto& m : st.members) {
    if (m->IsField()) {
      s["fields"].push_back(GetField(*m->field_decl));
    } else if (m->IsType()) {
      s["type_decls"].push_back(GetType(*m->type_decl));
    } else {
      throw_line("invalid state");
    }
  }
  return s;
}

json GetVariant(const Variant& var) {
  json v;
  v["identifier"] = *var.identifier;
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

json GetVector(const Vector& vec) {
  json v;
  v["identifier"] = *vec.identifier;

  return v;
}

json GetMap(const Map& map) {
  json m;
  m["identifier"] = *map.identifier;

  return m;
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
  data["namespace"] = "test_namespace";

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

  struct_tmpl = env.parse(R"(
class {{identifier}} {
public:
## if exists("type_decls")
## for type_decl in type_decls
## if existsIn(type_decl, "struct")
  {{ struct(type_decl.struct) }}
## else if existsIn(type_decl, "variant")
  // variant decl
## else if existsIn(type_decl, "vector")
  // vector decl
## else if existsIn(type_decl, "map")
  // map decl
## endif
## endfor
## endif

  {{identifier}}() {}
  ~{{identifier}}() {}
private:
## if exists("fields")
## for field in fields
{{field.cpp_type}} {{field.identifier}};
## endfor
## endif
};  // class {{identifier}}
  )");

  auto header_tmpl = env.parse(R"(
#ifndef CODEGEN_CODEGEN_CPP_H__
#define CODEGEN_CODEGEN_CPP_H__

namespace {{namespace}} {

## for type_decl in type_decls
## if existsIn(type_decl, "struct")
{{ struct(type_decl.struct) }}
## endif
## endfor

}  // namespace {{namespace}}

#endif  // CODEGEN_CODEGEN_CPP_H__
  )");

  auto source_tmpl = env.parse(R"(
#include "{{header_filename}}"

namespace {{namespace}} {

}  // namespace {{namespace}}
  )");

  env.render_to(hdr_file->OStream(), header_tmpl, data);
  env.render_to(src_file->OStream(), source_tmpl, data);
}

}  // namespace td