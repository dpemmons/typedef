#include "libtypedef/codegen/codegen_cpp.h"

#include <filesystem>
#include <inja/inja.hpp>
#include <nlohmann/json.hpp>

namespace td {

using json = nlohmann::json;
using namespace inja;
using namespace std;

string HeaderGuard(const filesystem::path& source_filename) {
  string hdr_guard = source_filename.string() + "_H__";
  replace(hdr_guard.begin(), hdr_guard.end(), '.', '_');
  replace(hdr_guard.begin(), hdr_guard.end(), ' ', '_');
  replace(hdr_guard.begin(), hdr_guard.end(), '/', '_');
  transform(hdr_guard.begin(), hdr_guard.end(), hdr_guard.begin(), ::toupper);
  return hdr_guard;
}

void CodegenCpp(std::shared_ptr<OutPathBase> out_path,
                std::shared_ptr<ParsedFile> parsed_file) {
  filesystem::path hdr_filename =
      parsed_file->mod->module_name->ToString("_", false) + ".h";
  filesystem::path source_filename =
      parsed_file->mod->module_name->ToString("_", false) + ".cpp";

  auto hdr_file = out_path->OpenOutputFile(hdr_filename);
  hdr_file->Open();
  auto src_file = out_path->OpenOutputFile(source_filename);
  src_file->Open();

  json data;
  data["header_guard"] = HeaderGuard(source_filename);

  render_to(hdr_file->OStream(), "Hello header: {{ header_guard }}!",
            data);  // Writes "Hello world!" to stream

  render_to(src_file->OStream(), "Hello source: {{ header_guard }}!",
            data);  // Writes "Hello world!" to stream
}

}  // namespace td