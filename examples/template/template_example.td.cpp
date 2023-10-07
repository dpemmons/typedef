
#include "template_example.td.h"

#include <string>


// PRODUCED BY SELF-HOSTED TYPEDEF CODEGEN

namespace template_example {



void PrintStructC(std::ostream& os, const StructC& sc) {
os << "\nStructC contains:\nzxcv: ";
os << sc.zxcv();
os << "\njkl: ";
os << sc.jkl();
os << "\n";

}
void PrintTemplateData(std::ostream& os, const TemplateData& t) {
os << "\n  here's an if:\n  ";
if (t.has_name()) {
os << "\n    yo name: ";
os << t.name();
os << "\n  ";
} else if (t.has_name2()) {
os << "\n    hi name2: ";
os << t.name2();
os << "\n  ";
} else {
os << "\n    neither name or name2.\n  ";
}
os << "\n\n  here's a for statement over a vector:\n  ";


for (size_t td_iter_ = 0; td_iter_ < t.someVec().size(); td_iter_++) {
  auto& i = t.someVec()[td_iter_];
  auto IsFirst = [&]() { return td_iter_ == 0; };
  auto IsLast = [&]() { return td_iter_ == t.someVec().size() - 1; };
  auto Index0 = [&](std::ostream& os) { os << std::to_string(td_iter_); };
  auto Index1 = [&](std::ostream& os) { os << std::to_string(td_iter_ + 1); };
os << "\n    for value number: ";
os << i;
os << "\n  ";
}

os << "\n\n  here's a for statement over a map:\n  ";


for (auto const& [key, val] : t.someMap()) {
os << "\n    ";
os << key;
os << " -> ";
os << val;
os << "\n  ";
}

os << "\n  Here's structC\n  ";
PrintStructC(os, t.structC());
os << "\n";

}
void DoSomeVariant(std::ostream& os, const SomeVariant& v) {
os << "\n  ";
// Switch v

if (v.is_a_string()) {
os << "It's a string: ";
os << v.a_string();
} else 
if (v.is_b_int()) {
os << "It's an int: ";
os << v.b_int();
} else 
if (v.is_d_struct()) {
os << "It's a struct: ";
PrintStructC(os, v.d_struct());
} else  {
os << "It's the default!";
}
os << "\n";

}
void LoopLogic(std::ostream& os, const td::Vector<std::string>& v) {
os << "\n  LoopLogic:\n  ";


for (size_t td_iter_ = 0; td_iter_ < v.size(); td_iter_++) {
  auto& i = v[td_iter_];
  auto IsFirst = [&]() { return td_iter_ == 0; };
  auto IsLast = [&]() { return td_iter_ == v.size() - 1; };
  auto Index0 = [&](std::ostream& os) { os << std::to_string(td_iter_); };
  auto Index1 = [&](std::ostream& os) { os << std::to_string(td_iter_ + 1); };
os << "\n  ";
if (IsFirst()) {
os << "\n  This is the first one: ";
os << i;
os << "\n  ";
} else if (IsLast()) {
os << "\n  This is the last one: ";
os << i;
os << "\n  ";
} else {
os << "\n  This is the middle: ";
os << i;
os << "\n  ";
}
os << "\n  ";
}

os << "\n";

}
void BooleanLogic(std::ostream& os, const td::Vector<std::string>& v) {
os << "\n  BooleanLogic:\n  ";


for (size_t td_iter_ = 0; td_iter_ < v.size(); td_iter_++) {
  auto& i = v[td_iter_];
  auto IsFirst = [&]() { return td_iter_ == 0; };
  auto IsLast = [&]() { return td_iter_ == v.size() - 1; };
  auto Index0 = [&](std::ostream& os) { os << std::to_string(td_iter_); };
  auto Index1 = [&](std::ostream& os) { os << std::to_string(td_iter_ + 1); };
os << "\n  ";
os << i;
os << "\n  ";
if (!IsFirst()) {
os << "This is not the first one.";
} else {
}
os << "\n  ";
if (!IsLast()) {
os << "This is not the last one.";
} else {
}
os << "\n  ";
}

os << "\n";

}
void TestIsEmpty(std::ostream& os, const td::Vector<std::string>& v) {
os << "v is ";
if (!IsEmpty(v)) {
os << " not ";
} else {
}
os << " empty.";

}
void PrintIndices(std::ostream& os, const td::Vector<std::string>& v) {
os << "\n  ";


for (size_t td_iter_ = 0; td_iter_ < v.size(); td_iter_++) {
  auto& i = v[td_iter_];
  auto IsFirst = [&]() { return td_iter_ == 0; };
  auto IsLast = [&]() { return td_iter_ == v.size() - 1; };
  auto Index0 = [&](std::ostream& os) { os << std::to_string(td_iter_); };
  auto Index1 = [&](std::ostream& os) { os << std::to_string(td_iter_ + 1); };
os << "\n  i0: ";
Index0(os);
os << " i1: ";
Index1(os);
os << " \"";
os << i;
os << "\"\n  ";
}

os << "\n";

}












} // namespace template_example

