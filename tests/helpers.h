#ifndef TESTS_HELPERS_H__
#define TESTS_HELPERS_H__

#include <istream>
#include <string>

#define FMT_HEADER_ONLY
#include <fmt/color.h>
#include <fmt/core.h>
#include <fmt/ostream.h>

#include "libtypedef/parser/parser_error_info.h"
#include "libtypedef/parser/typedef_parser.h"

#define REQUIRE_NO_PARSE_ERROR(x)                                              \
  CHECKED_ELSE(x == 0) {                                                       \
    std::stringstream ss;                                                      \
    ss << "Successful parse expected. Instead we got:\n";                      \
    for (const auto& err : parser.Errors()) {                                  \
      std::istringstream iss{parser.InputString()};                            \
      ss << fmt::format("Line {}:{}: {} {}\n", err.line, err.line_offset,      \
                        err.ErrorTypeToString(), err.message);                 \
      std::string line;                                                        \
      for (int l = 0; std::getline(iss, line); l++) {                          \
        if (l == err.line - 1) {                                               \
          ss << fmt::format("{}\n", line);                                     \
          size_t len = err.length ? err.length : 1;                            \
          ss << fmt::format("{: >{}}{:^>{}}\n", "", err.line_offset, "", len); \
          break;                                                               \
        }                                                                      \
      }                                                                        \
    }                                                                          \
    FAIL(ss.str());                                                            \
  }

#endif  // TESTS_HELPERS_H__
