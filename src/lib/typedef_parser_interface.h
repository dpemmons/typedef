#ifndef SRC_LIB_TYPEDEF_PARSER_INTERFACE_H_
#define SRC_LIB_TYPEDEF_PARSER_INTERFACE_H_

#include <string>
#include <vector>
#include <map>

namespace td {

struct ParserErrorInfo {
  enum Type {
    UNKNOWN = 0,
    LEXER_ERROR = 1,
    PARSE_ERROR = 2,
  };
  Type error_type;

  std::string message;
  size_t token_type;

  size_t char_offset;  // from the beginning of the file.

  size_t line;
  size_t line_offset;  // from the beginning of the line.

  size_t length;
};

typedef std::vector<std::string> QualifiedIdentifier;

class LanguageVersion {
 public:
  enum Version {
    UNKNOWN = 0,
    ALPHA = 1,
  };

  static LanguageVersion FromString(std::string& str) {
    for (auto pair : kVersionMap) {
      if (pair.second.compare(str)) {
        return pair.first;
      }
    }
    return LanguageVersion(UNKNOWN);
  }

  bool IsValid(std::string& str) const {
    for (auto pair : kVersionMap) {
      if (pair.second.compare(str)) {
        return true;
      }
    }
    return false;
  }
  std::string ToString(Version v) const {
    for (auto pair : kVersionMap) {
      if (pair.first == v) {
        return pair.second;
      }
    }
    return "unknown";
  }

 private:
  LanguageVersion(Version v) : version_(v) {}
  Version version_;
  static std::map<Version, std::string> kVersionMap;
};

struct Import {
  QualifiedIdentifier qualified_identifier;
  std::string alias;
  bool is_wildcard;
};

class TypedefParserInterface {
 public:
  virtual ~TypedefParserInterface(){};

  virtual void Parse(const std::string& text) = 0;
  virtual void Parse(std::istream& text) = 0;

  bool HasErrors() const { return GetErrors().size(); }
  virtual const std::vector<ParserErrorInfo>& GetErrors() const = 0;

  virtual std::string GetLanguageVersion() = 0;
  virtual QualifiedIdentifier GetModule() = 0;
  virtual std::vector<td::Import> GetImports() = 0;

 protected:
  TypedefParserInterface() {}
};

}  // namespace td

#endif  // SRC_LIB_TYPEDEF_PARSER_INTERFACE_H_