#pragma once

#include <cstdint>
#include <istream>
#include <string>
#include <variant>
#include <vector>

class TypeDeclaration {
 public:
 private:
};

struct PrimitiveTypeValue {
  enum Type {
    BOOL,
    BYTE,
    INT8,
    UINT8,
    INT16,
    UINT16,
    INT32,
    UINT32,
    INT64,
    UINT64,
    FLAOT16,
    FLOAT32,
    FLOAT64
  };
  union Val {
    bool bool_val;
    char byte_val;
    std::int8_t int8_val;
    std::uint8_t uint8_val;
    std::int16_t int16_val;
    std::uint16_t uint16_val;
    std::int32_t int32_val;
    std::uint32_t uint32_val;
    std::int64_t int64_val;
    std::uint64_t uint64_val;
    float float32_val;
    double float64_val;
  };
};

class PrimitiveTypeDeclaration : public TypeDeclaration {
 public:
 private:
  PrimitiveTypeValue val_;
};

struct EnumDecl {};

class SemVer {
 public:
  SemVer() {}
  SemVer(std::int32_t major, std::int32_t minor, std::int32_t patch)
      : major_(major), minor_(minor), patch_(patch) {}
  void Set(std::int32_t major, std::int32_t minor, std::int32_t patch) {
    major_ = major;
    minor_ = minor;
    patch_ = patch;
  }
  std::int32_t GetMajor() const { return major_; }
  std::int32_t GetMinor() const { return minor_; }
  std::int32_t GetPatch() const { return patch_; }

 private:
  std::int32_t major_;
  std::int32_t minor_;
  std::int32_t patch_;
};

struct IntermediateTree {
  IntermediateTree() {}
  struct MessageDecl {
    struct FieldDecl {};
    std::vector<FieldDecl> field_decls;
  };
  SemVer version;
  std::vector<std::string> imports;
  std::vector<EnumDecl> enum_decls;
  std::vector<MessageDecl> mesg_decls;
};

std::variant<IntermediateTree, bool> ParseFile(std::istream& input);

void PrintIR(const IntermediateTree& tree);
