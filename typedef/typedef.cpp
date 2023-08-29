#include <stdio.h>

#include <fstream>
#include <map>
#include <memory>
#include <string>
#include <variant>
#include <vector>

#define FMT_HEADER_ONLY
#include <fmt/core.h>
#include <fmt/ostream.h>

#include "libtypedef/codegen/codegen_cpp.h"
#include "libtypedef/codegen/file_printer.h"
#include "libtypedef/parser/parser_error_info.h"
#include "libtypedef/parser/table.h"
#include "libtypedef/parser/typedef_parser.h"
#include "typedef/args.h"

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

  auto parsed_file = td::ParseTypedef(inputStream);
  if (!parsed_file) {
    fmt::print("Unknown error.\n");
    return 1;
  }

  if (parsed_file->errors.size()) {
    for (auto err : parsed_file->errors) {
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

  if (args.getPrint()) {
    // fmt::print("File contains {} symbols:\n",
    // parser->symbols2_.table_.size()); fmt::print("{}\n",
    // fmt::streamed(parser->symbols2_));
  }
  if (!args.GetCppOut().empty()) {
    auto outpath = std::make_shared<td::OutPath>(args.GetCppOut());
    td::CodegenCpp(outpath, parsed_file);
  }

  // fmt::print("File contains {} symbols:\n", parser->GetSymbols());
  // for (int i = 0; i < parser->GetSymbols(); i++) {
  //   auto symbol = parser->GetSymbol(i);
  //   fmt::print("{}\n", fmt::streamed(*symbol));
  // }

  return 0;
}
