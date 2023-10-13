#include <iostream>
#include <sstream>
#include <string>

#include "json_demo.td.h"
#include "rapidjson/document.h"

using namespace json_demo;

///////////////// StructA //////////////////////
void RenderStructA(std::ostream& os) {
  StructA a;
  a.example_bool() = true;
  a.example_char() = 'a';
  a.example_str() = "hello world";
  a.example_f32() = 3.14f;
  a.example_f64() = 6.28;
  a.example_u8() = 1;
  a.example_u16() = 2;
  a.example_u32() = 3;
  a.example_u64() = 4;
  a.example_i8() = -1;
  a.example_i16() = -2;
  a.example_i32() = -3;
  a.example_i64() = -4;
  a.nested_struct().a() = 5;
  a.inline_struct().b() = "inline struct b";
  a.nested_variant().c() = 12;
  a.inline_variant().f() = "inline variant choice f";
  json_demo::ToJson(os, a);
}

///////////////// StructB //////////////////////
void RenderStructB(std::ostream& os) {
  StructB b;
  b.example_vec_bool().push_back(true);
  b.example_vec_bool().push_back(false);

  b.example_vec_char().push_back(U'a');
  b.example_vec_char().push_back(U'🔥');
  b.example_vec_char().push_back(0);

  b.example_vec_str().push_back("Hello world");
  b.example_vec_str().push_back("Hello \n 🔥");

  b.example_vec_int().push_back(1);
  b.example_vec_int().push_back(2);

  StructB::NestedStruct nested;
  nested.a() = 42;
  b.example_vec_nested_struct().push_back(std::move(nested));
  StructB::NestedStruct nested2;
  nested2.a() = 420;
  b.example_vec_nested_struct().push_back(std::move(nested2));

  std::vector<int32_t> vec1;
  vec1.push_back(1);
  vec1.push_back(2);
  vec1.push_back(3);
  std::vector<int32_t> vec2;
  vec2.push_back(4);
  vec2.push_back(5);
  vec2.push_back(6);
  b.example_vec_vec_int().push_back(std::move(vec1));
  b.example_vec_vec_int().push_back(std::move(vec2));

  std::map<std::string, int32_t> first_map;
  first_map.insert({"universe", 42});
  std::map<std::string, int32_t> second_map;
  second_map.insert({"green", 420});
  b.example_vec_map_str_int().push_back(std::move(first_map));
  b.example_vec_map_str_int().push_back(std::move(second_map));

  ToJson(os, b);
}

StructB::NestedStruct ParseStructBNestedStruct(
    rapidjson::Value::ConstObject& obj) {
  StructB::NestedStruct ret;
  return ret;
}

StructB ParseStructB(const std::string& str) {
  StructB a;
  return a;
}

///////////////// StructC //////////////////////
void RenderStructC(std::ostream& os) {
  StructC c;
  c.example_map_bool_bool().insert({true, true});
  c.example_map_bool_bool().insert({false, false});

  c.example_map_char_char().insert({'a', 'b'});
  c.example_map_char_char().insert({U'🔥', U'🚒'});

  c.example_map_str_str().insert({"foo", "bar"});
  c.example_map_str_str().insert({"🔥🔥🔥", "🚒🚒🚒"});

  c.example_map_int_int().insert({1, 2});
  c.example_map_int_int().insert({3, 4});

  StructC::NestedStruct sc_nested1;
  sc_nested1.a() = 42;
  StructC::NestedStruct sc_nested2;
  sc_nested2.a() = 420;
  c.example_map_str_nested_struct().insert({"universe", std::move(sc_nested1)});
  c.example_map_str_nested_struct().insert({"green", std::move(sc_nested2)});

  std::vector<int32_t> vec1;
  vec1.push_back(1);
  vec1.push_back(2);
  vec1.push_back(3);
  std::vector<int32_t> vec2;
  vec2.push_back(4);
  vec2.push_back(5);
  vec2.push_back(6);
  c.example_map_str_vec().insert({"123", std::move(vec1)});
  c.example_map_str_vec().insert({"456", std::move(vec2)});

  std::map<std::string, int32_t> first_map;
  first_map.insert({"universe", 42});
  std::map<std::string, int32_t> second_map;
  second_map.insert({"green", 420});

  c.example_map_str_map().insert({"first", std::move(first_map)});
  c.example_map_str_map().insert({"second", std::move(second_map)});

  ToJson(os, c);
}

///////////////// VariantA //////////////////////
void RenderVariantABool(std::ostream& os) {
  VariantA a;
  a.example_bool() = true;
  ToJson(os, a);
}

void RenderVariantAChar(std::ostream& os) {
  VariantA a;
  a.example_char() = 'a';
  ToJson(os, a);
}

int main() {
  if (false) {
    std::cout << "StructA:" << std::endl;
    RenderStructA(std::cout);
    std::cout << std::endl;

    std::stringstream ss;
    RenderStructA(ss);
    StructA a = StructA::FromJson(ss.str());
    std::cout << "Reconstituted StructA:" << std::endl;
    ToJson(std::cout, a);
    std::cout << std::endl;
  }

  if (false) {
    std::cout << std::endl << "StructB:" << std::endl;
    RenderStructB(std::cout);
    std::cout << std::endl;

    std::stringstream ss;
    RenderStructB(ss);
    StructB b = StructB::FromJson(ss.str());
    std::cout << "Reconstituted StructB:" << std::endl;
    ToJson(std::cout, b);
    std::cout << std::endl;
  }

  if (true) {
    std::cout << std::endl << "StructC:" << std::endl;
    RenderStructC(std::cout);
    std::cout << std::endl;

    std::stringstream ss;
    RenderStructC(ss);
    StructC c = StructC::FromJson(ss.str());
    std::cout << "Reconstituted StruStructC:" << std::endl;
    ToJson(std::cout, c);
    std::cout << std::endl;
  }

  // std::cout << std::endl << "VariantABool:" << std::endl;
  // RenderVariantABool(std::cout);
  // std::cout << std::endl << "VariantAChar:" << std::endl;
  // RenderVariantAChar(std::cout);
  // std::cout << std::endl;

  return 0;
}