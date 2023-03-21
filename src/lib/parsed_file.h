#pragma once

#include <string>
#include <vector>

#include "identifier.h"
#include "language_version.h"
#include "parser_error_info.h"
#include "use_declaration.h"
#include "value_definition.h"

namespace td {

class ParsedFileBuilder;

class ParsedFile {
 public:
  ParsedFile() : langauge_version_(LanguageVersion::UNKNOWN) {}
  bool HasErrors() const { return GetErrors().size(); }
  const std::vector<ParserErrorInfo>& GetErrors() const { return errors_; }

  LanguageVersion GetLanguageVersion() const { return langauge_version_; };
  QualifiedIdentifier GetModule() const { return module_; }
  std::vector<UseDeclaration> GetUseDeclarations() const {
    return use_declarations_;
  }

 private:
  friend class ParsedFileBuilder;
  std::vector<ParserErrorInfo> errors_;

  LanguageVersion langauge_version_;
  QualifiedIdentifier module_;
  std::vector<UseDeclaration> use_declarations_;
  std::vector<ValueDefinition> value_definitions_;
};

class ParsedFileBuilder {
 public:
  ParsedFileBuilder() {}
  ParsedFileBuilder& SetLanguageVersion(LanguageVersion language_version) {
    file_.langauge_version_ = language_version;
    return *this;
  }
  ParsedFileBuilder& SetModule(QualifiedIdentifier module) {
    file_.module_ = module;
    return *this;
  }
  ParsedFileBuilder& SetUseDeclarations(
      std::vector<UseDeclaration> use_declarations) {
    file_.use_declarations_ = use_declarations;
    return *this;
  }
  ParsedFileBuilder& SetValueDefinitions(std::vector<ValueDefinition> value_definitions) {
    file_.value_definitions_ = value_definitions;
    return *this;
  }
  ParsedFileBuilder& SetErrors(std::vector<ParserErrorInfo> errors) {
    file_.errors_ = errors;
    return *this;
  }

  ParsedFile build() { return file_; }

 private:
  ParsedFile file_;
};

}  // namespace td