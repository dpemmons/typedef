#ifndef PARSER_GRAMMAR_CLASSES_H__
#define PARSER_GRAMMAR_CLASSES_H__

#include <memory>
#include <string>
#include <variant>

class TypedefParser;
class TypedefParser::CompilationUnitContext;
class TypedefParser::TypeDefinitionContext;
class TypedefParser::IdentifierContext;
class TypedefParser::FieldDefinitionContext;
class TypedefParser::SymbolPathContext;
class TypedefParser::TemplateDefinitionContext;

class TypedefParser::BoolLiteralContext;
class TypedefParser::CharLiteralContext;
class TypedefParser::FloatLiteralContext;
class TypedefParser::IntegerLiteralContext;

namespace td {

class BoolLiteral {
 public:
  void Init(TypedefParser::BoolLiteralContext* bl_ctx);
  bool GetVal();

 private:
  TypedefParser::BoolLiteralContext* bl_ctx_ = nullptr;
};

class CharLiteral {
 public:
  void Init(TypedefParser::CharLiteralContext* cl_ctx);
  char32_t GetVal() { return val_; }

 private:
  TypedefParser::CharLiteralContext* cl_ctx_ = nullptr;
  char32_t val_ = '\0';
};

class StringLiteral {
 public:
  void Init(TypedefParser::StringLiteralContext* ctx);
  const std::string* GetVal() { return &val_; }

 private:
  TypedefParser::StringLiteralContext* sl_ctx_ = nullptr;
  std::string val_;
};

class FloatLiteral {
 public:
  void Init(TypedefParser::FloatLiteralContext* ctx);

  bool IsF32() { std::holds_alternative<float>(val_); }
  float GetF32() { std::get<float>(val_); }
  bool IsF64() { std::holds_alternative<double>(val_); }
  double GetF64() { std::get<double>(val_); }

 private:
  TypedefParser::FloatLiteralContext* fl_ctx_ = nullptr;
  std::variant<float, double> val_;
};

class IntegerLiteral {
 public:
  void Init(TypedefParser::IntegerLiteralContext* ctx);

  bool IsU8() { return std::holds_alternative<std::uint8_t>(val_); }
  std::uint8_t GetU8() { return std::get<std::uint8_t>(val_); }
  bool IsU16() { return std::holds_alternative<std::uint16_t>(val_); }
  std::uint16_t GetU16() { return std::get<std::uint16_t>(val_); }
  bool IsU32() { return std::holds_alternative<std::uint32_t>(val_); }
  std::uint32_t GetU32() { return std::get<std::uint32_t>(val_); }
  bool IsU64() { return std::holds_alternative<std::uint64_t>(val_); }
  std::uint64_t GetU64() { return std::get<std::uint64_t>(val_); }
  bool IsI8() { return std::holds_alternative<std::int8_t>(val_); }
  std::int8_t GetI8() { return std::get<std::int8_t>(val_); }
  bool IsI16() { return std::holds_alternative<std::int16_t>(val_); }
  std::int16_t GetI16() { return std::get<std::int16_t>(val_); }
  bool IsI32() { return std::holds_alternative<std::int32_t>(val_); }
  std::int32_t GetI32() { return std::get<std::int32_t>(val_); }
  bool IsI64() { return std::holds_alternative<std::int64_t>(val_); }
  std::int64_t GetI64() { return std::get<std::int64_t>(val_); }

 private:
  TypedefParser::IntegerLiteralContext* il_ctx_ = nullptr;
  std::variant<std::uint8_t, std::uint16_t, std::uint32_t, std::uint64_t,
               std::int8_t, std::int16_t, std::int32_t, std::int64_t>
      val_;
};

class SymbolPath {
 public:
  void Init(TypedefParser::SymbolPathContext* sp_ctx);

  bool IsRoot();

  std::string ToString(const std::string& delineator = "::",
                       bool leading_delineator = true);

 private:
  TypedefParser::SymbolPathContext* sp_ctx_ = nullptr;
};

class CompilationUnit {
 public:
  void Init(TypedefParser::CompilationUnitContext* ctx);

  const std::string* GetVersion();
  const SymbolPath& GetModule();

 protected:
  TypedefParser::CompilationUnitContext* cu_ctx_ = nullptr;
  SymbolPath module_sympath_;
};

class TypeDefinition {
 public:
  static std::unique_ptr<TypeDefinition> Build(
      TypedefParser::TypeDefinitionContext* ctx);

  bool IsNamed();
  const std::string* GetIdentifier();

 protected:
  TypeDefinition() = default;
  virtual ~TypeDefinition() = default;

  TypedefParser::TypeDefinitionContext* td_ctx_ = nullptr;
};

class FieldDefinition {
 public:
  static std::unique_ptr<FieldDefinition> Build(
      TypedefParser::FieldDefinitionContext* ctx);

 protected:
  const TypedefParser::FieldDefinitionContext* fd_ctx_ = nullptr;
};

class TemplateDefinition {
 public:
  void Init(TypedefParser::TemplateDefinitionContext* ctx);
  std::string* GetBlock();

 protected:
  TypedefParser::TemplateDefinitionContext* tmpl_ctx_;
};

// class FieldBlockTypeDefinition : protected TypeDefinition {
//  public:
//  protected:
//   FieldBlockTypeDefinition() = default;
//   virtual ~FieldBlockTypeDefinition() = default;

//   TypedefParser::FieldBlockContext* fb_ctx_ = nullptr;
// };

// class StructTypeDefinition : protected TypeDefinition,
//                              protected FieldBlockTypeDefinition {
//  public:
//   virtual bool IsStruct() override { return true; }

//   void Set(TypedefParser::StructDefinitionContext* st_ctx);

//  protected:
//   StructTypeDefinition() = default;
//   virtual ~StructTypeDefinition() = default;

//   TypedefParser::StructDefinitionContext* st_ctx_;
// };

// class VariantTypeDefinition : protected TypeDefinition,
//                               protected FieldBlockTypeDefinition {
//  public:
//   VariantTypeDefinition() = default;
//   virtual ~VariantTypeDefinition() = default;

//   virtual bool IsVariant() override { return true; }

//   void Set(TypedefParser::VariantDefinitionContext* var_ctx);

//  protected:
//   TypedefParser::VariantDefinitionContext* var_ctx_;
// };

// class VectorTypeDefinition : protected TypeDefinition {
//  public:
//   VectorTypeDefinition() = default;
//   virtual ~VectorTypeDefinition() = default;

//   virtual bool IsVector() override { return true; }

//   void Set(TypedefParser::VectorDefinitionContext* vec_ctx);

//  protected:
//   TypedefParser::VectorDefinitionContext* vec_ctx_;
// };

// class MapTypeDefinition : protected TypeDefinition {
//  public:
//   MapTypeDefinition() = default;
//   virtual ~MapTypeDefinition() = default;

//   virtual bool IsMap() override { return true; }

//   void Set(TypedefParser::MapDefinitionContext* vec_ctx);

//  protected:
//   TypedefParser::MapDefinitionContext* vec_ctx_;
// };

}  // namespace td

#endif  // PARSER_GRAMMAR_CLASSES_H__
