
#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include "symbol_table.h"


// Generated from ./src/lib/grammar/TypedefParser.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "TypedefParserListener.h"


/**
 * This class provides an empty implementation of TypedefParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  TypedefParserBaseListener : public TypedefParserListener {
public:

  virtual void enterCompilationUnit(TypedefParser::CompilationUnitContext * /*ctx*/) override { }
  virtual void exitCompilationUnit(TypedefParser::CompilationUnitContext * /*ctx*/) override { }

  virtual void enterItem(TypedefParser::ItemContext * /*ctx*/) override { }
  virtual void exitItem(TypedefParser::ItemContext * /*ctx*/) override { }

  virtual void enterValueDefinition(TypedefParser::ValueDefinitionContext * /*ctx*/) override { }
  virtual void exitValueDefinition(TypedefParser::ValueDefinitionContext * /*ctx*/) override { }

  virtual void enterType_(TypedefParser::Type_Context * /*ctx*/) override { }
  virtual void exitType_(TypedefParser::Type_Context * /*ctx*/) override { }

  virtual void enterParameterizedType(TypedefParser::ParameterizedTypeContext * /*ctx*/) override { }
  virtual void exitParameterizedType(TypedefParser::ParameterizedTypeContext * /*ctx*/) override { }

  virtual void enterTypedefVersionDeclaration(TypedefParser::TypedefVersionDeclarationContext * /*ctx*/) override { }
  virtual void exitTypedefVersionDeclaration(TypedefParser::TypedefVersionDeclarationContext * /*ctx*/) override { }

  virtual void enterModuleDeclaration(TypedefParser::ModuleDeclarationContext * /*ctx*/) override { }
  virtual void exitModuleDeclaration(TypedefParser::ModuleDeclarationContext * /*ctx*/) override { }

  virtual void enterUseDeclaration(TypedefParser::UseDeclarationContext * /*ctx*/) override { }
  virtual void exitUseDeclaration(TypedefParser::UseDeclarationContext * /*ctx*/) override { }

  virtual void enterUseTree(TypedefParser::UseTreeContext * /*ctx*/) override { }
  virtual void exitUseTree(TypedefParser::UseTreeContext * /*ctx*/) override { }

  virtual void enterSimplePath(TypedefParser::SimplePathContext * /*ctx*/) override { }
  virtual void exitSimplePath(TypedefParser::SimplePathContext * /*ctx*/) override { }

  virtual void enterPrimitiveType(TypedefParser::PrimitiveTypeContext * /*ctx*/) override { }
  virtual void exitPrimitiveType(TypedefParser::PrimitiveTypeContext * /*ctx*/) override { }

  virtual void enterBoolLiteral(TypedefParser::BoolLiteralContext * /*ctx*/) override { }
  virtual void exitBoolLiteral(TypedefParser::BoolLiteralContext * /*ctx*/) override { }

  virtual void enterByteLiteral(TypedefParser::ByteLiteralContext * /*ctx*/) override { }
  virtual void exitByteLiteral(TypedefParser::ByteLiteralContext * /*ctx*/) override { }

  virtual void enterCharLiteral(TypedefParser::CharLiteralContext * /*ctx*/) override { }
  virtual void exitCharLiteral(TypedefParser::CharLiteralContext * /*ctx*/) override { }

  virtual void enterF32Literal(TypedefParser::F32LiteralContext * /*ctx*/) override { }
  virtual void exitF32Literal(TypedefParser::F32LiteralContext * /*ctx*/) override { }

  virtual void enterF64Literal(TypedefParser::F64LiteralContext * /*ctx*/) override { }
  virtual void exitF64Literal(TypedefParser::F64LiteralContext * /*ctx*/) override { }

  virtual void enterU8Literal(TypedefParser::U8LiteralContext * /*ctx*/) override { }
  virtual void exitU8Literal(TypedefParser::U8LiteralContext * /*ctx*/) override { }

  virtual void enterU16Literal(TypedefParser::U16LiteralContext * /*ctx*/) override { }
  virtual void exitU16Literal(TypedefParser::U16LiteralContext * /*ctx*/) override { }

  virtual void enterU32Literal(TypedefParser::U32LiteralContext * /*ctx*/) override { }
  virtual void exitU32Literal(TypedefParser::U32LiteralContext * /*ctx*/) override { }

  virtual void enterU64Literal(TypedefParser::U64LiteralContext * /*ctx*/) override { }
  virtual void exitU64Literal(TypedefParser::U64LiteralContext * /*ctx*/) override { }

  virtual void enterI8Literal(TypedefParser::I8LiteralContext * /*ctx*/) override { }
  virtual void exitI8Literal(TypedefParser::I8LiteralContext * /*ctx*/) override { }

  virtual void enterI16Literal(TypedefParser::I16LiteralContext * /*ctx*/) override { }
  virtual void exitI16Literal(TypedefParser::I16LiteralContext * /*ctx*/) override { }

  virtual void enterI32Literal(TypedefParser::I32LiteralContext * /*ctx*/) override { }
  virtual void exitI32Literal(TypedefParser::I32LiteralContext * /*ctx*/) override { }

  virtual void enterI64Literal(TypedefParser::I64LiteralContext * /*ctx*/) override { }
  virtual void exitI64Literal(TypedefParser::I64LiteralContext * /*ctx*/) override { }

  virtual void enterStringLiteral(TypedefParser::StringLiteralContext * /*ctx*/) override { }
  virtual void exitStringLiteral(TypedefParser::StringLiteralContext * /*ctx*/) override { }

  virtual void enterByteStringLiteral(TypedefParser::ByteStringLiteralContext * /*ctx*/) override { }
  virtual void exitByteStringLiteral(TypedefParser::ByteStringLiteralContext * /*ctx*/) override { }

  virtual void enterIdentifier(TypedefParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(TypedefParser::IdentifierContext * /*ctx*/) override { }

  virtual void enterKeyword(TypedefParser::KeywordContext * /*ctx*/) override { }
  virtual void exitKeyword(TypedefParser::KeywordContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

