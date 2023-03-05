#include <fstream>
#include <iostream>
#include <string>

#include "args.h"
#include "typedef_parser.h"

#define FMT_HEADER_ONLY
#include "fmt/core.h"

int main(int argc, const char** argv) {
  // Parse args, or die trying.
  auto maybeArgs = Args::ParseArgs(argc, argv);
  if (maybeArgs.index() == 1) {
    return std::get<int>(maybeArgs);
  }
  Args args = std::get<Args>(maybeArgs);

  std::ifstream inputStream(args.getInpuFilename());
  if (inputStream.is_open()) {
    fmt::print("Processing file: {}\n", args.getInpuFilename());
  } else {
    fmt::print("Unable to open file: {}\n", args.getInpuFilename());
    return 0;
  }

  auto parser = td::Parse(inputStream);

  fmt::print("Has errors: {}\n", parser->HasErrors());
  return 0;
}
