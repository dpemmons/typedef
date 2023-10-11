#include "libtypedef/parser/second_pass.h"

#include <algorithm>
#include <cctype>
#include <iostream>
#include <set>
#include <stdexcept>
#include <string>

#define FMT_HEADER_ONLY
#include <fmt/core.h>
#include <fmt/format.h>

#include "libtypedef/parser/ast_functions.h"
#include "libtypedef/parser/macros.h"
#include "libtypedef/parser/second_pass.h"

namespace td {

using namespace std;

void SecondPassListener::exitTmplItem(TypedefParser::TmplItemContext* ctx) {
  if (ctx->tmplExpression()) {
    ExpectStringy(ctx->tmplExpression());
  }
}

void SecondPassListener::enterTmplFunctionCall(
    TypedefParser::TmplFunctionCallContext* ctx) {
  std::vector<TypedefParser::TmplExpressionContext*> actual_params =
      ctx->tmplExpression();
  if (ctx->built_in) {
    size_t expected_count = 0;
    if (ctx->tmplIdentifier()->id == "IsEmpty") {
      expected_count = 1;
    }
    if (expected_count != actual_params.size()) {
      return AddError(
          ctx, ParserErrorInfo::INVALID_ARGUMENT,
          fmt::format("Function '{}' expects {} arguments but {} provided.",
                      ctx->tmplIdentifier()->id, expected_count,
                      actual_params.size()));
    }
    if (ctx->tmplIdentifier()->id == "IsEmpty") {
      if (!actual_params[0]->tmplValueReferencePath()) {
        return AddError(actual_params[0], ParserErrorInfo::INVALID_ARGUMENT,
                        fmt::format("Vector type expected."));
      }
      if (actual_params[0]->tmplValueReferencePath()->leaf_annotation &&
          ReferencesBuiltinVectorType(
              actual_params[0]->tmplValueReferencePath()->leaf_annotation)) {
        return;
      } else {
        return AddError(actual_params[0], ParserErrorInfo::INVALID_ARGUMENT,
                        fmt::format("Vector type expected."));
      }
    }
    return;
  }
  std::vector<TypedefParser::FunctionParameterContext*> expected_params =
      ctx->tmpl_def->functionParameter();
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
    TypedefParser::TmplExpressionContext* called_with_param = actual_params[ii];
    if (!expected_param) {
      throw_logic_error("invalid state: missing expected param");
    } else if (!called_with_param) {
      throw_logic_error("invalid state: missing param data");
    }

    std::stringstream ss_expected;
    PrintTypeAnnotation(ss_expected, expected_param->parameter_type);
    std::stringstream ss_actual;
    if (ReferencesPrimitiveStringType(expected_param->parameter_type) &&
        called_with_param->tmplFunctionCall()) {
      if (called_with_param->tmplFunctionCall()->built_in) {
        return AddError(called_with_param, ParserErrorInfo::INVALID_ARGUMENT,
                        "Built-in function cannot be used here.");
      }
      // ok.
    } else {
      if (!called_with_param->tmplValueReferencePath()) {
        return AddError(called_with_param, ParserErrorInfo::INVALID_ARGUMENT,
                        "Value reference expected");
      }
      if (called_with_param->tmplValueReferencePath()->leaf_annotation) {
        if (!expected_param->parameter_type->typeIdentifier()) {
          throw_logic_error("invalid state: missing expected param identifier");
        }
        PrintTypeAnnotation(
            ss_actual,
            called_with_param->tmplValueReferencePath()->leaf_annotation);
      } else if (called_with_param->tmplValueReferencePath()->leaf_definition) {
        PrintTypeDefinition(
            ss_actual,
            called_with_param->tmplValueReferencePath()->leaf_definition);
      }

      bool matches = CheckMatch(
          expected_param->parameter_type,
          called_with_param->tmplValueReferencePath()->leaf_annotation,
          called_with_param->tmplValueReferencePath()->leaf_definition);
      if (!matches) {
        AddError(called_with_param, ParserErrorInfo::INVALID_ARGUMENT,
                 fmt::format("Expected '{}' but got '{}'", ss_expected.str(),
                             ss_actual.str()));
      }
    }
  }
}

void SecondPassListener::enterTmplIfSubBlock(
    TypedefParser::TmplIfSubBlockContext* ctx) {
  ExpectTruthy(ctx->tmplExpression());
}

void SecondPassListener::enterTmplElIfSubBlock(
    TypedefParser::TmplElIfSubBlockContext* ctx) {
  ExpectTruthy(ctx->tmplExpression());
}

bool IsValidCaseLabel(
    TypedefParser::TmplValueReferencePathContext* switch_expression,
    TypedefParser::TmplValueReferencePathContext* case_label) {
  std::vector<TypedefParser::TmplValueReferenceContext*> switch_parts =
      switch_expression->tmplValueReference();
  std::vector<TypedefParser::TmplValueReferenceContext*> case_parts =
      case_label->tmplValueReference();
  if (case_parts.size() != switch_parts.size() + 1) {
    return false;
  }
  for (size_t ii = 0; ii < switch_parts.size(); ii++) {
    if (switch_parts[ii]->tmplIdentifier()->id !=
        case_parts[ii]->tmplIdentifier()->id) {
      return false;
    }
  }
  return true;
}

void SecondPassListener::enterTmplSwitchBlock(
    TypedefParser::TmplSwitchBlockContext* ctx) {
  if (!ctx->tmplValueReferencePath()->leaf_definition ||
      !DefinesVariant(ctx->tmplValueReferencePath()->leaf_definition)) {
    AddError(ctx->tmplValueReferencePath(), ParserErrorInfo::INVALID_ARGUMENT,
             "Must be a variant.");
  }
  auto vec = ctx->TMPL_TEXT();
  for (auto* txt : vec) {
    string str = txt->getText();
    bool has_non_whitespace =
        std::any_of(str.begin(), str.end(),
                    [](unsigned char ch) { return !std::isspace(ch); });
    if (has_non_whitespace) {
      AddError(txt, ParserErrorInfo::OTHER,
               "Only whitespace or case blocks allowed inside a switch block.");
    }
  }

  bool has_default_block = ctx->tmplDefaultBlock();
  set<string> case_lables;
  for (auto* c : ctx->tmplCaseBlock()) {
    if (!IsValidCaseLabel(ctx->tmplValueReferencePath(),
                          c->tmplValueReferencePath())) {
      AddError(c->tmplValueReferencePath(), ParserErrorInfo::INVALID_CASE_LABEL,
               "Must be a variant member.");
    }
    if (!has_default_block) {
      // Insert the referenced field name.
      case_lables.insert(c->tmplValueReferencePath()
                             ->tmplValueReference()
                             .back()
                             ->tmplIdentifier()
                             ->id);
    }
  }

  if (!has_default_block) {
    // Ensure all fields are exhausted.
    auto fields = ctx->tmplValueReferencePath()
                      ->leaf_definition->fieldBlock()
                      ->fieldDefinition();
    for (auto* field : fields) {
      if (!case_lables.count(field->field_identifier->id)) {
        AddError(ctx->tmplValueReferencePath(),
                 ParserErrorInfo::MISSING_CASE_LABEL,
                 fmt::format("Missing case label for field '{}'. "
                             "Alternatively, use a default block.",
                             field->field_identifier->id));
      }
    }
  }
}

void SecondPassListener::ExpectTruthy(
    TypedefParser::TmplExpressionContext* ctx) {
  if (ctx->tmplExpression()) {
    return ExpectTruthy(ctx->tmplExpression());
  } else if (ctx->tmplValueReferencePath()) {
    auto* vrp = ctx->tmplValueReferencePath();
    if (vrp->leaf_annotation && ReferencesTruthyType(vrp->leaf_annotation)) {
      return;
    }
  } else if (ctx->tmplFunctionCall()) {
    if (ctx->tmplFunctionCall()->tmplIdentifier()->id == "IsFirst" ||
        ctx->tmplFunctionCall()->tmplIdentifier()->id == "IsLast" ||
        ctx->tmplFunctionCall()->tmplIdentifier()->id == "IsEmpty") {
      return;
    }
  }
  AddError(ctx, ParserErrorInfo::INVALID_ARGUMENT,
           "Truthy expression expected.");
}

void SecondPassListener::ExpectStringy(
    TypedefParser::TmplExpressionContext* ctx) {
  if (ctx->tmplExpression()) {
    if (ctx->TMPL_NOT()) {
      return AddError(ctx->TMPL_NOT(), ParserErrorInfo::INVALID_ARGUMENT,
                      "Boolean operator in stringy context.");
    }
    return ExpectStringy(ctx->tmplExpression());
  } else if (ctx->tmplValueReferencePath()) {
    if (ctx->tmplValueReferencePath()->leaf_definition) {
      return AddError(
          ctx->tmplValueReferencePath()->tmplValueReference().back(),
          ParserErrorInfo::INVALID_TYPE_ARGUMENTS,
          "Primitive (stringy) type expected.");
    } else if (ctx->tmplValueReferencePath()->leaf_annotation) {
      if (!ReferencesPrimitiveType(
              ctx->tmplValueReferencePath()->leaf_annotation)) {
        return AddError(
            ctx->tmplValueReferencePath()->tmplValueReference().back(),
            ParserErrorInfo::INVALID_TYPE_ARGUMENTS,
            "Primitive (stringy) type expected.");
      }
    } else {
      // else there was a parse error somewhere else; do nothing.
    }
  } else if (ctx->tmplFunctionCall()) {
    if (ctx->tmplFunctionCall()->tmplIdentifier()->id == "IsFirst" ||
        ctx->tmplFunctionCall()->tmplIdentifier()->id == "IsLast" ||
        ctx->tmplFunctionCall()->tmplIdentifier()->id == "IsEmpty") {
      return AddError(ctx->tmplFunctionCall(),
                      ParserErrorInfo::INVALID_ARGUMENT,
                      "Builtin functions are not (yet) stringy.");
    }
    // Index0 and Index1 are stringy and therefore ok.
  }
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