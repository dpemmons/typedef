#include <iostream>

#include "simple_values.td.h"

int main() {
  using namespace sv::t;

#if 0
  MutableStructA sA;
  MutableStructB sB;

  MutableStructC sC;
  sC.asdf(std::make_unique<MutableStructA>());

  // MutableVariantA variantA;
  // variantA.a(std::make_shared<MutableStructA>());

  MutableVecA vectorA;
  MutableMapA mapA;
  MutableVariantA variantA;

  MutableStructD sD1;
  sD1.a_struct(std::make_unique<MutableStructA>());
  sD1.b_variant(std::make_unique<MutableVariantA>());
  sD1.c_vec(std::make_unique<MutableVecA>());
  sD1.d_map(std::make_unique<MutableMapA>());

  // std::cout << sA << std::endl;
  // std::cout << sB << std::endl;
  // std::cout << sC << std::endl;
  // std::cout << vectorA << std::endl;
  // std::cout << mapA << std::endl;
  // std::cout << variantA << std::endl;
  // std::cout << sD1 << std::endl;

  MutableStructE sE;
  sE.inlineMap(std::make_unique<MutableStructE::MutableinlineMap>());
  sE.inlineMap()->emplace(std::string("hi"),
                          std::make_unique<MutableStructD>());
  sE.VariantB(std::make_unique<MutableStructE::MutableVariantB>());
#endif

  MutableTemplateExample::MutableTemplateData tmpl_data;
  tmpl_data.name("John");
  std::cout << "here's the template value:\n" << MutableTemplateExample::tmpl(tmpl_data) << std::endl;

  return 0;
}