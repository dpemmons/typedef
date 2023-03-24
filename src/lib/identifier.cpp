#include "identifier.h"

#include <iterator>

#define FMT_HEADER_ONLY
#include "fmt/core.h"
#include "fmt/ostream.h"

namespace td {

std::ostream &operator<<(std::ostream &os, const QualifiedIdentifier &value) {
  if (value.id_.empty()) {
    return os;
  }

  fmt::print(os, "{}", value.id_[0]);

  auto iterator = value.id_.begin();
  std::advance(iterator, 1);
  while (iterator != value.id_.end()) {
    fmt::print(os, "::{}", *iterator);
  }

  return os;
}

}  // namespace td