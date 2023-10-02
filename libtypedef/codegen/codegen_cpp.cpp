#include "libtypedef/codegen/codegen_cpp.h"

#include <filesystem>
#include <inja/inja.hpp>
#include <nlohmann/json.hpp>
#include <optional>
#include <stdexcept>
#include <string>

#include "libtypedef/codegen/codegen_cpp_helpers.h"
#include "libtypedef/parser/ast_functions.h"
#include "libtypedef/parser/grammar/TypedefParser.h"

namespace td {

void CodegenCpp(OutPathBase* out_path,
                TypedefParser::CompilationUnitContext* compilation_unit_ctx) {}

}  // namespace td