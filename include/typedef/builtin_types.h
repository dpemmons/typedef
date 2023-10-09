#ifndef TYPEDEF_BUILTIN_TYPES_H__
#define TYPEDEF_BUILTIN_TYPES_H__

#include <codecvt>
#include <iomanip>
#include <locale>
#include <map>
#include <sstream>
#include <string>
#include <vector>

namespace td {

template <typename T>
class Vector : public std::vector<T> {
 public:
  Vector() = default;
  ~Vector() = default;

  Vector(Vector&& other) noexcept = default;
  Vector& operator=(Vector&& other) noexcept = default;

 private:
};

template <typename K, typename V>
class Map : public std::map<K, V> {
 public:
  Map() = default;
  ~Map() = default;

  Map(Map&& other) noexcept = default;
  Map& operator=(Map&& other) noexcept = default;

 private:
};

}  // namespace td

// TODO this is a pretty terrible place to put this!!
// it should be generated inline... or at least namespaced.
template <typename T>
inline bool IsEmpty(const td::Vector<T>& v) {
  return v.size() == 0;
}

inline std::string escape_json(const std::string& s) {
  std::ostringstream o;
  for (auto c = s.cbegin(); c != s.cend(); c++) {
    switch (*c) {
      case '"':
        o << "\\\"";
        break;
      case '\\':
        o << "\\\\";
        break;
      case '\b':
        o << "\\b";
        break;
      case '\f':
        o << "\\f";
        break;
      case '\n':
        o << "\\n";
        break;
      case '\r':
        o << "\\r";
        break;
      case '\t':
        o << "\\t";
        break;
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

#endif  // TYPEDEF_BUILTIN_TYPES_H__
