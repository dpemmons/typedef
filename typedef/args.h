#pragma once

#include <string>
#include <variant>

struct Args {
  static std::variant<Args, int> ParseArgs(int argc, const char* argv[]);

  std::string filename;
  std::string cpp_out;
  std::string experimental_cpp_out;

  bool cpp_json_parser = false;
  bool cpp_json_writer = false;
};
