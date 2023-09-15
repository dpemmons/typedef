#ifndef TYPEDEF_BUILTIN_TYPES_H__
#define TYPEDEF_BUILTIN_TYPES_H__

#include <map>
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

#endif  // TYPEDEF_BUILTIN_TYPES_H__
