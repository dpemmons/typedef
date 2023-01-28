#pragma once

#include <string>
#include <variant>

class Args {
 public:
  ~Args() {}
  static std::variant<Args, int> ParseArgs(int argc, const char* argv[]);

  const std::string& getInpuFilename() const { return filename_; }

 private:
  Args() {}
  std::string filename_;
  bool verbose_ = false;
};
