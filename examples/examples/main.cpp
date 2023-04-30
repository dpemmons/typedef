#include <iostream>

#include "simple_values.td.h"

int main() {
  MutableStructA sA;
  MutableStructB sB;

  MutableStructC sC;
  sC.asdf(std::make_unique<MutableStructA>());

  // MutableVariantA variantA;
  // variantA.a(std::make_shared<MutableStructA>());

  MutableVecA vectorA;
  MutableMapA mapA;

  MutableStructD sD1;
  sD1.a_struct(std::make_unique<MutableStructA>());

  std::cout << sA << std::endl;
  std::cout << sB << std::endl;
  std::cout << sC << std::endl;
  std::cout << sD1 << std::endl;

  return 0;
}