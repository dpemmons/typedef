
#include "template_example.td.h"

#include <string>

namespace template_example {


void PrintStructC(std::ostream& os, const StructC& sc) {
  os << R"(
StructC contains:
zxcv: )";
  
  os << sc.zxcv();
  
  os << R"(
jkl: )";
  
  os << sc.jkl();
  
  os << R"(
)";
}

void PrintTemplateData(std::ostream& os, const TemplateData& t) {
  os << R"(
  here's an if:
  )";
  if (
  t.has_name()
  ) {
  os << R"(
    yo name: )";
  
  os << t.name();
  
  os << R"(
  )";
  } else if (
  t.has_name2()
  ) {
  os << R"(
    hi name2: )";
  
  os << t.name2();
  
  os << R"(
  )";
  } else {
  os << R"(
    neither name or name2.
  )";
  }
  os << R"(

  here's a for statement over a vector:
  )";
  for (size_t ii = 0; ii < t.someVec().size(); ii++) {
    auto& i = t.someVec()[ii];
    auto IsFirst = [&]() { return ii == 0; };
    auto IsLast = [&]() {
      return ii == t.someVec().size() - 1;
    };
  os << R"(
    for value number: )";
  
  os << i;
  
  os << R"(
  )";
  }
  os << R"(

  here's a for statement over a map:
  )";
  for (auto const& [key, val] : t.someMap()) {
  os << R"(
    )";
  
  os << key;
  
  os << R"( -> )";
  
  os << val;
  
  os << R"(
  )";
  }
  os << R"(
  Here's structC
  )";
  
  PrintStructC(os, t.structC());
  
  os << R"(
)";
}

void DoSomeVariant(std::ostream& os, const SomeVariant& v) {
  os << R"(
  )";
  // switch {"val_ref_path":["v"]}
if (v.is_a_string()) {
  os << R"(It's a string: )";
  
  os << v.a_string();
  
} else 
if (v.is_b_int()) {
  os << R"(It's an int: )";
  
  os << v.b_int();
  
} else 
if (v.is_d_struct()) {
  os << R"(It's a struct: )";
  
  PrintStructC(os, v.d_struct());
  
} else 
{
  os << R"(It's the default!)";
}
  os << R"(
)";
}

void LoopLogic(std::ostream& os, const td::Vector<std::string>& v) {
  os << R"(
  LoopLogic:
  )";
  for (size_t ii = 0; ii < v.size(); ii++) {
    auto& i = v[ii];
    auto IsFirst = [&]() { return ii == 0; };
    auto IsLast = [&]() {
      return ii == v.size() - 1;
    };
  os << R"(
  )";
  if (
  IsFirst()
  ) {
  os << R"(
  This is the first one: )";
  
  os << i;
  
  os << R"(
  )";
  } else if (
  IsLast()
  ) {
  os << R"(
  This is the last one: )";
  
  os << i;
  
  os << R"(
  )";
  } else {
  os << R"(
  This is the middle: )";
  
  os << i;
  
  os << R"(
  )";
  }
  os << R"(
  )";
  }
  os << R"(
)";
}

void BooleanLogic(std::ostream& os, const td::Vector<std::string>& v) {
  os << R"(
  BooleanLogic:
  )";
  for (size_t ii = 0; ii < v.size(); ii++) {
    auto& i = v[ii];
    auto IsFirst = [&]() { return ii == 0; };
    auto IsLast = [&]() {
      return ii == v.size() - 1;
    };
  os << R"(
  )";
  
  os << i;
  
  os << R"(
  )";
  if (
  (! 
  IsFirst()
  )
  ) {
  os << R"(This is not the first one.)";
  } 
  os << R"(
  )";
  if (
  (! 
  IsLast()
  )
  ) {
  os << R"(This is not the last one.)";
  } 
  os << R"(
  )";
  }
  os << R"(
)";
}

void TestIsEmpty(std::ostream& os, const td::Vector<std::string>& v) {
  os << R"(v is )";
  if (
  (! 
  IsEmpty(v)
  )
  ) {
  os << R"( not )";
  } 
  os << R"( empty.)";
}

}  // namespace template_example
  