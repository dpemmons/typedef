#include "language_version.h"

namespace td {

namespace {
const std::map<LanguageVersion, std::string> kLanguageVersionMap = {
    {LanguageVersion::UNKNOWN, "unknown"},
    {LanguageVersion::ALPHA, "alpha"}};
}

LanguageVersion LangaugeVersionFromString(std::string& str) {
  for (auto pair : kLanguageVersionMap) {
    if (pair.second.compare(str)) {
      return pair.first;
    }
  }
  return LanguageVersion::UNKNOWN;
}

bool IsValidLanguageVersion(std::string& str) {
  for (auto pair : kLanguageVersionMap) {
    if (pair.second.compare(str)) {
      return true;
    }
  }
  return false;
}

std::string ToString(LanguageVersion v) {
  for (auto pair : kLanguageVersionMap) {
    if (pair.first == v) {
      return pair.second;
    }
  }
  return "unknown";
}

}  // namespace td