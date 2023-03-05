#ifndef SRC_LIB_TYPEDEF_PARSER_INTERFACE_H_
#define SRC_LIB_TYPEDEF_PARSER_INTERFACE_H_

#include <string>
#include <vector>

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

struct Import {
  std::string fully_qualified_name;
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

  virtual std::string GetLanguageVersion() const = 0;
  virtual std::vector<td::Import> GetImports() const = 0;

 protected:
  TypedefParserInterface() {}
};

}  // namespace td

#endif  // SRC_LIB_TYPEDEF_PARSER_INTERFACE_H_