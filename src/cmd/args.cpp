#include "args.h"

#include <stdexcept>

#include "CLI/App.hpp"
#include "CLI/Config.hpp"
#include "CLI/Formatter.hpp"

std::variant<Args, int> Args::ParseArgs(int argc, const char* argv[]) {
  Args args;

  CLI::App app{"typedef: a data serizliation, interface definition and configuration language."};
  args.filename_ = "input.td";
  app.add_option("1, -f,--file", args.filename_, "The input file.");
  app.add_flag("-p,--print", args.print_, "Print a summary of the file to stdout");
  app.add_flag("-v,--verbose", args.verbose_, "Verbose.");
  app.add_flag("--cpp_out", args.cpp_out_, "Generate C++ header and source..");

  try {
    app.parse(argc, argv);
  } catch (const CLI::ParseError& e) {
    return (app).exit(e);
  }

  return args;
}
