parser grammar TypedefParser;

options {
	tokenVocab = TypedefLexer;
}

@header {
#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include "symbol_table.h"
}

compilationUnit:
	typedefVersionDeclaration moduleDeclaration? useDeclaration* item* EOF;

item: valueDefinition;

// ValA: i32 = 42;
valueDefinition:
	identifier COLON type_ EQ (
		{$type_.start->getType() == KW_BOOL}? boolLiteral
		| {$type_.start->getType() == KW_CHAR}? charLiteral
		| {$type_.start->getType() == KW_STRING}? stringLiteral
		| {$type_.start->getType() == KW_F32}? f32Literal
		| {$type_.start->getType() == KW_F64}? f64Literal
		| {$type_.start->getType() == KW_U8}? u8Literal
		| {$type_.start->getType() == KW_U16}? u16Literal
		| {$type_.start->getType() == KW_U32}? u32Literal
		| {$type_.start->getType() == KW_U64}? u64Literal
		| {$type_.start->getType() == KW_I8}? i8Literal
		| {$type_.start->getType() == KW_I16}? i16Literal
		| {$type_.start->getType() == KW_I32}? i32Literal
		| {$type_.start->getType() == KW_I64}? i64Literal
	) SEMI;

type_: primitiveType | identifier | parameterizedType;

// thing < arg2, 42 >
parameterizedType:
	identifier LT (identifier | INTEGER_LITERAL)+ GT;

typedefVersionDeclaration: KW_TYPEDEF EQ identifier SEMI;
moduleDeclaration: KW_MODULE simplePath SEMI;

useDeclaration: 'use' useTree ';';
useTree: (simplePath? '::')? (
		'*'
		| '{' ( useTree (',' useTree)* ','?)? '}'
	)
	| simplePath ('as' identifier)?;

// Enums enumDeclaration: KW_ENUM (LT integerLiteral GT)? identifier LBRACE enumBody RBRACE SEMI;
// enumBody: ( identifier COMMA)+ (identifier COMMA?)?;

// Struct structDeclaration: KW_STRUCT identifier LBRACE structBody RBRACE SEMI; structBody:
// structFieldDeclaration*; structFieldDeclaration: identifier COLON identifier (EQ value)? SEMI;

// Value definitions ---------------------------------------------------------- value:
// literalExpression | array | map | identifier; value: literalExpression;

// array: LBRACK (value (COMMA value)*)? COMMA? RBRACK; map: LBRACE (keyValue (COMMA keyValue)*
// COMMA?)? RBRACE; keyValue: identifier COLON value;

simplePath: '::'? identifier ('::' identifier)*;

primitiveType:
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

boolLiteral
	returns[std::optional<bool> maybe_val]
	@after {
		// From grammar.
		if ($ctx->start->getType() == TypedefParser::KW_FALSE) {
			$maybe_val = false;
		} else if ($ctx->start->getType() == TypedefParser::KW_TRUE) {
			$maybe_val = true;
		}
		// End from grammar.
  }: KW_TRUE | KW_FALSE;
byteLiteral
	returns[std::optional<uint8_t> maybe_val]: BYTE_LITERAL;
charLiteral
	returns[std::optional<char32_t> maybe_val]: CHAR_LITERAL;
f32Literal
	returns[std::optional<float> maybe_val]: FLOAT_LITERAL;
f64Literal
	returns[std::optional<double> maybe_val]: FLOAT_LITERAL;
u8Literal
	returns[std::optional<uint8_t> maybe_val]: INTEGER_LITERAL;
u16Literal
	returns[std::optional<uint16_t> maybe_val]: INTEGER_LITERAL;
u32Literal
	returns[std::optional<uint32_t> maybe_val]
	@after {
		// From grammar.
		// End from grammar.
  }: INTEGER_LITERAL;
u64Literal
	returns[std::optional<uint64_t> maybe_val]: INTEGER_LITERAL;
i8Literal
	returns[std::optional<int8_t> maybe_val]: INTEGER_LITERAL;
i16Literal
	returns[std::optional<int16_t> maybe_val]: INTEGER_LITERAL;
i32Literal
	returns[std::optional<int32_t> maybe_val]: INTEGER_LITERAL;
i64Literal
	returns[std::optional<int64_t> maybe_val]: INTEGER_LITERAL;

stringLiteral
	returns[std::optional<std::string> maybe_val]:
	STRING_LITERAL
	| RAW_STRING_LITERAL;
byteStringLiteral
	returns[std::optional<std::string> maybe_val]:
	BYTE_STRING_LITERAL
	| RAW_BYTE_STRING_LITERAL;

// technical identifier returns[std::string id] @after { $id = $nki->getText(); }: nki =
// NON_KEYWORD_IDENTIFIER | RAW_ESCAPE nki = NON_KEYWORD_IDENTIFIER;

identifier
	returns[std::string id]
	@after {
		$id = $nki->getText();
  }:
	nki = NON_KEYWORD_IDENTIFIER
	| RAW_ESCAPE nki = NON_KEYWORD_IDENTIFIER;
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