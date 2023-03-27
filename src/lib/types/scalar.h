#pragma once

#include "primitive.h"

namespace td {
  namespace types {

class Scalar : public Primitive {
 public:
  bool IsScalar() const override { return true; }

 protected:
  Scalar() : Primitive(){};
};

}  // namespace types
}  // namespace td