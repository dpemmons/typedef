#pragma once

#include <map>
#include <string>

namespace td {

enum LanguageVersion {
  UNKNOWN = 0,
  ALPHA = 1,
};
LanguageVersion LangaugeVersionFromString(std::string& str);

bool IsValidLanguageVersion(std::string& str);

std::string ToString(LanguageVersion v);

}  // namespace td