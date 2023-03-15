#pragma once

#include <string>
#include <vector>

#include "parser_error_info.h"
#include "language_version.h"
#include "identifier.h"

namespace td {

struct ParsedFile {

  bool HasErrors() const { return GetErrors().size(); }
  const std::vector<ParserErrorInfo> &GetErrors() const {
    return errors_;
  }

  private:
    std::vector<ParserErrorInfo> errors_;

};

}  // namespace td