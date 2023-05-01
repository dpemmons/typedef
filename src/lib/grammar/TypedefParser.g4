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
	td::SymbolTable global_symbol_table;
}

compilationUnit:
	typedefVersionDeclaration WS* moduleDeclaration? (
		WS* useDeclaration
	)* (WS* item)* WS* EOF;

item:
	maybeValuedSymbolDeclaration {
		InsertField(global_symbol_table, this, $maybeValuedSymbolDeclaration.ctx);
}
	| structDeclaration {
		InsertField(global_symbol_table, this, $structDeclaration.ctx);
}
	| variantDeclaration {
		InsertField(global_symbol_table, this, $variantDeclaration.ctx);
};

maybeValuedSymbolDeclaration: maybeValuedSymbol WS* SEMI;

variantDeclaration
	returns[
		std::optional<td::SymbolTable::Symbol> maybe_symbol,
		std::shared_ptr<td::Variant> v
	]
	@init {
		$v = std::make_shared<td::Variant>();
	}:
	(
		identifier WS* COLON WS* KW_VARIANT WS* LBRACE (
			WS* unvaluedSymbol {
				TryInsertSymbol($v, this, $unvaluedSymbol.ctx);
			} WS* SEMI WS*
		)* RBRACE WS* SEMI
	) {
		$maybe_symbol = std::make_pair($identifier.ctx->id, $v);
	};

structDeclaration
	returns[
		std::optional<td::SymbolTable::Symbol> maybe_symbol,
		std::shared_ptr<td::Struct> s
	]
	@init {
		$s = std::make_shared<td::Struct>();
	}:
	(
		identifier WS* COLON WS* KW_STRUCT WS* LBRACE (
			WS* maybeValuedSymbol {
				TryInsertSymbol($s, this, $maybeValuedSymbol.ctx);
			} WS* SEMI WS*
		)* RBRACE WS* SEMI
	) {
		$maybe_symbol = std::make_pair($identifier.ctx->id, $s);
	};

// ValA: i32 = 42;
maybeValuedSymbol
	returns[std::optional<td::SymbolTable::Symbol> maybe_symbol]:
	identifier WS* maybeValuedType WS* {
		if ($maybeValuedType.ctx->maybe_val) {
			$maybe_symbol = std::make_pair($identifier.ctx->id, *$maybeValuedType.ctx->maybe_val);
		}
};

// ValA: i32;
unvaluedSymbol
	returns[std::optional<td::SymbolTable::Symbol> maybe_symbol]:
	identifier WS* COLON WS* unvaluedType WS* {
		if ($unvaluedType.ctx->maybe_val) {
			$maybe_symbol = std::make_pair($identifier.ctx->id, *$unvaluedType.ctx->maybe_val);
		}
};

maybeValuedType
	returns[std::optional<td::SymbolTable::Value> maybe_val]:
	valuedType {$maybe_val = $valuedType.ctx->maybe_val;}
	| (COLON WS* unvaluedType) {$maybe_val = $unvaluedType.ctx->maybe_val;};

valuedType
	returns[std::optional<td::SymbolTable::Value> maybe_val]:
	valuedPrimitiveType {$maybe_val = $valuedPrimitiveType.ctx->maybe_val;};

unvaluedType
	returns[std::optional<td::SymbolTable::Value> maybe_val]:
	(
		primitiveType {$maybe_val = $primitiveType.ctx->maybe_val;}
		| vectorType {$maybe_val = $vectorType.ctx->maybe_val;}
		| mapType {$maybe_val = $mapType.ctx->maybe_val;}
		| identifier {$maybe_val =
		CheckIdentifierExists(this, global_symbol_table, $identifier.ctx);}
	);
vectorType
	returns[std::optional<td::SymbolTable::Value> maybe_val]:
	KW_VECTOR WS* LT WS* unvaluedType WS* GT {
		if ($unvaluedType.ctx->maybe_val) {
			$maybe_val = std::make_shared<td::Vector>(*$unvaluedType.ctx->maybe_val);
		}
	};
mapType
	returns[std::optional<td::SymbolTable::Value> maybe_val]:
	KW_MAP WS* LT WS* primitiveType WS* COMMA WS* unvaluedType WS* GT {
		if ($primitiveType.ctx->maybe_val && $unvaluedType.ctx->maybe_val) {
			$maybe_val = std::make_shared<td::Map>(*$primitiveType.ctx->maybe_val, *$unvaluedType.ctx->maybe_val);
		}
	};

primitiveType
	returns[std::optional<td::SymbolTable::Value> maybe_val]:
	KW_BOOL { $maybe_val = std::optional<bool>(); }
	| KW_CHAR { $maybe_val = std::optional<char32_t>(); }
	| KW_STRING { $maybe_val = std::optional<std::string>(); }
	| KW_F32 { $maybe_val = std::optional<float>(); }
	| KW_F64 { $maybe_val = std::optional<double>(); }
	| KW_U8 { $maybe_val = std::optional<uint8_t>(); }
	| KW_U16 { $maybe_val = std::optional<uint16_t>(); }
	| KW_U32 { $maybe_val = std::optional<uint32_t>(); }
	| KW_U64 { $maybe_val = std::optional<uint64_t>(); }
	| KW_I8 { $maybe_val = std::optional<int8_t>(); }
	| KW_I16 { $maybe_val = std::optional<int16_t>(); }
	| KW_I32 { $maybe_val = std::optional<int32_t>(); }
	| KW_I64 { $maybe_val = std::optional<int64_t>(); };

// Matches " : bool = literal"
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
		(MINUS? (DEC_DIGITS | DEC_DIGITS_UNDERSCORE))
		| (HEX_PREFIX (HEX_DIGITS | HEX_DIGITS_UNDERSCORE))
		| (OCT_PREFIX (OCT_DIGITS | OCT_DIGITS_UNDERSCORE))
		| (BIN_PREFIX (BIN_DIGITS | BIN_DIGITS_UNDERSCORE))
	) {
		$maybe_val = GetIntValue<uint8_t>(this, $ctx);
  };
u16Literal
	returns[std::optional<uint16_t> maybe_val]: (
		(MINUS? (DEC_DIGITS | DEC_DIGITS_UNDERSCORE))
		| (HEX_PREFIX (HEX_DIGITS | HEX_DIGITS_UNDERSCORE))
		| (OCT_PREFIX (OCT_DIGITS | OCT_DIGITS_UNDERSCORE))
		| (BIN_PREFIX (BIN_DIGITS | BIN_DIGITS_UNDERSCORE))
	) {
		$maybe_val = GetIntValue<uint16_t>(this, $ctx);
  };
u32Literal
	returns[std::optional<uint32_t> maybe_val]: (
		(MINUS? (DEC_DIGITS | DEC_DIGITS_UNDERSCORE))
		| (HEX_PREFIX (HEX_DIGITS | HEX_DIGITS_UNDERSCORE))
		| (OCT_PREFIX (OCT_DIGITS | OCT_DIGITS_UNDERSCORE))
		| (BIN_PREFIX (BIN_DIGITS | BIN_DIGITS_UNDERSCORE))
	) {
		$maybe_val = GetIntValue<uint32_t>(this, $ctx);
  };
u64Literal
	returns[std::optional<uint64_t> maybe_val]: (
		(MINUS? (DEC_DIGITS | DEC_DIGITS_UNDERSCORE))
		| (HEX_PREFIX (HEX_DIGITS | HEX_DIGITS_UNDERSCORE))
		| (OCT_PREFIX (OCT_DIGITS | OCT_DIGITS_UNDERSCORE))
		| (BIN_PREFIX (BIN_DIGITS | BIN_DIGITS_UNDERSCORE))
	) {
		$maybe_val = GetIntValue<uint64_t>(this, $ctx);
  };
i8Literal
	returns[std::optional<int8_t> maybe_val]: (
		(MINUS? (DEC_DIGITS | DEC_DIGITS_UNDERSCORE))
		| (HEX_PREFIX (HEX_DIGITS | HEX_DIGITS_UNDERSCORE))
		| (OCT_PREFIX (OCT_DIGITS | OCT_DIGITS_UNDERSCORE))
		| (BIN_PREFIX (BIN_DIGITS | BIN_DIGITS_UNDERSCORE))
	) {
		$maybe_val = GetIntValue<int8_t>(this, $ctx);
  };
i16Literal
	returns[std::optional<int16_t> maybe_val]: (
		(MINUS? (DEC_DIGITS | DEC_DIGITS_UNDERSCORE))
		| (HEX_PREFIX (HEX_DIGITS | HEX_DIGITS_UNDERSCORE))
		| (OCT_PREFIX (OCT_DIGITS | OCT_DIGITS_UNDERSCORE))
		| (BIN_PREFIX (BIN_DIGITS | BIN_DIGITS_UNDERSCORE))
	) {
		$maybe_val = GetIntValue<int16_t>(this, $ctx);
  };
i32Literal
	returns[std::optional<int32_t> maybe_val]:
	(
		(MINUS? (DEC_DIGITS | DEC_DIGITS_UNDERSCORE))
		| (HEX_PREFIX (HEX_DIGITS | HEX_DIGITS_UNDERSCORE))
		| (OCT_PREFIX (OCT_DIGITS | OCT_DIGITS_UNDERSCORE))
		| (BIN_PREFIX (BIN_DIGITS | BIN_DIGITS_UNDERSCORE))
	) {
		$maybe_val = GetIntValue<int32_t>(this, $ctx);
  };
i64Literal
	returns[std::optional<int64_t> maybe_val]:
	(
		(MINUS? (DEC_DIGITS | DEC_DIGITS_UNDERSCORE))
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