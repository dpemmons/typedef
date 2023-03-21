#pragma once

#include <string>

#include "identifier.h"
#include "type.h"
#include "scalar_value.h"

namespace td {

struct ValueDefinition {
  QualifiedIdentifier qualified_identifier_;
  ScalarValue value_;
};

}  // namespace td