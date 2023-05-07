#pragma once

#include <string>

#include "identifier.h"

namespace td {

struct UseDeclaration {
  OutIdentifier qualified_identifier;
  std::string alias;
  bool is_wildcard;
};

}  // namespace td