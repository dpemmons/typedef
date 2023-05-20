#include "libtypedef/parser/tmpl_str_parser.h"

#include <sstream>

#include "libtypedef/parser/parser_common.h"

namespace td {

std::unique_ptr<TmplStrTemplate> Parse(const std::string& s) {
  std::istringstream ss(s);
  return std::move(Parse(ss));
}

std::unique_ptr<TmplStrTemplate> Parse(std::istream& input) {
  return std::make_unique<TmplStrTemplate>();
}

}  // namespace td
