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

string GetCppFieldType();

json GetField(const FieldDeclaration& field) {
  json f;
  f["identifier"] = *field.identifier;
  f["cpp_type"] = "";
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

  auto header_tmpl = env.parse(R"(
#ifndef {{header_guard}}
#define {{header_guard}}

namespace {{namespace}} {



}  // namespace {{namespace}}

#endif  // {{header_guard}}
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