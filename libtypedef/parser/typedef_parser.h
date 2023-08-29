#ifndef PARSER_TYPEDEF_PARSER_H__
#define PARSER_TYPEDEF_PARSER_H__

#include <filesystem>
#include <iosfwd>
#include <memory>
#include <optional>
#include <string>
#include <vector>

#include "parser_error_info.h"
#include "table.h"

namespace td {

struct ParserResources;

struct ParsedFile {
  ParsedFile();
  ~ParsedFile();
  std::string langauge_version;
  std::vector<ParserErrorInfo> errors;
  bool HasErrors() const { return errors.size() > 0; }
  std::shared_ptr<td::table::Module> mod;
  std::unique_ptr<ParserResources> res;
};

std::unique_ptr<ParsedFile> ParseTypedef(std::istream& input);
std::unique_ptr<ParsedFile> ParseTypedef(const std::string& s);

}  // namespace td

#endif  // PARSER_TYPEDEF_PARSER_H__
