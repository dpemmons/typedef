#pragma once

#include <string>

#include "identifier.h"

namespace td {

struct UseDeclaration {
  QualifiedIdentifier qualified_identifier;
  std::string alias;
  bool is_wildcard;
};

}  // namespace td