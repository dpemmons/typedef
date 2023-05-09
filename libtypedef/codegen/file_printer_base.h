#ifndef CODEGEN_FILE_PRINTER_BASE_H_
#define CODEGEN_FILE_PRINTER_BASE_H_

#include <filesystem>
#include <memory>
#include <string>

namespace td {

class FilePrinterBase {
 public:
  FilePrinterBase() {}
  virtual ~FilePrinterBase() {}
  virtual void Open() = 0;
  virtual std::ostream& OStream() = 0;
  virtual void Close() = 0;

  virtual std::filesystem::path GetPath() const = 0;
};

class OutPathBase {
 public:
  OutPathBase(){};
  virtual ~OutPathBase() {}
  virtual std::shared_ptr<FilePrinterBase> OpenOutputFile(
      std::filesystem::path filename) = 0;
};

}  // namespace td

#endif  // CODEGEN_FILE_PRINTER_BASE_H_