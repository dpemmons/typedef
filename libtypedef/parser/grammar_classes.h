#ifndef PARSER_GRAMMAR_CLASSES_H__
#define PARSER_GRAMMAR_CLASSES_H__

#include <string>

namespace TypedefParser {
class FieldBlockContext;
class IdentifierContext;
class StructDeclarationContext;
class InlineStructDeclarationContext;
class VariantDeclarationContext;
class InlineVariantDeclarationContext;
}  // namespace TypedefParser

namespace td {

class TypeDeclaration {
 public:
  bool IsNamed() { return idctx_ != nullptr; }
  const std::string* GetIdentifier() const;

  virtual bool IsStruct() { return false; }
  virtual bool IsVariant() { return false; }

 protected:
  TypeDeclaration() {}
  virtual ~TypeDeclaration() {}

  const TypedefParser::IdentifierContext* idctx_;
};

class FieldBlockTypeDeclaration : public TypeDeclaration {
 public:
 protected:
  FieldBlockTypeDeclaration() {}
  virtual ~FieldBlockTypeDeclaration() {}

  TypedefParser::FieldBlockContext* fbctx_;
};

class NamedStructTypeDeclaration : public FieldBlockTypeDeclaration {
 public:
  NamedStructTypeDeclaration();
  virtual ~NamedStructTypeDeclaration() {}

  virtual bool IsStruct() override { return true; }

  void Set(TypedefParser::StructDeclarationContext* stctx);

 protected:
  TypedefParser::StructDeclarationContext* stctx_;
};

class InlineStructTypeDeclaration : public FieldBlockTypeDeclaration {
 public:
  InlineStructTypeDeclaration();
  virtual ~InlineStructTypeDeclaration() {}

  virtual bool IsStruct() override { return true; }

  void Set(TypedefParser::InlineStructDeclarationContext* istctx);

 protected:
  TypedefParser::InlineStructDeclarationContext* istctx_;
};

class NamedVariantTypeDeclaration : public FieldBlockTypeDeclaration {
 public:
  NamedVariantTypeDeclaration();
  virtual ~NamedVariantTypeDeclaration() {}

  virtual bool IsVariant() override { return true; }

  void Set(TypedefParser::VariantDeclarationContext* varctx);

 protected:
  TypedefParser::VariantDeclarationContext* varctx_;
};

class InlineVariantTypeDeclaration : public FieldBlockTypeDeclaration {
 public:
  InlineVariantTypeDeclaration();
  virtual ~InlineVariantTypeDeclaration() {}

  virtual bool IsVariant() override { return true; }

  void Set(TypedefParser::InlineVariantDeclarationContext* ivarctx);

 protected:
  TypedefParser::InlineVariantDeclarationContext* ivarctx_;
};

}  // namespace td

#endif  // PARSER_GRAMMAR_CLASSES_H__
