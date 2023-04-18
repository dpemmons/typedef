#include <stdio.h>
#include <fstream>
#include <string>
#include <map>
#include <memory>
#include <variant>
#include <vector>

#include "args.h"
#include "typedef_parser.h"
#include "parsed_file.h"
#include "parser_error_info.h"
#include "symbol_table.h"

#define FMT_HEADER_ONLY
#include "fmt/core.h"
#include "fmt/ostream.h"

int main(int argc, const char** argv) {
  // Parse args, or die trying.
  auto maybeArgs = Args::ParseArgs(argc, argv);
  if (maybeArgs.index() == 1) {
    return std::get<int>(maybeArgs);
  }
  Args args = std::get<Args>(maybeArgs);

  std::ifstream inputStream(args.getInpuFilename());
  if (!inputStream.is_open()) {
    fmt::print("Unable to open file: {}\n", args.getInpuFilename());
    return 1;
  }

  auto parser = td::Parse(inputStream);
  if (!parser) {
    fmt::print("Unknown error.\n");
    return 1;
  }

  if (parser->HasErrors()) {
    for (auto err : parser->GetErrors()) {
      inputStream.clear();
      inputStream.seekg(std::ios::beg);
      std::string line;

      fmt::print(stderr, "{}:{}:{}: error: {} {}\n", args.getInpuFilename(),
                 err.line, err.line_offset, err.ErrorTypeToString(),
                 err.message);

      for (int l = 0; std::getline(inputStream, line); l++) {
        if (l == err.line - 1) {
          fmt::print(stderr, "{}\n", line);
          fmt::print(stderr, "{: >{}}{:^>{}}\n", "", err.line_offset, "",
                     err.length);
        }
      }
    }
    return 1;  // error.
  }

  fmt::print("File contains {} symbols:\n", parser->symbols2_.table_.size());
  fmt::print("{}\n", fmt::streamed(parser->symbols2_));

  // fmt::print("File contains {} symbols:\n", parser->GetSymbols());
  // for (int i = 0; i < parser->GetSymbols(); i++) {
  //   auto symbol = parser->GetSymbol(i);
  //   fmt::print("{}\n", fmt::streamed(*symbol));
  // }

  return 0;
}
