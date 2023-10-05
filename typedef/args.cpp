#include "typedef/args.h"

#include <CLI/App.hpp>
#include <CLI/Config.hpp>
#include <CLI/Formatter.hpp>
#include <stdexcept>

std::variant<Args, int> Args::ParseArgs(int argc, const char* argv[]) {
  Args args;

  CLI::App app{
      "typedef: a data serizliation, interface definition and configuration "
      "language."};
  args.filename_ = "input.td";
  app.add_option("1, -f,--file", args.filename_, "The input file.");
  app.add_option(
      "--cpp_out", args.cpp_out_,
      "Generate C++ header and source and output them to this path.");
  app.add_option("--experimental_cpp_out", args.experimental_cpp_out_,
                 "Using experimental code, Generate C++ header and source and "
                 "output them to this path. Requires the binary was compiled "
                 "with USE_EXPERIMENTAL_CPP_CODEGEN");

  try {
    app.parse(argc, argv);
  } catch (const CLI::ParseError& e) {
    return (app).exit(e);
  }

  return args;
}
