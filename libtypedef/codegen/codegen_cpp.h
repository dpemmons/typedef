#ifndef CODEGEN_CODEGEN_CPP_H__
#define CODEGEN_CODEGEN_CPP_H__

#include <filesystem>
#include <memory>

#include "libtypedef/codegen/file_printer.h"
#include "libtypedef/parser/parsed_file.h"

namespace td {

void CodegenCpp(std::shared_ptr<OutPathBase> out_path,
                std::shared_ptr<ParsedFile> parsed_file);

}  // namespace td

#endif  // CODEGEN_CODEGEN_CPP_H__
