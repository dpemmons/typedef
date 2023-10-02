#pragma once

#include <string>
#include <variant>

class Args {
 public:
  ~Args() {}
  static std::variant<Args, int> ParseArgs(int argc, const char* argv[]);
  const std::string& getInpuFilename() const { return filename_; }
  const bool getPrint() const { return print_; }
  const std::string& GetCppOut() const { return cpp_out_; }
  const bool UseSelfHostedCodegen() const { return self_host_codegen_; }

 private:
  Args() {}
  std::string filename_;
  std::string cpp_out_;
  bool print_ = false;
  bool verbose_ = false;
  bool self_host_codegen_ = false;
};
