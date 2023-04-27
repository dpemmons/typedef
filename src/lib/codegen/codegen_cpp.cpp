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

void DeclarePrimitive(ostream& os, SymbolTable::Symbol const& s) {
  std::string escaped_id = escape_utf8_to_cpp_identifier(s.first);
  if (holds_alternative<optional<bool>>(s.second)) {
    fmt::print(os, "extern bool {};\n", escaped_id);
  } else if (holds_alternative<optional<char32_t>>(s.second)) {
    fmt::print(os, "extern char32_t {};\n", escaped_id);
  } else if (holds_alternative<optional<string>>(s.second)) {
    fmt::print(os, "extern std::string {};\n", escaped_id);
  } else if (holds_alternative<optional<float>>(s.second)) {
    fmt::print(os, "extern float {};\n", escaped_id);
  } else if (holds_alternative<optional<double>>(s.second)) {
    fmt::print(os, "extern double {};\n", escaped_id);
  } else if (holds_alternative<optional<int8_t>>(s.second)) {
    fmt::print(os, "extern int8_t {};\n", escaped_id);
  } else if (holds_alternative<optional<int16_t>>(s.second)) {
    fmt::print(os, "extern int16_t {};\n", escaped_id);
  } else if (holds_alternative<optional<int32_t>>(s.second)) {
    fmt::print(os, "extern int32_t {};\n", escaped_id);
  } else if (holds_alternative<optional<int64_t>>(s.second)) {
    fmt::print(os, "extern int64_t {};\n", escaped_id);
  } else if (holds_alternative<optional<uint8_t>>(s.second)) {
    fmt::print(os, "extern uint8_t {};\n", escaped_id);
  } else if (holds_alternative<optional<uint16_t>>(s.second)) {
    fmt::print(os, "extern uint16_t {};\n", escaped_id);
  } else if (holds_alternative<optional<uint32_t>>(s.second)) {
    fmt::print(os, "extern uint32_t {};\n", escaped_id);
  } else if (holds_alternative<optional<uint64_t>>(s.second)) {
    fmt::print(os, "extern uint64_t {};\n", escaped_id);
  } else {
    abort();
  }
}

void DefinePrimitive(ostream& os, SymbolTable::Symbol const& s) {
  std::string escaped_id = escape_utf8_to_cpp_identifier(s.first);
  if (holds_alternative<optional<bool>>(s.second)) {
    auto maybe_val = get<optional<bool>>(s.second);
    if (maybe_val) {
      fmt::print(os, "bool {} = {};\n", escaped_id, *maybe_val);
    } else {
      fmt::print(os, "bool {};\n", escaped_id);
    }
  } else if (holds_alternative<optional<char32_t>>(s.second)) {
    auto maybe_val = get<optional<char32_t>>(s.second);
    if (maybe_val) {
      wstring_convert<codecvt_utf8<char32_t>, char32_t> converter;
      fmt::print(os, "char32_t {} = *(char32_t*)\"{}\";\n", escaped_id,
                 converter.to_bytes(*maybe_val));
    } else {
      fmt::print(os, "char32_t {} = 0;\n", escaped_id);
    }
  } else if (holds_alternative<optional<string>>(s.second)) {
    auto maybe_val = get<optional<string>>(s.second);
    if (maybe_val) {
      fmt::print(os, "std::string {} = R\"LITERAL({})LITERAL\";\n", escaped_id,
                 *maybe_val);
    } else {
      fmt::print(os, "std::string {};\n", escaped_id);
    }
  } else if (holds_alternative<optional<float>>(s.second)) {
    auto maybe_val = get<optional<float>>(s.second);
    if (maybe_val) {
      fmt::print(os, "float {} = {};\n", escaped_id, *maybe_val);
    } else {
      fmt::print(os, "float {};\n", escaped_id);
    }
  } else if (holds_alternative<optional<double>>(s.second)) {
    auto maybe_val = get<optional<double>>(s.second);
    if (maybe_val) {
      fmt::print(os, "double {} = {};\n", escaped_id, *maybe_val);
    } else {
      fmt::print(os, "double {};\n", escaped_id);
    }
  } else if (holds_alternative<optional<int8_t>>(s.second)) {
    auto maybe_val = get<optional<int8_t>>(s.second);
    if (maybe_val) {
      fmt::print(os, "int8_t {} = {};\n", escaped_id, *maybe_val);
    } else {
      fmt::print(os, "int8_t {};\n", escaped_id);
    }
  } else if (holds_alternative<optional<int16_t>>(s.second)) {
    auto maybe_val = get<optional<int16_t>>(s.second);
    if (maybe_val) {
      fmt::print(os, "int16_t {} = {};\n", escaped_id, *maybe_val);
    } else {
      fmt::print(os, "int16_t {};\n", escaped_id);
    }
  } else if (holds_alternative<optional<int32_t>>(s.second)) {
    auto maybe_val = get<optional<int32_t>>(s.second);
    if (maybe_val) {
      fmt::print(os, "int32_t {} = {};\n", escaped_id, *maybe_val);
    } else {
      fmt::print(os, "int32_t {};\n", escaped_id);
    }
  } else if (holds_alternative<optional<int64_t>>(s.second)) {
    auto maybe_val = get<optional<int64_t>>(s.second);
    if (maybe_val) {
      fmt::print(os, "int64_t {} = {};\n", escaped_id, *maybe_val);
    } else {
      fmt::print(os, "int64_t {};\n", escaped_id);
    }
  } else if (holds_alternative<optional<uint8_t>>(s.second)) {
    auto maybe_val = get<optional<uint8_t>>(s.second);
    if (maybe_val) {
      fmt::print(os, "uint8_t {} = {};\n", escaped_id, *maybe_val);
    } else {
      fmt::print(os, "uint8_t {};\n", escaped_id);
    }
  } else if (holds_alternative<optional<uint16_t>>(s.second)) {
    auto maybe_val = get<optional<uint16_t>>(s.second);
    if (maybe_val) {
      fmt::print(os, "uint16_t {} = {};\n", escaped_id, *maybe_val);
    } else {
      fmt::print(os, "uint16_t {};\n", escaped_id);
    }
  } else if (holds_alternative<optional<uint32_t>>(s.second)) {
    auto maybe_val = get<optional<uint32_t>>(s.second);
    if (maybe_val) {
      fmt::print(os, "uint32_t {} = {};\n", escaped_id, *maybe_val);
    } else {
      fmt::print(os, "uint32_t {};\n", escaped_id);
    }
  } else if (holds_alternative<optional<uint64_t>>(s.second)) {
    auto maybe_val = get<optional<uint64_t>>(s.second);
    if (maybe_val) {
      fmt::print(os, "uint64_t {} = {};\n", escaped_id, *maybe_val);
    } else {
      fmt::print(os, "uint64_t {};\n", escaped_id);
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

  size_t total_size = 0;

  fmt::print(hdr, "  public:\n");

  // -------------------------------------------------
  // constructor
  // -------------------------------------------------
  fmt::print(hdr, "    {}() {{}};\n", escaped_struct_id);

  fmt::print(hdr, "    {}(\n", escaped_struct_id);
  for (auto s : ptr->table.table_) {
    std::string member_id = escape_utf8_to_cpp_identifier(s.first);
    if (holds_alternative<optional<bool>>(s.second)) {
      fmt::print(hdr, "      bool {},\n", member_id);
    } else if (holds_alternative<optional<char32_t>>(s.second)) {
      fmt::print(hdr, "      char32_t {},\n", member_id);
    } else if (holds_alternative<optional<string>>(s.second)) {
      fmt::print(hdr, "      std::string const& {},\n", member_id);
    } else if (holds_alternative<optional<float>>(s.second)) {
      fmt::print(hdr, "      float {},\n", member_id);
    } else if (holds_alternative<optional<double>>(s.second)) {
      fmt::print(hdr, "      double {},\n", member_id);
    } else if (holds_alternative<optional<int8_t>>(s.second)) {
      fmt::print(hdr, "      int8_t {},\n", member_id);
    } else if (holds_alternative<optional<int16_t>>(s.second)) {
      fmt::print(hdr, "      int16_t {},\n", member_id);
    } else if (holds_alternative<optional<int32_t>>(s.second)) {
      fmt::print(hdr, "      int32_t {},\n", member_id);
    } else if (holds_alternative<optional<int64_t>>(s.second)) {
      fmt::print(hdr, "      int64_t {},\n", member_id);
    } else if (holds_alternative<optional<uint8_t>>(s.second)) {
      fmt::print(hdr, "      uint8_t {},\n", member_id);
    } else if (holds_alternative<optional<uint16_t>>(s.second)) {
      fmt::print(hdr, "      uint16_t {},\n", member_id);
    } else if (holds_alternative<optional<uint32_t>>(s.second)) {
      fmt::print(hdr, "      uint32_t {},\n", member_id);
    } else if (holds_alternative<optional<uint64_t>>(s.second)) {
      fmt::print(hdr, "      uint64_t {},\n", member_id);
    } else {
      abort();
    }
  }
  fmt::print(hdr, "      bool __foo = false) :\n");
  for (auto s : ptr->table.table_) {
    std::string member_id = escape_utf8_to_cpp_identifier(s.first);
    std::string suffixed_member_id =
        escape_utf8_to_cpp_identifier(s.first) + "_";
    fmt::print(hdr, "      {}({}),\n", suffixed_member_id, member_id);
    // TODO(dpemmons) build out the constructor.
  }
  fmt::print(hdr, "      __foo(false) {{}}\n");

  fmt::print(hdr, "\n");

  // -------------------------------------------------
  // Setters and Getters.
  // -------------------------------------------------
  for (auto s : ptr->table.table_) {
    std::string member_id = escape_utf8_to_cpp_identifier(s.first);
    std::string suffixed_member_id =
        escape_utf8_to_cpp_identifier(s.first) + "_";
    if (holds_alternative<optional<bool>>(s.second)) {
      fmt::print(hdr, "    bool {}() const {{ return {}; }}\n", member_id,
                 suffixed_member_id);
      fmt::print(hdr, "    void {}(bool val) {{ {} = val; }}\n", member_id,
                 suffixed_member_id);
      fmt::print(hdr, "\n");
    } else if (holds_alternative<optional<char32_t>>(s.second)) {
      fmt::print(hdr, "    char32_t {}() const {{ return {}; }}\n", member_id,
                 suffixed_member_id);
      fmt::print(hdr, "    void {}(char32_t val) {{ {} = val; }}\n", member_id,
                 suffixed_member_id);
      fmt::print(hdr, "\n");

    } else if (holds_alternative<optional<string>>(s.second)) {
      fmt::print(hdr, "    std::string_view {}() const {{ return {}; }}\n",
                 member_id, suffixed_member_id);
      fmt::print(hdr,
                 "    void {}(std::string_view const& val) {{ {} = val; }}\n",
                 member_id, suffixed_member_id);
      fmt::print(hdr, "\n");

    } else if (holds_alternative<optional<float>>(s.second)) {
      fmt::print(hdr, "    float {}() const {{ return {}; }}\n", member_id,
                 suffixed_member_id);
      fmt::print(hdr, "    void {}(float val) {{ {} = val; }}\n", member_id,
                 suffixed_member_id);
      fmt::print(hdr, "\n");

    } else if (holds_alternative<optional<double>>(s.second)) {
      fmt::print(hdr, "    double {}() const {{ return {}; }}\n", member_id,
                 suffixed_member_id);
      fmt::print(hdr, "    void {}(double val) {{ {} = val; }}\n", member_id,
                 suffixed_member_id);
      fmt::print(hdr, "\n");

    } else if (holds_alternative<optional<int8_t>>(s.second)) {
      fmt::print(hdr, "    int8_t {}() const {{ return {}; }}\n", member_id,
                 suffixed_member_id);
      fmt::print(hdr, "    void {}(int8_t val) {{ {} = val; }}\n", member_id,
                 suffixed_member_id);
      fmt::print(hdr, "\n");

    } else if (holds_alternative<optional<int16_t>>(s.second)) {
      fmt::print(hdr, "    int16_t {}() const {{ return {}; }}\n", member_id,
                 suffixed_member_id);
      fmt::print(hdr, "    void {}(int16_t val) {{ {} = val; }}\n", member_id,
                 suffixed_member_id);
      fmt::print(hdr, "\n");

    } else if (holds_alternative<optional<int32_t>>(s.second)) {
      fmt::print(hdr, "    int32_t {}() const {{ return {}; }}\n", member_id,
                 suffixed_member_id);
      fmt::print(hdr, "    void {}(int32_t val) {{ {} = val; }}\n", member_id,
                 suffixed_member_id);
      fmt::print(hdr, "\n");

    } else if (holds_alternative<optional<int64_t>>(s.second)) {
      fmt::print(hdr, "    int64_t {}() const {{ return {}; }}\n", member_id,
                 suffixed_member_id);
      fmt::print(hdr, "    void {}(int64_t val) {{ {} = val; }}\n", member_id,
                 suffixed_member_id);
      fmt::print(hdr, "\n");

    } else if (holds_alternative<optional<uint8_t>>(s.second)) {
      fmt::print(hdr, "    uint8_t {}() const {{ return {}; }}\n", member_id,
                 suffixed_member_id);
      fmt::print(hdr, "    void {}(uint8_t val) {{ {} = val; }}\n", member_id,
                 suffixed_member_id);
      fmt::print(hdr, "\n");

    } else if (holds_alternative<optional<uint16_t>>(s.second)) {
      fmt::print(hdr, "    uint16_t {}() const {{ return {}; }}\n", member_id,
                 suffixed_member_id);
      fmt::print(hdr, "    void {}(uint16_t val) {{ {} = val; }}\n", member_id,
                 suffixed_member_id);
      fmt::print(hdr, "\n");

    } else if (holds_alternative<optional<uint32_t>>(s.second)) {
      fmt::print(hdr, "    uint32_t {}() const {{ return {}; }}\n", member_id,
                 suffixed_member_id);
      fmt::print(hdr, "    void {}(uint32_t val) {{ {} = val; }}\n", member_id,
                 suffixed_member_id);
      fmt::print(hdr, "\n");

    } else if (holds_alternative<optional<uint64_t>>(s.second)) {
      fmt::print(hdr, "    uint64_t {}() const {{ return {}; }}\n", member_id,
                 suffixed_member_id);
      fmt::print(hdr, "    void {}(uint64_t val) {{ {} = val; }}\n", member_id,
                 suffixed_member_id);
      fmt::print(hdr, "\n");

    } else {
      abort();
    }
  }

  fmt::print(
      hdr,
      "    friend std::ostream& operator<<(std::ostream& os, const {}& obj);\n",
      escaped_struct_id);

  fmt::print(hdr, "\n");

  fmt::print(hdr, "  private:\n");

  // -------------------------------------------------
  // private member declarations.
  // -------------------------------------------------
  for (auto s : ptr->table.table_) {
    std::string suffixed_member_id =
        escape_utf8_to_cpp_identifier(s.first) + "_";
    if (holds_alternative<optional<bool>>(s.second)) {
      auto maybe_val = get<optional<bool>>(s.second);
      if (!maybe_val) {
        maybe_val = false;
      }
      fmt::print(hdr, "    bool {} = {};\n", suffixed_member_id, *maybe_val);
      total_size += sizeof(bool);
    } else if (holds_alternative<optional<char32_t>>(s.second)) {
      auto maybe_val = get<optional<char32_t>>(s.second);
      if (maybe_val) {
        wstring_convert<codecvt_utf8<char32_t>, char32_t> converter;
        fmt::print(hdr, "    char32_t {} = *(char32_t*)\"{}\";\n",
                   suffixed_member_id, converter.to_bytes(*maybe_val));
      } else {
        fmt::print(hdr, "    char32_t {} = 0;\n", suffixed_member_id);
      }
      total_size += sizeof(char32_t);
    } else if (holds_alternative<optional<string>>(s.second)) {
      auto maybe_val = get<optional<std::string>>(s.second);
      if (maybe_val && maybe_val->size() > 0) {
        fmt::print(hdr, "    std::string {} = R\"LITERAL({})LITERAL\";\n",
                   suffixed_member_id, *maybe_val);
      } else {
        fmt::print(hdr, "    std::string {};\n", suffixed_member_id);
      }
    } else if (holds_alternative<optional<float>>(s.second)) {
      auto maybe_val = get<optional<float>>(s.second);
      if (!maybe_val) {
        maybe_val = 0;
      }
      fmt::print(hdr, "    float {} = {};\n", suffixed_member_id, *maybe_val);
      total_size += sizeof(float);
    } else if (holds_alternative<optional<double>>(s.second)) {
      auto maybe_val = get<optional<double>>(s.second);
      if (!maybe_val) {
        maybe_val = 0;
      }
      fmt::print(hdr, "    double {} = {};\n", suffixed_member_id, *maybe_val);
      total_size += sizeof(double);
    } else if (holds_alternative<optional<int8_t>>(s.second)) {
      auto maybe_val = get<optional<int8_t>>(s.second);
      if (!maybe_val) {
        maybe_val = 0;
      }
      fmt::print(hdr, "    int8_t {} = {};\n", suffixed_member_id, *maybe_val);
      total_size += sizeof(int8_t);
    } else if (holds_alternative<optional<int16_t>>(s.second)) {
      auto maybe_val = get<optional<int16_t>>(s.second);
      if (!maybe_val) {
        maybe_val = 0;
      }
      fmt::print(hdr, "    int16_t {} = {};\n", suffixed_member_id, *maybe_val);
      total_size += sizeof(int16_t);
    } else if (holds_alternative<optional<int32_t>>(s.second)) {
      auto maybe_val = get<optional<int32_t>>(s.second);
      if (!maybe_val) {
        maybe_val = 0;
      }
      fmt::print(hdr, "    int32_t {} = {};\n", suffixed_member_id, *maybe_val);
      total_size += sizeof(int32_t);
    } else if (holds_alternative<optional<int64_t>>(s.second)) {
      auto maybe_val = get<optional<int64_t>>(s.second);
      if (!maybe_val) {
        maybe_val = 0;
      }
      fmt::print(hdr, "    int64_t {} = {};\n", suffixed_member_id, *maybe_val);
      total_size += sizeof(int64_t);
    } else if (holds_alternative<optional<uint8_t>>(s.second)) {
      auto maybe_val = get<optional<uint8_t>>(s.second);
      if (!maybe_val) {
        maybe_val = 0;
      }
      fmt::print(hdr, "    uint8_t {} = {};\n", suffixed_member_id, *maybe_val);
      total_size += sizeof(uint8_t);
    } else if (holds_alternative<optional<uint16_t>>(s.second)) {
      auto maybe_val = get<optional<uint16_t>>(s.second);
      if (!maybe_val) {
        maybe_val = 0;
      }
      fmt::print(hdr, "    uint16_t {} = {};\n", suffixed_member_id,
                 *maybe_val);
      total_size += sizeof(uint16_t);
    } else if (holds_alternative<optional<uint32_t>>(s.second)) {
      auto maybe_val = get<optional<uint32_t>>(s.second);
      if (!maybe_val) {
        maybe_val = 0;
      }
      fmt::print(hdr, "    uint32_t {} = {};\n", suffixed_member_id,
                 *maybe_val);
      total_size += sizeof(uint32_t);
    } else if (holds_alternative<optional<uint64_t>>(s.second)) {
      auto maybe_val = get<optional<uint64_t>>(s.second);
      if (!maybe_val) {
        maybe_val = 0;
      }
      fmt::print(hdr, "    uint64_t {} = {};\n", suffixed_member_id,
                 *maybe_val);
      total_size += sizeof(uint64_t);
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
    fmt::print(src, "  os << \"  {} = \" << obj.{}() << \"\\n\";\n", member_id,
               member_id);
  }
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
  fmt::print(hdr_file->OStream(), "#include <ostream>\n");
  fmt::print(hdr_file->OStream(), "#include <string>\n");

  // hdr macros
  fmt::print(hdr_file->OStream(), "{}\n", StructAlignmentMacro());

  // source includes
  fmt::print(src_file->OStream(), "#include \"{}\"\n",
             hdr_file->GetPath().filename().string());
  fmt::print(src_file->OStream(), "\n");

  // forward declare everything first.

  // struct forward declarations
  fmt::print(hdr_file->OStream(), "// struct forward declarations\n");
  for (auto symbol : parser_->symbols2_.table_) {
    // declare everything first.
    if (holds_alternative<shared_ptr<td::Struct>>(symbol.second)) {
      std::string escaped_id = escape_utf8_to_cpp_identifier(symbol.first);
      fmt::print(hdr_file->OStream(), "struct {};\n", escaped_id);
    }
  }

  fmt::print(hdr_file->OStream(), "\n");

  // value declarations
  fmt::print(hdr_file->OStream(), "// value declarations\n");
  for (auto symbol : parser_->symbols2_.table_) {
    // declare everything first.
    if (holds_alternative<shared_ptr<td::Struct>>(symbol.second) ||
        holds_alternative<shared_ptr<td::Variant>>(symbol.second)) {
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
    }
  }

  fmt::print(hdr_file->OStream(), "\n");

  // end hdr gueard
  fmt::print(hdr_file->OStream(), "\n#endif  // {}\n", hdr_guard);

  hdr_file->Close();
  src_file->Close();
}

}  // namespace td
