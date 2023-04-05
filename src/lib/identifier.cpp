#include "identifier.h"

#include <iterator>

#define FMT_HEADER_ONLY
#include "fmt/core.h"
#include "fmt/ostream.h"

namespace td {

std::ostream &operator<<(std::ostream &os, const Identifier &value) {
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

bool Identifier::operator==(Identifier const &other) const {
  bool is_equal = false;
  if (id_.size() == other.id_.size()) {
    is_equal = std::equal(id_.begin(), id_.end(), other.id_.begin());
  }
  return is_equal;
}

bool Identifier::operator!=(Identifier const &other) const {
  return !(*this == other);
}

}  // namespace td