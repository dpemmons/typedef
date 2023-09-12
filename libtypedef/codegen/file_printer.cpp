#include "libtypedef/codegen/file_printer.h"

#include <cassert>
#include <filesystem>
#include <iostream>
#include <stdexcept>

namespace td {

std::shared_ptr<FilePrinterBase> OutPath::OpenOutputFile(
    std::filesystem::path out_file) {
  return std::make_shared<FilePrinter>(out_file, out_base_);
}

FilePrinter::FilePrinter(std::filesystem::path out_file,
                         std::filesystem::path out_base) {
  out_path_ = (out_base / out_file).lexically_normal();
  out_parent_ = out_path_.parent_path();
}

void FilePrinter::Open() {
  if (!std::filesystem::exists(out_parent_)) {
    std::filesystem::create_directories(out_parent_);
  }
  out_.open(out_path_);
  if (!out_.is_open()) {
    throw std::runtime_error("Cannot open file for writing '" +
                             out_path_.string() + "'");
  }
}

void FilePrinter::Close() { out_.close(); }

std::filesystem::path FilePrinter::GetPath() const { return out_path_; }

}  // namespace td