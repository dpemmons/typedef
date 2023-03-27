#pragma once

#include <memory>
#include <optional>

#include "scalar.h"

namespace td {
namespace types {

class Bool : public Scalar {
 public:
  bool IsBool() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<bool> Value() const { return val_; }

  static std::unique_ptr<Bool> FromString(std::string_view bool_literal);

  virtual void print(std::ostream& os) const = 0;

 private:
  std::optional<bool> val_;
};

}  // namespace types
}  // namespace td