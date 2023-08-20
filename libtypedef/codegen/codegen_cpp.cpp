#include "libtypedef/codegen/codegen_cpp.h"

#include <inja/inja.hpp>
#include <nlohmann/json.hpp>

namespace td {

using json = nlohmann::json;
using namespace inja;

void CodegenCpp(std::shared_ptr<OutPathBase> out_path,
                std::shared_ptr<ParsedFile> parsed_file) {
  json data;
  data["name"] = "world";

  render("Hello {{ name }}!", data);  // Returns std::string "Hello world!"
  render_to(std::cout, "Hello {{ name }}!",
            data);  // Writes "Hello world!" to stream
}

}  // namespace td