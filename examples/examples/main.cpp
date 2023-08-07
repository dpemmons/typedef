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
  auto vec = std::make_unique<
      MutableTemplateExample::MutableTemplateData::MutablesomeVec>();
  vec->push_back(1);
  vec->push_back(2);
  vec->push_back(3);
  tmpl_data.someVec(std::move(vec));

  auto map = std::make_unique<
      MutableTemplateExample::MutableTemplateData::MutablesomeMap>();
  map->insert({"foo", "bar"});
  map->insert({"biz", "baz"});
  tmpl_data.someMap(std::move(map));

  auto sc = std::make_unique<MutableStructC>();
  sc->jkl(42);
  sc->zxcv(200);
  tmpl_data.structC(std::move(sc));

  // std::cout << "tmpl: " << MutableTemplateExample::tmpl(tmpl_data) << std::endl;
  // std::cout << "tmpl2: " << MutableTemplateExample::tmpl2(tmpl_data)
  //           << std::endl;
  // std::cout << "tmpl3: " << MutableTemplateExample::tmpl3(tmpl_data)
  //           << std::endl;

  return 0;
}