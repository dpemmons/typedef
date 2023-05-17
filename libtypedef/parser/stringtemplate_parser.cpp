#include "libtypedef/parser/stringtemplate_parser.h"

#include <sstream>

#include "libtypedef/parser/parser_common.h"

namespace td {

std::unique_ptr<ParsedStringTemplate> Parse(const std::string& s) {
  std::istringstream ss(s);
  return std::move(Parse(ss));
}

std::unique_ptr<ParsedStringTemplate> Parse(std::istream& input) {
  return std::make_unique<ParsedStringTemplate>();
}

}  // namespace td
