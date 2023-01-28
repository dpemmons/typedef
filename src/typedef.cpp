#include <iostream>
#include <string>

#include "CLI/CLI.hpp"

int main(int argc, const char** argv) {
  CLI::App app{"digc"};

  std::string filename = "input.dig";
  app.add_option("-f,--file", filename, "The root build ninja file")
      ->required();

  CLI11_PARSE(app, argc, argv);

  std::ifstream baseFile(filename);
  if (baseFile.is_open()) {
    std::cout << "Processing file: " << filename << "\n";
  } else {
    std::cout << "Unable to open file:" << filename << "\n";
    return 0;
  }

  baseFile.close();
  return 0;
}