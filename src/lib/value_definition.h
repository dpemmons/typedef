#pragma once

#include <string>

#include "identifier.h"

namespace td {

struct ValueDefinition {
  QualifiedIdentifier qualified_identifier_;
  Type type_;
  Value value_;
};

}  // namespace td