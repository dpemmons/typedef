#include <fstream>
#include <iostream>
#include <string>

#include "args.h"
#include "file_parser.h"

#define FMT_HEADER_ONLY
#include "fmt/core.h"

int main(int argc, const char** argv) {
  // Parse args, or die trying.
  auto maybeArgs = Args::ParseArgs(argc, argv);
  if (maybeArgs.index() == 1) {
    return std::get<int>(maybeArgs);
  }
  Args args = std::get<Args>(maybeArgs);

  std::ifstream baseFile(args.getInpuFilename());
  if (baseFile.is_open()) {
    fmt::print("Processing file: {}\n", args.getInpuFilename());
  } else {
    fmt::print("Unable to open file: {}\n", args.getInpuFilename());
    return 0;
  }

  std::variant<IntermediateTree, bool> maybeParsedFile = ParseFile(baseFile);
  if (maybeParsedFile.index() == 1) {
    return std::get<int>(maybeArgs);
  }
  IntermediateTree ir_tree = std::get<IntermediateTree>(maybeParsedFile);
  baseFile.close();

  return 0;
}
