#include <stdio.h>

#include <fstream>
#include <map>
#include <memory>
#include <string>
#include <variant>
#include <vector>

#define FMT_HEADER_ONLY
#include <fmt/color.h>
#include <fmt/core.h>
#include <fmt/ostream.h>

#include "libtypedef/codegen/codegen_cpp.h"
#include "libtypedef/codegen/experimental_codegen_cpp.h"
#include "libtypedef/codegen/file_printer.h"
#include "libtypedef/parser/parser_error_info.h"
#include "libtypedef/parser/typedef_parser.h"
#include "typedef/args.h"

int main(int argc, const char** argv) {
  // Parse args, or die trying.
  auto maybeArgs = Args::ParseArgs(argc, argv);
  if (maybeArgs.index() == 1) {
    return std::get<int>(maybeArgs);
  }
  Args args = std::get<Args>(maybeArgs);

  std::ifstream inputStream(args.filename);
  if (!inputStream.is_open()) {
    fmt::print("Unable to open input file: {}\n", args.filename);
    return 1;
  }

  td::Parser parser(inputStream);
  parser.Parse();

  if (parser.Errors().size()) {
    for (const auto& err : parser.Errors()) {
      inputStream.clear();
      inputStream.seekg(std::ios::beg);
      std::string line;

      std::cerr << fmt::format(fmt::emphasis::bold, "{}:{}:{}: ", args.filename,
                               err.line, err.line_offset);
      std::cerr << fmt::format(fmt::emphasis::bold | fg(fmt::color::orange_red),
                               "error: ");
      std::cerr << fmt::format(fmt::emphasis::bold, "{} {}",
                               err.ErrorTypeToString(), err.message);
      std::cerr << std::endl;

      for (int l = 0; std::getline(inputStream, line); l++) {
        if (l == err.line - 1) {
          fmt::print(stderr, "{}\n", line);
          size_t len = err.length ? err.length : 1;
          // Print the carrot under the problem token(s).
          std::cerr << fmt::format(
              fmt::emphasis::bold | fg(fmt::color::orange_red),
              "{: >{}}{:^>{}}\n", "", err.line_offset, "", len);
        }
      }
    }
    return 1;  // error.
  }

  if (!args.cpp_out.empty()) {
    auto outpath = std::make_unique<td::OutPath>(args.cpp_out);
    td::CodegenCpp(outpath.get(), parser.GetCompilationUnitContext(),
                   args.cpp_json_parser, args.cpp_json_writer);
  }
  if (!args.experimental_cpp_out.empty()) {
    auto outpath = std::make_unique<td::OutPath>(args.experimental_cpp_out);
    td::ExperimentalCodegenCpp(outpath.get(),
                               parser.GetCompilationUnitContext(),
                               args.cpp_json_parser, args.cpp_json_writer);
  }

  return 0;
}
