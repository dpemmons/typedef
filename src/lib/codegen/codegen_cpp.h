#ifndef LIB_CODEGEN_CODEGEN_CPP_H__
#define LIB_CODEGEN_CODEGEN_CPP_H__

#include "codegen_base.h"
#include "file_printer_base.h"

namespace td {

class CodegenCpp : public CodegenBase {
 public:
  CodegenCpp(std::string source_filename,
             std::shared_ptr<td::ParsedFile> parser,
             std::shared_ptr<OutPathBase> out_path)
      : CodegenBase(parser, out_path), source_filename_(source_filename) {}

  virtual void Generate() override;

 private:
  std::string source_filename_;
};

}  // namespace td

#endif  // LIB_CODEGEN_CODEGEN_CPP_H__
