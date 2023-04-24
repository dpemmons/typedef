#ifndef CODEGEN_FILE_PRINTER_H_
#define CODEGEN_FILE_PRINTER_H_

#include <filesystem>
#include <fstream>
#include <string>

#include "file_printer_base.h"

namespace td {

class FilePrinter : public FilePrinterBase {
 public:
  FilePrinter(std::filesystem::path out_file, std::filesystem::path out_base);
  virtual ~FilePrinter() {}

  virtual void Open();
  virtual std::ostream& OStream() { return out_; };
  virtual void Close();

  std::filesystem::path GetPath() const;

 protected:
  std::filesystem::path out_path_;
  std::filesystem::path out_parent_;
  std::ofstream out_;
};

class OutPath : public OutPathBase {
 public:
  OutPath(std::filesystem::path out_base) : OutPathBase(), out_base_(out_base) {}
  ~OutPath() {}

  virtual std::shared_ptr<FilePrinterBase> OpenOutputFile(std::filesystem::path out_file);

 protected:
  std::filesystem::path out_base_;
};

}  // namespace td

#endif  // CODEGEN_FILE_PRINTER_H_