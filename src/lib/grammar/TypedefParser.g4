parser grammar TypedefParser;

options {
	tokenVocab = TypedefLexer;
}

@header {
#include "symbol_table.h"
}

@parser::definitions {
#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include "parser_helpers.h"
}

@parser::members {
	td::SymbolTable symbol_table;
}

compilationUnit:
	typedefVersionDeclaration WS* moduleDeclaration? (
		WS* useDeclaration
	)* (WS* item)* WS* EOF;

item:
	maybeValuedSymbolDeclaration {
		InsertField(symbol_table, this, $maybeValuedSymbolDeclaration.ctx);
}
	| structDeclaration {
		InsertField(symbol_table, this, $structDeclaration.ctx);
};

maybeValuedSymbolDeclaration: maybeValuedSymbol WS* SEMI;

// TODO: move more of this code into helpers TODO: symbol tables at each level.
structDeclaration
	returns[
		std::optional<td::SymbolTable::Field> maybe_field]:
	(
		identifier WS* COLON WS* KW_STRUCT WS* LBRACE (
			WS* (fields += maybeValuedSymbol) WS* SEMI WS*
		)* RBRACE WS* SEMI
	) {
		auto s = std::make_shared<td::SymbolTable::Struct>();
		for (auto field : $fields) {
			if (field->maybe_field) {
				s->table.insert(*field->maybe_field);
			}
		}
		$maybe_field = std::make_pair($identifier.ctx->id, s);
	};

// ValA: i32 = 42;
maybeValuedSymbol
	returns[std::optional<td::SymbolTable::Field> maybe_field]:
	identifier WS* type_ WS* {
		$maybe_field = MakeField($identifier.ctx->id, $type_.ctx);
};

type_: primitiveType | valuedPrimitiveType;
primitiveType:
	COLON WS* (
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
		| KW_I64
	);

// TODO(dpemmons) rename to valued type? then type_ (used by struct) can be either primitiveType or
// valued(primitive?)Type

// Matches " : bool = literal ;"
valuedPrimitiveType
	returns[std::optional<td::SymbolTable::Value> maybe_val]: (
		valuedBoolFragment {$maybe_val = $valuedBoolFragment.ctx->literal->maybe_val;}
		| valuedCharFragment {$maybe_val = $valuedCharFragment.ctx->literal->maybe_val;}
		| valuedStringFragment {$maybe_val = $valuedStringFragment.ctx->literal->maybe_val;}
		| valuedF32Fragment {$maybe_val = $valuedF32Fragment.ctx->literal->maybe_val;}
		| valuedF64Fragment {$maybe_val = $valuedF64Fragment.ctx->literal->maybe_val;}
		| valuedU8Fragment {$maybe_val = $valuedU8Fragment.ctx->literal->maybe_val;}
		| valuedU16Fragment {$maybe_val = $valuedU16Fragment.ctx->literal->maybe_val;}
		| valuedU32Fragment {$maybe_val = $valuedU32Fragment.ctx->literal->maybe_val;}
		| valuedU64Fragment {$maybe_val = $valuedU64Fragment.ctx->literal->maybe_val;}
		| valuedI8Fragment {$maybe_val = $valuedI8Fragment.ctx->literal->maybe_val;}
		| valuedI16Fragment {$maybe_val = $valuedI16Fragment.ctx->literal->maybe_val;}
		| valuedI32Fragment {$maybe_val = $valuedI32Fragment.ctx->literal->maybe_val;}
		| valuedI64Fragment {$maybe_val = $valuedI64Fragment.ctx->literal->maybe_val;}
	);
valuedBoolFragment:
	(COLON WS* KW_BOOL)? WS* EQ WS* literal = boolLiteral;
valuedCharFragment:
	(COLON WS* KW_CHAR)? WS* EQ WS* literal = charLiteral;

valuedStringFragment:
	(COLON WS* KW_STRING)? WS* EQ WS* literal = stringLiteral;

valuedF32Fragment: (
		COLON WS* KW_F32 WS* EQ WS* literal = f32Literal 'f32'?
	)
	| (EQ WS* literal = f32Literal 'f32'?);
valuedF64Fragment: (
		COLON WS* KW_F64 WS* EQ WS* literal = f64Literal 'f64'?
	)
	| (EQ WS* literal = f64Literal 'f64');
valuedU8Fragment: (
		COLON WS* KW_U8 WS* EQ WS* literal = u8Literal 'u8'?
	)
	| (EQ WS* literal = u8Literal 'u8');
valuedU16Fragment: (
		COLON WS* KW_U16 WS* EQ WS* literal = u16Literal 'u16'?
	)
	| (EQ WS* literal = u16Literal 'u16');
valuedU32Fragment: (
		COLON WS* KW_U32 WS* EQ WS* literal = u32Literal 'u32'?
	)
	| (EQ WS* literal = u32Literal 'u32');
valuedU64Fragment: (
		COLON WS* KW_U64 WS* EQ WS* literal = u64Literal 'u64'?
	)
	| (EQ WS* literal = u64Literal 'u64');
valuedI8Fragment: (
		COLON WS* KW_I8 WS* EQ WS* literal = i8Literal 'i8'?
	)
	| (EQ WS* literal = i8Literal 'i8');
valuedI16Fragment: (
		COLON WS* KW_I16 WS* EQ WS* literal = i16Literal 'i16'?
	)
	| (EQ WS* literal = i16Literal 'i16');
valuedI32Fragment: (
		COLON WS* KW_I32 WS* EQ WS* literal = i32Literal 'i32'?
	)
	| (EQ WS* literal = i32Literal 'i32'?);
valuedI64Fragment: (
		COLON WS* KW_I64 WS* EQ WS* literal = i64Literal 'i64'?
	)
	| (EQ WS* literal = i64Literal 'i64');

// thing < arg2, 42 > parameterizedType: identifier LT (identifier | u64Literal)+ GT;

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
charLiteral
	returns[std::optional<char32_t> maybe_val]:
	CHAR_LITERAL {
		$maybe_val = GetCharValue(this, $ctx);
  };
f32Literal
	returns[std::optional<float> maybe_val]:
	FLOAT_LITERAL {
		$maybe_val = GetFloatValue<float>(this, $ctx);
  };
f64Literal
	returns[std::optional<double> maybe_val]:
	FLOAT_LITERAL {
		$maybe_val = GetFloatValue<double>(this, $ctx);
  };
u8Literal
	returns[std::optional<uint8_t> maybe_val]: (
		(DEC_DIGITS | DEC_DIGITS_UNDERSCORE)
		| (HEX_PREFIX (HEX_DIGITS | HEX_DIGITS_UNDERSCORE))
		| (OCT_PREFIX (OCT_DIGITS | OCT_DIGITS_UNDERSCORE))
		| (BIN_PREFIX (BIN_DIGITS | BIN_DIGITS_UNDERSCORE))
	) {
		$maybe_val = GetIntValue<uint8_t>(this, $ctx);
  };
u16Literal
	returns[std::optional<uint16_t> maybe_val]: (
		(DEC_DIGITS | DEC_DIGITS_UNDERSCORE)
		| (HEX_PREFIX (HEX_DIGITS | HEX_DIGITS_UNDERSCORE))
		| (OCT_PREFIX (OCT_DIGITS | OCT_DIGITS_UNDERSCORE))
		| (BIN_PREFIX (BIN_DIGITS | BIN_DIGITS_UNDERSCORE))
	) {
		$maybe_val = GetIntValue<uint16_t>(this, $ctx);
  };
u32Literal
	returns[std::optional<uint32_t> maybe_val]: (
		(DEC_DIGITS | DEC_DIGITS_UNDERSCORE)
		| (HEX_PREFIX (HEX_DIGITS | HEX_DIGITS_UNDERSCORE))
		| (OCT_PREFIX (OCT_DIGITS | OCT_DIGITS_UNDERSCORE))
		| (BIN_PREFIX (BIN_DIGITS | BIN_DIGITS_UNDERSCORE))
	) {
		$maybe_val = GetIntValue<uint32_t>(this, $ctx);
  };
u64Literal
	returns[std::optional<uint64_t> maybe_val]: (
		(DEC_DIGITS | DEC_DIGITS_UNDERSCORE)
		| (HEX_PREFIX (HEX_DIGITS | HEX_DIGITS_UNDERSCORE))
		| (OCT_PREFIX (OCT_DIGITS | OCT_DIGITS_UNDERSCORE))
		| (BIN_PREFIX (BIN_DIGITS | BIN_DIGITS_UNDERSCORE))
	) {
		$maybe_val = GetIntValue<uint64_t>(this, $ctx);
  };
i8Literal
	returns[std::optional<int8_t> maybe_val]: (
		(DEC_DIGITS | DEC_DIGITS_UNDERSCORE)
		| (HEX_PREFIX (HEX_DIGITS | HEX_DIGITS_UNDERSCORE))
		| (OCT_PREFIX (OCT_DIGITS | OCT_DIGITS_UNDERSCORE))
		| (BIN_PREFIX (BIN_DIGITS | BIN_DIGITS_UNDERSCORE))
	) {
		$maybe_val = GetIntValue<int8_t>(this, $ctx);
  };
i16Literal
	returns[std::optional<int16_t> maybe_val]: (
		(DEC_DIGITS | DEC_DIGITS_UNDERSCORE)
		| (HEX_PREFIX (HEX_DIGITS | HEX_DIGITS_UNDERSCORE))
		| (OCT_PREFIX (OCT_DIGITS | OCT_DIGITS_UNDERSCORE))
		| (BIN_PREFIX (BIN_DIGITS | BIN_DIGITS_UNDERSCORE))
	) {
		$maybe_val = GetIntValue<int16_t>(this, $ctx);
  };
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
	STRING_LITERAL {
		$maybe_val = GetStringValue(this, $STRING_LITERAL);
	}
	| RAW_STRING_LITERAL {
		$maybe_val = GetRawString(this, $RAW_STRING_LITERAL);
	};

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