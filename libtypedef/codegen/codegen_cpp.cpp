#include "libtypedef/codegen/codegen_cpp.h"

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

#include "codegen_cpp.h"
#include "codegen_cpp_helpers.h"
#include "symbol_table.h"

namespace td {

using namespace std;

namespace {

/**
 * @brief Indents each line of the given input string with a specified number of
 * spaces.
 *
 * This function processes the input string line by line and adds a specified
 * number of spaces at the beginning of each line. The function uses string_view
 * for efficient substring manipulation and fmt::print for formatting the
 * output.
 *
 * @param input The input string to be indented.
 * @param count The number of spaces to be added as indentation for each line.
 * @return The indented output string.
 *
 * Usage:
 *   string original_text = "line 1\nline 2\nline 3";
 *   string indented_text = indent(original_text, 4);
 *     returns "    line 1\n    line 2\n    line 3"
 */
string indent(const string& input, unsigned int count) {
  string_view input_view(input);
  size_t pos_start = 0;
  size_t pos_end = 0;
  ostringstream ss;

  // Iterate through the input string, finding newline characters
  while ((pos_end = input_view.find("\n", pos_start)) != string::npos) {
    // Extract the line without the newline character
    string_view token = input_view.substr(pos_start, pos_end - pos_start);
    // Update the start position for the next iteration
    pos_start = pos_end + 1;

    // Print the indented line to the ostringstream
    fmt::print(ss, "{: >{}}{}\n", "", count, token);
  }

  // Handle the last line if it doesn't end with a newline character
  if (pos_start < input_view.length()) {
    string_view token = input_view.substr(pos_start);
    fmt::print(ss, "{: >{}}{}", "", count, token);
  }

  return ss.str();
}

}  // namespace

CodegenCpp::CppSymRef::CppSymRef(const string& referenced_escaped_identifier) {
  referenced_cpp_type_ =
      fmt::format("std::unique_ptr<Mutable{}>", referenced_escaped_identifier);
}

CodegenCpp::CppTmplStr::CppTmplStr(const string& arg_cpp_type,
                                   const string& tmpl)
    : arg_cpp_typpe_(arg_cpp_type), tmpl_(tmpl) {}

CodegenCpp::CppNonPrimitiveValue::CppNonPrimitiveValue(
    const SymbolTable::Symbol& s)
    : class_name_(escape_utf8_to_cpp_identifier(s.first.id())),
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

CodegenCpp::CppSymbol::CppSymbol(const SymbolTable::Symbol& s)
    : escaped_identifier_(escape_utf8_to_cpp_identifier(s.first.id())) {
  if (holds_alternative<shared_ptr<Struct>>(s.second) ||
      holds_alternative<shared_ptr<Variant>>(s.second) ||
      holds_alternative<shared_ptr<Vector>>(s.second) ||
      holds_alternative<shared_ptr<Map>>(s.second)) {
    non_primitive_ = CppNonPrimitiveValue(s);
  } else if (holds_alternative<SymbolRef>(s.second)) {
    auto sr = get<SymbolRef>(s.second);
    reference_ = CppSymRef(escape_utf8_to_cpp_identifier(sr.id));
  } else if (holds_alternative<shared_ptr<td::TmplStr>>(s.second)) {
    tmpl_str_ = CodegenCpp::CreateTmplStr(s);
  } else {
    primitive_ = CppPrimitiveValue(s.second);
  }
}

CodegenCpp::CppPrimitiveValue::CppPrimitiveValue(const SymbolTable::Value& v)
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
    const SymbolTable::Table& table) {
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

string CodegenCpp::HeaderGuard(const filesystem::path& source_filename) {
  string hdr_guard = source_filename.string() + "_H__";
  replace(hdr_guard.begin(), hdr_guard.end(), '.', '_');
  replace(hdr_guard.begin(), hdr_guard.end(), ' ', '_');
  replace(hdr_guard.begin(), hdr_guard.end(), '/', '_');
  transform(hdr_guard.begin(), hdr_guard.end(), hdr_guard.begin(), ::toupper);
  return hdr_guard;
}

void CodegenCpp::PrintHeader(ostream& os, const ViewModel& vm) {
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

void CodegenCpp::PrintSource(ostream& os, const ViewModel& vm) {
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

string CodegenCpp::NamespaceOpen(const vector<string>& namespaces) {
  stringstream ss;
  for (auto ns : namespaces) {
    fmt::print(ss, "namespace {} {{\n", ns);
  }
  return ss.str();
}

string CodegenCpp::NamespaceClose(const vector<string>& namespaces) {
  stringstream ss;
  for (auto ns : namespaces) {
    fmt::print(ss, "}}  // {}\n", ns);
  }
  return ss.str();
}

string CodegenCpp::ValueDeclarations(const vector<ValueViewModel>& values) {
  stringstream ss;
  for (auto v : values) {
    fmt::print(ss, "typedef {} {};\n", v.sym.Primitive().CppType(),
               v.sym.EscapedIdentifier());
  }
  return ss.str();
}

string CodegenCpp::ForwardDeclarations(const ViewModel& vm) {
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
    const vector<CodegenCpp::CppSymbol>& members) {
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
    } else if (m.IsTmplStr()) {
      store.push_back(fmt::arg("arg_type", m.TmplStr().ArgCppType()));
      fmt::vprint(ss, R"(
    // Defined in cpp.
    static std::string {identifier}(const {arg_type}& arg);
    )",
                  store);
    } else {
      assert(false);
    }
  }
  return ss.str();
}

string CodegenCpp::StructMembers(const vector<CodegenCpp::CppSymbol>& members) {
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
    } else if (m.IsTmplStr()) {
      // TODO: tmpl_str
    } else {
      assert(false);
    }
    store.push_back(fmt::arg("identifier", m.EscapedIdentifier()));

    if (has_value) {
      fmt::vprint(ss, "    {type} {identifier}_ = {value};\n", store);
    } else if (!m.IsTmplStr()) {
      fmt::vprint(ss, "    {type} {identifier}_;\n", store);
    }
  }
  return ss.str();
}

string CodegenCpp::StructClasses(const vector<StructViewModel>& structs) {
  stringstream ss;
  for (auto s : structs) {
    fmt::dynamic_format_arg_store<fmt::format_context> store;
    store.push_back(fmt::arg("classname", s.struct_name));
    // nested classes.
    store.push_back(
        fmt::arg("nested_structs", indent(StructClasses(s.nested_structs), 4)));
    store.push_back(fmt::arg("nested_variants",
                             indent(VariantClasses(s.nested_variants), 4)));
    store.push_back(
        fmt::arg("nested_vectors", indent(VectorClasses(s.nested_vectors), 4)));
    store.push_back(
        fmt::arg("nested_maps", indent(MapClasses(s.nested_maps), 4)));

    store.push_back(fmt::arg("accessors", StructAccessors(s.members)));
    store.push_back(fmt::arg("members", StructMembers(s.members)));
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
    const vector<CodegenCpp::CppSymbol>& members) {
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
      store.push_back(fmt::arg("type", m.NonPrimitive().CppType()));
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
    } else if (m.IsTmplStr()) {
      // TODO: tmpl_str
    } else {
      assert(false);
    }
  }
  return ss.str();
}

string CodegenCpp::VariantTags(const vector<CppSymbol>& members) {
  stringstream ss;
  for (auto m : members) {
    fmt::print(ss, "      TAG_{},\n", m.EscapedIdentifier());
  }
  return ss.str();
}

string CodegenCpp::VariantMemberDeletionCases(
    const vector<CppSymbol>& members) {
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

string CodegenCpp::VariantClasses(const vector<VariantViewModel>& variants) {
  stringstream ss;
  for (auto v : variants) {
    fmt::dynamic_format_arg_store<fmt::format_context> store;
    store.push_back(fmt::arg("classname", v.struct_name));

    // nested classes.
    store.push_back(
        fmt::arg("nested_structs", indent(StructClasses(v.nested_structs), 4)));
    store.push_back(fmt::arg("nested_variants",
                             indent(VariantClasses(v.nested_variants), 4)));
    store.push_back(
        fmt::arg("nested_vectors", indent(VectorClasses(v.nested_vectors), 4)));
    store.push_back(
        fmt::arg("nested_maps", indent(MapClasses(v.nested_maps), 4)));

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

    // Nested classes.
{nested_structs}
{nested_variants}
{nested_vectors}
{nested_maps}

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

string CodegenCpp::VectorClasses(const vector<VectorViewModel>& vectors) {
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

string CodegenCpp::MapClasses(const vector<MapViewModel>& maps) {
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

string CodegenCpp::StructMethods(const vector<StructViewModel>& structs) {
  stringstream ss;
  for (auto s : structs) {
    fmt::dynamic_format_arg_store<fmt::format_context> structs_store;
    structs_store.push_back(fmt::arg("classname", s.struct_name));

    fmt::vprint(ss, R"(
std::ostream& operator<<(std::ostream& os, const {classname}& obj) {{
  os << "struct {classname}.\n";
  return os;
}}
)",
                structs_store);

    for (auto m : s.members) {
      fmt::dynamic_format_arg_store<fmt::format_context> member_store;
      member_store.push_back(fmt::arg("classname", s.struct_name));
      member_store.push_back(fmt::arg("identifier", m.EscapedIdentifier()));

      if (m.IsTmplStr()) {
        member_store.push_back(fmt::arg("arg_type", m.TmplStr().ArgCppType()));
        fmt::vprint(ss, R"(
std::string {classname}::{identifier}(const {arg_type}& arg) {{
  return "printing here!";
}}
)",
                    member_store);
      }
    }
  }
  return ss.str();
}

string CodegenCpp::VariantMethods(const vector<VariantViewModel>& variants) {
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

string CodegenCpp::VectorMethods(const vector<VectorViewModel>& vectors) {
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

string CodegenCpp::MapMethods(const vector<MapViewModel>& maps) {
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
    const filesystem::path& hdr_path, const vector<string>& module,
    const GroupedSymbols& grouped_symbols) {
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
    const vector<SymbolTable::Symbol>& values) {
  vector<ValueViewModel> view_models;
  for (auto s : values) {
    view_models.push_back(s);
  }
  return view_models;
}

CodegenCpp::StructViewModel CodegenCpp::CreateStructViewModel(
    const SymbolTable::Symbol& s) {
  StructViewModel svm;
  svm.struct_name =
      string("Mutable") + escape_utf8_to_cpp_identifier(s.first.id());
  // each member of the struct.
  auto str = get<shared_ptr<Struct>>(s.second);
  for (auto m : str->table.table_) {
    // first handle embedded type definitions - may be
    // either nested or inline.
    if (holds_alternative<shared_ptr<Struct>>(m.second)) {
      svm.nested_structs.push_back(CreateStructViewModel(m));
    } else if (holds_alternative<shared_ptr<Variant>>(m.second)) {
      svm.nested_variants.push_back(CreateVaraintViewModel(m));
    } else if (holds_alternative<shared_ptr<Vector>>(m.second)) {
      svm.nested_vectors.push_back(CreateVectorViewModel(m));
    } else if (holds_alternative<shared_ptr<Map>>(m.second)) {
      svm.nested_maps.push_back(CreateMapViewModel(m));
    }
    // handle value types.
    if (m.first.IsValue()) {
      svm.members.push_back(CppSymbol(m));
    }
  }
  return svm;
}

vector<CodegenCpp::StructViewModel> CodegenCpp::CreateStructViewModels(
    const vector<SymbolTable::Symbol>& structs) {
  vector<StructViewModel> view_models;
  for (auto s : structs) {
    view_models.push_back(CreateStructViewModel(s));
  }
  return view_models;
}

CodegenCpp::VariantViewModel CodegenCpp::CreateVaraintViewModel(
    const SymbolTable::Symbol& variant) {
  VariantViewModel vvm;
  vvm.struct_name =
      string("Mutable") + escape_utf8_to_cpp_identifier(variant.first.id());
  // each member of the variant.
  auto str = get<shared_ptr<Variant>>(variant.second);
  for (auto m : str->table.table_) {
    // first handle embedded type definitions - may be
    // either nested or inline.
    if (holds_alternative<shared_ptr<Struct>>(m.second)) {
      vvm.nested_structs.push_back(CreateStructViewModel(m));
    } else if (holds_alternative<shared_ptr<Variant>>(m.second)) {
      vvm.nested_variants.push_back(CreateVaraintViewModel(m));
    } else if (holds_alternative<shared_ptr<Vector>>(m.second)) {
      vvm.nested_vectors.push_back(CreateVectorViewModel(m));
    } else if (holds_alternative<shared_ptr<Map>>(m.second)) {
      vvm.nested_maps.push_back(CreateMapViewModel(m));
    }
    // handle value types.
    if (m.first.IsValue()) {
      vvm.members.push_back(CppSymbol(m));
    }
  }
  return vvm;
}

vector<CodegenCpp::VariantViewModel> CodegenCpp::CreateVaraintViewModels(
    const vector<SymbolTable::Symbol>& variants) {
  vector<VariantViewModel> view_models;
  for (auto variant : variants) {
    view_models.push_back(CreateVaraintViewModel(variant));
  }
  return view_models;
}

CodegenCpp::VectorViewModel CodegenCpp::CreateVectorViewModel(
    const SymbolTable::Symbol& vector) {
  auto ptr = get<shared_ptr<Vector>>(vector.second);
  return VectorViewModel(
      string("Mutable") + escape_utf8_to_cpp_identifier(vector.first.id()),
      SymbolTable::Symbol(Identifier::AnonymousTypeIdentifier(), ptr->type));
}

vector<CodegenCpp::VectorViewModel> CodegenCpp::CreateVectorViewModels(
    const vector<SymbolTable::Symbol>& vectors) {
  vector<VectorViewModel> view_models;
  for (auto v : vectors) {
    view_models.push_back(CreateVectorViewModel(v));
  }
  return view_models;
}

CodegenCpp::MapViewModel CodegenCpp::CreateMapViewModel(
    const SymbolTable::Symbol& map) {
  auto ptr = get<shared_ptr<Map>>(map.second);
  return MapViewModel(
      string("Mutable") + escape_utf8_to_cpp_identifier(map.first.id()),
      SymbolTable::Symbol(Identifier::AnonymousTypeIdentifier(), ptr->key_type),
      SymbolTable::Symbol(Identifier::AnonymousTypeIdentifier(),
                          ptr->value_type));
}

vector<CodegenCpp::MapViewModel> CodegenCpp::CreateMapViewModels(
    const vector<SymbolTable::Symbol>& maps) {
  vector<MapViewModel> view_models;
  for (auto m : maps) {
    view_models.push_back(CreateMapViewModel(m));
  }
  return view_models;
}

CodegenCpp::CppTmplStr CodegenCpp::CreateTmplStr(
    const SymbolTable::Symbol& tmpl_str) {
  auto ptr = get<shared_ptr<TmplStr>>(tmpl_str.second);
  auto arg_sym_ref = get<SymbolRef>(ptr->arg_type);
  return CppTmplStr(
      string("Mutable") + escape_utf8_to_cpp_identifier(arg_sym_ref.id),
      *get<optional<string>>(ptr->str));
}

}  // namespace td
