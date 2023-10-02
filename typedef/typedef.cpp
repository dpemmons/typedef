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
#include "libtypedef/codegen/codegen_cpp_inja.h"
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

  std::ifstream inputStream(args.getInpuFilename());
  if (!inputStream.is_open()) {
    fmt::print("Unable to open input file: {}\n", args.getInpuFilename());
    return 1;
  }

  td::Parser parser(inputStream);
  parser.Parse();

  if (parser.Errors().size()) {
    for (const auto& err : parser.Errors()) {
      inputStream.clear();
      inputStream.seekg(std::ios::beg);
      std::string line;

      std::cerr << fmt::format(fmt::emphasis::bold,
                               "{}:{}:{}: ", args.getInpuFilename(), err.line,
                               err.line_offset);
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

  if (args.getPrint()) {
    // fmt::print("File contains {} symbols:\n",
    // parser->symbols2_.table_.size()); fmt::print("{}\n",
    // fmt::streamed(parser->symbols2_));
  }
  if (!args.GetCppOut().empty()) {
    auto outpath = std::make_unique<td::OutPath>(args.GetCppOut());
    if (args.UseSelfHostedCodegen()) {
      td::CodegenCpp(outpath.get(), parser.GetCompilationUnitContext());
    } else {
      td::CodegenCppInja(outpath.get(), parser.GetCompilationUnitContext(),
                         nullptr);
    }
  }

  return 0;
}
