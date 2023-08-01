
#include "simple_values.td.h"

#include <sstream>

namespace sv {
namespace t {



std::ostream& operator<<(std::ostream& os, const MutableStructA& obj) {
  os << "struct MutableStructA.\n";
  return os;
}

std::ostream& operator<<(std::ostream& os, const MutableStructB& obj) {
  os << "struct MutableStructB.\n";
  return os;
}

std::ostream& operator<<(std::ostream& os, const MutableStructC& obj) {
  os << "struct MutableStructC.\n";
  return os;
}

std::ostream& operator<<(std::ostream& os, const MutableStructD& obj) {
  os << "struct MutableStructD.\n";
  return os;
}

std::ostream& operator<<(std::ostream& os, const MutableStructE& obj) {
  os << "struct MutableStructE.\n";
  return os;
}

std::ostream& operator<<(std::ostream& os, const MutableTemplateExample& obj) {
  os << "struct MutableTemplateExample.\n";
  return os;
}

std::string MutableTemplateExample::tmpl(const MutableTemplateData& arg) {
  std::stringstream ss;
  ss << R"typedef(Hello )typedef";
  ss << arg.name();
  ss << R"typedef(!)typedef";

  return ss.str();
}

std::string MutableTemplateExample::tmpl2(const MutableTemplateData& arg) {
  std::stringstream ss;
  ss << R"typedef(Yo )typedef";
  ss << arg.name();
  ss << R"typedef(!)typedef";

  return ss.str();
}

std::string MutableTemplateExample::tmpl3(const MutableTemplateData& arg) {
  std::stringstream ss;
  ss << R"typedef(
  )typedef";
  ss << R"typedef(

  )typedef";
  ss << R"typedef(
  )typedef";

  return ss.str();
}



std::ostream& operator<<(std::ostream& os, const MutableVariantA& obj) {
  os << "variant MutableVariantA.\n";
  return os;
}

std::ostream& operator<<(std::ostream& os, const MutableVariantB& obj) {
  os << "variant MutableVariantB.\n";
  return os;
}

std::ostream& operator<<(std::ostream& os, const MutableVariantC& obj) {
  os << "variant MutableVariantC.\n";
  return os;
}



std::ostream& operator<<(std::ostream& os, const MutableVecA& obj) {
  os << "vector MutableVecA.\n";
  return os;
}

std::ostream& operator<<(std::ostream& os, const MutableVecB& obj) {
  os << "vector MutableVecB.\n";
  return os;
}

std::ostream& operator<<(std::ostream& os, const MutableVecC& obj) {
  os << "vector MutableVecC.\n";
  return os;
}

std::ostream& operator<<(std::ostream& os, const MutableVecD& obj) {
  os << "vector MutableVecD.\n";
  return os;
}



std::ostream& operator<<(std::ostream& os, const MutableMapA& obj) {
  os << "map MutableMapA.\n";
  return os;
}

std::ostream& operator<<(std::ostream& os, const MutableMapB& obj) {
  os << "map MutableMapB.\n";
  return os;
}

std::ostream& operator<<(std::ostream& os, const MutableMapC& obj) {
  os << "map MutableMapC.\n";
  return os;
}

std::ostream& operator<<(std::ostream& os, const MutableMapD& obj) {
  os << "map MutableMapD.\n";
  return os;
}


}  // sv
}  // t

