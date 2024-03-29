#include "libtypedef/codegen/codegen_cpp.h"

#include <filesystem>
#include <optional>
#include <stdexcept>
#include <string>

#include "libtypedef/codegen/codegen_cpp_helpers.h"
#include "libtypedef/codegen/td/codegen/cpp.td.h"
#include "libtypedef/parser/ast_functions.h"
#include "libtypedef/parser/grammar/TypedefParser.h"
#include "libtypedef/parser/macros.h"

namespace td {
namespace {

using namespace std;
using namespace td::codegen::cpp;

// Forward declarations
std::string escapeStringForCpp(const std::string& input);
vector<TmplItem> GetTemplateItems(
    vector<TypedefParser::TmplItemContext*> itm_ctxs);
UserTypeDeclaration GetTypeDeclaration(
    TypedefParser::TypeDefinitionContext* type);
vector<UserTypeDeclaration> GetUserTypeDecls(
    vector<TypedefParser::TypeDefinitionContext*> types);

string HeaderGuard(const filesystem::path& source_filename) {
  string hdr_guard = source_filename.string() + "_H__";
  replace(hdr_guard.begin(), hdr_guard.end(), '.', '_');
  replace(hdr_guard.begin(), hdr_guard.end(), ' ', '_');
  replace(hdr_guard.begin(), hdr_guard.end(), '/', '_');
  transform(hdr_guard.begin(), hdr_guard.end(), hdr_guard.begin(), ::toupper);
  return hdr_guard;
}

std::string GetNestedTypeIdentifier(const std::string& str) {
  return escape_utf8_to_cpp_identifier(str + "T");
}
std::string GetNestedTypeIdentifier(
    TypedefParser::FieldDefinitionContext* field) {
  return escape_utf8_to_cpp_identifier(field->field_identifier->id + "T");
}

std::string GetInlineCppType(TypedefParser::FieldDefinitionContext* ctx) {
  return escape_utf8_to_cpp_identifier(ctx->field_identifier->id + "T");
}

vector<std::string> GetQN(TypedefParser::TypeDefinitionContext* type,
                          bool include_namespace);
vector<std::string> GetFQN(TypedefParser::TypeDefinitionContext* type) {
  return GetQN(type, true);
}
vector<std::string> GetNQN(TypedefParser::TypeDefinitionContext* type) {
  return GetQN(type, false);
}

AccessInfo GetAccessInfoForType(
    TypedefParser::TypeAnnotationContext* ctx,
    TypedefParser::PrimitiveLiteralContext* default_val_ctx = nullptr) {
  AccessInfo ai;
  if (ReferencesPrimitiveType(ctx)) {
    if (IsBool(ctx)) {
      ai.cpp_type() = "bool";
      ai.access_by().value() = true;
      if (default_val_ctx) {
        ai.td_type().bool_t().default_val() = GetBool(default_val_ctx);
      } else {
        ai.td_type().bool_t().default_val() = false;
      }
    } else if (IsChar(ctx)) {
      ai.cpp_type() = "char32_t";
      ai.access_by().value() = true;
      if (default_val_ctx) {
        ai.td_type().char_t().default_val() = GetChar(default_val_ctx);
      } else {
        ai.td_type().char_t().default_val() = 0;
      }
    } else if (IsStr(ctx)) {
      ai.cpp_type() = "std::string";
      ai.access_by().reference() = true;
      if (default_val_ctx) {
        ai.td_type().str_t().default_val() =
            escapeStringForCpp(*GetStr(default_val_ctx));
      } else {
        ai.td_type().str_t().default_val() = escapeStringForCpp("");
      }
    } else if (IsF32(ctx)) {
      ai.cpp_type() = "float";
      ai.access_by().value() = true;
      if (default_val_ctx) {
        ai.td_type().f32_t().default_val() = GetF32(default_val_ctx);
      } else {
        ai.td_type().f32_t().default_val() = 0;
      }
    } else if (IsF64(ctx)) {
      ai.cpp_type() = "double";
      ai.access_by().value() = true;
      if (default_val_ctx) {
        ai.td_type().f64_t().default_val() = GetF64(default_val_ctx);
      } else {
        ai.td_type().f64_t().default_val() = 0;
      }
    } else if (IsU8(ctx)) {
      ai.cpp_type() = "std::uint8_t";
      ai.access_by().value() = true;
      if (default_val_ctx) {
        ai.td_type().u8_t().default_val() = GetU8(default_val_ctx);
      } else {
        ai.td_type().u8_t().default_val() = 0;
      }
    } else if (IsU16(ctx)) {
      ai.cpp_type() = "std::uint16_t";
      ai.access_by().value() = true;
      if (default_val_ctx) {
        ai.td_type().u16_t().default_val() = GetU16(default_val_ctx);
      } else {
        ai.td_type().u16_t().default_val() = 0;
      }
    } else if (IsU32(ctx)) {
      ai.cpp_type() = "std::uint32_t";
      ai.access_by().value() = true;
      if (default_val_ctx) {
        ai.td_type().u32_t().default_val() = GetU32(default_val_ctx);
      } else {
        ai.td_type().u32_t().default_val() = 0;
      }
    } else if (IsU64(ctx)) {
      ai.cpp_type() = "std::uint64_t";
      ai.access_by().value() = true;
      if (default_val_ctx) {
        ai.td_type().u64_t().default_val() = GetU64(default_val_ctx);
      } else {
        ai.td_type().u64_t().default_val() = 0;
      }
    } else if (IsI8(ctx)) {
      ai.cpp_type() = "std::int8_t";
      ai.access_by().value() = true;
      if (default_val_ctx) {
        ai.td_type().i8_t().default_val() = GetI8(default_val_ctx);
      } else {
        ai.td_type().i8_t().default_val() = 0;
      }
    } else if (IsI16(ctx)) {
      ai.cpp_type() = "std::int16_t";
      ai.access_by().value() = true;
      if (default_val_ctx) {
        ai.td_type().i16_t().default_val() = GetI16(default_val_ctx);
      } else {
        ai.td_type().i16_t().default_val() = 0;
      }
    } else if (IsI32(ctx)) {
      ai.cpp_type() = "std::int32_t";
      ai.access_by().value() = true;
      if (default_val_ctx) {
        ai.td_type().i32_t().default_val() = GetI32(default_val_ctx);
      } else {
        ai.td_type().i32_t().default_val() = 0;
      }
    } else if (IsI64(ctx)) {
      ai.cpp_type() = "std::int64_t";
      ai.access_by().value() = true;
      if (default_val_ctx) {
        ai.td_type().i64_t().default_val() = GetI64(default_val_ctx);
      } else {
        ai.td_type().i64_t().default_val() = 0;
      }
    } else {
      throw_logic_error("invalid state");
    }
  } else if (ReferencesBuiltinVectorType(ctx)) {
    ai.cpp_type() = "std::vector";
    ai.access_by().reference() = true;
    ai.type_arguments().emplace_back(
        GetAccessInfoForType(GetTypeArgument(ctx, 0)));
    ai.td_type().vector_t().val() =
        GetAccessInfoForType(GetTypeArgument(ctx, 0));
    if (ReferencesUserType(GetTypeArgument(ctx, 0))) {
      ai.td_type().vector_t().fqn() =
          GetFQN(GetReferencedUserType(GetTypeArgument(ctx, 0)));
      ai.td_type().vector_t().nqn() =
          GetNQN(GetReferencedUserType(GetTypeArgument(ctx, 0)));
    }
  } else if (ReferencesBuiltinMapType(ctx)) {
    ai.cpp_type() = "std::map";
    ai.access_by().reference() = true;
    ai.type_arguments().emplace_back(
        GetAccessInfoForType(GetTypeArgument(ctx, 0)));
    ai.type_arguments().emplace_back(
        GetAccessInfoForType(GetTypeArgument(ctx, 1)));
    ai.td_type().map_t().key() = GetAccessInfoForType(GetTypeArgument(ctx, 0));
    ai.td_type().map_t().val() = GetAccessInfoForType(GetTypeArgument(ctx, 1));
    if (ReferencesUserType(GetTypeArgument(ctx, 1))) {
      ai.td_type().map_t().val_fqn() =
          GetFQN(GetReferencedUserType(GetTypeArgument(ctx, 1)));
      ai.td_type().map_t().val_nqn() =
          GetNQN(GetReferencedUserType(GetTypeArgument(ctx, 1)));
    }
  } else if (ReferencesUserType(ctx)) {
    ai.cpp_type() = escape_utf8_to_cpp_identifier(
        GetReferencedUserType(ctx)->type_identifier->id);
    ai.access_by().pointer() = true;
    if (DefinesStruct(GetReferencedUserType(ctx))) {
      ai.td_type().struct_t().fqn() = GetFQN(GetReferencedUserType(ctx));
      ai.td_type().struct_t().nqn() = GetNQN(GetReferencedUserType(ctx));
    } else if (DefinesVariant(GetReferencedUserType(ctx))) {
      ai.td_type().variant_t().fqn() = GetFQN(GetReferencedUserType(ctx));
      ai.td_type().variant_t().nqn() = GetNQN(GetReferencedUserType(ctx));
    } else {
      throw_logic_error("invalid state");
    }
  } else {
    throw_logic_error("invalid state");
  }
  return ai;
}

AccessInfo GetAccessInfo(TypedefParser::TypeDefinitionContext* ctx) {
  AccessInfo a;
  a.access_by().pointer() = true;
  if (DefinesStruct(ctx)) {
    a.td_type().struct_t().fqn() = GetFQN(ctx);
    a.td_type().struct_t().nqn() = GetNQN(ctx);
  } else if (DefinesVariant(ctx)) {
    a.td_type().variant_t().fqn() = GetFQN(ctx);
    a.td_type().variant_t().nqn() = GetNQN(ctx);
  } else {
    throw_logic_error("invalid state");
  }
  return a;
}

AccessInfo GetField(TypedefParser::FieldDefinitionContext* field) {
  AccessInfo a;
  if (DefinesAndUsesInlineUserType(field)) {
    a = GetAccessInfo(GetInlineUserType(field));
    a.cpp_type() = GetNestedTypeIdentifier(field);
  } else {
    a = GetAccessInfoForType(field->typeAnnotation(),
                             field->primitiveLiteral());
  }
  a.identifier() = escape_utf8_to_cpp_identifier(field->field_identifier->id);
  return a;
}

AccessInfo GetAccessInfo(
    TypedefParser::TmplValueReferencePathContext* path_ctx) {
  if (/*TypeAnnotationContext*/ path_ctx->leaf_annotation) {
    return GetAccessInfoForType(path_ctx->leaf_annotation);
  } else if (/*TypeDefinitionContext*/ path_ctx->leaf_definition) {
    return GetAccessInfo(path_ctx->leaf_definition);
  } else {
    throw_logic_error("invalid state");
  }
}

vector<std::string> GetQN(TypedefParser::TypeDefinitionContext* type,
                          bool include_namespace) {
  vector<std::string> fqn;
  for (TypedefParser::IdentifierCtx& id_ctx : type->ns_ctx) {
    // First resolve the module namespaces
    if (auto* c = GetCompilationUnitContext(id_ctx)) {
      if (include_namespace) {
        for (auto* id : c->moduleDeclaration()->symbolPath()->identifier()) {
          fqn.push_back(id->id);
        }
      }
    } else if (auto* t = GetTypeDefinition(id_ctx)) {
      if (HasIdentifier(t)) {
        fqn.push_back(GetIdentifier(t));
      } else {
        fqn.push_back(GetNestedTypeIdentifier(GetFieldIdentifier(t)));
      }
    }
  }
  if (HasIdentifier(type)) {
    fqn.push_back(GetIdentifier(type));
  } else {
    fqn.push_back(GetNestedTypeIdentifier(GetFieldIdentifier(type)));
  }
  return fqn;
}

StructDecl GetStruct(TypedefParser::TypeDefinitionContext* type) {
  StructDecl s;
  // If it's an inline type, the identifier is the field name which has
  // to be passed in separately.
  s.fqn() = GetQN(type, true);
  s.nqn() = GetQN(type, false);
  s.identifier() = s.fqn().back();

  if (type->fieldBlock()->typeDefinition().size()) {
    s.nested_type_decls() =
        GetUserTypeDecls(type->fieldBlock()->typeDefinition());
  }

  // Some field types require inline type declarations.
  for (auto* field : type->fieldBlock()->fieldDefinition()) {
    if (DefinesAndUsesInlineUserType(field)) {
      s.inline_type_decls().emplace_back(
          GetTypeDeclaration(field->typeDefinition()));
    }
  }

  for (int ii = 0; ii < type->fieldBlock()->fieldDefinition().size(); ii++) {
    // f["index"] = ii + 1;  // 1 indexed because std::variant monostate is 0
    s.fields().emplace_back(
        GetField(type->fieldBlock()->fieldDefinition()[ii]));
  }

  return s;
}

UserTypeDeclaration GetTypeDeclaration(
    TypedefParser::TypeDefinitionContext* type) {
  UserTypeDeclaration decl;
  if (DefinesStruct(type)) {
    decl.struct_decl() = GetStruct(type);
  } else if (DefinesVariant(type)) {
    // The data fed to the template is the same as for struct.
    decl.variant_decl() = GetStruct(type);
  } else {
    throw_logic_error("invalid state");
  }
  return decl;
}

vector<UserTypeDeclaration> GetUserTypeDecls(
    vector<TypedefParser::TypeDefinitionContext*> types) {
  vector<UserTypeDeclaration> utds;
  for (auto* type : types) {
    utds.emplace_back(GetTypeDeclaration(type));
  }
  return utds;
}

TmplValueDereference GetTemplateValueDereference(
    TypedefParser::TmplValueReferencePathContext* ctx) {
  TmplValueDereference d;
  for (TypedefParser::TmplValueReferenceContext* val_ref :
       ctx->tmplValueReference()) {
    d.val_ref_path().emplace_back(
        escape_utf8_to_cpp_identifier(val_ref->tmplIdentifier()->id));
  }
  d.access_info() = GetAccessInfo(ctx);
  return d;
}

TmplExpression GetTemplateExpression(
    TypedefParser::TmplExpressionContext* ctx) {
  TmplExpression e;
  if (ctx->tmplFunctionCall()) {
    e.call().identifier() = escape_utf8_to_cpp_identifier(
        ctx->tmplFunctionCall()->tmplIdentifier()->id);
    for (TypedefParser::TmplExpressionContext* expr :
         ctx->tmplFunctionCall()->tmplExpression()) {
      e.call().args().emplace_back(GetTemplateExpression(expr));
    }
  } else if (ctx->tmplValueReferencePath()) {
    e.val_ref() = GetTemplateValueDereference(ctx->tmplValueReferencePath());
  } else if (ctx->tmplExpression()) {
    if (ctx->TMPL_NOT()) {
      e.not_expr() = GetTemplateExpression(ctx->tmplExpression());
    } else {
      e.expr() = GetTemplateExpression(ctx->tmplExpression());
    }
  } else {
    throw_logic_error("invalid state");
  }
  return e;
}

TmplIfBlock GetTemplateIfBlock(TypedefParser::TmplIfBlockContext* ctx) {
  TmplIfBlock i;
  i.if_sublock().expr() =
      GetTemplateExpression(ctx->tmplIfSubBlock()->tmplExpression());
  i.if_sublock().items() = GetTemplateItems(ctx->tmplIfSubBlock()->tmplItem());

  for (auto* elif : ctx->tmplElIfSubBlock()) {
    TmplIf e;
    e.expr() = GetTemplateExpression(elif->tmplExpression());
    e.items() = GetTemplateItems(elif->tmplItem());
    i.elifs().emplace_back(std::move(e));
  }

  if (ctx->tmplElseSubBlock()) {
    i.else_items() = GetTemplateItems(ctx->tmplElseSubBlock()->tmplItem());
  }

  return i;
}

TmplForBlock GetTemplateForBlock(TypedefParser::TmplForBlockContext* ctx) {
  TmplForBlock f;
  auto binding_vars = ctx->tmplBindingVariables()->tmplBindingVariable();
  if (binding_vars.size() == 1) {
    f.binding_vars().var() = binding_vars[0]->tmplIdentifier()->id;
  } else if (binding_vars.size() == 2) {
    f.binding_vars().key_val().key() = binding_vars[0]->tmplIdentifier()->id;
    f.binding_vars().key_val().val() = binding_vars[1]->tmplIdentifier()->id;
  } else {
    throw_logic_error("invalid state");
  }
  f.collection() = GetTemplateValueDereference(ctx->collection);
  f.items() = GetTemplateItems(ctx->tmplItem());
  return f;
}

SwitchBlock GetTempalteSwitchBlock(TypedefParser::TmplSwitchBlockContext* ctx) {
  SwitchBlock sb;
  sb.identifier() = GetTemplateValueDereference(ctx->tmplValueReferencePath());
  for (auto* c : ctx->tmplCaseBlock()) {
    SwitchCase sc;
    sc.label() = GetTemplateValueDereference(c->tmplValueReferencePath());
    sc.items() = GetTemplateItems(c->tmplItem());
    sb.cases().emplace_back(std::move(sc));
  }
  if (ctx->tmplDefaultBlock()) {
    sb.default_subblock() =
        GetTemplateItems(ctx->tmplDefaultBlock()->tmplItem());
  }
  return sb;
}

AccessInfo GetFunctionParameter(
    TypedefParser::FunctionParameterContext* func_param) {
  AccessInfo ai = GetAccessInfoForType(func_param->parameter_type);
  ai.identifier() = escape_utf8_to_cpp_identifier(func_param->identifier()->id);
  return ai;
}

std::string escapeStringForCpp(const std::string& input) {
  std::stringstream oss;
  for (char c : input) {
    switch (c) {
      case '\\':
        oss << "\\\\";
        break;
      case '\"':
        oss << "\\\"";
        break;
      case '\n':
        oss << "\\n";
        break;
      case '\r':
        oss << "\\r";
        break;
      case '\t':
        oss << "\\t";
        break;
      case '\v':
        oss << "\\v";
        break;
      case '\b':
        oss << "\\b";
        break;
      case '\f':
        oss << "\\f";
        break;
      case '\a':
        oss << "\\a";
        break;
      default:
        oss << c;
        break;
    }
  }
  return oss.str();
}

vector<TmplItem> GetTemplateItems(
    vector<TypedefParser::TmplItemContext*> itm_ctxs) {
  vector<TmplItem> tis;
  for (TypedefParser::TmplItemContext* itm_ctx : itm_ctxs) {
    TmplItem ti;
    if (itm_ctx->tmplText()) {
      ti.text() = escapeStringForCpp(itm_ctx->tmplText()->text);
    } else if (itm_ctx->tmplExpression()) {
      ti.expression() = GetTemplateExpression(itm_ctx->tmplExpression());
    } else if (itm_ctx->tmplIfBlock()) {
      ti.if_block() = GetTemplateIfBlock(itm_ctx->tmplIfBlock());
    } else if (itm_ctx->tmplForBlock()) {
      ti.for_block() = GetTemplateForBlock(itm_ctx->tmplForBlock());
    } else if (itm_ctx->tmplSwitchBlock()) {
      ti.switch_block() = GetTempalteSwitchBlock(itm_ctx->tmplSwitchBlock());
    } else {
      throw_logic_error("invalid state");
    }
    tis.emplace_back(std::move(ti));
  }
  return tis;
}

TmplFunction GetTemplateFunc(TypedefParser::TmplDefinitionContext* tmpl_def) {
  TmplFunction t;
  t.identifier() = tmpl_def->identifier()->id;
  for (TypedefParser::FunctionParameterContext* func_param :
       tmpl_def->functionParameter()) {
    t.params().emplace_back(GetFunctionParameter(func_param));
  }
  if (tmpl_def->tmplBlock()) {
    t.items() = GetTemplateItems(tmpl_def->tmplBlock()->tmplItem());
  } else if (tmpl_def->RAW_STRING_LITERAL()) {
    TmplItem ti;
    ti.text() = escapeStringForCpp(tmpl_def->literal);
    t.items().emplace_back(std::move(ti));
  } else {
    throw_logic_error("invalid state");
  }
  return t;
}

vector<TmplFunction> GetTemplateFuncs(
    vector<TypedefParser::TmplDefinitionContext*> tmpl_defs) {
  vector<TmplFunction> tfs;
  for (TypedefParser::TmplDefinitionContext* tmpl_def : tmpl_defs) {
    tfs.emplace_back(GetTemplateFunc(tmpl_def));
  }
  return tfs;
}

}  // namespace

void CodegenCpp(OutPathBase* out_path,
                TypedefParser::CompilationUnitContext* compilation_unit_ctx,
                bool cpp_json_parser, bool cpp_json_writer) {
  filesystem::path hdr_filename =
      ToPath(compilation_unit_ctx->moduleDeclaration());
  filesystem::path source_filename = hdr_filename;
  hdr_filename.replace_extension(".td.h");
  source_filename.replace_extension(".td.cpp");

  auto hdr_file = out_path->OpenOutputFile(hdr_filename);
  hdr_file->Open();
  auto src_file = out_path->OpenOutputFile(source_filename);
  src_file->Open();

  Options options;
  options.generate_json_parser() = cpp_json_parser;
  options.generate_json_writer() = cpp_json_writer;

  CppData cppData;
  cppData.header_guard() = HeaderGuard(source_filename);
  cppData.header_filename() = hdr_filename;
  for (auto& path_part :
       compilation_unit_ctx->moduleDeclaration()->symbolPath()->identifier()) {
    cppData.namespaces().emplace_back(path_part->id);
  }
  cppData.user_type_decls() =
      GetUserTypeDecls(compilation_unit_ctx->typeDefinition());
  cppData.tmpl_funcs() =
      GetTemplateFuncs(compilation_unit_ctx->tmplDefinition());

  CppHeader(hdr_file->OStream(), cppData, options);
  CppSource(src_file->OStream(), cppData, options);
}

}  // namespace td