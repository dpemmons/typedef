#include <iostream>

#include "simple_values.td.h"

int main() {
  using namespace simple_values;

  StructA sA;
  StructB sB;
  StructC sC;
  sC.set_asdf(std::make_unique<StructA>());

  VariantA variantA;
  variantA.set_a(true);

  StructD sD1;
  sD1.set_a_struct(std::make_unique<StructA>());
  sD1.set_b_variant(std::make_unique<VariantA>());
  sD1.c_vec().push_back(42);
  sD1.d_map().insert({42, VariantB()});

  return 0;
}