#pragma once

#include <string>
#include <variant>

class Args {
 public:
  ~Args() {}
  static std::variant<Args, int> ParseArgs(int argc, const char* argv[]);
  const std::string& getInpuFilename() const { return filename_; }
  const std::string& GetCppOut() const { return cpp_out_; }
  const std::string& GetExperimentalCppOut() const {
    return experimental_cpp_out_;
  }

 private:
  Args() {}
  std::string filename_;
  std::string cpp_out_;
  std::string experimental_cpp_out_;
};
