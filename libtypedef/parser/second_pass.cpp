#include "libtypedef/parser/second_pass.h"

#include <set>
#include <stdexcept>

#define FMT_HEADER_ONLY
#include <fmt/core.h>
#include <fmt/format.h>

#include "libtypedef/parser/parser_common.h"
#include "second_pass.h"

#define throw_logic_error(str) \
  throw std::logic_error(      \
      fmt::format("\"{}\" in {}:{}", str, __FILE__, __LINE__));
namespace td {

using namespace std;

void SecondPassListener::CheckMatch(
    TypedefParser::PrimitiveTypeIdentifierContext* expected,
    TypedefParser::PrimitiveTypeIdentifierContext* actual) {
  if (expected->KW_BOOL() && !actual->KW_BOOL()) {
    AddError(actual, ParserErrorInfo::INVALID_ARGUMENT, "Expected 'bool'.");
  } else if (expected->KW_CHAR() && !actual->KW_CHAR()) {
    AddError(actual, ParserErrorInfo::INVALID_ARGUMENT, "Expected 'char'.");
  } else if (expected->KW_STRING() && !actual->KW_STRING()) {
    AddError(actual, ParserErrorInfo::INVALID_ARGUMENT, "Expected 'str'.");
  } else if (expected->KW_F32() && !actual->KW_F32()) {
    AddError(actual, ParserErrorInfo::INVALID_ARGUMENT, "Expected 'f32'.");
  } else if (expected->KW_F64() && !actual->KW_F64()) {
    AddError(actual, ParserErrorInfo::INVALID_ARGUMENT, "Expected 'f64'.");
  } else if (expected->KW_U8() && !actual->KW_U8()) {
    AddError(actual, ParserErrorInfo::INVALID_ARGUMENT, "Expected 'u8'.");
  } else if (expected->KW_U16() && !actual->KW_U16()) {
    AddError(actual, ParserErrorInfo::INVALID_ARGUMENT, "Expected 'u16'.");
  } else if (expected->KW_U32() && !actual->KW_U32()) {
    AddError(actual, ParserErrorInfo::INVALID_ARGUMENT, "Expected 'u32'.");
  } else if (expected->KW_U64() && !actual->KW_U64()) {
    AddError(actual, ParserErrorInfo::INVALID_ARGUMENT, "Expected 'u64'.");
  } else if (expected->KW_I8() && !actual->KW_I8()) {
    AddError(actual, ParserErrorInfo::INVALID_ARGUMENT, "Expected 'i8'.");
  } else if (expected->KW_I16() && !actual->KW_I16()) {
    AddError(actual, ParserErrorInfo::INVALID_ARGUMENT, "Expected 'i16'.");
  } else if (expected->KW_I32() && !actual->KW_I32()) {
    AddError(actual, ParserErrorInfo::INVALID_ARGUMENT, "Expected 'i32'.");
  } else if (expected->KW_I64() && !actual->KW_I64()) {
    AddError(actual, ParserErrorInfo::INVALID_ARGUMENT, "Expected 'i64'.");
  }
}

void SecondPassListener::PrintTypeAnnotation(
    ostream& os, TypedefParser::TypeAnnotationContext* ctx) {
  if (!ctx) {
    os << "[NULL]";
    return;
  }
  auto* type_identifier = ctx->typeIdentifier();
  if (type_identifier->primitiveTypeIdentifier()) {
    if (type_identifier->primitiveTypeIdentifier()->KW_BOOL()) {
      os << "bool";
    } else if (type_identifier->primitiveTypeIdentifier()->KW_CHAR()) {
      os << "char";
    } else if (type_identifier->primitiveTypeIdentifier()->KW_STRING()) {
      os << "str";
    } else if (type_identifier->primitiveTypeIdentifier()->KW_F32()) {
      os << "f32";
    } else if (type_identifier->primitiveTypeIdentifier()->KW_F64()) {
      os << "f64";
    } else if (type_identifier->primitiveTypeIdentifier()->KW_U8()) {
      os << "u8";
    } else if (type_identifier->primitiveTypeIdentifier()->KW_U16()) {
      os << "u16";
    } else if (type_identifier->primitiveTypeIdentifier()->KW_U32()) {
      os << "u32";
    } else if (type_identifier->primitiveTypeIdentifier()->KW_U64()) {
      os << "u64";
    } else if (type_identifier->primitiveTypeIdentifier()->KW_I8()) {
      os << "i8";
    } else if (type_identifier->primitiveTypeIdentifier()->KW_I16()) {
      os << "i16";
    } else if (type_identifier->primitiveTypeIdentifier()->KW_I32()) {
      os << "i32";
    } else if (type_identifier->primitiveTypeIdentifier()->KW_I64()) {
      os << "i64";
    }
  } else if (type_identifier->KW_VECTOR() || type_identifier->KW_MAP()) {
    if (type_identifier->KW_VECTOR()) {
      os << "vector<";
      PrintTypeAnnotation(os, ctx->typeAnnotation(0));
    } else if (type_identifier->KW_MAP()) {
      os << "map<";
      PrintTypeAnnotation(os, ctx->typeAnnotation(0));
      os << ", ";
      PrintTypeAnnotation(os, ctx->typeAnnotation(1));
    }
    os << ">";
  } else if (type_identifier->userType()) {
    PrintTypeDefinition(os, type_identifier->userType()->type_definition);
  }
}

void SecondPassListener::PrintTypeDefinition(
    std::ostream& os, TypedefParser::TypeDefinitionContext* ctx) {
  if (!ctx) {
    os << "[NULL]";
    return;
  }
  if (ctx->KW_STRUCT()) {
    os << "[struct:";
  } else if (ctx->KW_VARIANT()) {
    os << "[variant:";
  } else {
    os << "[UNKNOWN:";
  }
  if (ctx->type_identifier) {
    os << ctx->type_identifier->id << "]";
  } else {
    os << "anonymous] ";
  }
}

void SecondPassListener::enterTmplFunctionCall(
    TypedefParser::TmplFunctionCallContext* ctx) {
  std::vector<TypedefParser::FunctionParameterContext*> expected_params =
      ctx->tmpl_def->functionParameter();
  std::vector<TypedefParser::TmplValueReferencePathContext*> actual_params =
      ctx->tmplValueReferencePath();
  if (expected_params.size() != actual_params.size()) {
    AddError(ctx, ParserErrorInfo::INVALID_ARGUMENT,
             fmt::format("Function '{}' expects {} arguments but {} provided.",
                         ctx->tmplIdentifier()->id, expected_params.size(),
                         actual_params.size()));
    return;
  }
  for (size_t ii = 0; ii < expected_params.size(); ii++) {
    TypedefParser::FunctionParameterContext* expected_param =
        expected_params[ii];
    TypedefParser::TmplValueReferencePathContext* called_with_param =
        actual_params[ii];
    if (!expected_param) {
      throw_logic_error("invalid state: missing expected param");
    } else if (!called_with_param) {
      throw_logic_error("invalid state: missing param data");
    }

    // std::cout << "Expected: ";
    // PrintTypeAnnotation(std::cout, expected_param->parameter_type);
    // std::cout << std::endl;

    // std::cout << "Actual (annotation): ";
    // PrintTypeAnnotation(std::cout, called_with_param->leaf_annotation);
    // std::cout << std::endl;

    // std::cout << "Actual (definition): ";
    // PrintTypeDefinition(std::cout, called_with_param->leaf_definition);
    // std::cout << std::endl;

    std::stringstream ss_expected;
    PrintTypeAnnotation(ss_expected, expected_param->parameter_type);
    std::stringstream ss_actual;
    if (called_with_param->leaf_annotation) {
      PrintTypeAnnotation(ss_actual, called_with_param->leaf_annotation);
    } else if (called_with_param->leaf_definition) {
      PrintTypeDefinition(ss_actual, called_with_param->leaf_definition);
    }

    if (expected_param->parameter_type->typeIdentifier()
            ->primitiveTypeIdentifier()) {
      if (!called_with_param->leaf_annotation ||
          !called_with_param->leaf_annotation->typeIdentifier()) {
        AddError(called_with_param, ParserErrorInfo::INVALID_ARGUMENT,
                 fmt::format("Expected '{}' but got '{}'", ss_expected.str(),
                             ss_actual.str()));
        continue;
      }
      CheckMatch(expected_param->parameter_type->typeIdentifier()
                     ->primitiveTypeIdentifier(),
                 called_with_param->leaf_annotation->typeIdentifier()
                     ->primitiveTypeIdentifier());
      continue;
    } else if (expected_param->parameter_type->typeIdentifier()->KW_VECTOR()) {
      if (!called_with_param->leaf_annotation ||
          !called_with_param->leaf_annotation->typeIdentifier() ||
          !called_with_param->leaf_annotation->typeIdentifier()->KW_VECTOR()) {
        AddError(called_with_param, ParserErrorInfo::INVALID_ARGUMENT,
                 fmt::format("Expected '{}' but got '{}'", ss_expected.str(),
                             ss_actual.str()));
        continue;
      }
      // TODO Check type arguments.
    } else if (expected_param->parameter_type->typeIdentifier()->KW_MAP()) {
      if (!called_with_param->leaf_annotation ||
          !called_with_param->leaf_annotation->typeIdentifier() ||
          !called_with_param->leaf_annotation->typeIdentifier()->KW_MAP()) {
        AddError(called_with_param, ParserErrorInfo::INVALID_ARGUMENT,
                 fmt::format("Expected '{}' but got '{}'", ss_expected.str(),
                             ss_actual.str()));
        continue;
      }
      // TODO Check type arguments.
    } else if (expected_param->parameter_type->typeIdentifier()->userType()) {
      if (expected_param->parameter_type->typeIdentifier()
              ->userType()
              ->type_definition != called_with_param->leaf_definition) {
        AddError(called_with_param, ParserErrorInfo::INVALID_ARGUMENT,
                 fmt::format("Expected '{}' but got '{}'", ss_expected.str(),
                             ss_actual.str()));
        continue;
      }
    }
  }
}

}  // namespace td