#ifndef PARSER_TMPL_STR_PARSER_H__
#define PARSER_TMPL_STR_PARSER_H__

#include <istream>
#include <memory>
#include <string>

namespace td {

struct TmplStrTemplate {};

std::unique_ptr<TmplStrTemplate> Parse(const std::string& s);
std::unique_ptr<TmplStrTemplate> Parse(std::istream& input);

}  // namespace td

#endif  // PARSER_TMPL_STR_PARSER_H__
