#pragma once

#include <memory>
#include <optional>
#include <string>

#include "scalar.h"

namespace td {
namespace types {

class Char : public Scalar {
 public:
  bool IsChar() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<char32_t> Value() const { return val_; }

  static std::unique_ptr<Char> FromString(std::string_view char_literal);

 private:
  Char(char32_t val) : Scalar(), val_(val){};
  Char(const Char&) = delete;

  std::optional<char32_t> val_;
};

}  // namespace types
}  // namespace td