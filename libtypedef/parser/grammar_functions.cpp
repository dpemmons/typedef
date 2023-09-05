#include "libtypedef/parser/grammar_functions.h"

#include <sstream>

namespace td {

std::string ToString(TypedefParser::SymbolPathContext* ctx,
                     const std::string& delimiter) {
  auto id_vec = ctx->identifier();
  if (!id_vec.size()) {
    return std::string();
  }

  std::stringstream ss;
  ss << id_vec[0]->id;
  for (size_t ii = 1; ii < id_vec.size(); ii++) {
    ss << id_vec[ii]->id << delimiter;
  }

  return ss.str();
}

std::string ToString(TypedefParser::ModuleDeclarationContext* ctx,
                     const std::string& delimiter) {
  return ToString(ctx->symbolPath());
}

}  // namespace td
