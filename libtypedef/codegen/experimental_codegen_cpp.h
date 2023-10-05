#ifndef CODEGEN_EXPERIMENTAL_CODEGEN_CPP_H__
#define CODEGEN_EXPERIMENTAL_CODEGEN_CPP_H__

#include <filesystem>
#include <memory>
#include <ostream>

#include "libtypedef/codegen/file_printer.h"
#include "libtypedef/parser/typedef_parser.h"

namespace td {

void ExperimentalCodegenCpp(
    OutPathBase* out_path,
    TypedefParser::CompilationUnitContext* compilation_unit_ctx);

}  // namespace td

#endif  // CODEGEN_EXPERIMENTAL_CODEGEN_CPP_H__
