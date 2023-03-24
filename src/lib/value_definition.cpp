#include "value_definition.h"

#define FMT_HEADER_ONLY
#include "fmt/core.h"
#include "fmt/ostream.h"

namespace td {

std::ostream &operator<<(std::ostream &os, const ValueDefinition &value) {
  fmt::print(os, "{} : {} = {}", fmt::streamed(value.GetQualifiedIdentifier()),
             value.GetType().ToString(), value.GetScalarValue().ToString());
  return os;
}

}  // namespace td
