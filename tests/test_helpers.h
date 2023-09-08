#ifndef TYPEDEF_TESTS_TEST_HELPERS_H_
#define TYPEDEF_TESTS_TEST_HELPERS_H_

#include <sstream>
#include <string>

#include "libtypedef/parser/typedef_parser.h"

class TestParser : public td::Parser {
 public:
  TestParser(const std::string& str)
      : str_(str), istr_(str_), td::Parser(istr_) {}

 private:
  std::string str_;
  std::istringstream istr_;
};

#endif  // TYPEDEF_TESTS_TEST_HELPERS_H_