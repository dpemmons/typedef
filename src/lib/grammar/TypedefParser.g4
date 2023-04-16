parser grammar TypedefParser;

options {
	tokenVocab = TypedefLexer;
}

@header {
#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include "parser_helpers.h"
#include "symbol_table.h"
}

@parser::members {
	td::SymbolTable symbol_table;
}

compilationUnit:
	typedefVersionDeclaration WS* moduleDeclaration? (
		WS* useDeclaration
	)* (WS* item)* WS* EOF;

item: valueDefinition;

// ValA: i32 = 42;
valueDefinition:
	identifier WS* primitiveFragment WS* SEMI {
	if ($primitiveFragment.ctx->maybe_val) {
		if (!symbol_table.TryInsert($identifier.ctx->id, $primitiveFragment.ctx->maybe_val.value())) {
			throw DuplicateSymbol(this, $identifier.ctx, $identifier.ctx->NON_KEYWORD_IDENTIFIER()->getSymbol());
		}
	}
};

primitiveFragment
	returns[std::optional<td::SymbolTable::Value> maybe_val]: (
		boolFragment {$maybe_val = $boolFragment.ctx->literal->maybe_val;}
		| charFragment {$maybe_val = $charFragment.ctx->literal->maybe_val;}
		| stringFragment {$maybe_val = $stringFragment.ctx->literal->maybe_val;}
		| f32Fragment {$maybe_val = $f32Fragment.ctx->literal->maybe_val;}
		| f64Fragment {$maybe_val = $f64Fragment.ctx->literal->maybe_val;}
		| u8Fragment {$maybe_val = $u8Fragment.ctx->literal->maybe_val;}
		| u16Fragment {$maybe_val = $u16Fragment.ctx->literal->maybe_val;}
		| u32Fragment {$maybe_val = $u32Fragment.ctx->literal->maybe_val;}
		| u64Fragment {$maybe_val = $u64Fragment.ctx->literal->maybe_val;}
		| i8Fragment {$maybe_val = $i8Fragment.ctx->literal->maybe_val;}
		| i16Fragment {$maybe_val = $i16Fragment.ctx->literal->maybe_val;}
		| i32Fragment {$maybe_val = $i32Fragment.ctx->literal->maybe_val;}
		| i64Fragment {$maybe_val = $i64Fragment.ctx->literal->maybe_val;}
	);
boolFragment: (COLON WS* KW_BOOL)? WS* EQ WS* literal = boolLiteral;
charFragment: (COLON WS* KW_CHAR)? WS* EQ WS* literal = charLiteral;

stringFragment: KW_STRING WS* EQ WS* literal = stringLiteral;
f32Fragment: KW_F32 WS* EQ WS* literal = f32Literal;
f64Fragment: KW_F64 WS* EQ WS* literal = f64Literal;

u8Fragment: (
		COLON WS* KW_U8 WS* EQ WS* literal = u8Literal 'u8'?
	)
	| (EQ WS* literal = u8Literal 'u8');
u16Fragment: (
		COLON WS* KW_U16 WS* EQ WS* literal = u16Literal 'u16'?
	)
	| (EQ WS* literal = u16Literal 'u16');
u32Fragment: (
		COLON WS* KW_U32 WS* EQ WS* literal = u32Literal 'u32'?
	)
	| (EQ WS* literal = u32Literal 'u32');
u64Fragment: (
		COLON WS* KW_U64 WS* EQ WS* literal = u64Literal 'u64'?
	)
	| (EQ WS* literal = u64Literal 'u64');
i8Fragment: (
		COLON WS* KW_I8 WS* EQ WS* literal = i8Literal 'i8'?
	)
	| (EQ WS* literal = i8Literal 'i8');
i16Fragment: (
		COLON WS* KW_I16 WS* EQ WS* literal = i16Literal 'i16'?
	)
	| (EQ WS* literal = i16Literal 'i16');
i32Fragment: (
		COLON WS* KW_I32 WS* EQ WS* literal = i32Literal 'i32'?
	)
	| (EQ WS* literal = i32Literal 'i32'?);
i64Fragment: (
		COLON WS* KW_I64 WS* EQ WS* literal = i64Literal 'i64'?
	)
	| (EQ WS* literal = i64Literal 'i64');

type_: identifier | parameterizedType;

// thing < arg2, 42 >
parameterizedType: identifier LT (identifier | u64Literal)+ GT;

typedefVersionDeclaration:
	KW_TYPEDEF WS* EQ WS* identifier WS* SEMI;
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

boolLiteral
	returns[std::optional<bool> maybe_val]
	@after {
		// From boolLiteral grammar.
		if ($ctx->start->getType() == TypedefParser::KW_FALSE) {
			$maybe_val = false;
		} else if ($ctx->start->getType() == TypedefParser::KW_TRUE) {
			$maybe_val = true;
		} else {
			throw InputMismatchException(this);
		}	
		// End from boolLiteral grammar.
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
	returns[std::optional<uint8_t> maybe_val]
	@after {
		$maybe_val = GetIntValue<uint8_t>(this, $ctx);
  }: (
		(
			(DEC_DIGITS | DEC_DIGITS_UNDERSCORE)
			| (HEX_PREFIX (HEX_DIGITS | HEX_DIGITS_UNDERSCORE))
			| (OCT_PREFIX (OCT_DIGITS | OCT_DIGITS_UNDERSCORE))
			| (BIN_PREFIX (BIN_DIGITS | BIN_DIGITS_UNDERSCORE))
		)
	);
u16Literal
	returns[std::optional<uint16_t> maybe_val]
	@after {
		$maybe_val = GetIntValue<uint16_t>(this, $ctx);
  }: (
		(
			(DEC_DIGITS | DEC_DIGITS_UNDERSCORE)
			| (HEX_PREFIX (HEX_DIGITS | HEX_DIGITS_UNDERSCORE))
			| (OCT_PREFIX (OCT_DIGITS | OCT_DIGITS_UNDERSCORE))
			| (BIN_PREFIX (BIN_DIGITS | BIN_DIGITS_UNDERSCORE))
		)
	);
u32Literal
	returns[std::optional<uint32_t> maybe_val]
	@after {
		$maybe_val = GetIntValue<uint32_t>(this, $ctx);
  }: (
		(
			(DEC_DIGITS | DEC_DIGITS_UNDERSCORE)
			| (HEX_PREFIX (HEX_DIGITS | HEX_DIGITS_UNDERSCORE))
			| (OCT_PREFIX (OCT_DIGITS | OCT_DIGITS_UNDERSCORE))
			| (BIN_PREFIX (BIN_DIGITS | BIN_DIGITS_UNDERSCORE))
		)
	);
u64Literal
	returns[std::optional<uint64_t> maybe_val]
	@after {
		$maybe_val = GetIntValue<uint64_t>(this, $ctx);
  }: (
		(
			(DEC_DIGITS | DEC_DIGITS_UNDERSCORE)
			| (HEX_PREFIX (HEX_DIGITS | HEX_DIGITS_UNDERSCORE))
			| (OCT_PREFIX (OCT_DIGITS | OCT_DIGITS_UNDERSCORE))
			| (BIN_PREFIX (BIN_DIGITS | BIN_DIGITS_UNDERSCORE))
		)
	);
i8Literal
	returns[std::optional<int8_t> maybe_val]
	@after {
		$maybe_val = GetIntValue<int8_t>(this, $ctx);
  }: (
		(
			(DEC_DIGITS | DEC_DIGITS_UNDERSCORE)
			| (HEX_PREFIX (HEX_DIGITS | HEX_DIGITS_UNDERSCORE))
			| (OCT_PREFIX (OCT_DIGITS | OCT_DIGITS_UNDERSCORE))
			| (BIN_PREFIX (BIN_DIGITS | BIN_DIGITS_UNDERSCORE))
		)
	);
i16Literal
	returns[std::optional<int16_t> maybe_val]
	@after {
		$maybe_val = GetIntValue<int16_t>(this, $ctx);
  }: (
		(
			(DEC_DIGITS | DEC_DIGITS_UNDERSCORE)
			| (HEX_PREFIX (HEX_DIGITS | HEX_DIGITS_UNDERSCORE))
			| (OCT_PREFIX (OCT_DIGITS | OCT_DIGITS_UNDERSCORE))
			| (BIN_PREFIX (BIN_DIGITS | BIN_DIGITS_UNDERSCORE))
		)
	);
i32Literal
	returns[std::optional<int32_t> maybe_val]:
	(
		(DEC_DIGITS | DEC_DIGITS_UNDERSCORE)
		| (HEX_PREFIX (HEX_DIGITS | HEX_DIGITS_UNDERSCORE))
		| (OCT_PREFIX (OCT_DIGITS | OCT_DIGITS_UNDERSCORE))
		| (BIN_PREFIX (BIN_DIGITS | BIN_DIGITS_UNDERSCORE))
	) {
		$maybe_val = GetIntValue<int32_t>(this, $ctx);
  };
i64Literal
	returns[std::optional<int64_t> maybe_val]:
	(
		(DEC_DIGITS | DEC_DIGITS_UNDERSCORE)
		| (HEX_PREFIX (HEX_DIGITS | HEX_DIGITS_UNDERSCORE))
		| (OCT_PREFIX (OCT_DIGITS | OCT_DIGITS_UNDERSCORE))
		| (BIN_PREFIX (BIN_DIGITS | BIN_DIGITS_UNDERSCORE))
	) {
		$maybe_val = GetIntValue<int64_t>(this, $ctx);
  };

stringLiteral
	returns[std::optional<std::string> maybe_val]:
	STRING_LITERAL
	| RAW_STRING_LITERAL;
byteStringLiteral
	returns[std::optional<std::string> maybe_val]:
	BYTE_STRING_LITERAL
	| RAW_BYTE_STRING_LITERAL;

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