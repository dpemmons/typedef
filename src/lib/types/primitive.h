#pragma once

#include "type.h"

namespace td {
  namespace types {

class Primitive : public Type {
 public:
  bool IsPrimitive() const override { return true; }

 protected:
  Primitive() : Type() {}
};

}  // namespace types
}  // namespace td