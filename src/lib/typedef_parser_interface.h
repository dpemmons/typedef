#pragma once

#include <string>
#include <vector>

namespace td {

struct ParserErrorInfo {
  std::string message;
  size_t tokenType;
  
  size_t charOffset;  // from the beginning of the file.
  
  size_t line;
  size_t lineOffset;  // from the beginning of the line.

  size_t length;
};

class TypedefParserInterface {
 public:
  TypedefParserInterface();
  virtual ~TypedefParserInterface() = 0;

  virtual void Parse(std::string s) = 0;
  virtual void Parse(const std::string& s) = 0;
  virtual void Parse(std::istream& input) = 0;

  virtual const std::vector<ParserErrorInfo>& GetErrors() const = 0;

  virtual std::string GetLanguageVersion() const = 0;
  virtual std::vector<std::string> GetImports() const = 0;

};

}  // namespace td