#ifndef PARSER_TMPL_STR_PARSER_H__
#define PARSER_TMPL_STR_PARSER_H__

#include <istream>
#include <memory>
#include <string>
#include <vector>

#include "libtypedef/parser/parser_error_info.h"
#include "libtypedef/parser/tmpl_str_table.h"

namespace td {

struct TmplStrTemplate {
  std::vector<ParserErrorInfo> errors;
  TmplStrTablePtr table;
};

std::unique_ptr<TmplStrTemplate> ParseTmplStr(const std::string& s);
std::unique_ptr<TmplStrTemplate> ParseTmplStr(std::istream& input);

}  // namespace td

#endif  // PARSER_TMPL_STR_PARSER_H__
