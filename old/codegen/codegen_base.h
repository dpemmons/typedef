#ifndef CODEGEN_CODEGEN_BASE_H__
#define CODEGEN_CODEGEN_BASE_H__

#include <memory>
#include <string>

#include "libtypedef/codegen/file_printer_base.h"
#include "libtypedef/parser/typedef_parser.h"

namespace td {

class CodegenBase {
 public:
  CodegenBase(std::shared_ptr<td::ParsedFile> parser,
              std::shared_ptr<OutPathBase> out_path)
      : parser_(parser), out_path_(out_path) {}
  virtual ~CodegenBase() {}

  virtual void Generate() = 0;

 protected:
  std::shared_ptr<td::ParsedFile> parser_;
  std::shared_ptr<OutPathBase> out_path_;
};

}  // namespace td

#endif  // CODEGEN_CODEGEN_BASE_H__
