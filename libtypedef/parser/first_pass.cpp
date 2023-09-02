#include "first_pass.h"

#include <charconv>
#include <memory>
#include <stdexcept>

#define FMT_HEADER_ONLY
#include <fmt/core.h>

#include "libtypedef/parser/symbol_path.h"
#include "libtypedef/parser/table.h"

using namespace std;

#define throw_logic_error(str) \
  throw std::logic_error(      \
      fmt::format("\"{}\" in {}:{}", str, __FILE__, __LINE__));

#define bail_if_errors()     \
  if (errors_list_.size()) { \
    return;                  \
  }

td::ParserErrorInfo MakeError(td::ParserErrorInfo::Type type, const string& msg,
                              antlr4::Token* token) {
  return td::PEIBuilder()
      .SetType(type)
      .SetMessage(msg)
      .SetCharOffset(token->getStartIndex())
      .SetLine(token->getLine())
      .SetLineOffset(token->getCharPositionInLine())
      .SetLength(token->getText().length())
      .build();
}



void FirstPassListener::exitCompilationUnit(
    TypedefParser::CompilationUnitContext* ctx) {
  bail_if_errors();
  ctx->version = ctx->typedefVersionDeclaration()->version;
  ctx->mod = make_shared<td::table::Module>();
  ctx->mod->module_name = ctx->moduleDeclaration()->path;
  for (TypedefParser::TypeDeclarationContext* td : ctx->typeDeclaration()) {
    ctx->mod->types.push_back(td->type_decl);
  }
}

void FirstPassListener::exitStructDeclaration(
    TypedefParser::StructDeclarationContext* ctx) {
  bail_if_errors();
  ctx->st = make_shared<td::table::Struct>();
  ctx->st->identifier = ctx->identifier()->id;
  for (TypedefParser::StructMemberContext* stmctx : ctx->structMember()) {
    ctx->st->members.push_back(stmctx->mem);
  }
}

void FirstPassListener::exitVariantDeclaration(
    TypedefParser::VariantDeclarationContext* ctx) {
  bail_if_errors();
  ctx->var = make_shared<td::table::Variant>();
  ctx->var->identifier = ctx->identifier()->id;
  for (TypedefParser::StructMemberContext* stmctx : ctx->structMember()) {
    ctx->var->members.push_back(stmctx->mem);
  }
}

void FirstPassListener::exitVectorDeclaration(
    TypedefParser::VectorDeclarationContext* ctx) {
  bail_if_errors();
  ctx->vec = make_shared<td::table::Vector>();
  ctx->vec->identifier = ctx->symbolName->id;
  ctx->vec->element_type = ctx->typeParameter()->type_param;
}

void FirstPassListener::exitMapDeclaration(
    TypedefParser::MapDeclarationContext* ctx) {
  bail_if_errors();
  ctx->map = make_shared<td::table::Map>();
  ctx->map->identifier = ctx->symbolName->id;
  ctx->map->key_type = ctx->key->type_param;
  ctx->map->value_type = ctx->val->type_param;
}

void FirstPassListener::exitTemplateDefinition(
    TypedefParser::TemplateDefinitionContext* ctx) {
  bail_if_errors();
  vector<const td::table::FunctionParameter*> params;
  for (TypedefParser::FunctionParameterContext* fp_ctx :
       ctx->functionParameter()) {
    params.push_back(fp_ctx->func_param.get());
  }
  ctx->tmpl = make_unique<td::table::TemplateFunctionDefinition>(
      ctx->identifier()->id.get(), std::move(params),
      ctx->templateBlock()->val.get());
}

void FirstPassListener::exitTemplateBlock(
    TypedefParser::TemplateBlockContext* ctx) {
  bail_if_errors();
  try {
    if (ctx->TEMPLATE_LITERAL()) {
      ctx->val =
          GetStringValue(ctx->TEMPLATE_LITERAL()->getSymbol(), 't',
                         td::ParserErrorInfo::INVALID_TEMPLATE_STRING_LITERAL);
    } else if (ctx->RAW_TEMPLATE_LITERAL()) {
      ctx->val = GetRawString(
          ctx->RAW_TEMPLATE_LITERAL()->getSymbol(), 't',
          td::ParserErrorInfo::INVALID_RAW_TEMPLATE_STRING_LITERAL);
    } else {
      throw_logic_error("Invalid state.");
    }
  } catch (td::ParserErrorInfo& pei) {
    errors_list_.push_back(pei);
  }
}

void FirstPassListener::exitFunctionParameter(
    TypedefParser::FunctionParameterContext* ctx) {
  bail_if_errors();
  ctx->func_param = make_unique<td::table::FunctionParameter>(
      ctx->identifier()->id.get(), ctx->typeParameter()->type_param);
}

void FirstPassListener::exitTypeParameter(
    TypedefParser::TypeParameterContext* ctx) {
  bail_if_errors();
  ctx->type_param = make_shared<td::table::TypeParameter>();
  if (ctx->primitiveTypeIdentifier()) {
    ctx->type_param->type =
        (td::table::Type)ctx->primitiveTypeIdentifier()->primitive_type;
  } else if (ctx->identifier()) {
    ctx->type_param->type = td::table::Type::TYPE_SYMREF;
    ctx->type_param->symrmef_identifier = ctx->identifier()->id;
  } else {
    throw_logic_error("Invalid state.");
  }
}

void FirstPassListener::exitStructMember(
    TypedefParser::StructMemberContext* ctx) {
  bail_if_errors();
  ctx->mem = make_shared<td::table::StructMember>();
  if (ctx->typeDeclaration()) {
    ctx->mem->type_decl = ctx->typeDeclaration()->type_decl;
  } else if (ctx->fieldDeclaration()) {
    ctx->mem->field_decl = ctx->fieldDeclaration()->field_decl;
  } else {
    throw_logic_error("Invalid state.");
  }
}

void FirstPassListener::exitTypeDeclaration(
    TypedefParser::TypeDeclarationContext* ctx) {
  bail_if_errors();
  ctx->type_decl = make_shared<td::table::TypeDeclaration>();
  ctx->type_decl->ctx = ctx;
  if (ctx->structDeclaration()) {
    ctx->type_decl->declaration_type =
        td::table::NonPrimitiveType::NONPRIMITIVE_TYPE_STRUCT;
    ctx->type_decl->st = ctx->structDeclaration()->st;
  } else if (ctx->variantDeclaration()) {
    ctx->type_decl->declaration_type =
        td::table::NonPrimitiveType::NONPRIMITIVE_TYPE_VARIANT;
    ctx->type_decl->var = ctx->variantDeclaration()->var;
  } else if (ctx->vectorDeclaration()) {
    ctx->type_decl->declaration_type =
        td::table::NonPrimitiveType::NONPRIMITIVE_TYPE_VECTOR;
    ctx->type_decl->vec = ctx->vectorDeclaration()->vec;
  } else if (ctx->mapDeclaration()) {
    ctx->type_decl->declaration_type =
        td::table::NonPrimitiveType::NONPRIMITIVE_TYPE_MAP;
    ctx->type_decl->map = ctx->mapDeclaration()->map;
  } else if (ctx->templateDefinition()) {
    ctx->type_decl->declaration_type =
        td::table::NonPrimitiveType::NONPRIMITIVE_TYPE_TEMPLATE_FUNCTION;
    ctx->type_decl->template_function = ctx->templateDefinition()->tmpl.get();
  } else {
    throw_logic_error("Invalid state.");
  }
}

void FirstPassListener::exitFieldDeclaration(
    TypedefParser::FieldDeclarationContext* ctx) {
  bail_if_errors();
  if (ctx->primitiveMemberDeclaration()) {
    ctx->field_decl = ctx->primitiveMemberDeclaration()->field_decl;
  } else if (ctx->inlineStructDeclaration()) {
    ctx->field_decl = ctx->inlineStructDeclaration()->field_decl;
  } else if (ctx->inlineVariantDeclaration()) {
    ctx->field_decl = ctx->inlineVariantDeclaration()->field_decl;
  } else if (ctx->inlineVectorDeclaration()) {
    ctx->field_decl = ctx->inlineVectorDeclaration()->field_decl;
  } else if (ctx->inlineMapDeclaration()) {
    ctx->field_decl = ctx->inlineMapDeclaration()->field_decl;
  } else if (ctx->symrefMemberDeclaration()) {
    ctx->field_decl = ctx->symrefMemberDeclaration()->field_decl;
  } else {
    throw_logic_error("Invalid state.");
  }
}

void FirstPassListener::exitSymrefMemberDeclaration(
    TypedefParser::SymrefMemberDeclarationContext* ctx) {
  bail_if_errors();
  ctx->field_decl = make_shared<td::table::FieldDeclaration>();
  ctx->field_decl->ctx = ctx;
  ctx->field_decl->identifier = ctx->fieldIdentifier->id;
  ctx->field_decl->symrmef_identifier = ctx->symrefIdentifier->id;
  ctx->field_decl->member_type = td::table::Type::TYPE_SYMREF;
}

void FirstPassListener::exitPrimitiveMemberDeclaration(
    TypedefParser::PrimitiveMemberDeclarationContext* ctx) {
  bail_if_errors();
  if (ctx->impliedTypePrimitiveMemberDeclaration()) {
    ctx->field_decl = ctx->impliedTypePrimitiveMemberDeclaration()->field_decl;
    return;
  }

  ctx->field_decl = make_shared<td::table::FieldDeclaration>();
  ctx->field_decl->ctx = ctx;
  ctx->field_decl->identifier = ctx->identifier()->id;
  ctx->field_decl->member_type =
      (td::table::Type)ctx->primitiveTypeIdentifier()->primitive_type;
  if (ctx->explicitPrimitiveLiteral()) {
    ctx->field_decl->primitive_value = ctx->explicitPrimitiveLiteral()->val;
  } else if (ctx->floatLiteral()) {
    switch (ctx->primitiveTypeIdentifier()->primitive_type) {
      case td::table::PrimitiveType::PRIMITIVE_TYPE_F32:
        ctx->field_decl->primitive_value = GetFloatValue<float>(ctx);
        break;
      case td::table::PrimitiveType::PRIMITIVE_TYPE_F64:
        ctx->field_decl->primitive_value = GetFloatValue<double>(ctx);
        break;
      case td::table::PrimitiveType::PRIMITIVE_TYPE_U8:
        ctx->field_decl->primitive_value = GetFloatValue<uint8_t>(ctx);
        break;
      case td::table::PrimitiveType::PRIMITIVE_TYPE_U16:
        ctx->field_decl->primitive_value = GetFloatValue<uint16_t>(ctx);
        break;
      case td::table::PrimitiveType::PRIMITIVE_TYPE_U32:
        ctx->field_decl->primitive_value = GetFloatValue<uint32_t>(ctx);
        break;
      case td::table::PrimitiveType::PRIMITIVE_TYPE_U64:
        ctx->field_decl->primitive_value = GetFloatValue<uint64_t>(ctx);
        break;
      case td::table::PrimitiveType::PRIMITIVE_TYPE_I8:
        ctx->field_decl->primitive_value = GetFloatValue<int8_t>(ctx);
        break;
      case td::table::PrimitiveType::PRIMITIVE_TYPE_I16:
        ctx->field_decl->primitive_value = GetFloatValue<int16_t>(ctx);
        break;
      case td::table::PrimitiveType::PRIMITIVE_TYPE_I32:
        ctx->field_decl->primitive_value = GetFloatValue<int32_t>(ctx);
        break;
      case td::table::PrimitiveType::PRIMITIVE_TYPE_I64:
        ctx->field_decl->primitive_value = GetFloatValue<int64_t>(ctx);
        break;
      default:
        throw_logic_error("Invalid state.");
    }
  } else if (ctx->intLiteral()) {
    switch (ctx->primitiveTypeIdentifier()->primitive_type) {
      case td::table::PrimitiveType::PRIMITIVE_TYPE_F32:
        ctx->field_decl->primitive_value = GetIntValue<int32_t>(ctx);
        break;
      case td::table::PrimitiveType::PRIMITIVE_TYPE_F64:
        ctx->field_decl->primitive_value = GetIntValue<int32_t>(ctx);
        break;
      case td::table::PrimitiveType::PRIMITIVE_TYPE_U8:
        ctx->field_decl->primitive_value = GetIntValue<uint8_t>(ctx);
        break;
      case td::table::PrimitiveType::PRIMITIVE_TYPE_U16:
        ctx->field_decl->primitive_value = GetIntValue<uint16_t>(ctx);
        break;
      case td::table::PrimitiveType::PRIMITIVE_TYPE_U32:
        ctx->field_decl->primitive_value = GetIntValue<uint32_t>(ctx);
        break;
      case td::table::PrimitiveType::PRIMITIVE_TYPE_U64:
        ctx->field_decl->primitive_value = GetIntValue<uint64_t>(ctx);
        break;
      case td::table::PrimitiveType::PRIMITIVE_TYPE_I8:
        ctx->field_decl->primitive_value = GetIntValue<int8_t>(ctx);
        break;
      case td::table::PrimitiveType::PRIMITIVE_TYPE_I16:
        ctx->field_decl->primitive_value = GetIntValue<int16_t>(ctx);
        break;
      case td::table::PrimitiveType::PRIMITIVE_TYPE_I32:
        ctx->field_decl->primitive_value = GetIntValue<int32_t>(ctx);
        break;
      case td::table::PrimitiveType::PRIMITIVE_TYPE_I64:
        ctx->field_decl->primitive_value = GetIntValue<int64_t>(ctx);
        break;
      default:
        throw_logic_error("Invalid state.");
    }
  }
  // else no value; that's fine.
}

void FirstPassListener::exitImpliedTypePrimitiveMemberDeclaration(
    TypedefParser::ImpliedTypePrimitiveMemberDeclarationContext* ctx) {
  bail_if_errors();
  ctx->field_decl = make_shared<td::table::FieldDeclaration>();
  ctx->field_decl->ctx = ctx;
  ctx->field_decl->identifier = ctx->identifier()->id;
  if (ctx->floatLiteral()) {
    ctx->field_decl->member_type = td::table::Type::TYPE_F32;
    ctx->field_decl->primitive_value = GetFloatValue<float>(ctx);
  } else if (ctx->intLiteral()) {
    ctx->field_decl->member_type = td::table::Type::TYPE_I32;
    ctx->field_decl->primitive_value = GetIntValue<int32_t>(ctx);
  } else if (ctx->explicitPrimitiveLiteral()) {
    ctx->field_decl->member_type =
        (td::table::Type)ctx->explicitPrimitiveLiteral()->type;
    ctx->field_decl->primitive_value = ctx->explicitPrimitiveLiteral()->val;
  } else {
    throw_logic_error("Invalid state.");
  }
}

void FirstPassListener::exitInlineStructDeclaration(
    TypedefParser::InlineStructDeclarationContext* ctx) {
  bail_if_errors();
  ctx->field_decl = make_shared<td::table::FieldDeclaration>();
  ctx->field_decl->ctx = ctx;
  ctx->field_decl->identifier = ctx->identifier()->id;
  ctx->field_decl->member_type = td::table::Type::TYPE_STRUCT;
  ctx->field_decl->st = make_shared<td::table::Struct>();
  for (TypedefParser::StructMemberContext* stmctx : ctx->structMember()) {
    ctx->field_decl->st->members.push_back(stmctx->mem);
  }
}

void FirstPassListener::exitInlineVariantDeclaration(
    TypedefParser::InlineVariantDeclarationContext* ctx) {
  bail_if_errors();
  ctx->field_decl = make_shared<td::table::FieldDeclaration>();
  ctx->field_decl->ctx = ctx;
  ctx->field_decl->identifier = ctx->identifier()->id;
  ctx->field_decl->member_type = td::table::Type::TYPE_VARIANT;
  ctx->field_decl->var = make_shared<td::table::Variant>();
  for (TypedefParser::StructMemberContext* stmctx : ctx->structMember()) {
    ctx->field_decl->var->members.push_back(stmctx->mem);
  }
}

void FirstPassListener::exitInlineVectorDeclaration(
    TypedefParser::InlineVectorDeclarationContext* ctx) {
  bail_if_errors();
  ctx->field_decl = make_shared<td::table::FieldDeclaration>();
  ctx->field_decl->ctx = ctx;
  ctx->field_decl->identifier = ctx->identifier()->id;
  ctx->field_decl->member_type = td::table::Type::TYPE_VECTOR;
  ctx->field_decl->vec = make_shared<td::table::Vector>();
  ctx->field_decl->vec->element_type = ctx->typeParameter()->type_param;
}

void FirstPassListener::exitInlineMapDeclaration(
    TypedefParser::InlineMapDeclarationContext* ctx) {
  bail_if_errors();
  ctx->field_decl = make_shared<td::table::FieldDeclaration>();
  ctx->field_decl->ctx = ctx;
  ctx->field_decl->identifier = ctx->identifier()->id;
  ctx->field_decl->member_type = td::table::Type::TYPE_MAP;
  ctx->field_decl->map = make_shared<td::table::Map>();
  ctx->field_decl->map->key_type = ctx->key->type_param;
  ctx->field_decl->map->value_type = ctx->val->type_param;
}

void FirstPassListener::exitSimplePath(TypedefParser::SimplePathContext* ctx) {
  bail_if_errors();
  ctx->path = make_shared<td::SymbolPath>(ctx->leading_pathsep != nullptr);
  for (const TypedefParser::IdentifierContext* i : ctx->identifier()) {
    ctx->path->emplace_back(i->id);
  }
}

void FirstPassListener::exitExplicitPrimitiveLiteral(
    TypedefParser::ExplicitPrimitiveLiteralContext* ctx) {
  bail_if_errors();
  if (ctx->boolLiteral()) {
    ctx->type = td::table::PrimitiveType::PRIMITIVE_TYPE_BOOL;
    ctx->val = ctx->boolLiteral()->val;
  } else if (ctx->charLiteral()) {
    ctx->type = td::table::PrimitiveType::PRIMITIVE_TYPE_CHAR;
    ctx->val = ctx->charLiteral()->val;
  } else if (ctx->stringLiteral()) {
    ctx->type = td::table::PrimitiveType::PRIMITIVE_TYPE_STRING;
    ctx->val = ctx->stringLiteral()->val;
  } else if (ctx->f32Literal()) {
    ctx->type = td::table::PrimitiveType::PRIMITIVE_TYPE_F32;
    ctx->val = ctx->f32Literal()->val;
  } else if (ctx->f64Literal()) {
    ctx->type = td::table::PrimitiveType::PRIMITIVE_TYPE_F64;
    ctx->val = ctx->f64Literal()->val;
  } else if (ctx->u8Literal()) {
    ctx->type = td::table::PrimitiveType::PRIMITIVE_TYPE_U8;
    ctx->val = ctx->u8Literal()->val;
  } else if (ctx->u16Literal()) {
    ctx->type = td::table::PrimitiveType::PRIMITIVE_TYPE_U16;
    ctx->val = ctx->u16Literal()->val;
  } else if (ctx->u32Literal()) {
    ctx->type = td::table::PrimitiveType::PRIMITIVE_TYPE_U32;
    ctx->val = ctx->u32Literal()->val;
  } else if (ctx->u64Literal()) {
    ctx->type = td::table::PrimitiveType::PRIMITIVE_TYPE_U64;
    ctx->val = ctx->u64Literal()->val;
  } else if (ctx->i8Literal()) {
    ctx->type = td::table::PrimitiveType::PRIMITIVE_TYPE_I8;
    ctx->val = ctx->i8Literal()->val;
  } else if (ctx->i16Literal()) {
    ctx->type = td::table::PrimitiveType::PRIMITIVE_TYPE_I16;
    ctx->val = ctx->i16Literal()->val;
  } else if (ctx->i32Literal()) {
    ctx->type = td::table::PrimitiveType::PRIMITIVE_TYPE_I32;
    ctx->val = ctx->i32Literal()->val;
  } else if (ctx->i64Literal()) {
    ctx->type = td::table::PrimitiveType::PRIMITIVE_TYPE_I64;
    ctx->val = ctx->i64Literal()->val;
  } else {
    throw_logic_error("Invalid state.");
  }
}

void FirstPassListener::exitBoolLiteral(
    TypedefParser::BoolLiteralContext* ctx) {
  bail_if_errors();
  if (ctx->start->getType() == TypedefParser::KW_FALSE) {
    ctx->val = false;
  } else if (ctx->start->getType() == TypedefParser::KW_TRUE) {
    ctx->val = true;
  } else {
    throw_logic_error("Invalid state.");
  }
}

void FirstPassListener::exitCharLiteral(
    TypedefParser::CharLiteralContext* ctx) {
  bail_if_errors();
  try {
    ctx->val = GetCharValue(ctx);
  } catch (td::ParserErrorInfo& pei) {
    errors_list_.push_back(pei);
  }
}

void FirstPassListener::exitF32Literal(TypedefParser::F32LiteralContext* ctx) {
  bail_if_errors();
  try {
    ctx->val = GetFloatValue<float>(ctx);
  } catch (td::ParserErrorInfo& pei) {
    errors_list_.push_back(pei);
  }
}

void FirstPassListener::exitF64Literal(TypedefParser::F64LiteralContext* ctx) {
  bail_if_errors();
  try {
    ctx->val = GetFloatValue<double>(ctx);
  } catch (td::ParserErrorInfo& pei) {
    errors_list_.push_back(pei);
  }
}

void FirstPassListener::exitU8Literal(TypedefParser::U8LiteralContext* ctx) {
  bail_if_errors();
  try {
    ctx->val = GetIntValue<uint8_t>(ctx);
  } catch (td::ParserErrorInfo& pei) {
    errors_list_.push_back(pei);
  }
}

void FirstPassListener::exitU16Literal(TypedefParser::U16LiteralContext* ctx) {
  bail_if_errors();
  try {
    ctx->val = GetIntValue<uint16_t>(ctx);
  } catch (td::ParserErrorInfo& pei) {
    errors_list_.push_back(pei);
  }
}

void FirstPassListener::exitU32Literal(TypedefParser::U32LiteralContext* ctx) {
  bail_if_errors();
  try {
    ctx->val = GetIntValue<uint32_t>(ctx);
  } catch (td::ParserErrorInfo& pei) {
    errors_list_.push_back(pei);
  }
}

void FirstPassListener::exitU64Literal(TypedefParser::U64LiteralContext* ctx) {
  bail_if_errors();
  try {
    ctx->val = GetIntValue<uint64_t>(ctx);
  } catch (td::ParserErrorInfo& pei) {
    errors_list_.push_back(pei);
  }
}

void FirstPassListener::exitI8Literal(TypedefParser::I8LiteralContext* ctx) {
  bail_if_errors();
  try {
    ctx->val = GetIntValue<int8_t>(ctx);
  } catch (td::ParserErrorInfo& pei) {
    errors_list_.push_back(pei);
  }
}

void FirstPassListener::exitI16Literal(TypedefParser::I16LiteralContext* ctx) {
  bail_if_errors();
  try {
    ctx->val = GetIntValue<int16_t>(ctx);
  } catch (td::ParserErrorInfo& pei) {
    errors_list_.push_back(pei);
  }
}

void FirstPassListener::exitI32Literal(TypedefParser::I32LiteralContext* ctx) {
  bail_if_errors();
  try {
    ctx->val = GetIntValue<int32_t>(ctx);
  } catch (td::ParserErrorInfo& pei) {
    errors_list_.push_back(pei);
  }
}

void FirstPassListener::exitI64Literal(TypedefParser::I64LiteralContext* ctx) {
  bail_if_errors();
  try {
    ctx->val = GetIntValue<int64_t>(ctx);
  } catch (td::ParserErrorInfo& pei) {
    errors_list_.push_back(pei);
  }
}
