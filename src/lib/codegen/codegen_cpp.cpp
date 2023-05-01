#include "codegen_cpp.h"

#include <algorithm>
#include <filesystem>
#include <variant>

#define FMT_HEADER_ONLY
#include <fmt/core.h>
#include <fmt/ostream.h>

#include "codegen_cpp_helpers.h"
#include "symbol_table.h"

namespace td {

using namespace std;

struct CppIdentifiers {
  enum TypeClass {
    SCALAR_NOT_CHAR,
    CHAR,
    STRING,
    STRUCT,
    VARIANT,
    VECTOR,
    MAP,
    SYMBOL_REF
  };
  CppIdentifiers(TypeClass type_class, std::string symbol_id,
                 std::string type_id)
      : type_class(type_class), symbol_id(symbol_id), type_id(type_id) {
    if (type_class >= STRUCT) {
      full_type_id = fmt::format("std::unique_ptr<{}>", type_id);
    } else {
      full_type_id = type_id;
    }
  }
  TypeClass type_class;
  bool WrappedType() { return type_class > STRING; }

  // Examples:
  // anInt : i32;
  // symol_id = "anInt", type_id = "int32_t", full_type_id = "int32_t"
  //
  // aStruct: struct {};
  //    symol_id = "aStruct"
  //    type_id = "MutableaStruct"
  //    full_type_id = "std::unique_ptr<MutableaStruct>"

  std::string symbol_id;
  std::string type_id;
  std::string full_type_id;
};
CppIdentifiers GetCppType(SymbolTable::Symbol const& s) {
  if (holds_alternative<optional<bool>>(s.second)) {
    return CppIdentifiers(CppIdentifiers::SCALAR_NOT_CHAR,
                          escape_utf8_to_cpp_identifier(s.first), "bool");
  } else if (holds_alternative<optional<char32_t>>(s.second)) {
    return CppIdentifiers(CppIdentifiers::CHAR,
                          escape_utf8_to_cpp_identifier(s.first), "char32_t");
  } else if (holds_alternative<optional<string>>(s.second)) {
    return CppIdentifiers(CppIdentifiers::STRING,
                          escape_utf8_to_cpp_identifier(s.first),
                          "std::string");
  } else if (holds_alternative<optional<float>>(s.second)) {
    return CppIdentifiers(CppIdentifiers::SCALAR_NOT_CHAR,
                          escape_utf8_to_cpp_identifier(s.first), "float");
  } else if (holds_alternative<optional<double>>(s.second)) {
    return CppIdentifiers(CppIdentifiers::SCALAR_NOT_CHAR,
                          escape_utf8_to_cpp_identifier(s.first), "double");
  } else if (holds_alternative<optional<int8_t>>(s.second)) {
    return CppIdentifiers(CppIdentifiers::SCALAR_NOT_CHAR,
                          escape_utf8_to_cpp_identifier(s.first), "int8_t");
  } else if (holds_alternative<optional<int16_t>>(s.second)) {
    return CppIdentifiers(CppIdentifiers::SCALAR_NOT_CHAR,
                          escape_utf8_to_cpp_identifier(s.first), "int16_t");
  } else if (holds_alternative<optional<int32_t>>(s.second)) {
    return CppIdentifiers(CppIdentifiers::SCALAR_NOT_CHAR,
                          escape_utf8_to_cpp_identifier(s.first), "int32_t");
  } else if (holds_alternative<optional<int64_t>>(s.second)) {
    return CppIdentifiers(CppIdentifiers::SCALAR_NOT_CHAR,
                          escape_utf8_to_cpp_identifier(s.first), "int64_t");
  } else if (holds_alternative<optional<uint8_t>>(s.second)) {
    return CppIdentifiers(CppIdentifiers::SCALAR_NOT_CHAR,
                          escape_utf8_to_cpp_identifier(s.first), "uint8_t");
  } else if (holds_alternative<optional<uint16_t>>(s.second)) {
    return CppIdentifiers(CppIdentifiers::SCALAR_NOT_CHAR,
                          escape_utf8_to_cpp_identifier(s.first), "uint16_t");
  } else if (holds_alternative<optional<uint32_t>>(s.second)) {
    return CppIdentifiers(CppIdentifiers::SCALAR_NOT_CHAR,
                          escape_utf8_to_cpp_identifier(s.first), "uint32_t");
  } else if (holds_alternative<optional<uint64_t>>(s.second)) {
    return CppIdentifiers(CppIdentifiers::SCALAR_NOT_CHAR,
                          escape_utf8_to_cpp_identifier(s.first), "uint64_t");
  } else if (holds_alternative<shared_ptr<Struct>>(s.second)) {
    return CppIdentifiers(
        CppIdentifiers::STRUCT, escape_utf8_to_cpp_identifier(s.first),
        std::string("Mutable") + escape_utf8_to_cpp_identifier(s.first));
  } else if (holds_alternative<shared_ptr<Variant>>(s.second)) {
    return CppIdentifiers(
        CppIdentifiers::VARIANT, escape_utf8_to_cpp_identifier(s.first),
        std::string("Mutable") + escape_utf8_to_cpp_identifier(s.first));
  } else if (holds_alternative<shared_ptr<Vector>>(s.second)) {
    return CppIdentifiers(
        CppIdentifiers::VECTOR, escape_utf8_to_cpp_identifier(s.first),
        std::string("Mutable") + escape_utf8_to_cpp_identifier(s.first));
  } else if (holds_alternative<SymbolRef>(s.second)) {
    return CppIdentifiers(
        CppIdentifiers::SYMBOL_REF, escape_utf8_to_cpp_identifier(s.first),
        std::string("Mutable") + escape_utf8_to_cpp_identifier(s.first));
  } else {
    abort();
  }
}

void DeclarePrimitive(ostream& os, SymbolTable::Symbol const& s) {
  CppIdentifiers cpp_id = GetCppType(s);
  if (!cpp_id.WrappedType()) {
    fmt::print(os, "typedef {} {};\n", cpp_id.type_id, cpp_id.symbol_id);
  } else {
    abort();
  }
  fmt::print(os, "extern {} _{};\n", cpp_id.symbol_id, cpp_id.symbol_id);
}

void DefinePrimitive(ostream& os, SymbolTable::Symbol const& s) {
  CppIdentifiers cpp_id = GetCppType(s);
  if (holds_alternative<optional<bool>>(s.second)) {
    auto maybe_val = get<optional<bool>>(s.second);
    if (maybe_val) {
      fmt::print(os, "{} _{} = {};\n", cpp_id.symbol_id, cpp_id.symbol_id,
                 *maybe_val);
    }
  } else if (holds_alternative<optional<char32_t>>(s.second)) {
    auto maybe_val = get<optional<char32_t>>(s.second);
    if (maybe_val) {
      wstring_convert<codecvt_utf8<char32_t>, char32_t> converter;
      fmt::print(os, "{} _{} = *(char32_t*)\"{}\";\n", cpp_id.symbol_id,
                 cpp_id.symbol_id, converter.to_bytes(*maybe_val));
    }
  } else if (holds_alternative<optional<string>>(s.second)) {
    auto maybe_val = get<optional<string>>(s.second);
    if (maybe_val) {
      fmt::print(os, "{} _{} = R\"LITERAL({})LITERAL\";\n", cpp_id.symbol_id,
                 cpp_id.symbol_id, *maybe_val);
    }
  } else if (holds_alternative<optional<float>>(s.second)) {
    auto maybe_val = get<optional<float>>(s.second);
    if (maybe_val) {
      fmt::print(os, "{} _{} = {};\n", cpp_id.symbol_id, cpp_id.symbol_id,
                 *maybe_val);
    }
  } else if (holds_alternative<optional<double>>(s.second)) {
    auto maybe_val = get<optional<double>>(s.second);
    if (maybe_val) {
      fmt::print(os, "{} _{} = {};\n", cpp_id.symbol_id, cpp_id.symbol_id,
                 *maybe_val);
    }
  } else if (holds_alternative<optional<int8_t>>(s.second)) {
    auto maybe_val = get<optional<int8_t>>(s.second);
    if (maybe_val) {
      fmt::print(os, "{} _{} = {};\n", cpp_id.symbol_id, cpp_id.symbol_id,
                 *maybe_val);
    }
  } else if (holds_alternative<optional<int16_t>>(s.second)) {
    auto maybe_val = get<optional<int16_t>>(s.second);
    if (maybe_val) {
      fmt::print(os, "{} _{} = {};\n", cpp_id.symbol_id, cpp_id.symbol_id,
                 *maybe_val);
    }
  } else if (holds_alternative<optional<int32_t>>(s.second)) {
    auto maybe_val = get<optional<int32_t>>(s.second);
    if (maybe_val) {
      fmt::print(os, "{} _{} = {};\n", cpp_id.symbol_id, cpp_id.symbol_id,
                 *maybe_val);
    }
  } else if (holds_alternative<optional<int64_t>>(s.second)) {
    auto maybe_val = get<optional<int64_t>>(s.second);
    if (maybe_val) {
      fmt::print(os, "{} _{} = {};\n", cpp_id.symbol_id, cpp_id.symbol_id,
                 *maybe_val);
    }
  } else if (holds_alternative<optional<uint8_t>>(s.second)) {
    auto maybe_val = get<optional<uint8_t>>(s.second);
    if (maybe_val) {
      fmt::print(os, "{} _{} = {};\n", cpp_id.symbol_id, cpp_id.symbol_id,
                 *maybe_val);
    }
  } else if (holds_alternative<optional<uint16_t>>(s.second)) {
    auto maybe_val = get<optional<uint16_t>>(s.second);
    if (maybe_val) {
      fmt::print(os, "{} _{} = {};\n", cpp_id.symbol_id, cpp_id.symbol_id,
                 *maybe_val);
    }
  } else if (holds_alternative<optional<uint32_t>>(s.second)) {
    auto maybe_val = get<optional<uint32_t>>(s.second);
    if (maybe_val) {
      fmt::print(os, "{} _{} = {};\n", cpp_id.symbol_id, cpp_id.symbol_id,
                 *maybe_val);
    }
  } else if (holds_alternative<optional<uint64_t>>(s.second)) {
    auto maybe_val = get<optional<uint64_t>>(s.second);
    if (maybe_val) {
      fmt::print(os, "{} _{} = {};\n", cpp_id.symbol_id, cpp_id.symbol_id,
                 *maybe_val);
    }
  } else {
    abort();
  }
}

void DefineStruct(ostream& hdr, ostream& src,
                  SymbolTable::Symbol const& struct_symbol) {
  auto ptr = get<shared_ptr<Struct>>(struct_symbol.second);
  std::string escaped_struct_id =
      std::string("Mutable") +
      escape_utf8_to_cpp_identifier(struct_symbol.first);

  fmt::print(hdr, "class {} TD_FINAL_CLASS {{\n", escaped_struct_id);
  fmt::print(hdr, "  public:\n");

  // -------------------------------------------------
  // constructor
  // -------------------------------------------------
  fmt::print(hdr, "    {}() {{}};\n", escaped_struct_id);

  fmt::print(hdr, "    {}(\n", escaped_struct_id);
  for (auto s : ptr->table.table_) {
    std::string member_id = escape_utf8_to_cpp_identifier(s.first);
    if (holds_alternative<optional<bool>>(s.second)) {
      fmt::print(hdr, "      bool _{},\n", member_id);
    } else if (holds_alternative<optional<char32_t>>(s.second)) {
      fmt::print(hdr, "      char32_t _{},\n", member_id);
    } else if (holds_alternative<optional<string>>(s.second)) {
      fmt::print(hdr, "      std::string const& _{},\n", member_id);
    } else if (holds_alternative<optional<float>>(s.second)) {
      fmt::print(hdr, "      float _{},\n", member_id);
    } else if (holds_alternative<optional<double>>(s.second)) {
      fmt::print(hdr, "      double _{},\n", member_id);
    } else if (holds_alternative<optional<int8_t>>(s.second)) {
      fmt::print(hdr, "      int8_t _{},\n", member_id);
    } else if (holds_alternative<optional<int16_t>>(s.second)) {
      fmt::print(hdr, "      int16_t _{},\n", member_id);
    } else if (holds_alternative<optional<int32_t>>(s.second)) {
      fmt::print(hdr, "      int32_t _{},\n", member_id);
    } else if (holds_alternative<optional<int64_t>>(s.second)) {
      fmt::print(hdr, "      int64_t _{},\n", member_id);
    } else if (holds_alternative<optional<uint8_t>>(s.second)) {
      fmt::print(hdr, "      uint8_t _{},\n", member_id);
    } else if (holds_alternative<optional<uint16_t>>(s.second)) {
      fmt::print(hdr, "      uint16_t _{},\n", member_id);
    } else if (holds_alternative<optional<uint32_t>>(s.second)) {
      fmt::print(hdr, "      uint32_t _{},\n", member_id);
    } else if (holds_alternative<optional<uint64_t>>(s.second)) {
      fmt::print(hdr, "      uint64_t _{},\n", member_id);
    } else if (holds_alternative<SymbolRef>(s.second)) {
      auto referenced_symbol =
          escape_utf8_to_cpp_identifier(get<SymbolRef>(s.second));
      fmt::print(hdr, "      std::unique_ptr<Mutable{}> _{},\n",
                 referenced_symbol, member_id);
      // } else if (holds_alternative<shared_ptr<Struct>>(s.second)) {
      //   auto def = get<shared_ptr<Struct>>(s.second);
      //   std::string escaped_def_id =
      //       escape_utf8_to_cpp_identifier(def->identifier);
      //   fmt::print(hdr, "      std::shared_ptr<Mutable{}> _{},\n",
      //   escaped_def_id,
      //              member_id);
      // } else if (holds_alternative<shared_ptr<Variant>>(s.second)) {
      //   auto def = get<shared_ptr<Variant>>(s.second);
      //   std::string escaped_def_id =
      //       escape_utf8_to_cpp_identifier(def->identifier);
      //   fmt::print(hdr, "      std::shared_ptr<Mutable{}> _{},\n",
      //   escaped_def_id,
      //              member_id);
      // } else if (holds_alternative<shared_ptr<Vector>>(s.second)) {
      //   auto def = get<shared_ptr<Vector>>(s.second);
      //   std::string escaped_def_id =
      //       escape_utf8_to_cpp_identifier(def->identifier);
      //   fmt::print(hdr, "      std::shared_ptr<Mutable{}> _{},\n",
      //   escaped_def_id,
      //              member_id);
      // } else if (holds_alternative<shared_ptr<Map>>(s.second)) {
      //   auto def = get<shared_ptr<Map>>(s.second);
      //   std::string escaped_def_id =
      //       escape_utf8_to_cpp_identifier(def->identifier);
      //   fmt::print(hdr, "      std::shared_ptr<Mutable{}> _{},\n",
      //   escaped_def_id,
      //              member_id);
    } else {
      abort();
    }
  }
  fmt::print(hdr, "      bool __foo = false) :\n");
  for (auto s : ptr->table.table_) {
    std::string member_id = escape_utf8_to_cpp_identifier(s.first);
    fmt::print(hdr, "      {}_(std::move(_{})),\n", member_id, member_id);
  }
  // TODO remove this dirty hack
  fmt::print(hdr, "      __foo(false) {{}}\n");

  fmt::print(hdr, "\n");

  // -------------------------------------------------
  // Setters and Getters.
  // -------------------------------------------------
  for (auto s : ptr->table.table_) {
    std::string member_id = escape_utf8_to_cpp_identifier(s.first);
    if (holds_alternative<optional<bool>>(s.second)) {
      fmt::print(hdr, "    bool {}() const {{ return {}_; }}\n", member_id,
                 member_id);
      fmt::print(hdr, "    void {}(bool val) {{ {}_ = val; }}\n", member_id,
                 member_id);
      fmt::print(hdr, "\n");
    } else if (holds_alternative<optional<char32_t>>(s.second)) {
      fmt::print(hdr, "    char32_t {}() const {{ return {}_; }}\n", member_id,
                 member_id);
      fmt::print(hdr, "    void {}(char32_t val) {{ {}_ = val; }}\n", member_id,
                 member_id);
      fmt::print(hdr, "\n");

    } else if (holds_alternative<optional<string>>(s.second)) {
      fmt::print(hdr, "    std::string_view {}() const {{ return {}_; }}\n",
                 member_id, member_id);
      fmt::print(hdr,
                 "    void {}(std::string_view const& val) {{ {}_ = val; }}\n",
                 member_id, member_id);
      fmt::print(hdr, "\n");

    } else if (holds_alternative<optional<float>>(s.second)) {
      fmt::print(hdr, "    float {}() const {{ return {}_; }}\n", member_id,
                 member_id);
      fmt::print(hdr, "    void {}(float val) {{ {}_ = val; }}\n", member_id,
                 member_id);
      fmt::print(hdr, "\n");

    } else if (holds_alternative<optional<double>>(s.second)) {
      fmt::print(hdr, "    double {}() const {{ return {}_; }}\n", member_id,
                 member_id);
      fmt::print(hdr, "    void {}(double val) {{ {}_ = val; }}\n", member_id,
                 member_id);
      fmt::print(hdr, "\n");

    } else if (holds_alternative<optional<int8_t>>(s.second)) {
      fmt::print(hdr, "    int8_t {}() const {{ return {}_; }}\n", member_id,
                 member_id);
      fmt::print(hdr, "    void {}(int8_t val) {{ {}_ = val; }}\n", member_id,
                 member_id);
      fmt::print(hdr, "\n");

    } else if (holds_alternative<optional<int16_t>>(s.second)) {
      fmt::print(hdr, "    int16_t {}() const {{ return {}_; }}\n", member_id,
                 member_id);
      fmt::print(hdr, "    void {}(int16_t val) {{ {}_ = val; }}\n", member_id,
                 member_id);
      fmt::print(hdr, "\n");

    } else if (holds_alternative<optional<int32_t>>(s.second)) {
      fmt::print(hdr, "    int32_t {}() const {{ return {}_; }}\n", member_id,
                 member_id);
      fmt::print(hdr, "    void {}(int32_t val) {{ {}_ = val; }}\n", member_id,
                 member_id);
      fmt::print(hdr, "\n");

    } else if (holds_alternative<optional<int64_t>>(s.second)) {
      fmt::print(hdr, "    int64_t {}() const {{ return {}_; }}\n", member_id,
                 member_id);
      fmt::print(hdr, "    void {}(int64_t val) {{ {}_ = val; }}\n", member_id,
                 member_id);
      fmt::print(hdr, "\n");

    } else if (holds_alternative<optional<uint8_t>>(s.second)) {
      fmt::print(hdr, "    uint8_t {}() const {{ return {}_; }}\n", member_id,
                 member_id);
      fmt::print(hdr, "    void {}(uint8_t val) {{ {}_ = val; }}\n", member_id,
                 member_id);
      fmt::print(hdr, "\n");

    } else if (holds_alternative<optional<uint16_t>>(s.second)) {
      fmt::print(hdr, "    uint16_t {}() const {{ return {}_; }}\n", member_id,
                 member_id);
      fmt::print(hdr, "    void {}(uint16_t val) {{ {}_ = val; }}\n", member_id,
                 member_id);
      fmt::print(hdr, "\n");

    } else if (holds_alternative<optional<uint32_t>>(s.second)) {
      fmt::print(hdr, "    uint32_t {}() const {{ return {}_; }}\n", member_id,
                 member_id);
      fmt::print(hdr, "    void {}(uint32_t val) {{ {}_ = val; }}\n", member_id,
                 member_id);
      fmt::print(hdr, "\n");

    } else if (holds_alternative<optional<uint64_t>>(s.second)) {
      fmt::print(hdr, "    uint64_t {}() const {{ return {}_; }}\n", member_id,
                 member_id);
      fmt::print(hdr, "    void {}(uint64_t val) {{ {}_ = val; }}\n", member_id,
                 member_id);
      fmt::print(hdr, "\n");
    } else if (holds_alternative<SymbolRef>(s.second)) {
      auto referenced_symbol =
          escape_utf8_to_cpp_identifier(get<SymbolRef>(s.second));
      fmt::print(hdr,
                 "    std::unique_ptr<Mutable{}>& {}() {{ return {}_; }}\n",
                 referenced_symbol, member_id, member_id);
      fmt::print(hdr,
                 "    const std::unique_ptr<Mutable{}>& {}() const {{ return "
                 "{}_; }}\n",
                 referenced_symbol, member_id, member_id);
      fmt::print(hdr,
                 "    void {}(std::unique_ptr<Mutable{}> val) {{ {}_ = "
                 "std::move(val); }}\n",
                 member_id, referenced_symbol, member_id);
      fmt::print(hdr, "\n");
      // } else if (holds_alternative<shared_ptr<Struct>>(s.second)) {
      //   auto def = get<shared_ptr<Struct>>(s.second);
      //   std::string escaped_def_id =
      //       escape_utf8_to_cpp_identifier(def->identifier);
      //   fmt::print(
      //       hdr, "    std::shared_ptr<Mutable{}> {}() const {{ return {}_;
      //       }}\n", escaped_def_id, member_id, member_id);
      //   fmt::print(
      //       hdr, "    void {}(std::shared_ptr<Mutable{}> val) {{ {}_ = val;
      //       }}\n", member_id, escaped_def_id, member_id);
      //   fmt::print(hdr, "\n");

      // } else if (holds_alternative<shared_ptr<Variant>>(s.second)) {
      //   auto def = get<shared_ptr<Variant>>(s.second);
      //   std::string escaped_def_id =
      //       escape_utf8_to_cpp_identifier(def->identifier);
      //   fmt::print(
      //       hdr, "    std::shared_ptr<Mutable{}> {}() const {{ return {}_;
      //       }}\n", escaped_def_id, member_id, member_id);
      //   fmt::print(
      //       hdr, "    void {}(std::shared_ptr<Mutable{}> val) {{ {}_ = val;
      //       }}\n", member_id, escaped_def_id, member_id);
      //   fmt::print(hdr, "\n");
      // } else if (holds_alternative<shared_ptr<Vector>>(s.second)) {
      //   auto def = get<shared_ptr<Vector>>(s.second);
      //   std::string escaped_def_id =
      //       escape_utf8_to_cpp_identifier(def->identifier);
      //   fmt::print(
      //       hdr, "    std::shared_ptr<Mutable{}> {}() const {{ return {}_;
      //       }}\n", escaped_def_id, member_id, member_id);
      //   fmt::print(
      //       hdr, "    void {}(std::shared_ptr<Mutable{}> val) {{ {}_ = val;
      //       }}\n", member_id, escaped_def_id, member_id);
      //   fmt::print(hdr, "\n");
      // } else if (holds_alternative<shared_ptr<Map>>(s.second)) {
      //   auto def = get<shared_ptr<Map>>(s.second);
      //   std::string escaped_def_id =
      //       escape_utf8_to_cpp_identifier(def->identifier);
      //   fmt::print(
      //       hdr, "    std::shared_ptr<Mutable{}> {}() const {{ return {}_;
      //       }}\n", escaped_def_id, member_id, member_id);
      //   fmt::print(
      //       hdr, "    void {}(std::shared_ptr<Mutable{}> val) {{ {}_ = val;
      //       }}\n", member_id, escaped_def_id, member_id);
      //   fmt::print(hdr, "\n");
    } else {
      abort();
    }
  }

  fmt::print(hdr,
             "    friend std::ostream& operator<<(std::ostream& os, const "
             "{}& obj);\n",
             escaped_struct_id);

  fmt::print(hdr, "\n");

  fmt::print(hdr, "  private:\n");

  // -------------------------------------------------
  // private member declarations.
  // -------------------------------------------------
  for (auto s : ptr->table.table_) {
    std::string member_id = escape_utf8_to_cpp_identifier(s.first);
    if (holds_alternative<optional<bool>>(s.second)) {
      auto maybe_val = get<optional<bool>>(s.second);
      if (!maybe_val) {
        maybe_val = false;
      }
      fmt::print(hdr, "    bool {}_ = {};\n", member_id, *maybe_val);
    } else if (holds_alternative<optional<char32_t>>(s.second)) {
      auto maybe_val = get<optional<char32_t>>(s.second);
      if (maybe_val) {
        wstring_convert<codecvt_utf8<char32_t>, char32_t> converter;
        fmt::print(hdr, "    char32_t {}_ = *(char32_t*)\"{}\";\n", member_id,
                   converter.to_bytes(*maybe_val));
      } else {
        fmt::print(hdr, "    char32_t {}_ = 0;\n", member_id);
      }
    } else if (holds_alternative<optional<string>>(s.second)) {
      auto maybe_val = get<optional<std::string>>(s.second);
      if (maybe_val && maybe_val->size() > 0) {
        fmt::print(hdr, "    std::string {}_ = R\"LITERAL({})LITERAL\";\n",
                   member_id, *maybe_val);
      } else {
        fmt::print(hdr, "    std::string {}_;\n", member_id);
      }
    } else if (holds_alternative<optional<float>>(s.second)) {
      auto maybe_val = get<optional<float>>(s.second);
      if (!maybe_val) {
        maybe_val = 0;
      }
      fmt::print(hdr, "    float {}_ = {};\n", member_id, *maybe_val);
    } else if (holds_alternative<optional<double>>(s.second)) {
      auto maybe_val = get<optional<double>>(s.second);
      if (!maybe_val) {
        maybe_val = 0;
      }
      fmt::print(hdr, "    double {}_ = {};\n", member_id, *maybe_val);
    } else if (holds_alternative<optional<int8_t>>(s.second)) {
      auto maybe_val = get<optional<int8_t>>(s.second);
      if (!maybe_val) {
        maybe_val = 0;
      }
      fmt::print(hdr, "    int8_t {}_ = {};\n", member_id, *maybe_val);
    } else if (holds_alternative<optional<int16_t>>(s.second)) {
      auto maybe_val = get<optional<int16_t>>(s.second);
      if (!maybe_val) {
        maybe_val = 0;
      }
      fmt::print(hdr, "    int16_t {}_ = {};\n", member_id, *maybe_val);
    } else if (holds_alternative<optional<int32_t>>(s.second)) {
      auto maybe_val = get<optional<int32_t>>(s.second);
      if (!maybe_val) {
        maybe_val = 0;
      }
      fmt::print(hdr, "    int32_t {}_ = {};\n", member_id, *maybe_val);
    } else if (holds_alternative<optional<int64_t>>(s.second)) {
      auto maybe_val = get<optional<int64_t>>(s.second);
      if (!maybe_val) {
        maybe_val = 0;
      }
      fmt::print(hdr, "    int64_t {}_ = {};\n", member_id, *maybe_val);
    } else if (holds_alternative<optional<uint8_t>>(s.second)) {
      auto maybe_val = get<optional<uint8_t>>(s.second);
      if (!maybe_val) {
        maybe_val = 0;
      }
      fmt::print(hdr, "    uint8_t {}_ = {};\n", member_id, *maybe_val);
    } else if (holds_alternative<optional<uint16_t>>(s.second)) {
      auto maybe_val = get<optional<uint16_t>>(s.second);
      if (!maybe_val) {
        maybe_val = 0;
      }
      fmt::print(hdr, "    uint16_t {}_ = {};\n", member_id, *maybe_val);
    } else if (holds_alternative<optional<uint32_t>>(s.second)) {
      auto maybe_val = get<optional<uint32_t>>(s.second);
      if (!maybe_val) {
        maybe_val = 0;
      }
      fmt::print(hdr, "    uint32_t {}_ = {};\n", member_id, *maybe_val);
    } else if (holds_alternative<optional<uint64_t>>(s.second)) {
      auto maybe_val = get<optional<uint64_t>>(s.second);
      if (!maybe_val) {
        maybe_val = 0;
      }
      fmt::print(hdr, "    uint64_t {}_ = {};\n", member_id, *maybe_val);
    } else if (holds_alternative<SymbolRef>(s.second)) {
      auto referenced_symbol =
          escape_utf8_to_cpp_identifier(get<SymbolRef>(s.second));
      fmt::print(hdr, "    std::unique_ptr<Mutable{}> {}_;\n",
                 referenced_symbol, member_id);

      // } else if (holds_alternative<shared_ptr<Struct>>(s.second)) {
      //   auto def = get<shared_ptr<Struct>>(s.second);
      //   std::string escaped_def_id =
      //       escape_utf8_to_cpp_identifier(def->identifier);
      //   fmt::print(hdr, "    std::shared_ptr<Mutable{}> {}_;\n",
      //   escaped_def_id,
      //              member_id);
      // } else if (holds_alternative<shared_ptr<Variant>>(s.second)) {
      //   auto def = get<shared_ptr<Variant>>(s.second);
      //   std::string escaped_def_id =
      //       escape_utf8_to_cpp_identifier(def->identifier);
      //   fmt::print(hdr, "    std::shared_ptr<Mutable{}> {}_;\n",
      //   escaped_def_id,
      //              member_id);
      // } else if (holds_alternative<shared_ptr<Vector>>(s.second)) {
      //   auto def = get<shared_ptr<Vector>>(s.second);
      //   std::string escaped_def_id =
      //       escape_utf8_to_cpp_identifier(def->identifier);
      //   fmt::print(hdr, "    std::shared_ptr<Mutable{}> {}_;\n",
      //   escaped_def_id,
      //              member_id);
      // } else if (holds_alternative<shared_ptr<Map>>(s.second)) {
      //   auto def = get<shared_ptr<Map>>(s.second);
      //   std::string escaped_def_id =
      //       escape_utf8_to_cpp_identifier(def->identifier);
      //   fmt::print(hdr, "    std::shared_ptr<Mutable{}> {}_;\n",
      //   escaped_def_id,
      //              member_id);
    } else {
      abort();
    }
  }
  fmt::print(hdr,
             "    bool __foo; // to simplify codegen. will remove in future "
             "versions...\n");

  // End class declaration.
  fmt::print(hdr, "}};\n");
  fmt::print(hdr, "\n");

  // declare operators
  fmt::print(hdr, "bool operator==(const {} &lhs, const {} &rhs);\n",
             escaped_struct_id, escaped_struct_id);
  fmt::print(hdr,
             "inline bool operator!=(const {} &lhs, const {} &rhs) {{ return "
             "!(lhs == rhs); }};\n",
             escaped_struct_id, escaped_struct_id);
  fmt::print(hdr, "\n");

  // define operator==
  fmt::print(src,
             "bool operator==(const {} &lhs, const {} &rhs) {{\n  return\n",
             escaped_struct_id, escaped_struct_id);
  for (auto s : ptr->table.table_) {
    std::string member_id = escape_utf8_to_cpp_identifier(s.first);
    fmt::print(src, "    (lhs.{}() == rhs.{}()) &&\n", member_id, member_id);
  }
  fmt::print(src, "    true;\n}}\n");
  fmt::print(src, "\n");

  // define operator<<
  fmt::print(src,
             "std::ostream& operator<<(std::ostream& os, const {}& obj) {{\n",
             escaped_struct_id, escaped_struct_id);
  fmt::print(src, "  os << \"struct {} :\\n\";\n", escaped_struct_id);
  for (auto s : ptr->table.table_) {
    std::string member_id = escape_utf8_to_cpp_identifier(s.first);
    if (holds_alternative<SymbolRef>(s.second)) {
      fmt::print(src, "  os << \"  {} = \" << *obj.{}() << \"\\n\";\n",
                 member_id, member_id);
    } else {
      fmt::print(src, "  os << \"  {} = \" << obj.{}() << \"\\n\";\n",
                 member_id, member_id);
    }
  }
  fmt::print(src, "  return os;\n}}\n");
  fmt::print(src, "\n");
}

void DefineVariant(ostream& hdr, ostream& src,
                   SymbolTable::Symbol const& variant_symbol) {
  auto ptr = get<shared_ptr<Variant>>(variant_symbol.second);
  std::string escaped_variant_id =
      std::string("Mutable") +
      escape_utf8_to_cpp_identifier(variant_symbol.first);

  fmt::print(hdr, "class {} TD_FINAL_CLASS {{\n", escaped_variant_id);

  fmt::print(hdr, "  public:\n");
  // constructors
  fmt::print(hdr, "    {}() {{}};\n", escaped_variant_id);

  // setters and getters
  for (auto s : ptr->table.table_) {
    std::string member_id = escape_utf8_to_cpp_identifier(s.first);
    fmt::print(hdr,
               "    bool Is{}() const {{ return "
               "std::holds_alternative<{}_t>(value_); }};\n",
               member_id, member_id);
    if (holds_alternative<optional<bool>>(s.second)) {
      fmt::print(hdr,
                 "    bool {}() const {{ return std::get<{}_t}>(value_); }};\n",
                 member_id, member_id);
      fmt::print(hdr, "    void {}(bool _val) {{ value_ = _val; }};\n",
                 member_id);
      fmt::print(hdr, "\n");

    } else if (holds_alternative<optional<char32_t>>(s.second)) {
      fmt::print(
          hdr,
          "    char32_t {}() const {{ return std::get<{}_t>(value_); }};\n",
          member_id, member_id);
      fmt::print(hdr, "    void {}(char32_t _val) {{ value_ = _val; }};\n",
                 member_id);
      fmt::print(hdr, "\n");

    } else if (holds_alternative<optional<string>>(s.second)) {
      fmt::print(hdr,
                 "    std::string_view {}() const {{ return "
                 "std::get<{}_t>(value_); }};\n",
                 member_id, member_id);
      fmt::print(hdr,
                 "    std::string& {}() {{ return "
                 "std::get<{}_t>(value_); }};\n",
                 member_id, member_id);
      fmt::print(hdr,
                 "    void {}(std::string_view _val) {{ value_ = _val; }};\n",
                 member_id);
      fmt::print(hdr, "\n");

    } else if (holds_alternative<optional<float>>(s.second)) {
      fmt::print(hdr,
                 "    float {}() const {{ return std::get<{}_t>(value_); }};\n",
                 member_id, member_id);
      fmt::print(hdr, "    void {}(float _val) {{ value_ = _val; }};\n",
                 member_id);
      fmt::print(hdr, "\n");

    } else if (holds_alternative<optional<double>>(s.second)) {
      fmt::print(
          hdr, "    double {}() const {{ return std::get<{}_t>(value_); }};\n",
          member_id, member_id);
      fmt::print(hdr, "    void {}(double _val) {{ value_ = _val; }};\n",
                 member_id);
      fmt::print(hdr, "\n");

    } else if (holds_alternative<optional<int8_t>>(s.second)) {
      fmt::print(
          hdr, "    int8_t {}() const {{ return std::get<{}_t>(value_); }};\n",
          member_id, member_id);
      fmt::print(hdr, "    void {}(int8_t _val) {{ value_ = _val; }};\n",
                 member_id);
      fmt::print(hdr, "\n");

    } else if (holds_alternative<optional<int16_t>>(s.second)) {
      fmt::print(
          hdr, "    int16_t {}() const {{ return std::get<{}_t>(value_); }};\n",
          member_id, member_id);
      fmt::print(hdr, "    void {}(int16_t _val) {{ value_ = _val; }};\n",
                 member_id);
      fmt::print(hdr, "\n");

    } else if (holds_alternative<optional<int32_t>>(s.second)) {
      fmt::print(
          hdr, "    int32_t {}() const {{ return std::get<{}_t>(value_); }};\n",
          member_id, member_id);
      fmt::print(hdr, "    void {}(int32_t _val) {{ value_ = _val; }};\n",
                 member_id);
      fmt::print(hdr, "\n");

    } else if (holds_alternative<optional<int64_t>>(s.second)) {
      fmt::print(
          hdr, "    int64_t {}() const {{ return std::get<{}_t>(value_); }};\n",
          member_id, member_id);
      fmt::print(hdr, "    void {}(int64_t _val) {{ value_ = _val; }};\n",
                 member_id);
      fmt::print(hdr, "\n");

    } else if (holds_alternative<optional<uint8_t>>(s.second)) {
      fmt::print(
          hdr, "    uint8_t {}() const {{ return std::get<{}_t>(value_); }};\n",
          member_id, member_id);
      fmt::print(hdr, "    void {}(uint8_t _val) {{ value_ = _val; }};\n",
                 member_id);
      fmt::print(hdr, "\n");

    } else if (holds_alternative<optional<uint16_t>>(s.second)) {
      fmt::print(
          hdr,
          "    uint16_t {}() const {{ return std::get<{}_t>(value_); }};\n",
          member_id, member_id);
      fmt::print(hdr, "    void {}(uint16_t _val) {{ value_ = _val; }};\n",
                 member_id);
      fmt::print(hdr, "\n");

    } else if (holds_alternative<optional<uint32_t>>(s.second)) {
      fmt::print(
          hdr,
          "    uint32_t {}() const {{ return std::get<{}_t>(value_); }};\n",
          member_id, member_id);
      fmt::print(hdr, "    void {}(uint32_t _val) {{ value_ = _val; }};\n",
                 member_id);
      fmt::print(hdr, "\n");

    } else if (holds_alternative<optional<uint64_t>>(s.second)) {
      fmt::print(
          hdr,
          "    uint64_t {}() const {{ return std::get<{}_t>(value_); }};\n",
          member_id, member_id);
      fmt::print(hdr, "    void {}(uint64_t _val) {{ value_ = _val; }};\n",
                 member_id);
      fmt::print(hdr, "\n");

    } else if (holds_alternative<SymbolRef>(s.second)) {
      auto referenced_symbol =
          escape_utf8_to_cpp_identifier(get<SymbolRef>(s.second));
      fmt::print(hdr,
                 "    std::unique_ptr<Mutable{}>& {}() {{ return "
                 "std::get<{}_t>(value_); }};\n",
                 referenced_symbol, member_id, member_id);
      fmt::print(hdr,
                 "    const std::unique_ptr<Mutable{}>& {}() const {{ return "
                 "std::get<{}_t>(value_); }};\n",
                 referenced_symbol, member_id, member_id);
      fmt::print(hdr,
                 "    void {}(std::unique_ptr<Mutable{}> _val) {{ value_ = "
                 "std::move(_val); }};\n",
                 member_id, referenced_symbol);
      fmt::print(hdr, "\n");

      // } else if (holds_alternative<shared_ptr<Struct>>(s.second)) {
      //   auto def = get<shared_ptr<Struct>>(s.second);
      //   std::string escaped_def_id =
      //       escape_utf8_to_cpp_identifier(def->identifier);
      //   fmt::print(hdr,
      //              "    std::shared_ptr<{}> {}() {{ return "
      //              "std::get<{}_t>(value_); }};\n",
      //              escaped_def_id, member_id, member_id);
      //   fmt::print(hdr,
      //              "    void {}(std::shared_ptr<{}> _val) {{ value_ =
      //              "
      //              "_val; }};\n",
      //              member_id, escaped_def_id);
      //   fmt::print(hdr, "\n");

      // } else if (holds_alternative<shared_ptr<Variant>>(s.second)) {
      //   auto def = get<shared_ptr<Variant>>(s.second);
      //   std::string escaped_def_id =
      //       escape_utf8_to_cpp_identifier(def->identifier);
      //   fmt::print(hdr,
      //              "    std::shared_ptr<{}> {}() {{ return "
      //              "std::get<{}_t>(value_); }};\n",
      //              escaped_def_id, member_id, member_id);
      //   fmt::print(hdr,
      //              "    void {}(std::shared_ptr<{}> _val) {{ value_ =
      //              "
      //              "_val; }};\n",
      //              member_id, escaped_def_id);
      //   fmt::print(hdr, "\n");

      // } else if (holds_alternative<shared_ptr<Vector>>(s.second)) {
      //   auto def = get<shared_ptr<Vector>>(s.second);
      //   std::string escaped_def_id =
      //       escape_utf8_to_cpp_identifier(def->identifier);
      //   fmt::print(hdr,
      //              "    std::shared_ptr<{}> {}() {{ return "
      //              "std::get<{}_t>(value_); }};\n",
      //              escaped_def_id, member_id, member_id);
      //   fmt::print(hdr,
      //              "    void {}(std::shared_ptr<{}> _val) {{ value_ =
      //              "
      //              "_val; }};\n",
      //              member_id, escaped_def_id);
      //   fmt::print(hdr, "\n");

      // } else if (holds_alternative<shared_ptr<Map>>(s.second)) {
      //   auto def = get<shared_ptr<Map>>(s.second);
      //   std::string escaped_def_id =
      //       escape_utf8_to_cpp_identifier(def->identifier);
      //   fmt::print(hdr,
      //              "    std::shared_ptr<{}> {}() {{ return "
      //              "std::get<{}_t>(value_); }};\n",
      //              escaped_def_id, member_id, member_id);
      //   fmt::print(hdr,
      //              "    void {}(std::shared_ptr<{}> _val) {{ value_ =
      //              "
      //              "_val; }};\n",
      //              member_id, escaped_def_id);
      //   fmt::print(hdr, "\n");

    } else {
      abort();
    }
  }

  fmt::print(hdr,
             "    bool isEqual(const {} &rhs) const {{ "
             "return value_ == rhs.value_; }}\n\n",
             escaped_variant_id);

  fmt::print(hdr,
             "    friend std::ostream& operator<<(std::ostream& os, const "
             "{}& obj);\n",
             escaped_variant_id);
  fmt::print(hdr, "\n");

  fmt::print(hdr, "  private:\n");

  for (auto s : ptr->table.table_) {
    std::string member_id = escape_utf8_to_cpp_identifier(s.first);
    if (holds_alternative<optional<bool>>(s.second)) {
      fmt::print(hdr, "    typedef bool {}_t;\n", member_id);
    } else if (holds_alternative<optional<char32_t>>(s.second)) {
      fmt::print(hdr, "    typedef char32_t {}_t;\n", member_id);
    } else if (holds_alternative<optional<string>>(s.second)) {
      fmt::print(hdr, "    typedef std::string const& {}_t;\n", member_id);
    } else if (holds_alternative<optional<float>>(s.second)) {
      fmt::print(hdr, "    typedef float {}_t;\n", member_id);
    } else if (holds_alternative<optional<double>>(s.second)) {
      fmt::print(hdr, "    typedef double {}_t;\n", member_id);
    } else if (holds_alternative<optional<int8_t>>(s.second)) {
      fmt::print(hdr, "    typedef int8_t {}_t;\n", member_id);
    } else if (holds_alternative<optional<int16_t>>(s.second)) {
      fmt::print(hdr, "    typedef int16_t {}_t;\n", member_id);
    } else if (holds_alternative<optional<int32_t>>(s.second)) {
      fmt::print(hdr, "    typedef int32_t {}_t;\n", member_id);
    } else if (holds_alternative<optional<int64_t>>(s.second)) {
      fmt::print(hdr, "    typedef int64_t {}_t;\n", member_id);
    } else if (holds_alternative<optional<uint8_t>>(s.second)) {
      fmt::print(hdr, "    typedef uint8_t {}_t;\n", member_id);
    } else if (holds_alternative<optional<uint16_t>>(s.second)) {
      fmt::print(hdr, "    typedef uint16_t {}_t;\n", member_id);
    } else if (holds_alternative<optional<uint32_t>>(s.second)) {
      fmt::print(hdr, "    typedef uint32_t {}_t;\n", member_id);
    } else if (holds_alternative<optional<uint64_t>>(s.second)) {
      fmt::print(hdr, "    typedef uint64_t {}_t;\n", member_id);
    } else if (holds_alternative<SymbolRef>(s.second)) {
      auto referenced_symbol =
          escape_utf8_to_cpp_identifier(get<SymbolRef>(s.second));
      fmt::print(hdr, "    typedef std::unique_ptr<Mutable{}> {}_t;\n",
                 referenced_symbol, member_id);
      // } else if (holds_alternative<shared_ptr<Struct>>(s.second)) {
      //   auto def = get<shared_ptr<Struct>>(s.second);
      //   std::string escaped_def_id =
      //       escape_utf8_to_cpp_identifier(def->identifier);
      //   fmt::print(hdr, "    typedef std::shared_ptr<{}> {}_t;\n",
      //              escaped_def_id, member_id);
      // } else if (holds_alternative<shared_ptr<Variant>>(s.second)) {
      //   auto def = get<shared_ptr<Variant>>(s.second);
      //   std::string escaped_def_id =
      //       escape_utf8_to_cpp_identifier(def->identifier);
      //   fmt::print(hdr, "    typedef std::shared_ptr<{}> {}_t;\n",
      //              escaped_def_id, member_id);
      // } else if (holds_alternative<shared_ptr<Vector>>(s.second)) {
      //   auto def = get<shared_ptr<Vector>>(s.second);
      //   std::string escaped_def_id =
      //       escape_utf8_to_cpp_identifier(def->identifier);
      //   fmt::print(hdr, "    typedef std::shared_ptr<{}> {}_t;\n",
      //              escaped_def_id, member_id);
      // } else if (holds_alternative<shared_ptr<Map>>(s.second)) {
      //   auto def = get<shared_ptr<Map>>(s.second);
      //   std::string escaped_def_id =
      //       escape_utf8_to_cpp_identifier(def->identifier);
      //   fmt::print(hdr, "    typedef std::shared_ptr<{}> {}_t;\n",
      //              escaped_def_id, member_id);
    } else {
      abort();
    }
  }
  fmt::print(hdr, "\n");

  fmt::print(hdr, "  std::variant<\n");
  bool first = true;
  for (auto s : ptr->table.table_) {
    std::string member_id = escape_utf8_to_cpp_identifier(s.first);
    if (first) {
      fmt::print(hdr, "      {}_t", member_id);
    } else {
      fmt::print(hdr, ",\n      {}_t", member_id);
    }
    first = false;
  }
  fmt::print(hdr, "\n");
  fmt::print(hdr, "  > value_;\n");
  fmt::print(hdr, "\n");

  // End class declaration.
  fmt::print(hdr, "}};\n");
  fmt::print(hdr, "\n");

  // declare operators
  fmt::print(hdr, "bool operator==(const {} &lhs, const {} &rhs);\n",
             escaped_variant_id, escaped_variant_id);
  fmt::print(hdr,
             "inline bool operator!=(const {} &lhs, const {} "
             "&rhs) {{ return "
             "!(lhs == rhs); }};\n",
             escaped_variant_id, escaped_variant_id);
  fmt::print(hdr, "\n");

  // define operator==
  fmt::print(src, "bool operator==(const {} &lhs, const {} &rhs) {{\n",
             escaped_variant_id, escaped_variant_id);
  fmt::print(src, "  return lhs.isEqual(rhs);\n");
  fmt::print(src, "}}\n");
  fmt::print(src, "\n");

  // define operator<<
  fmt::print(src,
             "std::ostream& operator<<(std::ostream& os, const {}& obj) {{\n",
             escaped_variant_id, escaped_variant_id);
  fmt::print(src, "  os << \"variant {} :\\n\";\n", escaped_variant_id);
  fmt::print(src, "  os << \"  something.\\n\";\n");
  fmt::print(src, "  return os;\n}}\n");
  fmt::print(src, "\n");
}

void DefineVector(ostream& hdr, ostream& src,
                  SymbolTable::Symbol const& vector_symbol) {
  auto ptr = get<shared_ptr<Vector>>(vector_symbol.second);
  std::string escaped_vector_id =
      std::string("Mutable") +
      escape_utf8_to_cpp_identifier(vector_symbol.first);

  auto cpp_type = GetCppType(vector_symbol);

  fmt::print(hdr, "class {} : public std::vector<{}> {{\n", escaped_vector_id,
             cpp_type.full_type_id);
  fmt::print(hdr, "\n");

  fmt::print(hdr, "  public:\n");
  // constructors
  fmt::print(hdr, "    {}() {{}};\n", escaped_vector_id);
  fmt::print(hdr, "\n");

  fmt::print(hdr,
             "    friend std::ostream& operator<<(std::ostream& os, const "
             "{}& obj);\n",
             escaped_vector_id);

  fmt::print(hdr, "\n");
  fmt::print(hdr, "  private:\n");
  fmt::print(hdr, "\n");

  // End class declaration.
  fmt::print(hdr, "}};\n");
  fmt::print(hdr, "\n");

  // define operator<<
  fmt::print(src,
             "std::ostream& operator<<(std::ostream& os, const {}& obj) {{\n",
             escaped_vector_id, escaped_vector_id);
  fmt::print(src, "  os << \"vector {} :\\n\";\n", escaped_vector_id);
  fmt::print(src, "  os << \"  something.\\n\";\n");
  fmt::print(src, "  return os;\n}}\n");
  fmt::print(src, "\n");
}

void DefineMap(ostream& hdr, ostream& src,
               SymbolTable::Symbol const& map_symbol) {
  auto ptr = get<shared_ptr<Map>>(map_symbol.second);
  std::string escaped_map_id =
      std::string("Mutable") + escape_utf8_to_cpp_identifier(map_symbol.first);

  auto cpp_key_type = GetCppType(td::SymbolTable::Symbol("", ptr->key_type));
  auto cpp_value_type = GetCppType(td::SymbolTable::Symbol("", ptr->value_type));


  fmt::print(hdr, "class {} : public std::map<{}, {}> {{\n", escaped_map_id,
             cpp_key_type.full_type_id, cpp_value_type.full_type_id);
  fmt::print(hdr, "\n");

  fmt::print(hdr, "  public:\n");
  // constructors
  fmt::print(hdr, "    {}() {{}};\n", escaped_map_id);
  fmt::print(hdr, "\n");

  fmt::print(hdr,
             "    friend std::ostream& operator<<(std::ostream& os, const "
             "{}& obj);\n",
             escaped_map_id);

  fmt::print(hdr, "\n");
  fmt::print(hdr, "  private:\n");
  fmt::print(hdr, "\n");

  // End class declaration.
  fmt::print(hdr, "}};\n");
  fmt::print(hdr, "\n");

  // define operator<<
  fmt::print(src,
             "std::ostream& operator<<(std::ostream& os, const {}& obj) {{\n",
             escaped_map_id, escaped_map_id);
  fmt::print(src, "  os << \"map {} :\\n\";\n", escaped_map_id);
  fmt::print(src, "  os << \"  something.\\n\";\n");
  fmt::print(src, "  return os;\n}}\n");
  fmt::print(src, "\n");
}

string HeaderGuard(filesystem::path source_filename) {
  string hdr_guard = source_filename.string() + "_H__";
  replace(hdr_guard.begin(), hdr_guard.end(), '.', '_');
  replace(hdr_guard.begin(), hdr_guard.end(), ' ', '_');
  replace(hdr_guard.begin(), hdr_guard.end(), '/', '_');
  transform(hdr_guard.begin(), hdr_guard.end(), hdr_guard.begin(), ::toupper);
  return hdr_guard;
}

void CodegenCpp::Generate() {
  filesystem::path hdr_filename = source_filename_ + ".h";
  filesystem::path source_filename = source_filename_ + ".cpp";
  auto hdr_file = out_path_->OpenOutputFile(hdr_filename);
  hdr_file->Open();

  auto src_file = out_path_->OpenOutputFile(source_filename);
  src_file->Open();

  // begin hdr guard
  string hdr_guard = HeaderGuard(source_filename.string());
  fmt::print(hdr_file->OStream(), "#ifndef {}\n", hdr_guard);
  fmt::print(hdr_file->OStream(), "#define {}\n\n", hdr_guard);

  // hdr includes
  fmt::print(hdr_file->OStream(), "#include <cstdint>\n");
  fmt::print(hdr_file->OStream(), "#include <map>\n");
  fmt::print(hdr_file->OStream(), "#include <memory>\n");
  fmt::print(hdr_file->OStream(), "#include <ostream>\n");
  fmt::print(hdr_file->OStream(), "#include <string>\n");
  fmt::print(hdr_file->OStream(), "#include <variant>\n");
  fmt::print(hdr_file->OStream(), "#include <vector>\n");

  // hdr macros
  fmt::print(hdr_file->OStream(), "{}\n", StructAlignmentMacro());

  // source includes
  fmt::print(src_file->OStream(), "#include \"{}\"\n",
             hdr_file->GetPath().filename().string());
  fmt::print(src_file->OStream(), "\n");

  // forward declare everything first.

  // forward declare structs and variants
  fmt::print(hdr_file->OStream(), "// struct forward declarations\n");
  for (auto symbol : parser_->symbols2_.table_) {
    // declare everything first.
    if (holds_alternative<shared_ptr<td::Struct>>(symbol.second) ||
        holds_alternative<shared_ptr<td::Variant>>(symbol.second) ||
        holds_alternative<shared_ptr<td::Vector>>(symbol.second) ||
        holds_alternative<shared_ptr<td::Map>>(symbol.second)) {
      std::string escaped_id = escape_utf8_to_cpp_identifier(symbol.first);
      fmt::print(hdr_file->OStream(), "class Mutable{};\n", escaped_id);
    }
  }

  fmt::print(hdr_file->OStream(), "\n");

  // value declarations
  fmt::print(hdr_file->OStream(), "// value declarations\n");
  for (auto symbol : parser_->symbols2_.table_) {
    // declare everything first.
    if (holds_alternative<shared_ptr<td::Struct>>(symbol.second) ||
        holds_alternative<shared_ptr<td::Variant>>(symbol.second) ||
        holds_alternative<shared_ptr<td::Vector>>(symbol.second) ||
        holds_alternative<shared_ptr<td::Map>>(symbol.second)) {
      continue;
    }
    DeclarePrimitive(hdr_file->OStream(), symbol);
    DefinePrimitive(src_file->OStream(), symbol);
  }

  fmt::print(hdr_file->OStream(), "\n");
  fmt::print(src_file->OStream(), "\n");

  // declare structs
  for (auto symbol : parser_->symbols2_.table_) {
    if (holds_alternative<shared_ptr<td::Struct>>(symbol.second)) {
      DefineStruct(hdr_file->OStream(), src_file->OStream(), symbol);
      fmt::print(hdr_file->OStream(), "\n");
    } else if (holds_alternative<shared_ptr<td::Variant>>(symbol.second)) {
      DefineVariant(hdr_file->OStream(), src_file->OStream(), symbol);
      fmt::print(hdr_file->OStream(), "\n");
    } else if (holds_alternative<shared_ptr<td::Vector>>(symbol.second)) {
      DefineVector(hdr_file->OStream(), src_file->OStream(), symbol);
      fmt::print(hdr_file->OStream(), "\n");
    } else if (holds_alternative<shared_ptr<td::Map>>(symbol.second)) {
      DefineMap(hdr_file->OStream(), src_file->OStream(), symbol);
      fmt::print(hdr_file->OStream(), "\n");
    }
  }

  fmt::print(hdr_file->OStream(), "\n");

  // end hdr gueard
  fmt::print(hdr_file->OStream(), "\n#endif  // {}\n", hdr_guard);

  hdr_file->Close();
  src_file->Close();
}

}  // namespace td
