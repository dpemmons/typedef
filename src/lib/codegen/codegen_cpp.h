#ifndef LIB_CODEGEN_CODEGEN_CPP_H__
#define LIB_CODEGEN_CODEGEN_CPP_H__

#include <filesystem>
#include <optional>
#include <string>

#include "codegen_base.h"
#include "file_printer_base.h"

namespace td {

using namespace std;
using namespace td;

class CodegenCpp : public CodegenBase {
 public:
  CodegenCpp(string source_filename, shared_ptr<ParsedFile> parser,
             shared_ptr<OutPathBase> out_path)
      : CodegenBase(parser, out_path), source_filename_(source_filename) {}

  virtual void Generate() override;

 private:
  string source_filename_;

  struct GroupedSymbols {
    vector<SymbolTable::Symbol> values;
    vector<SymbolTable::Symbol> structs;
    vector<SymbolTable::Symbol> variants;
    vector<SymbolTable::Symbol> vectors;
    vector<SymbolTable::Symbol> maps;
  };

  class CppPrimitiveValue {
   public:
    CppPrimitiveValue(SymbolTable::Value const& v);
    string CppType() const { return cpp_type_; }

    bool IsChar() const { return is_char_; }
    bool IsString() const { return is_string_; }

    string Value() const { return val_; }

   private:
    string cpp_type_;
    string val_;

    bool is_char_;
    bool is_string_;
  };

  class CppNonPrimitiveValue {
   public:
    CppNonPrimitiveValue(SymbolTable::Symbol const& s);

    bool IsStruct() const { return is_struct_; }
    bool IsVariant() const { return is_variant_; }
    bool IsVector() const { return is_vector_; }

    string CppType() const { return cpp_type_; }

   private:
    string class_name_;
    string cpp_type_;

    bool is_struct_;
    bool is_variant_;
    bool is_vector_;
  };

  class CppSymRef {
   public:
    CppSymRef(string const& referenced_escaped_identifier);
    string ReferencedCppType() const { return referenced_cpp_type_; }

   private:
    string referenced_cpp_type_;
  };

  class CppSymbol {
   public:
    CppSymbol(SymbolTable::Symbol const& s);
    string EscapedIdentifier() { return escaped_identifier_; }

    bool IsPrimitive() const { return primitive_.has_value(); }
    CppPrimitiveValue const& Primitive() const { return *primitive_; }

    bool IsNonPrimitive() const { return non_primitive_.has_value(); }
    CppNonPrimitiveValue const& NonPrimitive() const { return *non_primitive_; }

    bool IsReference() const { return reference_.has_value(); }
    CppSymRef const& Reference() const { return *reference_; }

   private:
    string escaped_identifier_;  // eg. BoolValA or StructA
    std::optional<CppPrimitiveValue> primitive_;
    std::optional<CppNonPrimitiveValue> non_primitive_;
    std::optional<CppSymRef> reference_;
  };

  struct ValueViewModel {
    ValueViewModel(SymbolTable::Symbol const& s) : sym(s){};
    CppSymbol sym;
  };

  struct StructViewModel;
  struct VariantViewModel;
  struct VectorViewModel;
  struct MapViewModel;

  struct StructViewModel {
    string struct_name;
    vector<CppSymbol> members;
    vector<StructViewModel> nested_structs;
    vector<VariantViewModel> nested_variants;
    vector<VectorViewModel> nested_vectors;
    vector<MapViewModel> nested_maps;
  };

  struct VariantViewModel {
    string struct_name;
    vector<CppSymbol> members;
    vector<StructViewModel> nested_structs;
    vector<VariantViewModel> nested_variants;
    vector<VectorViewModel> nested_vectors;
    vector<MapViewModel> nested_maps;
  };

  struct VectorViewModel {
    VectorViewModel(string struct_name, SymbolTable::Symbol const& payload)
        : struct_name(struct_name), payload(payload){};
    string struct_name;
    CppSymbol payload;
  };

  struct MapViewModel {
    MapViewModel(string struct_name, SymbolTable::Symbol const& key,
                 SymbolTable::Symbol const& value)
        : struct_name(struct_name), key(key), value(value) {}
    string struct_name;
    CppSymbol key;
    CppSymbol value;
  };

  struct ViewModel {
    string hdr_filename;
    string header_guard;
    vector<string> namesapces;

    vector<ValueViewModel> values;
    vector<StructViewModel> structs;
    vector<VariantViewModel> variants;
    vector<VectorViewModel> vectors;
    vector<MapViewModel> maps;
  };

  GroupedSymbols GroupSymbols(map<string, SymbolTable::Value> table) const;
  ViewModel CreateViewModel(filesystem::path hdr_path, vector<string> module,
                            GroupedSymbols const& grouped_symbols) const;
  vector<ValueViewModel> CreateValueViewModels(
      vector<SymbolTable::Symbol> values) const;

  StructViewModel CreateStructViewModel(
      SymbolTable::Symbol const& symbol) const;
  vector<StructViewModel> CreateStructViewModels(
      vector<SymbolTable::Symbol> structs) const;

  VariantViewModel CreateVaraintViewModel(SymbolTable::Symbol variant) const;
  vector<VariantViewModel> CreateVaraintViewModels(
      vector<SymbolTable::Symbol> variants) const;

  VectorViewModel CreateVectorViewModel(SymbolTable::Symbol vector) const;
  vector<VectorViewModel> CreateVectorViewModels(
      vector<SymbolTable::Symbol> vectors) const;

  MapViewModel CreateMapViewModel(SymbolTable::Symbol map) const;
  vector<MapViewModel> CreateMapViewModels(
      vector<SymbolTable::Symbol> maps) const;

  string HeaderGuard(filesystem::path source_filename) const;

  void PrintHeader(ostream& os, ViewModel const& vm) const;
  void PrintSource(ostream& os, ViewModel const& vm) const;

  string NamespaceOpen(vector<string> namespaces) const;
  string NamespaceClose(vector<string> namespaces) const;

  string ValueDeclarations(vector<ValueViewModel> const& values) const;
  string ForwardDeclarations(ViewModel const& vm) const;

  string StructAccessors(vector<CppSymbol> const& members) const;
  string StructMembers(vector<CppSymbol> const& members) const;
  string StructClasses(vector<StructViewModel> const& structs) const;

  string VariantAccessors(vector<CppSymbol> const& members) const;
  string VariantTags(vector<CppSymbol> const& members) const;
  string VariantMemberDeletionCases(vector<CppSymbol> const& members) const;
  string VariantClasses(vector<VariantViewModel> const& variants) const;

  string VectorClasses(vector<VectorViewModel> const& vectors) const;
  string MapClasses(vector<MapViewModel> const& maps) const;

  string StructMethods(vector<StructViewModel> const& structs) const;
  string VariantMethods(vector<VariantViewModel> const& variants) const;
  string VectorMethods(vector<VectorViewModel> const& vectors) const;
  string MapMethods(vector<MapViewModel> const& maps) const;
};

}  // namespace td

#endif  // LIB_CODEGEN_CODEGEN_CPP_H__
