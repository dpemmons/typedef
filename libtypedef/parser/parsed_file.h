#pragma once

#include <optional>
#include <string>
#include <vector>

#include "parser_error_info.h"
#include "symbol_table.h"

namespace td {

class ParsedFileBuilder;

class ParsedFile {
 public:
  ParsedFile() {}
  bool HasErrors() const { return GetErrors().size(); }
  const std::vector<ParserErrorInfo>& GetErrors() const { return errors_; }

  std::string_view GetLanguageVersion() const { return langauge_version_; };

  SymbolTable symbols2_;

  std::vector<std::string> module_;

 private:
  friend class ParsedFileBuilder;
  std::vector<ParserErrorInfo> errors_;

  std::string langauge_version_;
};

class ParsedFileBuilder {
 public:
  ParsedFileBuilder() {}
  ParsedFileBuilder& SetLanguageVersion(const std::string& language_version) {
    file_.langauge_version_ = language_version;
    return *this;
  }

  ParsedFileBuilder& SetModule(std::vector<std::string> module) {
    file_.module_ = module;
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