#pragma once

#include <optional>
#include <string_view>

#include "scalar_value.h"

namespace td {
namespace internal {

std::optional<ScalarValue> parseIntegerLiteral(const std::string input);

}  // namespace internal
}  // namespace td