#pragma once

#include <optional>

#include "scalar.h"

namespace td {
namespace types {

class Float : public Scalar {
 public:
  bool IsFloat() const override { return true; }

 private:
};

class Float32 : public Float {
 public:
  bool IsF32() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<float> Value() const { return val_; }

 private:
  std::optional<float> val_;
};

class Float64 : public Float {
 public:
  bool IsF64() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<double> Value() const { return val_; }

 private:
  std::optional<double> val_;
};

}  // namespace types
}  // namespace td