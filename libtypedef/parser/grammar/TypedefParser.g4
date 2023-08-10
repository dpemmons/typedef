parser grammar TypedefParser;

options {
	tokenVocab = TypedefLexer;
}

@header {
#include "libtypedef/parser/symbol_table.h"
#include "libtypedef/parser/table.h"
}

@parser::definitions {
#include <cstdint>
#include <filesystem>  // for std::filesystem::path
#include <memory>
#include <optional>
#include <string>
#include "libtypedef/parser/parser_helpers.h"
#include "libtypedef/parser/symbol_path.h"
}

compilationUnit
	returns[
		td::SymbolTable symbol_table,
		std::string version,
		std::filesystem::path module
	]:
	WS* typedefVersionDeclaration { $version = $typedefVersionDeclaration.ctx->version; } WS* (
		moduleDeclaration { $module = $moduleDeclaration.ctx->module; }
	)? (WS* useDeclaration)* (
		WS* typeDeclaration {
		TryInsert($symbol_table, $typeDeclaration.ctx, this);
	}
	)* WS* EOF;

maybeValuedSymbolDeclaration: maybeValuedSymbol WS* SEMI;

typeDeclaration
	returns[std::optional<td::SymbolTable::Symbol> maybe_symbol]:
	(
		structDeclaration { $maybe_symbol = $structDeclaration.ctx->maybe_symbol; }
		| variantDeclaration { $maybe_symbol = $variantDeclaration.ctx->maybe_symbol; }
		| vectorDeclaration { $maybe_symbol = $vectorDeclaration.ctx->maybe_symbol; }
		| mapDeclaration { $maybe_symbol = $mapDeclaration.ctx->maybe_symbol; }
	) WS* SEMI;

// variant SomeVariant { optionA: i32; optionB: str; }
structDeclaration
	returns[std::optional<td::SymbolTable::Symbol> maybe_symbol]
	locals[std::shared_ptr<td::Struct> s]
	@init {
		$s = std::make_shared<td::Struct>();
	}:
	KW_STRUCT WS* identifier WS* LBRACE WS* (
		(
			maybeValuedSymbol {
				TryInsertSymbol($s, this, $maybeValuedSymbol.ctx);
			}
			| structDeclaration {
				TryInsertNested($s, this, $structDeclaration.ctx);
			}
			| variantDeclaration {
				TryInsertNested($s, this, $variantDeclaration.ctx);
			}
			| vectorDeclaration {
				TryInsertNested($s, this, $vectorDeclaration.ctx);
			}
			| mapDeclaration {
				TryInsertNested($s, this, $mapDeclaration.ctx);
			}
		) WS* SEMI WS*
	)* WS* RBRACE {
		$maybe_symbol = std::make_pair(
			td::Identifier::TypeIdentifier($identifier.ctx->id), $s);
	};

// variant SomeVariant { optionA: i32; optionB: str; }
variantDeclaration
	returns[std::optional<td::SymbolTable::Symbol> maybe_symbol]
	locals[std::shared_ptr<td::Variant> v]
	@init {
		$v = std::make_shared<td::Variant>();
	}:
	KW_VARIANT WS* identifier WS* LBRACE (
		WS* (
			unvaluedSymbol {
				TryInsertSymbol($v, this, $unvaluedSymbol.ctx);
			}
			| structDeclaration {
				TryInsertNested($v, this, $structDeclaration.ctx);
			}
			| variantDeclaration {
				TryInsertNested($v, this, $variantDeclaration.ctx);
			}
			| vectorDeclaration {
				TryInsertNested($v, this, $vectorDeclaration.ctx);
			}
			| mapDeclaration {
				TryInsertNested($v, this, $mapDeclaration.ctx);
			}
		) WS* SEMI WS*
	)* RBRACE {
		$maybe_symbol = std::make_pair(
			td::Identifier::TypeIdentifier($identifier.ctx->id), $v);
	};

// vector SomeVector<i32>
vectorDeclaration
	returns[std::optional<td::SymbolTable::Symbol> maybe_symbol]:
	KW_VECTOR WS* identifier WS* LT WS* val = unvaluedType WS* GT {
		if ($unvaluedType.ctx->maybe_val) {
			$maybe_symbol = std::make_pair(
				td::Identifier::TypeIdentifier($identifier.ctx->id),
			  std::make_shared<td::Vector>(*$val.ctx->maybe_val));
		}
	};

// map SomeMap<str, StructA>
mapDeclaration
	returns[std::optional<td::SymbolTable::Symbol> maybe_symbol]:
	KW_MAP WS* identifier WS* LT WS* key = primitiveType WS* COMMA WS* val = unvaluedType WS* GT {
		// Map Declaration
		if ($key.ctx->maybe_val && $val.ctx->maybe_val) {
			$maybe_symbol = std::make_pair(
				td::Identifier::TypeIdentifier($identifier.ctx->id),
			  std::make_shared<td::Map>(
					*$key.ctx->maybe_val, *$val.ctx->maybe_val));
		}
	};

// ValA: i32 = 42;
maybeValuedSymbol
	returns[std::optional<td::SymbolTable::Symbol> maybe_symbol]:
	(
		identifier WS* maybeValuedType WS* {
		if ($maybeValuedType.ctx->maybe_val) {
			$maybe_symbol = std::make_pair(
				td::Identifier::ValueIdentifier($identifier.ctx->id),
				*$maybeValuedType.ctx->maybe_val);
		}
	}
	)
	| unvaluedSymbol {$maybe_symbol = $unvaluedSymbol.ctx->maybe_symbol; };

// ValA: i32;
unvaluedSymbol
	returns[std::optional<td::SymbolTable::Symbol> maybe_symbol]:
	inlineStruct {$maybe_symbol = $inlineStruct.ctx->maybe_symbol; }
	| inlineVariant {$maybe_symbol = $inlineVariant.ctx->maybe_symbol; }
	| inlineVector {$maybe_symbol = $inlineVector.ctx->maybe_symbol; }
	| inlineMap {$maybe_symbol = $inlineMap.ctx->maybe_symbol; }
	| (
		identifier WS* COLON WS* unvaluedType (
			WS* optional = QUESTION
		)? {
		if ($unvaluedType.ctx->maybe_val) {
			$maybe_symbol = std::make_pair(
				td::Identifier::ValueIdentifier($identifier.ctx->id),
				*$unvaluedType.ctx->maybe_val);
		}
	}
	);

inlineStruct
	returns[std::optional<td::SymbolTable::Symbol> maybe_symbol]
	locals[std::shared_ptr<td::Struct> s]
	@init {
		$s = std::make_shared<td::Struct>();
	}:
	identifier WS* COLON WS* KW_STRUCT WS* (
		optional = QUESTION WS*
	)? LBRACE WS* (
		maybeValuedSymbol {
				TryInsertSymbol($s, this, $maybeValuedSymbol.ctx);
			} WS* SEMI WS*
	)* WS* RBRACE {
		$maybe_symbol = std::make_pair(
			td::Identifier::ValueIdentifier($identifier.ctx->id), $s);
	};

inlineVariant
	returns[std::optional<td::SymbolTable::Symbol> maybe_symbol]
	locals[std::shared_ptr<td::Variant> v]
	@init {
		$v = std::make_shared<td::Variant>();
	}:
	identifier WS* COLON WS* KW_VARIANT WS* (
		WS* optional = QUESTION
	)? LBRACE (
		WS* unvaluedSymbol {
				TryInsertSymbol($v, this, $unvaluedSymbol.ctx);
			} WS* SEMI WS*
	)* RBRACE {
		$maybe_symbol = std::make_pair(
			td::Identifier::ValueIdentifier($identifier.ctx->id), $v);
	};

inlineVector
	returns[std::optional<td::SymbolTable::Symbol> maybe_symbol]:
	identifier WS* COLON WS* KW_VECTOR WS* LT WS* val = unvaluedType WS* GT (
		WS* optional = QUESTION
	)? {
		if ($unvaluedType.ctx->maybe_val) {
			$maybe_symbol = std::make_pair(
				td::Identifier::ValueIdentifier($identifier.ctx->id),
			  std::make_shared<td::Vector>(*$val.ctx->maybe_val));
		}
	};

inlineMap
	returns[std::optional<td::SymbolTable::Symbol> maybe_symbol]:
	identifier WS* COLON WS* KW_MAP WS* LT WS* key = primitiveType WS* COMMA WS* val = unvaluedType
		WS* GT (WS* optional = QUESTION)? {
		// Map Declaration
		if ($key.ctx->maybe_val && $val.ctx->maybe_val) {
			$maybe_symbol = std::make_pair(
				td::Identifier::ValueIdentifier($identifier.ctx->id),
			  std::make_shared<td::Map>(
					*$key.ctx->maybe_val, *$val.ctx->maybe_val));
		}
	};

maybeValuedType
	returns[std::optional<td::SymbolTable::Value> maybe_val]:
	valuedType {$maybe_val = $valuedType.ctx->maybe_val;}
	| (COLON WS* unvaluedType) {$maybe_val = $unvaluedType.ctx->maybe_val;};

valuedType
	returns[std::optional<td::SymbolTable::Value> maybe_val]:
	valuedPrimitiveType {$maybe_val = $valuedPrimitiveType.ctx->maybe_val;}
	| valuedTemplateStringType {$maybe_val = $valuedTemplateStringType.ctx->maybe_val;};

unvaluedType
	returns[std::optional<td::SymbolTable::Value> maybe_val]:
	(
		primitiveType {$maybe_val = $primitiveType.ctx->maybe_val;}
		| symbolReference {$maybe_val = $symbolReference.ctx->maybe_symref; }
	);

symbolReference
	returns[std::optional<td::SymbolRef> maybe_symref]:
	identifier {$maybe_symref = td::SymbolRef($identifier.ctx->id); };

primitiveType
	returns[td::PrimitiveType primitive_type]:
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

valuedTemplateStringType
	returns[std::optional<td::SymbolTable::Value> maybe_val]
	locals[std::shared_ptr<td::TmplStr> s]
	@init {
		$s = std::make_shared<td::TmplStr>();
	}:
	COLON WS* KW_TEMPLATESTRING WS* LT WS* (
		unvaluedSymbol {
				TryInsertArgSymbol($s, this, $unvaluedSymbol.ctx);
			} (
			WS* COMMA WS* unvaluedSymbol {
				TryInsertArgSymbol($s, this, $unvaluedSymbol.ctx);
			}
		)*
	) WS* GT WS* EQ WS* stringLiteral {
	  $s->str = $stringLiteral.ctx->maybe_val;
		$maybe_val = $s;
	};

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

typedefVersionDeclaration
	returns[std::shared_ptr<std::string> version]:
	KW_TYPEDEF WS* EQ WS* identifier WS* SEMI;

moduleDeclaration
	returns[std::shared_ptr<td::SymbolPath> path]:
	KW_MODULE WS+ simplePath WS* SEMI;

// TODO use declarations.
useDeclaration: 'use' WS+ useTree WS* ';';
useTree: (simplePath? '::')? (
		'*'
		| '{' ( useTree (',' useTree)* ','?)? '}'
	)
	| simplePath ('as' identifier)?;

simplePath
	returns[std::shared_ptr<td::SymbolPath> path]:
	(leading_pathsep = PATHSEP)? identifier (PATHSEP identifier)*;

boolLiteral
	returns[std::optional<bool> maybe_val]: KW_TRUE | KW_FALSE;
charLiteral
	returns[std::optional<char32_t> maybe_val]: CHAR_LITERAL;
f32Literal
	returns[std::optional<float> maybe_val]: FLOAT_LITERAL;
f64Literal
	returns[std::optional<double> maybe_val]: FLOAT_LITERAL;
u8Literal
	returns[std::optional<uint8_t> maybe_val]: (
		(MINUS? (DEC_DIGITS | DEC_DIGITS_UNDERSCORE))
		| (HEX_PREFIX (HEX_DIGITS | HEX_DIGITS_UNDERSCORE))
		| (OCT_PREFIX (OCT_DIGITS | OCT_DIGITS_UNDERSCORE))
		| (BIN_PREFIX (BIN_DIGITS | BIN_DIGITS_UNDERSCORE))
	);
u16Literal
	returns[std::optional<uint16_t> maybe_val]: (
		(MINUS? (DEC_DIGITS | DEC_DIGITS_UNDERSCORE))
		| (HEX_PREFIX (HEX_DIGITS | HEX_DIGITS_UNDERSCORE))
		| (OCT_PREFIX (OCT_DIGITS | OCT_DIGITS_UNDERSCORE))
		| (BIN_PREFIX (BIN_DIGITS | BIN_DIGITS_UNDERSCORE))
	);
u32Literal
	returns[std::optional<uint32_t> maybe_val]: (
		(MINUS? (DEC_DIGITS | DEC_DIGITS_UNDERSCORE))
		| (HEX_PREFIX (HEX_DIGITS | HEX_DIGITS_UNDERSCORE))
		| (OCT_PREFIX (OCT_DIGITS | OCT_DIGITS_UNDERSCORE))
		| (BIN_PREFIX (BIN_DIGITS | BIN_DIGITS_UNDERSCORE))
	);
u64Literal
	returns[std::optional<uint64_t> maybe_val]: (
		(MINUS? (DEC_DIGITS | DEC_DIGITS_UNDERSCORE))
		| (HEX_PREFIX (HEX_DIGITS | HEX_DIGITS_UNDERSCORE))
		| (OCT_PREFIX (OCT_DIGITS | OCT_DIGITS_UNDERSCORE))
		| (BIN_PREFIX (BIN_DIGITS | BIN_DIGITS_UNDERSCORE))
	);
i8Literal
	returns[std::optional<int8_t> maybe_val]: (
		(MINUS? (DEC_DIGITS | DEC_DIGITS_UNDERSCORE))
		| (HEX_PREFIX (HEX_DIGITS | HEX_DIGITS_UNDERSCORE))
		| (OCT_PREFIX (OCT_DIGITS | OCT_DIGITS_UNDERSCORE))
		| (BIN_PREFIX (BIN_DIGITS | BIN_DIGITS_UNDERSCORE))
	);
i16Literal
	returns[std::optional<int16_t> maybe_val]: (
		(MINUS? (DEC_DIGITS | DEC_DIGITS_UNDERSCORE))
		| (HEX_PREFIX (HEX_DIGITS | HEX_DIGITS_UNDERSCORE))
		| (OCT_PREFIX (OCT_DIGITS | OCT_DIGITS_UNDERSCORE))
		| (BIN_PREFIX (BIN_DIGITS | BIN_DIGITS_UNDERSCORE))
	);
i32Literal
	returns[std::optional<int32_t> maybe_val]:
	(
		(MINUS? (DEC_DIGITS | DEC_DIGITS_UNDERSCORE))
		| (HEX_PREFIX (HEX_DIGITS | HEX_DIGITS_UNDERSCORE))
		| (OCT_PREFIX (OCT_DIGITS | OCT_DIGITS_UNDERSCORE))
		| (BIN_PREFIX (BIN_DIGITS | BIN_DIGITS_UNDERSCORE))
	);
i64Literal
	returns[std::optional<int64_t> maybe_val]:
	(
		(MINUS? (DEC_DIGITS | DEC_DIGITS_UNDERSCORE))
		| (HEX_PREFIX (HEX_DIGITS | HEX_DIGITS_UNDERSCORE))
		| (OCT_PREFIX (OCT_DIGITS | OCT_DIGITS_UNDERSCORE))
		| (BIN_PREFIX (BIN_DIGITS | BIN_DIGITS_UNDERSCORE))
	);

stringLiteral
	returns[std::shared_ptr<std::string> str]:
	STRING_LITERAL
	| RAW_STRING_LITERAL;

identifier
	returns[std::shared_ptr<std::string> id]:
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