
#include "template_example.td.h"

// Generated by the Typedef compiler

namespace {

inline std::string escape_json(const std::string& s) {
  std::ostringstream o;
  for (auto c = s.cbegin(); c != s.cend(); c++) {
    switch (*c) {
      case '"': o << "\\\""; break;
      case '\\': o << "\\\\"; break;
      case '\b': o << "\\b"; break;
      case '\f': o << "\\f"; break;
      case '\n': o << "\\n"; break;
      case '\r': o << "\\r"; break;
      case '\t': o << "\\t"; break;
      default:
        if ('\x00' <= *c && *c <= '\x1f') {
          o << "\\u" << std::hex << std::setw(4) << std::setfill('0')
            << static_cast<int>(*c);
        } else {
          o << *c;
        }
    }
  }
  return o.str();
}

inline std::string char32ToJsonString(char32_t c) {
  std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> converter;
  std::string utf8 = converter.to_bytes(&c, &c + 1);
  return escape_json(utf8);
}

template <typename T>
inline bool IsEmpty(const td::Vector<T>& v) {
  return v.size() == 0;
}

}

namespace template_example {

// Struct and variant definitions

// StructC member definitions

// TemplateData member definitions

// template_example::SomeVariant member definitions


// Struct and variant JSON declarations

std::string ToJson(const StructC& from) {
  std::stringstream ss;
  ToJson(ss, from);
  return ss.str();
}
void ToJson(std::ostream& os, const StructC& from) {
  os << "{";
  
if (from.has_asdf()) {os << "\"asdf\":"; ToJson(os, from.asdf());} else {os << "\"asdf\":"; os << "null";}
os << ",";
os << "\"zxcv\":"; os << from.zxcv();
os << ",";
os << "\"jkl\":"; os << from.jkl();

  os << "}";
}



std::string ToJson(const TemplateData& from) {
  std::stringstream ss;
  ToJson(ss, from);
  return ss.str();
}
void ToJson(std::ostream& os, const TemplateData& from) {
  os << "{";
  
os << "\"name\":"; os << "\"" << escape_json(from.name()) << "\"";
os << ",";
os << "\"has_name\":"; os << (from.has_name() ? "true" : "false");
os << ",";
os << "\"name2\":"; os << "\"" << escape_json(from.name2()) << "\"";
os << ",";
os << "\"has_name2\":"; os << (from.has_name2() ? "true" : "false");
os << ",";
os << "\"someVec\":";
{
  auto& arr = from.someVec();
  
os << "[";
for (size_t ii = 0; ii < arr.size(); ii++) {
  const auto& val = arr[ii];
  os << val;
  if (ii < arr.size() - 1) { os << ","; }
}
os << "]";

}
os << ",";
os << "\"someMap\":";
{
  auto& map = from.someMap();
  
os << "{";
auto iter = map.begin();
while (iter != map.end()) {
  {
  const auto& key = iter->first;
  os << "\"" << escape_json(key) << "\"";
  }
  os << ":";
  {
  const auto& val = iter->second;
  os << "\"" << escape_json(val) << "\"";
  }
  ++iter;
  if (iter != map.end()) { os << ","; }
}
os << "}";

}
os << ",";
if (from.has_structC()) {os << "\"structC\":"; ToJson(os, from.structC());} else {os << "\"structC\":"; os << "null";}

  os << "}";
}



std::string ToJson(const SomeVariant& from) {
  std::stringstream ss;
  ToJson(ss, from);
  return ss.str();
}
void ToJson(std::ostream& os, const SomeVariant& from) {
  os << "{";
  
  if (from.is_a_string()) {
    
os << "\"a_string\":"; os << "\"" << escape_json(from.a_string()) << "\"";

  }
  
  if (from.is_b_int()) {
    
os << "\"b_int\":"; os << from.b_int();

  }
  
  if (from.is_c_char()) {
    
os << "\"c_char\":"; os << "\"" << char32ToJsonString(from.c_char()) << "\"";

  }
  
  if (from.is_d_struct()) {
    
if (from.has_d_struct()) {os << "\"d_struct\":"; ToJson(os, from.d_struct());} else {os << "\"d_struct\":"; os << "null";}

  }
  
  os << "}";
}




// Tmplate function definitions

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

os << "\n  ";
Literal(os);
os << "\n";

}
void Literal(std::ostream& os) {
os << "literal template function.";

}

} // namespace template_example

