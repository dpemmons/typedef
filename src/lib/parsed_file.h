#pragma once

#include <optional>
#include <string>
#include <vector>

#include "identifier.h"
#include "language_version.h"
#include "parser_error_info.h"
#include "symbol_table.h"
#include "use_declaration.h"

namespace td {

class ParsedFileBuilder;

class ParsedFile {
 public:
  ParsedFile() : langauge_version_(LanguageVersion::UNKNOWN) {}
  bool HasErrors() const { return GetErrors().size(); }
  const std::vector<ParserErrorInfo>& GetErrors() const { return errors_; }

  LanguageVersion GetLanguageVersion() const { return langauge_version_; };

  size_t GetUseDeclarations() const { return use_declarations_.size(); }
  std::shared_ptr<UseDeclaration> GetUseDeclaration(size_t i) {
    return use_declarations_[i];
  }

  SymbolTable symbols2_;

  std::vector<std::string> module_;

 private:
  friend class ParsedFileBuilder;
  std::vector<ParserErrorInfo> errors_;

  LanguageVersion langauge_version_;
  std::vector<std::shared_ptr<UseDeclaration>> use_declarations_;
};

class ParsedFileBuilder {
 public:
  ParsedFileBuilder() {}
  ParsedFileBuilder& SetLanguageVersion(LanguageVersion language_version) {
    file_.langauge_version_ = language_version;
    return *this;
  }

  ParsedFileBuilder& SetModule(std::vector<std::string> module) {
    file_.module_ = module;
    return *this;
  }

  ParsedFileBuilder& AddUseDeclaration(
      std::unique_ptr<UseDeclaration> use_declaration) {
    file_.use_declarations_.emplace_back(std::move(use_declaration));
    return *this;
  }

  ParsedFileBuilder& AddError(ParserErrorInfo error) {
    file_.errors_.push_back(error);
    return *this;
  }
  
  ParsedFileBuilder& AddErrors(std::vector<ParserErrorInfo> errors) {
    file_.errors_.insert(std::end(file_.errors_), std::begin(errors),
                         std::end(errors));
    return *this;
  }

  ParsedFileBuilder& AddSymbols2(SymbolTable table) {
    file_.symbols2_ = table;
    return *this;
  }

  ParsedFile build() { return file_; }

 private:
  ParsedFile file_;
};

}  // namespace td