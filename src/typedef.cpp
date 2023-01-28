#include <iostream>
#include <string>

#include "args.h"

int main(int argc, const char** argv) {
  // Parse args, or die trying.
  auto maybeArgs = Args::ParseArgs(argc, argv);
  if (maybeArgs.index() == 1) {
    return std::get<int>(maybeArgs);
  }
  Args args = std::get<Args>(maybeArgs);

  std::ifstream baseFile(args.getInpuFilename());
  if (baseFile.is_open()) {
    std::cout << "Processing file: " << args.getInpuFilename() << "\n";
  } else {
    std::cout << "Unable to open file:" << args.getInpuFilename() << "\n";
    return 0;
  }

  baseFile.close();
  return 0;
}