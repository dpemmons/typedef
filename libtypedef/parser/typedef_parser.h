#ifndef PARSER_TYPEDEF_PARSER_H__
#define PARSER_TYPEDEF_PARSER_H__

#include <iosfwd>
#include <memory>
#include <string>

#include "libtypedef/parser/parsed_file.h"

namespace td {
class ParsedFile;

std::shared_ptr<ParsedFile> Parse(const std::string& s);
std::shared_ptr<ParsedFile> Parse(std::istream& input);

}  // namespace td

#endif  // PARSER_TYPEDEF_PARSER_H__
