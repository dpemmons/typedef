#pragma once

#include <istream>
#include <variant>

struct ParsedFile {};

std::variant<ParsedFile, bool> ParseFile(std::istream& input);
