#ifndef SRC_LIB_TYPEDEF_PARSER_H_
#define SRC_LIB_TYPEDEF_PARSER_H_

#include <memory>

#include "parsed_file.h"

namespace td {

std::shared_ptr<ParsedFile> Parse(const std::string& s);
std::shared_ptr<ParsedFile> Parse(std::istream& input);

}  // namespace td

#endif  // SRC_LIB_TYPEDEF_PARSER_H_
