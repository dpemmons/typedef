#pragma once

#include <cstdint>
#include <istream>
#include <string>
#include <variant>
#include <vector>

#include "syntax.h"

namespace td {

class TypeDeclaration {
 public:
 private:
};

class PrimitiveTypeDeclaration : public TypeDeclaration {
 public:
 private:
  PrimitiveTypeValue val_;
};

struct ParseError {
  std::errc err;
  size_t line;
  size_t pos_in_line;
};

struct ParseResult {
  std::vector<ParseError> errors;
  IntermediateTree tree;

  bool HasErrors() const { return errors.size() > 0; }
};

// Inefficient convenience method.
ParseResult Parse(std::string s);

ParseResult Parse(std::istream& input);

}  // namespace td
