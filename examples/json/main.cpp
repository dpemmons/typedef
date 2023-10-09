#include <iostream>

#include "json_demo.td.h"

int main() {
  using namespace json_demo;

  ///////////////// StructA //////////////////////
  {
    StructA a;
    std::cout << "StructA:" << std::endl;
    ToJson(std::cout, a);
    std::cout << std::endl;
  }

  ///////////////// StructB //////////////////////
  {
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

    td::Vector<int32_t> vec1;
    vec1.push_back(1);
    vec1.push_back(2);
    vec1.push_back(3);
    td::Vector<int32_t> vec2;
    vec2.push_back(4);
    vec2.push_back(5);
    vec2.push_back(6);
    b.example_vec_vec_int().push_back(std::move(vec1));
    b.example_vec_vec_int().push_back(std::move(vec2));

    td::Map<std::string, int32_t> first_map;
    first_map.insert({"universe", 42});
    td::Map<std::string, int32_t> second_map;
    second_map.insert({"green", 420});
    b.example_vec_map_str_int().push_back(std::move(first_map));
    b.example_vec_map_str_int().push_back(std::move(second_map));

    std::cout << "StructB:" << std::endl;
    ToJson(std::cout, b);
    std::cout << std::endl;
  }

  ///////////////// StructC //////////////////////
  {
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
    c.example_map_str_nested_struct().insert(
        {"universe", std::move(sc_nested1)});
    c.example_map_str_nested_struct().insert({"green", std::move(sc_nested2)});

    td::Vector<int32_t> vec1;
    vec1.push_back(1);
    vec1.push_back(2);
    vec1.push_back(3);
    td::Vector<int32_t> vec2;
    vec2.push_back(4);
    vec2.push_back(5);
    vec2.push_back(6);
    c.example_map_str_vec().insert({"123", std::move(vec1)});
    c.example_map_str_vec().insert({"456", std::move(vec1)});

    td::Map<std::string, int32_t> first_map;
    first_map.insert({"universe", 42});
    td::Map<std::string, int32_t> second_map;
    second_map.insert({"green", 420});
    
    c.example_map_str_map().insert({"first", std::move(first_map)});
    c.example_map_str_map().insert({"second", std::move(second_map)});

    std::cout << "StructC:" << std::endl;
    ToJson(std::cout, c);
    std::cout << std::endl;
  }

  ///////////////// VariantA //////////////////////
  {
    VariantA a;
    a.example_bool() = true;

    std::cout << "VariantA (bool):" << std::endl;
    ToJson(std::cout, a);
    std::cout << std::endl;

    std::cout << "VariantA (char):" << std::endl;
    a.example_char() = 'a';
    ToJson(std::cout, a);
    std::cout << std::endl;
  }

  return 0;
}