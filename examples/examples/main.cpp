#include <iostream>

#include "simple_values.td.h"

int main() {
  MutableStructA sA;
  MutableStructB sB;

  std::cout << sA << std::endl;
  std::cout << sB << std::endl;

  return 0;
}