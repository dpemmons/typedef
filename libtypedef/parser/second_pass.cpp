#include "libtypedef/parser/second_pass.h"

#include <set>
#include <stdexcept>

#define FMT_HEADER_ONLY
#include <fmt/core.h>
#include <fmt/format.h>

#include "libtypedef/parser/grammar_functions.h"
#include "macros.h"
#include "second_pass.h"

namespace td {

using namespace std;

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

    std::stringstream ss_expected;
    PrintTypeAnnotation(ss_expected, expected_param->parameter_type);
    std::stringstream ss_actual;
    if (called_with_param->leaf_annotation) {
      if (!expected_param->parameter_type->typeIdentifier()) {
        throw_logic_error("invalid state: missing expected param identifier");
      }
      PrintTypeAnnotation(ss_actual, called_with_param->leaf_annotation);
    } else if (called_with_param->leaf_definition) {
      PrintTypeDefinition(ss_actual, called_with_param->leaf_definition);
    }

    bool matches = CheckMatch(expected_param->parameter_type,
                              called_with_param->leaf_annotation,
                              called_with_param->leaf_definition);
    if (!matches) {
      AddError(called_with_param, ParserErrorInfo::INVALID_ARGUMENT,
               fmt::format("Expected '{}' but got '{}'", ss_expected.str(),
                           ss_actual.str()));
    }
  }
}

void SecondPassListener::enterTmplIfSubBlock(
    TypedefParser::TmplIfSubBlockContext* ctx) {
  ExpectBoolean(ctx->tmplExpression());
}

void SecondPassListener::enterTmplElIfSubBlock(
    TypedefParser::TmplElIfSubBlockContext* ctx) {
  ExpectBoolean(ctx->tmplExpression());
}

void SecondPassListener::ExpectBoolean(
    TypedefParser::TmplExpressionContext* ctx) {
  if (ctx->tmplStringExpression()) {
    auto* vrp = ctx->tmplStringExpression()->tmplValueReferencePath();
    if (vrp->leaf_annotation && ReferencesTruthyType(vrp->leaf_annotation)) {
      return;
    }
  }
  AddError(ctx, ParserErrorInfo::INVALID_ARGUMENT,
           "Truthy expression expected.");
}

bool SecondPassListener::CheckMatch(
    TypedefParser::PrimitiveTypeIdentifierContext* expected,
    TypedefParser::PrimitiveTypeIdentifierContext* actual) {
  if (expected->KW_BOOL() && actual->KW_BOOL()) {
    return true;
  } else if (expected->KW_CHAR() && actual->KW_CHAR()) {
    return true;
  } else if (expected->KW_STRING() && actual->KW_STRING()) {
    return true;
  } else if (expected->KW_F32() && actual->KW_F32()) {
    return true;
  } else if (expected->KW_F64() && actual->KW_F64()) {
    return true;
  } else if (expected->KW_U8() && actual->KW_U8()) {
    return true;
  } else if (expected->KW_U16() && actual->KW_U16()) {
    return true;
  } else if (expected->KW_U32() && actual->KW_U32()) {
    return true;
  } else if (expected->KW_U64() && actual->KW_U64()) {
    return true;
  } else if (expected->KW_I8() && actual->KW_I8()) {
    return true;
  } else if (expected->KW_I16() && actual->KW_I16()) {
    return true;
  } else if (expected->KW_I32() && actual->KW_I32()) {
    return true;
  } else if (expected->KW_I64() && actual->KW_I64()) {
    return true;
  }
  return false;
}

bool SecondPassListener::CheckMatch(
    TypedefParser::TypeAnnotationContext* expected,
    TypedefParser::TypeAnnotationContext* actual_a,
    TypedefParser::TypeDefinitionContext* actual_b) {
  bool err = false;

  auto* expected_identifier = expected->typeIdentifier();
  // If expected is a user type, then actual_b should contain a valid
  // pointer to it.
  if (expected_identifier->userType() && actual_b) {
    return expected_identifier->userType()->type_definition == actual_b;
  } else if (expected_identifier->userType() &&
             actual_a->typeIdentifier()->userType()) {
    return expected_identifier->userType()->type_definition ==
           actual_a->typeIdentifier()->userType()->type_definition;
  }

  // If expected is some other type, then actual_a should be set.
  if (!actual_a) {
    return false;
  }
  // If it is, then it should have an identifier we can use.
  auto* actual_identifier = actual_a->typeIdentifier();
  if (!actual_identifier) {
    throw_logic_error("unexpected state");
  }

  if (expected_identifier->primitiveTypeIdentifier() &&
      actual_identifier->primitiveTypeIdentifier()) {
    return CheckMatch(expected_identifier->primitiveTypeIdentifier(),
                      actual_identifier->primitiveTypeIdentifier());
  } else if (expected_identifier->KW_VECTOR() &&
             actual_identifier->KW_VECTOR()) {
    return CheckMatch(expected->typeAnnotation(0), actual_a->typeAnnotation(0),
                      nullptr);
  } else if (expected_identifier->KW_MAP() && actual_identifier->KW_MAP()) {
    return CheckMatch(expected->typeAnnotation(0), actual_a->typeAnnotation(0),
                      nullptr) &&
           CheckMatch(expected->typeAnnotation(1), actual_a->typeAnnotation(1),
                      nullptr);
  }
  return false;
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
    os << "NULL";
    return;
  }
  if (!(ctx->KW_STRUCT() || ctx->KW_VARIANT())) {
    os << "UNKNOWN";
    return;
  }
  if (ctx->type_identifier) {
    os << ctx->type_identifier->id;
  } else {
    os << "[anonymous]";
  }
}

}  // namespace td