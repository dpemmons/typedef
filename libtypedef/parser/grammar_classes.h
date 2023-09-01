#ifndef PARSER_GRAMMAR_CLASSES_H__
#define PARSER_GRAMMAR_CLASSES_H__

#include <memory>
#include <string>

namespace TypedefParser {
class CompilationUnitContext;
class TypeDefinitionContext;
class IdentifierContext;
class FieldDefinitionContext;
}  // namespace TypedefParser

namespace td {

class CompilationUnit {
 public:
  void Init(TypedefParser::CompilationUnitContext* ctx);

 protected:
  TypedefParser::CompilationUnitContext* cu_ctx_;
};

class TypeDefinition {
 public:
  static std::unique_ptr<TypeDefinition> Build(
      TypedefParser::TypeDefinitionContext* ctx);

  bool IsNamed() const;
  const std::string* GetIdentifier() const;

 protected:
  TypeDefinition() = default;
  virtual ~TypeDefinition() = default;

  const TypedefParser::TypeDefinitionContext* td_ctx_ = nullptr;
};

class FieldDefinition {
 public:
  static std::unique_ptr<FieldDefinition> Build(
      TypedefParser::FieldDefinitionContext* ctx);

 protected:
  const TypedefParser::FieldDefinitionContext* fd_ctx_ = nullptr;
};

class FieldBlockTypeDefinition : protected TypeDefinition {
 public:
 protected:
  FieldBlockTypeDefinition() = default;
  virtual ~FieldBlockTypeDefinition() = default;

  TypedefParser::FieldBlockContext* fb_ctx_ = nullptr;
};

class StructTypeDefinition : protected TypeDefinition,
                             protected FieldBlockTypeDefinition {
 public:
  virtual bool IsStruct() override { return true; }

  void Set(TypedefParser::StructDefinitionContext* st_ctx);

 protected:
  StructTypeDefinition() = default;
  virtual ~StructTypeDefinition() = default;

  TypedefParser::StructDefinitionContext* st_ctx_;
};

class VariantTypeDefinition : protected TypeDefinition,
                              protected FieldBlockTypeDefinition {
 public:
  VariantTypeDefinition() = default;
  virtual ~VariantTypeDefinition() = default;

  virtual bool IsVariant() override { return true; }

  void Set(TypedefParser::VariantDefinitionContext* var_ctx);

 protected:
  TypedefParser::VariantDefinitionContext* var_ctx_;
};

class VectorTypeDefinition : protected TypeDefinition {
 public:
  VectorTypeDefinition() = default;
  virtual ~VectorTypeDefinition() = default;

  virtual bool IsVector() override { return true; }

  void Set(TypedefParser::VectorDefinitionContext* vec_ctx);

 protected:
  TypedefParser::VectorDefinitionContext* vec_ctx_;
};

class MapTypeDefinition : protected TypeDefinition {
 public:
  MapTypeDefinition() = default;
  virtual ~MapTypeDefinition() = default;

  virtual bool IsMap() override { return true; }

  void Set(TypedefParser::MapDefinitionContext* vec_ctx);

 protected:
  TypedefParser::MapDefinitionContext* vec_ctx_;
};

}  // namespace td

#endif  // PARSER_GRAMMAR_CLASSES_H__
