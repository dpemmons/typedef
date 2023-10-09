
#include "simple_values.td.h"

// Generated by the Typedef compiler (EXPERIMENTAL)

namespace simple_values {


// Struct and variant definitions


// StructA member definitions



// StructB member definitions



// StructC member definitions



// simple_values::VariantA member definitions



// simple_values::VariantB member definitions



// StructD member definitions



// StructE member definitions



// simple_values::VariantC member definitions



// Struct and variant JSON declarations


std::string ToJson(const StructA& from) {
  std::stringstream ss;
  ToJson(ss, from);
  return ss.str();
}
void ToJson(std::ostream& os, const StructA& from) {
  os << "{";
  
os << "\"example_bool\":"; os << (from.example_bool() ? "true" : "false");
os << ",";
os << "\"example_char\":"; os << "\"" << td::char32ToJsonString(from.example_char()) << "\"";
os << ",";
os << "\"example_str\":"; os << "\"" << td::escape_json(from.example_str()) << "\"";
os << ",";
os << "\"example_f32\":"; os << from.example_f32();
os << ",";
os << "\"example_f64\":"; os << from.example_f64();
os << ",";
os << "\"example_u8\":"; os << (int)from.example_u8();
os << ",";
os << "\"example_u16\":"; os << from.example_u16();
os << ",";
os << "\"example_u32\":"; os << from.example_u32();
os << ",";
os << "\"example_u64\":"; os << from.example_u64();
os << ",";
os << "\"example_i8\":"; os << (int)from.example_i8();
os << ",";
os << "\"example_i16\":"; os << from.example_i16();
os << ",";
os << "\"example_i32\":"; os << from.example_i32();
os << ",";
os << "\"example_i64\":"; os << from.example_i64();

  os << "}";
}





std::string ToJson(const StructB& from) {
  std::stringstream ss;
  ToJson(ss, from);
  return ss.str();
}
void ToJson(std::ostream& os, const StructB& from) {
  os << "{";
  
os << "\"example_bool\":"; os << (from.example_bool() ? "true" : "false");
os << ",";
os << "\"example_char\":"; os << "\"" << td::char32ToJsonString(from.example_char()) << "\"";
os << ",";
os << "\"example_str\":"; os << "\"" << td::escape_json(from.example_str()) << "\"";
os << ",";
os << "\"example_f32\":"; os << from.example_f32();
os << ",";
os << "\"example_f64\":"; os << from.example_f64();
os << ",";
os << "\"example_u8\":"; os << (int)from.example_u8();
os << ",";
os << "\"example_u16\":"; os << from.example_u16();
os << ",";
os << "\"example_u32\":"; os << from.example_u32();
os << ",";
os << "\"example_u64\":"; os << from.example_u64();
os << ",";
os << "\"example_i8\":"; os << (int)from.example_i8();
os << ",";
os << "\"example_i16\":"; os << from.example_i16();
os << ",";
os << "\"example_i32\":"; os << from.example_i32();
os << ",";
os << "\"example_i64\":"; os << from.example_i64();

  os << "}";
}





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





std::string ToJson(const VariantA& from) {
  std::stringstream ss;
  ToJson(ss, from);
  return ss.str();
}
void ToJson(std::ostream& os, const VariantA& from) {
  os << "{";
  
  if (from.is_a()) {
    
os << "\"a\":"; os << (from.a() ? "true" : "false");

  }
  
  if (from.is_b()) {
    
os << "\"b\":"; os << (int)from.b();

  }
  
  os << "}";
}





std::string ToJson(const VariantB& from) {
  std::stringstream ss;
  ToJson(ss, from);
  return ss.str();
}
void ToJson(std::ostream& os, const VariantB& from) {
  os << "{";
  
  if (from.is_a()) {
    
os << "\"a\":"; os << (from.a() ? "true" : "false");

  }
  
  if (from.is_b()) {
    
os << "\"b\":"; os << "\"" << td::char32ToJsonString(from.b()) << "\"";

  }
  
  if (from.is_c()) {
    
os << "\"c\":"; os << "\"" << td::escape_json(from.c()) << "\"";

  }
  
  if (from.is_d()) {
    
os << "\"d\":"; os << (int)from.d();

  }
  
  if (from.is_e()) {
    
os << "\"e\":"; os << from.e();

  }
  
  if (from.is_f()) {
    
os << "\"f\":"; os << from.f();

  }
  
  if (from.is_g()) {
    
os << "\"g\":"; os << from.g();

  }
  
  if (from.is_h()) {
    
os << "\"h\":"; os << (int)from.h();

  }
  
  if (from.is_i()) {
    
os << "\"i\":"; os << from.i();

  }
  
  if (from.is_j()) {
    
os << "\"j\":"; os << from.j();

  }
  
  if (from.is_k()) {
    
os << "\"k\":"; os << from.k();

  }
  
  if (from.is_sa()) {
    
if (from.has_sa()) {os << "\"sa\":"; ToJson(os, from.sa());} else {os << "\"sa\":"; os << "null";}

  }
  
  if (from.is_sb()) {
    
if (from.has_sb()) {os << "\"sb\":"; ToJson(os, from.sb());} else {os << "\"sb\":"; os << "null";}

  }
  
  if (from.is_sc()) {
    
if (from.has_sc()) {os << "\"sc\":"; ToJson(os, from.sc());} else {os << "\"sc\":"; os << "null";}

  }
  
  if (from.is_va()) {
    
os << "\"va\":";
{
  auto& arr = from.va();
  
os << "[";
for (size_t ii = 0; ii < arr.size(); ii++) {
  const auto& val = arr[ii];
  os << (int)val;
  if (ii < arr.size() - 1) { os << ","; }
}
os << "]";

}

  }
  
  if (from.is_vara()) {
    
if (from.has_vara()) {os << "\"vara\":"; ToJson(os, from.vara());} else {os << "\"vara\":"; os << "null";}

  }
  
  if (from.is_mapa()) {
    
os << "\"mapa\":";
{
  auto& map = from.mapa();
  
os << "{";
auto iter = map.begin();
while (iter != map.end()) {
  {
  const auto& key = iter->first;
  os << "\"" << std::to_string(key) << "\"";
  }
  os << ":";
  {
  const auto& val = iter->second;
  ToJson(os, val);
  }
  ++iter;
  if (iter != map.end()) { os << ","; }
}
os << "}";

}

  }
  
  os << "}";
}





std::string ToJson(const StructD& from) {
  std::stringstream ss;
  ToJson(ss, from);
  return ss.str();
}
void ToJson(std::ostream& os, const StructD& from) {
  os << "{";
  
if (from.has_a_struct()) {os << "\"a_struct\":"; ToJson(os, from.a_struct());} else {os << "\"a_struct\":"; os << "null";}
os << ",";
if (from.has_b_variant()) {os << "\"b_variant\":"; ToJson(os, from.b_variant());} else {os << "\"b_variant\":"; os << "null";}
os << ",";
os << "\"c_vec\":";
{
  auto& arr = from.c_vec();
  
os << "[";
for (size_t ii = 0; ii < arr.size(); ii++) {
  const auto& val = arr[ii];
  os << (int)val;
  if (ii < arr.size() - 1) { os << ","; }
}
os << "]";

}
os << ",";
os << "\"d_map\":";
{
  auto& map = from.d_map();
  
os << "{";
auto iter = map.begin();
while (iter != map.end()) {
  {
  const auto& key = iter->first;
  os << "\"" << std::to_string(key) << "\"";
  }
  os << ":";
  {
  const auto& val = iter->second;
  ToJson(os, val);
  }
  ++iter;
  if (iter != map.end()) { os << ","; }
}
os << "}";

}

  os << "}";
}





std::string ToJson(const StructE& from) {
  std::stringstream ss;
  ToJson(ss, from);
  return ss.str();
}
void ToJson(std::ostream& os, const StructE& from) {
  os << "{";
  
if (from.has_inlineStruct()) {os << "\"inlineStruct\":"; ToJson(os, from.inlineStruct());} else {os << "\"inlineStruct\":"; os << "null";}
os << ",";
os << "\"vec_a\":";
{
  auto& arr = from.vec_a();
  
os << "[";
for (size_t ii = 0; ii < arr.size(); ii++) {
  const auto& val = arr[ii];
  os << val;
  if (ii < arr.size() - 1) { os << ","; }
}
os << "]";

}
os << ",";
os << "\"map_a\":";
{
  auto& map = from.map_a();
  
os << "{";
auto iter = map.begin();
while (iter != map.end()) {
  {
  const auto& key = iter->first;
  os << "\"" << td::escape_json(key) << "\"";
  }
  os << ":";
  {
  const auto& val = iter->second;
  ToJson(os, val);
  }
  ++iter;
  if (iter != map.end()) { os << ","; }
}
os << "}";

}
os << ",";
if (from.has_nestedStructField()) {os << "\"nestedStructField\":"; ToJson(os, from.nestedStructField());} else {os << "\"nestedStructField\":"; os << "null";}
os << ",";
if (from.has_nestedVariantField()) {os << "\"nestedVariantField\":"; ToJson(os, from.nestedVariantField());} else {os << "\"nestedVariantField\":"; os << "null";}

  os << "}";
}


std::string ToJson(const StructE::VariantE& from) {
  std::stringstream ss;
  ToJson(ss, from);
  return ss.str();
}
void ToJson(std::ostream& os, const StructE::VariantE& from) {
  os << "{";
  
  if (from.is_va()) {
    
os << "\"va\":"; os << from.va();

  }
  
  if (from.is_vb()) {
    
os << "\"vb\":"; os << "\"" << td::escape_json(from.vb()) << "\"";

  }
  
  os << "}";
}



std::string ToJson(const StructE::NestedStruct& from) {
  std::stringstream ss;
  ToJson(ss, from);
  return ss.str();
}
void ToJson(std::ostream& os, const StructE::NestedStruct& from) {
  os << "{";
  
os << "\"a\":"; os << from.a();

  os << "}";
}



std::string ToJson(const StructE::NestedVariant& from) {
  std::stringstream ss;
  ToJson(ss, from);
  return ss.str();
}
void ToJson(std::ostream& os, const StructE::NestedVariant& from) {
  os << "{";
  
  if (from.is_a()) {
    
os << "\"a\":"; os << from.a();

  }
  
  os << "}";
}




std::string ToJson(const StructE::inlineStructT& from) {
  std::stringstream ss;
  ToJson(ss, from);
  return ss.str();
}
void ToJson(std::ostream& os, const StructE::inlineStructT& from) {
  os << "{";
  
os << "\"a\":"; os << from.a();

  os << "}";
}





std::string ToJson(const VariantC& from) {
  std::stringstream ss;
  ToJson(ss, from);
  return ss.str();
}
void ToJson(std::ostream& os, const VariantC& from) {
  os << "{";
  
  if (from.is_inlineStruct()) {
    
if (from.has_inlineStruct()) {os << "\"inlineStruct\":"; ToJson(os, from.inlineStruct());} else {os << "\"inlineStruct\":"; os << "null";}

  }
  
  if (from.is_VariantF()) {
    
if (from.has_VariantF()) {os << "\"VariantF\":"; ToJson(os, from.VariantF());} else {os << "\"VariantF\":"; os << "null";}

  }
  
  if (from.is_vec_a()) {
    
os << "\"vec_a\":";
{
  auto& arr = from.vec_a();
  
os << "[";
for (size_t ii = 0; ii < arr.size(); ii++) {
  const auto& val = arr[ii];
  os << val;
  if (ii < arr.size() - 1) { os << ","; }
}
os << "]";

}

  }
  
  if (from.is_map_a()) {
    
os << "\"map_a\":";
{
  auto& map = from.map_a();
  
os << "{";
auto iter = map.begin();
while (iter != map.end()) {
  {
  const auto& key = iter->first;
  os << "\"" << td::escape_json(key) << "\"";
  }
  os << ":";
  {
  const auto& val = iter->second;
  ToJson(os, val);
  }
  ++iter;
  if (iter != map.end()) { os << ","; }
}
os << "}";

}

  }
  
  if (from.is_nestedStructField()) {
    
if (from.has_nestedStructField()) {os << "\"nestedStructField\":"; ToJson(os, from.nestedStructField());} else {os << "\"nestedStructField\":"; os << "null";}

  }
  
  if (from.is_nestedVariantField()) {
    
if (from.has_nestedVariantField()) {os << "\"nestedVariantField\":"; ToJson(os, from.nestedVariantField());} else {os << "\"nestedVariantField\":"; os << "null";}

  }
  
  if (from.is_map_b()) {
    
os << "\"map_b\":";
{
  auto& map = from.map_b();
  
os << "{";
auto iter = map.begin();
while (iter != map.end()) {
  {
  const auto& key = iter->first;
  os << "\"" << std::to_string(key) << "\"";
  }
  os << ":";
  {
  const auto& val = iter->second;
  ToJson(os, val);
  }
  ++iter;
  if (iter != map.end()) { os << ","; }
}
os << "}";

}

  }
  
  if (from.is_vec_b()) {
    
os << "\"vec_b\":";
{
  auto& arr = from.vec_b();
  
os << "[";
for (size_t ii = 0; ii < arr.size(); ii++) {
  const auto& val = arr[ii];
  os << val;
  if (ii < arr.size() - 1) { os << ","; }
}
os << "]";

}

  }
  
  os << "}";
}


std::string ToJson(const VariantC::NestedStruct& from) {
  std::stringstream ss;
  ToJson(ss, from);
  return ss.str();
}
void ToJson(std::ostream& os, const VariantC::NestedStruct& from) {
  os << "{";
  
os << "\"a\":"; os << from.a();

  os << "}";
}



std::string ToJson(const VariantC::NestedVariant& from) {
  std::stringstream ss;
  ToJson(ss, from);
  return ss.str();
}
void ToJson(std::ostream& os, const VariantC::NestedVariant& from) {
  os << "{";
  
  if (from.is_a()) {
    
os << "\"a\":"; os << from.a();

  }
  
  os << "}";
}




std::string ToJson(const VariantC::inlineStructT& from) {
  std::stringstream ss;
  ToJson(ss, from);
  return ss.str();
}
void ToJson(std::ostream& os, const VariantC::inlineStructT& from) {
  os << "{";
  
os << "\"a\":"; os << from.a();

  os << "}";
}



std::string ToJson(const VariantC::VariantFT& from) {
  std::stringstream ss;
  ToJson(ss, from);
  return ss.str();
}
void ToJson(std::ostream& os, const VariantC::VariantFT& from) {
  os << "{";
  
  if (from.is_va()) {
    
os << "\"va\":"; os << from.va();

  }
  
  if (from.is_vb()) {
    
os << "\"vb\":"; os << "\"" << td::escape_json(from.vb()) << "\"";

  }
  
  os << "}";
}





// Tmplate function definitions


} // namespace simple_values

