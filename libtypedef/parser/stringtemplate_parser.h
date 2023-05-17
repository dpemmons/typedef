#ifndef TYPEDEF_LIBTYPEDEF_PARSER_STRINGTEMPLATE_PARSER_H_
#define TYPEDEF_LIBTYPEDEF_PARSER_STRINGTEMPLATE_PARSER_H_

#include <istream>
#include <memory>
#include <string>

namespace td {

struct ParsedStringTemplate {};

std::unique_ptr<ParsedStringTemplate> Parse(const std::string& s);
std::unique_ptr<ParsedStringTemplate> Parse(std::istream& input);

}  // namespace td

#endif  // TYPEDEF_LIBTYPEDEF_PARSER_STRINGTEMPLATE_PARSER_H_