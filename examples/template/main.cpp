#include <iostream>

#include "examples/template/template_example.td.h"

int main(int argc, char *argv[]) {
  using namespace template_example;
  StructC struct_c;
  struct_c.zxcv() = 1;
  struct_c.jkl() = 2;
  PrintStructC(std::cout, struct_c);

  TemplateData td;
  td.name() = "Jim";
  td.has_name() = true;
  td.name2() = "Jim's other name";
  td.has_name2() = true;
  td.someVec().push_back(1);
  td.someVec().push_back(2);
  td.someVec().push_back(3);
  td.someMap().insert({"someKey", "someVal"});
  td.someMap().insert({"another key", "another val"});

  td.structC().zxcv() = 3;
  td.structC().jkl() = 4;

  PrintTemplateData(std::cout, td);

  SomeVariant sv;
  sv.a_string() = "Hello world!";
  DoSomeVariant(std::cout, sv);
  sv.b_int() = 42;
  DoSomeVariant(std::cout, sv);
  sv.c_char() = U'😊';
  DoSomeVariant(std::cout, sv);
  sv.d_struct().zxcv() = 5;
  sv.d_struct().jkl() = 6;
  DoSomeVariant(std::cout, sv);

  td::Vector<std::string> v;
  v.push_back("one");
  v.push_back("two");
  v.push_back("three");
  LoopLogic(std::cout, v);

  BooleanLogic(std::cout, v);

  return 0;
}