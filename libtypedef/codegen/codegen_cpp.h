#ifndef CODEGEN_CODEGEN_CPP_H__
#define CODEGEN_CODEGEN_CPP_H__

#include <filesystem>
#include <optional>
#include <set>
#include <string>

#include "libtypedef/codegen/codegen_base.h"
#include "libtypedef/codegen/file_printer_base.h"

namespace td {

using namespace std;
using namespace td;

class CodegenCpp : public CodegenBase {
 public:
  CodegenCpp(const string& source_filename, shared_ptr<ParsedFile> parser,
             shared_ptr<OutPathBase> out_path)
      : CodegenBase(parser, out_path), source_filename_(source_filename) {}

  virtual void Generate() override;

 private:
  string source_filename_;

  enum CppTypeClass {
    CPP_TYPE_CLASS_UNKNOWN = 0,
    CPP_TYPE_CLASS_PRIMITIVE,
    CPP_TYPE_CLASS_PRIMITIVE_CHAR,
    CPP_TYPE_CLASS_PRIMITIVE_STRING,
    CPP_TYPE_CLASS_STRUCT,
    CPP_TYPE_CLASS_VARIANT,
    CPP_TYPE_CLASS_VECTOR,
    CPP_TYPE_CLASS_MAP
  };

  struct FunctionArg {
    string symbol;
    string type;
    CppTypeClass type_class;
  };

  struct GroupedSymbols {
    vector<SymbolTable::Symbol> values;
    vector<SymbolTable::Symbol> structs;
    vector<SymbolTable::Symbol> variants;
    vector<SymbolTable::Symbol> vectors;
    vector<SymbolTable::Symbol> maps;
  };

  class CppPrimitiveValue {
   public:
    explicit CppPrimitiveValue(const SymbolTable::Value& v);
    const string& CppType() const { return cpp_type_; }

    bool IsChar() const { return is_char_; }
    bool IsString() const { return is_string_; }

    const string& Value() const { return val_; }

   private:
    string cpp_type_;
    string val_;

    bool is_char_;
    bool is_string_;
  };

  class CppNonPrimitiveValue {
   public:
    explicit CppNonPrimitiveValue(SymbolTable::Symbol const& s);

    bool IsStruct() const { return is_struct_; }
    bool IsVariant() const { return is_variant_; }
    bool IsVector() const { return is_vector_; }

    const string& CppType() const { return cpp_type_; }

   private:
    string class_name_;
    string cpp_type_;

    bool is_struct_;
    bool is_variant_;
    bool is_vector_;
  };

  class CppSymRef {
   public:
    CppSymRef(const string& referenced_escaped_identifier,
              CppTypeClass ref_type_class);
    const string& ReferencedEscapedIdentifier() const {
      return referenced_escaped_identifier_;
    }
    CppTypeClass TypeClass() const { return ref_type_class_; }
    const string& ReferencedCppType() const { return referenced_cpp_type_; }

   private:
    CppTypeClass ref_type_class_;
    string referenced_escaped_identifier_;
    string referenced_cpp_type_;
  };

  class CppTmplStr {
   public:
    struct TmplSegment {
      struct FunctionCall {
        optional<CppSymRef> identifier;
        std::vector<CppSymRef> args;
      };

      struct IfBlock {
        // Pseudo-code:
        //  if (conditional_identifier) {
        //    body_items;
        //  }
        optional<CppSymRef> conditional_identifier;
        std::vector<TmplSegment> body_items;

        //  else if (else_ifs[0]) {
        //    else_ifs[0].body_items;
        //  }
        struct ElseIfBlock {
          optional<CppSymRef> conditional_identifier;
          std::vector<TmplSegment> body_items;
        };
        std::vector<ElseIfBlock> else_ifs;

        //  else {
        //    else_body_items;
        //  }
        std::vector<TmplSegment> else_body_items;
      };
      struct ForBlock {
        optional<CppSymRef> loop_variable;
        optional<CppSymRef> loop_variable2;
        optional<CppSymRef> iterable_identifier;
        std::vector<TmplSegment> body_items;
      };
      // One of...
      shared_ptr<string> literal_segment;
      optional<CppSymRef> insertion;
      optional<FunctionCall> function_call;
      optional<IfBlock> if_block;
      optional<ForBlock> for_block;
    };

    CppTmplStr(const std::vector<FunctionArg>& args, const string& tmpl,
               const vector<TmplSegment>& segments)
        : args_(args), segments_(segments) {}

    const vector<FunctionArg>& Args() const { return args_; }
    const vector<TmplSegment>& Segments() const { return segments_; }

   private:
    std::vector<FunctionArg> args_;
    vector<TmplSegment> segments_;
  };

  class CppSymbol {
   public:
    explicit CppSymbol(const SymbolTable::Symbol& s);
    const string& EscapedIdentifier() { return escaped_identifier_; }

    bool IsPrimitive() const { return primitive_.has_value(); }
    const CppPrimitiveValue& Primitive() const { return *primitive_; }

    bool IsNonPrimitive() const { return non_primitive_.has_value(); }
    const CppNonPrimitiveValue& NonPrimitive() const { return *non_primitive_; }

    bool IsReference() const { return reference_.has_value(); }
    const CppSymRef& Reference() const { return *reference_; }

    bool IsTmplStr() const { return tmpl_str_.has_value(); }
    const CppTmplStr& TmplStr() const { return *tmpl_str_; }

   private:
    string escaped_identifier_;  // eg. BoolValA or StructA
    std::optional<CppPrimitiveValue> primitive_;
    std::optional<CppNonPrimitiveValue> non_primitive_;
    std::optional<CppSymRef> reference_;
    std::optional<CppTmplStr> tmpl_str_;
  };

  struct ValueViewModel {
    ValueViewModel(const SymbolTable::Symbol& s) : sym(s){};
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
    VectorViewModel(const string& struct_name,
                    const SymbolTable::Symbol& payload)
        : struct_name(struct_name), payload(payload){};
    string struct_name;
    CppSymbol payload;
  };

  struct MapViewModel {
    MapViewModel(const string& struct_name, const SymbolTable::Symbol& key,
                 const SymbolTable::Symbol& value)
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

  static GroupedSymbols GroupSymbols(const SymbolTable::Table& table);
  static ViewModel CreateViewModel(const filesystem::path& hdr_path,
                                   const vector<string>& module,
                                   const GroupedSymbols& grouped_symbols);
  static vector<ValueViewModel> CreateValueViewModels(
      const vector<SymbolTable::Symbol>& values);

  static StructViewModel CreateStructViewModel(
      const SymbolTable::Symbol& symbol);
  static vector<StructViewModel> CreateStructViewModels(
      const vector<SymbolTable::Symbol>& structs);

  static VariantViewModel CreateVaraintViewModel(
      const SymbolTable::Symbol& variant);
  static vector<VariantViewModel> CreateVaraintViewModels(
      const vector<SymbolTable::Symbol>& variants);

  static VectorViewModel CreateVectorViewModel(
      const SymbolTable::Symbol& vector);
  static vector<VectorViewModel> CreateVectorViewModels(
      const vector<SymbolTable::Symbol>& vectors);

  static MapViewModel CreateMapViewModel(const SymbolTable::Symbol& map);
  static vector<MapViewModel> CreateMapViewModels(
      const vector<SymbolTable::Symbol>& maps);

  static CppTmplStr CreateTmplStr(const SymbolTable::Symbol& tmpl_str);

  static string HeaderGuard(const filesystem::path& source_filename);

  static void PrintHeader(ostream& os, const ViewModel& vm);
  static void PrintSource(ostream& os, const ViewModel& vm);

  static string NamespaceOpen(const vector<string>& namespaces);
  static string NamespaceClose(const vector<string>& namespaces);

  static string ValueDeclarations(const vector<ValueViewModel>& values);
  static string ForwardDeclarations(const ViewModel& vm);

  static string TmplArgs(const CppTmplStr& cpp_tmpl_str);

  static string StructAccessors(const vector<CppSymbol>& members);
  static string StructMembers(const vector<CppSymbol>& members);
  static string StructClasses(const vector<StructViewModel>& structs);

  static string VariantAccessors(const vector<CppSymbol>& members);
  static string VariantTags(const vector<CppSymbol>& members);
  static string VariantMemberDeletionCases(const vector<CppSymbol>& members);
  static string VariantClasses(const vector<VariantViewModel>& variants);

  static string VectorClasses(const vector<VectorViewModel>& vectors);
  static string MapClasses(const vector<MapViewModel>& maps);

  static string PrintTmplSegment(const CppTmplStr::TmplSegment& segment,
                                 set<string> block_local_symbols);
  static string PrintDereference(const CppSymRef& symbol,
                                 const set<string>& block_local_symbols);

  static string StructMethods(const vector<StructViewModel>& structs);
  static string VariantMethods(const vector<VariantViewModel>& variants);
  static string VectorMethods(const vector<VectorViewModel>& vectors);
  static string MapMethods(const vector<MapViewModel>& maps);

  static CppTmplStr::TmplSegment MakeTmplSegment(TmplStrTable::ItemPtr item);
};

}  // namespace td

#endif  // CODEGEN_CODEGEN_CPP_H__
