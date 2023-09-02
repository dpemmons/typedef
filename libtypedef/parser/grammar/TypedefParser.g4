parser grammar TypedefParser;

options {
	tokenVocab = TypedefLexer;
}

@header {
#include "libtypedef/parser/grammar_classes.h"
}

@parser::definitions {
#include <cstdint>
#include <memory>
#include <optional>
#include <string>
}

compilationUnit
	returns[
		td::CompilationUnit compilation_unit
	]
	@after {$compilation_unit.Init($ctx);}:
	typedefVersionDeclaration moduleDeclaration (useDeclaration)* (
		typeDefinition ';'
	)* EOF;

typedefVersionDeclaration: 'typedef' EQ identifier ';';
moduleDeclaration: 'module' symbolPath ';';

// struct|variant SomeVariant { optionA: i32; optionB: str; }
typeDefinition
	returns[std::unique_ptr<td::TypeDefinition> type_definition]
	@after {$type_definition = TypeDefinition::Build($ctx);}: (KW_STRUCT | KW_VARIANT) identifier? '{' fieldBlock '}';

fieldBlock: ( typeDefinition | (fieldDefinition ';'))*;

fieldDefinition
	returns[std::unique_ptr<td::FieldDefinition> field_definition]
	@after {$field_definition = FieldDefinition::Build($ctx);}:
	field_identifier = identifier (
		':' (typeAnnotation | typeDefinition)
	)? ('=' primitiveLiteral)?;

typeAnnotation:
	identifier ('<' typeArgument (',' typeArgument)* '>')?;
typeArgument: typeIdentifier;
typeIdentifier:
	primitiveTypeIdentifier
	| KW_VECTOR
	| KW_MAP
	| symrefIdentifier = identifier;

// template DoIt(a: i32, b: str) "{a} {b}";
templateDefinition
	returns[td::TemplateDefinition template_definition]
	@after {$template_definition.Init($ctx);}:
	KW_TEMPLATE identifier '(' (
		functionParameter (COMMA functionParameter)*
	) ')' ('=>' KW_STRING)? templateBlock;

templateBlock
	returns[std::string val]:
	TEMPLATE_LITERAL
	| RAW_TEMPLATE_LITERAL;

functionParameter
	returns[std::unique_ptr<td::table::FunctionParameter> func_param]:
	identifier ':' typeParameter;

typeParameter
	returns[std::shared_ptr<td::table::TypeParameter> type_param]:
	primitiveTypeIdentifier
	| identifier;

useDeclaration: 'use' symbolPath ';';

symbolPath
	returns[td::SymbolPath symbol_path]
	@after {$symbol_path.Init($ctx)}: (leading_pathsep = '::')? identifier ('::' identifier)*;

primitiveLiteral:
	boolLiteral
	| charLiteral
	| stringLiteral
	| floatLiteral
	| integerLiteral;

boolLiteral
	returns[td::BoolLiteralContext bool_literal]
	@after {$bool_literal.Init($ctx);}: KW_TRUE | KW_FALSE;
charLiteral
	returns[td::CharLiteral char_literal]
	@after {$char_literal.Init($ctx);}: CHAR_LITERAL;
stringLiteral
	returns[td::StringLiteral string_literal]
	@after {$string_literal.Init($ctx);}: STRING_LITERAL | RAW_STRING_LITERAL;

floatLiteral
	returns[td::FloatLiteral float_literal]
	@after {$float_literal.Init($ctx);}: FLOAT_LITERAL (KW_F32 | KW_F64)?;

integerLiteral
	returns[td::IntegerLiteral integer_literal]
	@after {$integer_literal.Init($ctx);}: (intDigits) (
		KW_U8
		| KW_U16
		| KW_U32
		| KW_U64
		| KW_I8
		| KW_I16
		| KW_I32
		| KW_I64
	)?;
intDigits: (MINUS? (DEC_DIGITS | DEC_DIGITS_UNDERSCORE))
	| (HEX_PREFIX (HEX_DIGITS | HEX_DIGITS_UNDERSCORE))
	| (OCT_PREFIX (OCT_DIGITS | OCT_DIGITS_UNDERSCORE))
	| (BIN_PREFIX (BIN_DIGITS | BIN_DIGITS_UNDERSCORE));

identifier
	returns[std::string id]
	@after {$id = $ctx->nki->getText();}:
	nki = NON_KEYWORD_IDENTIFIER
	| RAW_ESCAPE nki = NON_KEYWORD_IDENTIFIER;

primitiveTypeIdentifier:
	KW_BOOL
	| KW_CHAR
	| KW_STRING
	| KW_F32
	| KW_F64
	| KW_U8
	| KW_U16
	| KW_U32
	| KW_U64
	| KW_I8
	| KW_I16
	| KW_I32
	| KW_I64;

keyword:
	KW_AS
	| KW_ENUM
	| KW_FALSE
	| KW_FN
	| KW_IMPL
	| KW_MODULE
	| KW_STRUCT
	| KW_TRUE
	| KW_TYPE
	| KW_TYPEDEF
	| KW_USE
	| KW_VARIANT
	| KW_VECTOR
	| KW_MAP

	// reserved misc
	| KW_AND
	| KW_IN
	| KW_LET
	| KW_NOT
	| KW_OR
	| KW_SIZEOF
	| KW_THIS
	| KW_TRAIT
	| KW_WHERE
	| KW_XOR

	// reserved control flow
	| KW_BREAK
	| KW_CONTINUE
	| KW_DEFAULT
	| KW_DO
	| KW_ELSE
	| KW_FOR
	| KW_GOTO
	| KW_IF
	| KW_LOOP
	| KW_MATCH
	| KW_MOVE
	| KW_RETURN
	| KW_TRY
	| KW_WHILE
	| KW_YIELD

	// reserved type-related
	| KW_ABSTRACT
	| KW_AUTO
	| KW_CONST
	| KW_DOUBLE
	| KW_EXTERN
	| KW_FINAL
	| KW_FLOAT
	| KW_INT
	| KW_LONG
	| KW_MACRO
	| KW_MUT
	| KW_OVERRIDE
	| KW_PRIVATE
	| KW_PUB
	| KW_REF
	| KW_SELFTYPE
	| KW_SELFVALUE
	| KW_SIGNED
	| KW_STATIC
	| KW_SUPER
	| KW_SWITCH
	| KW_TYPEOF
	| KW_UNION
	| KW_UNSAFE
	| KW_UNSIGNED
	| KW_UNSIZED
	| KW_VIRTUAL
	| KW_VOID
	| KW_VOLATILE;