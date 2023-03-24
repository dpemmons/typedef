#pragma once

#include <string>

#include "identifier.h"
#include "scalar_value.h"
#include "type.h"

namespace td {

class ValueDefinition {
 public:
  ValueDefinition(QualifiedIdentifier qualified_identifier, ScalarValue value)
      : qualified_identifier_(qualified_identifier), value_(value) {}
  QualifiedIdentifier GetQualifiedIdentifier() const {
    return qualified_identifier_;
  }
  Type GetType() const { return value_.GetType(); }
  ScalarValue GetScalarValue() const { return value_; }

  friend std::ostream &operator<<(std::ostream &os,
                                  const ValueDefinition &value);

 private:
  QualifiedIdentifier qualified_identifier_;
  ScalarValue value_;
};

}  // namespace td