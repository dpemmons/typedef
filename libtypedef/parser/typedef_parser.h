#ifndef PARSER_TYPEDEF_PARSER_H__
#define PARSER_TYPEDEF_PARSER_H__

#include <iosfwd>
#include <memory>
#include <string>

#include "libtypedef/parser/parsed_file.h"

namespace td {
class ParsedFile;

std::shared_ptr<ParsedFile> ParseTypedef(const std::string& s);
std::shared_ptr<ParsedFile> ParseTypedef(std::istream& input);

}  // namespace td

#endif  // PARSER_TYPEDEF_PARSER_H__
