#include "codegen_cpp.h"

#include <algorithm>
#include <cassert>
#include <filesystem>
#include <sstream>
#include <string>
#include <variant>

#define FMT_HEADER_ONLY
#include <fmt/args.h>
#include <fmt/core.h>
#include <fmt/ostream.h>

#include "codegen_cpp_helpers.h"
#include "symbol_table.h"

namespace td {

using namespace std;

CodegenCpp::CppSymRef::CppSymRef(string const& referenced_escaped_identifier) {
  referenced_cpp_type_ =
      fmt::format("std::unique_ptr<Mutable{}>", referenced_escaped_identifier);
}

CodegenCpp::CppNonPrimitiveValue::CppNonPrimitiveValue(
    SymbolTable::Symbol const& s)
    : class_name_(escape_utf8_to_cpp_identifier(s.first)),
      is_struct_(false),
      is_variant_(false),
      is_vector_(false) {
  if (holds_alternative<shared_ptr<Struct>>(s.second)) {
    is_struct_ = true;
  } else if (holds_alternative<shared_ptr<Variant>>(s.second)) {
    is_variant_ = true;
  } else if (holds_alternative<shared_ptr<Vector>>(s.second)) {
    is_vector_ = true;
  }
  cpp_type_ = fmt::format("std::unique_ptr<Mutable{}>", class_name_);
}

CodegenCpp::CppSymbol::CppSymbol(SymbolTable::Symbol const& s)
    : escaped_identifier_(escape_utf8_to_cpp_identifier(s.first)) {
  if (holds_alternative<shared_ptr<Struct>>(s.second) ||
      holds_alternative<shared_ptr<Variant>>(s.second) ||
      holds_alternative<shared_ptr<Vector>>(s.second) ||
      holds_alternative<shared_ptr<Map>>(s.second)) {
    non_primitive_ = CppNonPrimitiveValue(s);
  } else if (holds_alternative<SymbolRef>(s.second)) {
    auto sr = get<SymbolRef>(s.second);
    reference_ = CppSymRef(escape_utf8_to_cpp_identifier(sr.id));
  } else {
    primitive_ = CppPrimitiveValue(s.second);
  }
}

CodegenCpp::CppPrimitiveValue::CppPrimitiveValue(SymbolTable::Value const& v)
    : is_char_(false), is_string_(false) {
  if (holds_alternative<optional<bool>>(v)) {
    cpp_type_ = "bool";
    auto opt = get<optional<bool>>(v);
    if (opt) {
      if (*opt) {
        val_ = "true";
      } else {
        val_ = "true";
      }
    }
  } else if (holds_alternative<optional<char32_t>>(v)) {
    is_char_ = true;
    cpp_type_ = "char32_t";
  } else if (holds_alternative<optional<string>>(v)) {
    is_string_ = true;
    cpp_type_ = "std::string";
  } else if (holds_alternative<optional<float>>(v)) {
    cpp_type_ = "float";
  } else if (holds_alternative<optional<double>>(v)) {
    cpp_type_ = "double";
  } else if (holds_alternative<optional<int8_t>>(v)) {
    cpp_type_ = "int8_t";
  } else if (holds_alternative<optional<int16_t>>(v)) {
    cpp_type_ = "int16_t";
  } else if (holds_alternative<optional<int32_t>>(v)) {
    cpp_type_ = "int32_t";
  } else if (holds_alternative<optional<int64_t>>(v)) {
    cpp_type_ = "int64_t";
  } else if (holds_alternative<optional<uint8_t>>(v)) {
    cpp_type_ = "uint8_t";
  } else if (holds_alternative<optional<uint16_t>>(v)) {
    cpp_type_ = "uint16_t";
  } else if (holds_alternative<optional<uint32_t>>(v)) {
    cpp_type_ = "uint32_t";
  } else if (holds_alternative<optional<uint64_t>>(v)) {
    cpp_type_ = "uint64_t";
  } else {
    assert(false);  // unreachable
  }
}

void CodegenCpp::Generate() {
  GroupedSymbols grouped_symbols = GroupSymbols(parser_->symbols2_.table_);

  filesystem::path hdr_filename = source_filename_ + ".h";
  filesystem::path source_filename = source_filename_ + ".cpp";

  ViewModel view_model =
      CreateViewModel(hdr_filename, parser_->module_, grouped_symbols);

  auto hdr_file = out_path_->OpenOutputFile(hdr_filename);
  hdr_file->Open();
  auto src_file = out_path_->OpenOutputFile(source_filename);
  src_file->Open();

  PrintHeader(hdr_file->OStream(), view_model);
  PrintSource(src_file->OStream(), view_model);

  hdr_file->Close();
  src_file->Close();
}

CodegenCpp::GroupedSymbols CodegenCpp::GroupSymbols(
    map<string, SymbolTable::Value> table) const {
  GroupedSymbols symbols;
  for (auto s : table) {
    if (holds_alternative<shared_ptr<Struct>>(s.second)) {
      symbols.structs.push_back(s);
    } else if (holds_alternative<shared_ptr<Variant>>(s.second)) {
      symbols.variants.push_back(s);
    } else if (holds_alternative<shared_ptr<Vector>>(s.second)) {
      symbols.vectors.push_back(s);
    } else if (holds_alternative<shared_ptr<Map>>(s.second)) {
      symbols.maps.push_back(s);
    } else {
      symbols.values.push_back(s);
    }
  }
  return symbols;
}

string CodegenCpp::HeaderGuard(filesystem::path source_filename) const {
  string hdr_guard = source_filename.string() + "_H__";
  replace(hdr_guard.begin(), hdr_guard.end(), '.', '_');
  replace(hdr_guard.begin(), hdr_guard.end(), ' ', '_');
  replace(hdr_guard.begin(), hdr_guard.end(), '/', '_');
  transform(hdr_guard.begin(), hdr_guard.end(), hdr_guard.begin(), ::toupper);
  return hdr_guard;
}

void CodegenCpp::PrintHeader(ostream& os, ViewModel const& vm) const {
  fmt::dynamic_format_arg_store<fmt::format_context> store;
  store.push_back(fmt::arg("header_guard", vm.header_guard));
  store.push_back(fmt::arg("namespaces_open", NamespaceOpen(vm.namesapces)));
  store.push_back(fmt::arg("namespaces_close", NamespaceClose(vm.namesapces)));
  store.push_back(fmt::arg("value_declarations", ValueDeclarations(vm.values)));
  store.push_back(
      fmt::arg("class_forward_declarations", ForwardDeclarations(vm)));
  store.push_back(fmt::arg("struct_classes", StructClasses(vm.structs)));
  store.push_back(fmt::arg("variant_classes", VariantClasses(vm.variants)));
  store.push_back(fmt::arg("vector_classes", VectorClasses(vm.vectors)));
  store.push_back(fmt::arg("map_classes", MapClasses(vm.maps)));

  fmt::vprint(os, R"(
#ifndef {header_guard}
#define {header_guard}

#include <cassert>
#include <cstdint>
#include <map>
#include <memory>
#include <ostream>
#include <string>
#include <variant>
#include <vector>

{namespaces_open}

// Value declarations
{value_declarations}

// Forward Declarations
{class_forward_declarations}

// Structs
{struct_classes}

// Variants
{variant_classes}

// Vectors
{vector_classes}

// Maps
{map_classes}

{namespaces_close}

#endif  // {header_guard}
)",
              store);
}

void CodegenCpp::PrintSource(ostream& os, ViewModel const& vm) const {
  fmt::dynamic_format_arg_store<fmt::format_context> store;
  store.push_back(fmt::arg("hdr_filename", vm.hdr_filename.c_str()));
  store.push_back(fmt::arg("namespaces_open", NamespaceOpen(vm.namesapces)));
  store.push_back(fmt::arg("namespaces_close", NamespaceClose(vm.namesapces)));
  store.push_back(fmt::arg("struct_methods", StructMethods(vm.structs)));
  store.push_back(fmt::arg("variant_methods", VariantMethods(vm.variants)));
  store.push_back(fmt::arg("vector_methods", VectorMethods(vm.vectors)));
  store.push_back(fmt::arg("map_methods", MapMethods(vm.maps)));

  fmt::vprint(os, R"(
#include "{hdr_filename}"

{namespaces_open}

{struct_methods}

{variant_methods}

{vector_methods}

{map_methods}

{namespaces_close}
)",
              store);
}

string CodegenCpp::NamespaceOpen(vector<string> namespaces) const {
  stringstream ss;
  for (auto ns : namespaces) {
    fmt::print(ss, "namespace {} {{\n", ns);
  }
  return ss.str();
}

string CodegenCpp::NamespaceClose(vector<string> namespaces) const {
  stringstream ss;
  for (auto ns : namespaces) {
    fmt::print(ss, "}}  // {}\n", ns);
  }
  return ss.str();
}

string CodegenCpp::ValueDeclarations(
    vector<ValueViewModel> const& values) const {
  stringstream ss;
  for (auto v : values) {
    fmt::print(ss, "typedef {} {};\n", v.sym.Primitive().CppType(),
               v.sym.EscapedIdentifier());
  }
  return ss.str();
}

string CodegenCpp::ForwardDeclarations(ViewModel const& vm) const {
  stringstream ss;
  for (auto s : vm.structs) {
    fmt::print(ss, "class {};\n", s.struct_name);
  }
  for (auto s : vm.variants) {
    fmt::print(ss, "class {};\n", s.struct_name);
  }
  for (auto s : vm.vectors) {
    fmt::print(ss, "class {};\n", s.struct_name);
  }
  for (auto s : vm.maps) {
    fmt::print(ss, "class {};\n", s.struct_name);
  }
  return ss.str();
}

string CodegenCpp::StructAccessors(
    vector<CodegenCpp::CppSymbol> const& members) const {
  stringstream ss;
  for (auto m : members) {
    fmt::dynamic_format_arg_store<fmt::format_context> store;
    store.push_back(fmt::arg("identifier", m.EscapedIdentifier()));

    if (m.IsPrimitive()) {
      store.push_back(fmt::arg("type", m.Primitive().CppType()));
      fmt::vprint(ss, R"(
    {type} {identifier}() const {{ return {identifier}_; }}
    void {identifier}({type} _val) {{ {identifier}_ = _val; }}
    )",
                  store);
    } else if (m.IsNonPrimitive()) {
      store.push_back(fmt::arg("type", m.NonPrimitive().CppType()));
      fmt::vprint(ss, R"(
    {type}& {identifier}() {{ return {identifier}_; }}
    const {type}& {identifier}() const {{ return {identifier}_; }}
    void {identifier}({type} _val) {{ {identifier}_ = std::move(_val); }}
    )",
                  store);
    } else if (m.IsNonPrimitive() || m.IsReference()) {
      store.push_back(fmt::arg("type", m.Reference().ReferencedCppType()));
      fmt::vprint(ss, R"(
    {type}& {identifier}() {{ return {identifier}_; }}
    const {type}& {identifier}() const {{ return {identifier}_; }}
    void {identifier}({type} _val) {{ {identifier}_ = std::move(_val); }}
    )",
                  store);
    } else {
      assert(false);
    }
  }
  return ss.str();
}

string CodegenCpp::StructMembers(
    vector<CodegenCpp::CppSymbol> const& members) const {
  stringstream ss;
  for (auto m : members) {
    fmt::dynamic_format_arg_store<fmt::format_context> store;
    bool has_value = false;
    if (m.IsPrimitive()) {
      store.push_back(fmt::arg("type", m.Primitive().CppType()));
      if (!m.Primitive().Value().empty()) {
        store.push_back(fmt::arg("value", m.Primitive().Value()));
        has_value = true;
      }
    } else if (m.IsNonPrimitive()) {
      store.push_back(fmt::arg("type", m.NonPrimitive().CppType()));
    } else if (m.IsReference()) {
      store.push_back(fmt::arg("type", m.Reference().ReferencedCppType()));
    } else {
      assert(false);
    }
    store.push_back(fmt::arg("identifier", m.EscapedIdentifier()));

    if (has_value) {
      fmt::vprint(ss, "    {type} {identifier}_ = {value};\n", store);
    } else {
      fmt::vprint(ss, "    {type} {identifier}_;\n", store);
    }
  }
  return ss.str();
}

string CodegenCpp::StructClasses(vector<StructViewModel> const& structs) const {
  stringstream ss;
  for (auto s : structs) {
    fmt::dynamic_format_arg_store<fmt::format_context> store;
    store.push_back(fmt::arg("classname", s.struct_name));
    store.push_back(fmt::arg("accessors", StructAccessors(s.members)));
    store.push_back(fmt::arg("members", StructMembers(s.members)));
    store.push_back(
        fmt::arg("nested_structs", StructClasses(s.nested_structs)));
    store.push_back(
        fmt::arg("nested_variants", VariantClasses(s.nested_variants)));
    store.push_back(
        fmt::arg("nested_vectors", VectorClasses(s.nested_vectors)));
    store.push_back(fmt::arg("nested_maps", MapClasses(s.nested_maps)));
    fmt::vprint(ss, R"(
class {classname} {{
  public:
    {classname}() {{}};
    ~{classname}() {{}};

    // Nested classes.
{nested_structs}
{nested_variants}
{nested_vectors}
{nested_maps}

    // Accessors.
{accessors}

    friend std::ostream& operator<<(std::ostream& os, const {classname}& obj);

  private:
    // Members.
{members}
}};  // class {classname}
)",
                store);
  }
  return ss.str();
}

string CodegenCpp::VariantAccessors(
    vector<CodegenCpp::CppSymbol> const& members) const {
  stringstream ss;
  for (auto m : members) {
    fmt::dynamic_format_arg_store<fmt::format_context> store;
    store.push_back(fmt::arg("identifier", m.EscapedIdentifier()));

    if (m.IsPrimitive()) {
      store.push_back(fmt::arg("type", m.Primitive().CppType()));
      fmt::vprint(ss, R"(
    bool Is{identifier}() const {{ return tag == Tag::TAG_{identifier}; }}
    {type} {identifier}() const {{
      assert(tag == Tag::TAG_{identifier});
      return {identifier}_; 
    }}
    void {identifier}({type} _val) {{
      MaybeDeleteExistingMember();
      tag = Tag::TAG_{identifier};
      {identifier}_ = _val;
    }}
    )",
                  store);
    } else if (m.IsNonPrimitive()) {
      assert(false);  // not yet.
    } else if (m.IsReference()) {
      store.push_back(fmt::arg("type", m.Reference().ReferencedCppType()));
      fmt::vprint(ss, R"(
    bool Is{identifier}() const {{ return tag == Tag::TAG_{identifier}; }}
    {type}& {identifier}() {{
      assert(tag == Tag::TAG_{identifier});
      return {identifier}_;
    }}
    const {type}& {identifier}() const {{
      assert(tag == Tag::TAG_{identifier});
      return {identifier}_;
    }}
    void {identifier}({type} _val) {{
      MaybeDeleteExistingMember();
      tag = Tag::TAG_{identifier};
      {identifier}_ = std::move(_val);
    }}
    )",
                  store);
    } else {
      assert(false);
    }
  }
  return ss.str();
}

string CodegenCpp::VariantTags(vector<CppSymbol> const& members) const {
  stringstream ss;
  for (auto m : members) {
    fmt::print(ss, "      TAG_{},\n", m.EscapedIdentifier());
  }
  return ss.str();
}

string CodegenCpp::VariantMemberDeletionCases(
    vector<CppSymbol> const& members) const {
  stringstream ss;
  for (auto m : members) {
    if (!m.IsPrimitive()) {
      fmt::print(ss, "        case Tag::TAG_{}:\n", m.EscapedIdentifier());
      fmt::print(ss, "          {}_.reset(nullptr);\n", m.EscapedIdentifier());
      fmt::print(ss, "          break;\n", m.EscapedIdentifier());
    }
  }
  return ss.str();
}

string CodegenCpp::VariantClasses(
    vector<VariantViewModel> const& variants) const {
  stringstream ss;
  for (auto v : variants) {
    fmt::dynamic_format_arg_store<fmt::format_context> store;
    store.push_back(fmt::arg("classname", v.struct_name));
    store.push_back(fmt::arg("accessors", VariantAccessors(v.members)));
    store.push_back(fmt::arg("members", StructMembers(v.members)));
    store.push_back(fmt::arg("tags", VariantTags(v.members)));
    store.push_back(fmt::arg("member_deletion_cases",
                             VariantMemberDeletionCases(v.members)));

    fmt::vprint(ss, R"(
class {classname} {{
  public:
    {classname}() {{}};
    ~{classname}() {{}};

    {accessors}

    friend std::ostream& operator<<(std::ostream& os, const {classname}& obj);

  private:
    enum class Tag {{
      __TAGS_BEGIN = 0,
{tags}
      __TAGS_END
    }} tag = Tag::__TAGS_BEGIN;

    union {{
{members}
    }};  // union

    void MaybeDeleteExistingMember() {{
      switch (tag) {{
{member_deletion_cases}
        default:
          return;
      }}
    }}

}};  // class {classname}
)",
                store);
  }
  return ss.str();
}

string CodegenCpp::VectorClasses(vector<VectorViewModel> const& vectors) const {
  stringstream ss;
  for (auto v : vectors) {
    fmt::dynamic_format_arg_store<fmt::format_context> store;
    store.push_back(fmt::arg("classname", v.struct_name));
    if (v.payload.IsPrimitive()) {
      store.push_back(fmt::arg("payload", v.payload.Primitive().CppType()));
    } else if (v.payload.IsNonPrimitive()) {
      store.push_back(fmt::arg("payload", v.payload.NonPrimitive().CppType()));
    } else if (v.payload.IsReference()) {
      store.push_back(
          fmt::arg("payload", v.payload.Reference().ReferencedCppType()));
    } else {
      assert(false);
    }
    fmt::vprint(ss, R"(
class {classname} : public std::vector<{payload}> {{
  public:
    {classname}() {{}};
    ~{classname}() {{}};

    friend std::ostream& operator<<(std::ostream& os, const {classname}& obj);

}};  // class {classname}
)",
                store);
  }
  return ss.str();
}

string CodegenCpp::MapClasses(vector<MapViewModel> const& maps) const {
  stringstream ss;
  for (auto v : maps) {
    fmt::dynamic_format_arg_store<fmt::format_context> store;
    store.push_back(fmt::arg("classname", v.struct_name));

    if (v.key.IsPrimitive()) {
      store.push_back(fmt::arg("key", v.key.Primitive().CppType()));
    } else if (v.key.IsNonPrimitive()) {
      store.push_back(fmt::arg("key", v.key.NonPrimitive().CppType()));
    } else if (v.key.IsReference()) {
      store.push_back(fmt::arg("key", v.key.Reference().ReferencedCppType()));
    } else {
      assert(false);
    }

    if (v.value.IsPrimitive()) {
      store.push_back(fmt::arg("value", v.value.Primitive().CppType()));
    } else if (v.value.IsNonPrimitive()) {
      store.push_back(fmt::arg("value", v.value.NonPrimitive().CppType()));
    } else if (v.value.IsReference()) {
      store.push_back(
          fmt::arg("value", v.value.Reference().ReferencedCppType()));
    } else {
      assert(false);
    }

    fmt::vprint(ss, R"(
class {classname} : public std::map<{key}, {value}> {{
  public:
    {classname}() {{}};
    ~{classname}() {{}};

    friend std::ostream& operator<<(std::ostream& os, const {classname}& obj);

}};  // class {classname}
)",
                store);
  }
  return ss.str();
}

string CodegenCpp::StructMethods(vector<StructViewModel> const& structs) const {
  stringstream ss;
  for (auto s : structs) {
    fmt::dynamic_format_arg_store<fmt::format_context> store;
    store.push_back(fmt::arg("classname", s.struct_name));

    fmt::vprint(ss, R"(
std::ostream& operator<<(std::ostream& os, const {classname}& obj) {{
  os << "struct {classname}.\n";
  return os;
}}
)",
                store);
  }
  return ss.str();
}

string CodegenCpp::VariantMethods(
    vector<VariantViewModel> const& variants) const {
  stringstream ss;
  for (auto v : variants) {
    fmt::dynamic_format_arg_store<fmt::format_context> store;
    store.push_back(fmt::arg("classname", v.struct_name));

    fmt::vprint(ss, R"(
std::ostream& operator<<(std::ostream& os, const {classname}& obj) {{
  os << "variant {classname}.\n";
  return os;
}}
)",
                store);
  }
  return ss.str();
}

string CodegenCpp::VectorMethods(vector<VectorViewModel> const& vectors) const {
  stringstream ss;
  for (auto v : vectors) {
    fmt::dynamic_format_arg_store<fmt::format_context> store;
    store.push_back(fmt::arg("classname", v.struct_name));

    fmt::vprint(ss, R"(
std::ostream& operator<<(std::ostream& os, const {classname}& obj) {{
  os << "vector {classname}.\n";
  return os;
}}
)",
                store);
  }
  return ss.str();
}

string CodegenCpp::MapMethods(vector<MapViewModel> const& maps) const {
  stringstream ss;
  for (auto m : maps) {
    fmt::dynamic_format_arg_store<fmt::format_context> store;
    store.push_back(fmt::arg("classname", m.struct_name));

    fmt::vprint(ss, R"(
std::ostream& operator<<(std::ostream& os, const {classname}& obj) {{
  os << "map {classname}.\n";
  return os;
}}
)",
                store);
  }
  return ss.str();
}

CodegenCpp::ViewModel CodegenCpp::CreateViewModel(
    filesystem::path hdr_path, vector<string> module,
    GroupedSymbols const& grouped_symbols) const {
  ViewModel view_model;
  view_model.hdr_filename = hdr_path.filename().string();
  view_model.header_guard = HeaderGuard(hdr_path);
  for (auto m : module) {
    view_model.namesapces.push_back(escape_utf8_to_cpp_identifier(m));
  }

  view_model.values = CreateValueViewModels(grouped_symbols.values);
  view_model.structs = CreateStructViewModels(grouped_symbols.structs);
  view_model.variants = CreateVaraintViewModels(grouped_symbols.variants);
  view_model.vectors = CreateVectorViewModels(grouped_symbols.vectors);
  view_model.maps = CreateMapViewModels(grouped_symbols.maps);

  return view_model;
}

vector<CodegenCpp::ValueViewModel> CodegenCpp::CreateValueViewModels(
    vector<SymbolTable::Symbol> values) const {
  vector<ValueViewModel> view_models;
  for (auto s : values) {
    view_models.push_back(s);
  }
  return view_models;
}

CodegenCpp::StructViewModel CodegenCpp::CreateStructViewModel(
    SymbolTable::Symbol const& s) const {
  StructViewModel svm;
  svm.struct_name = string("Mutable") + escape_utf8_to_cpp_identifier(s.first);
  // each member of the struct.
  auto str = get<shared_ptr<Struct>>(s.second);
  for (auto m : str->table.table_) {
    svm.members.push_back(CppSymbol(m));
    if (holds_alternative<shared_ptr<Struct>>(m.second)) {
      svm.nested_structs.push_back(CreateStructViewModel(m));
    } else if (holds_alternative<shared_ptr<Variant>>(m.second)) {
      svm.nested_variants.push_back(CreateVaraintViewModel(m));
    } else if (holds_alternative<shared_ptr<Vector>>(m.second)) {
      svm.nested_vectors.push_back(CreateVectorViewModel(m));
    } else if (holds_alternative<shared_ptr<Map>>(m.second)) {
      svm.nested_maps.push_back(CreateMapViewModel(m));
    }
  }
  return svm;
}

vector<CodegenCpp::StructViewModel> CodegenCpp::CreateStructViewModels(
    vector<SymbolTable::Symbol> structs) const {
  vector<StructViewModel> view_models;
  for (auto s : structs) {
    view_models.push_back(CreateStructViewModel(s));
  }
  return view_models;
}

CodegenCpp::VariantViewModel CodegenCpp::CreateVaraintViewModel(
    SymbolTable::Symbol variant) const {
  VariantViewModel vvm;
  vvm.struct_name =
      string("Mutable") + escape_utf8_to_cpp_identifier(variant.first);
  // each member of the variant.
  auto str = get<shared_ptr<Variant>>(variant.second);
  for (auto m : str->table.table_) {
    vvm.members.push_back(CppSymbol(m));
  }
  return vvm;
}

vector<CodegenCpp::VariantViewModel> CodegenCpp::CreateVaraintViewModels(
    vector<SymbolTable::Symbol> variants) const {
  vector<VariantViewModel> view_models;
  for (auto variant : variants) {
    view_models.push_back(CreateVaraintViewModel(variant));
  }
  return view_models;
}

CodegenCpp::VectorViewModel CodegenCpp::CreateVectorViewModel(
    SymbolTable::Symbol vector) const {
  auto ptr = get<shared_ptr<Vector>>(vector.second);
  return VectorViewModel(
      string("Mutable") + escape_utf8_to_cpp_identifier(vector.first),
      SymbolTable::Symbol(string(""), ptr->type));
}

vector<CodegenCpp::VectorViewModel> CodegenCpp::CreateVectorViewModels(
    vector<SymbolTable::Symbol> vectors) const {
  vector<VectorViewModel> view_models;
  for (auto v : vectors) {
    view_models.push_back(CreateVectorViewModel(v));
  }
  return view_models;
}

CodegenCpp::MapViewModel CodegenCpp::CreateMapViewModel(
    SymbolTable::Symbol map) const {
  auto ptr = get<shared_ptr<Map>>(map.second);
  return MapViewModel(
      string("Mutable") + escape_utf8_to_cpp_identifier(map.first),
      SymbolTable::Symbol(string(""), ptr->key_type),
      SymbolTable::Symbol(string(""), ptr->value_type));
}

vector<CodegenCpp::MapViewModel> CodegenCpp::CreateMapViewModels(
    vector<SymbolTable::Symbol> maps) const {
  vector<MapViewModel> view_models;
  for (auto m : maps) {
    view_models.push_back(CreateMapViewModel(m));
  }
  return view_models;
}

}  // namespace td
