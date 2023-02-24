#include "args.h"

#include "CLI/App.hpp"
#include "CLI/Config.hpp"
#include "CLI/Formatter.hpp"

std::variant<Args, int> Args::ParseArgs(int argc, const char* argv[]) {
  Args args;

  CLI::App app{"zbuild: hermetic, cross platform builds."};
  args.filename_ = "BUILD.zb";
  app.add_option("1, -f,--file", args.filename_, "The input file.");
  app.add_flag("-v,--verbose", args.verbose_, "Verbose.");

  try {
    app.parse(argc, argv);
  } catch (const CLI::ParseError& e) {
    return (app).exit(e);
  }

  return args;
}
