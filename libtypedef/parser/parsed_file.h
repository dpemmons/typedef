#pragma once

#include <filesystem>
#include <optional>
#include <string>
#include <vector>

#include "parser_error_info.h"
#include "table.h"

namespace td {

struct ParsedFile {
  std::string langauge_version;
  std::vector<ParserErrorInfo> errors;
  std::shared_ptr<td::table::Module> mod;
};

}  // namespace td