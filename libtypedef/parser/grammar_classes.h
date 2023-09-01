#ifndef PARSER_GRAMMAR_CLASSES_H__
#define PARSER_GRAMMAR_CLASSES_H__

#include <string>

namespace TypedefParser {
class FieldBlockContext;
class IdentifierContext;
class StructDeclarationContext;
class VariantDeclarationContext;
class VectorDeclarationContext;
class MapDeclarationContext;
}  // namespace TypedefParser

namespace td {

class TypeDeclaration {
 public:
  bool IsNamed() { return id_ctx_ != nullptr; }
  const std::string* GetIdentifier() const;

  virtual bool IsStruct() { return false; }
  virtual bool IsVariant() { return false; }
  virtual bool IsVector() { return false; }
  virtual bool IsMap() { return false; }

 protected:
  TypeDeclaration() = default;
  virtual ~TypeDeclaration() = default;

  const TypedefParser::IdentifierContext* id_ctx_ = nullptr;
};

class FieldBlockTypeDeclaration : protected TypeDeclaration {
 public:
 protected:
  FieldBlockTypeDeclaration() = default;
  virtual ~FieldBlockTypeDeclaration() = default;

  TypedefParser::FieldBlockContext* fb_ctx_ = nullptr;
};

class StructTypeDeclaration : protected TypeDeclaration,
                              protected FieldBlockTypeDeclaration {
 public:
  virtual bool IsStruct() override { return true; }

  void Set(TypedefParser::StructDeclarationContext* st_ctx);

 protected:
  StructTypeDeclaration() = default;
  virtual ~StructTypeDeclaration() = default;

  TypedefParser::StructDeclarationContext* st_ctx_;
};

class VariantTypeDeclaration : protected TypeDeclaration,
                               protected FieldBlockTypeDeclaration {
 public:
  VariantTypeDeclaration() = default;
  virtual ~VariantTypeDeclaration() = default;

  virtual bool IsVariant() override { return true; }

  void Set(TypedefParser::VariantDeclarationContext* var_ctx);

 protected:
  TypedefParser::VariantDeclarationContext* var_ctx_;
};

class VectorTypeDeclaration : protected TypeDeclaration {
 public:
  VectorTypeDeclaration() = default;
  virtual ~VectorTypeDeclaration() = default;

  virtual bool IsVector() override { return true; }

  void Set(TypedefParser::VectorDeclarationContext* vec_ctx);

 protected:
  TypedefParser::VectorDeclarationContext* vec_ctx_;
};

class MapTypeDeclaration : protected TypeDeclaration {
 public:
  MapTypeDeclaration() = default;
  virtual ~MapTypeDeclaration() = default;

  virtual bool IsMap() override { return true; }

  void Set(TypedefParser::MapDeclarationContext* vec_ctx);

 protected:
  TypedefParser::MapDeclarationContext* vec_ctx_;
};

}  // namespace td

#endif  // PARSER_GRAMMAR_CLASSES_H__
