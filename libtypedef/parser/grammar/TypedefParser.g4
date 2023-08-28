parser grammar TypedefParser;

options {
	tokenVocab = TypedefLexer;
}

@header {
#include "libtypedef/parser/symbol_path.h"
#include "libtypedef/parser/table.h"
}

@parser::definitions {
#include <cstdint>
#include <memory>
#include <optional>
#include <string>
}

compilationUnit
	returns[
		std::shared_ptr<std::string> version,
		std::shared_ptr<td::table::Module> mod
	]:
	typedefVersionDeclaration (moduleDeclaration)? (
		useDeclaration
	)* (typeDeclaration SEMI)* EOF;

// variant SomeVariant { optionA: i32; optionB: str; }
structDeclaration
	returns[std::shared_ptr<td::table::Struct> st]:
	KW_STRUCT identifier LBRACE (structMember SEMI)* RBRACE;

// variant SomeVariant { optionA: i32; optionB: str; }
variantDeclaration
	returns[std::shared_ptr<td::table::Variant> var]:
	KW_VARIANT identifier LBRACE (structMember SEMI)* RBRACE;

// vector SomeVector<i32>
vectorDeclaration
	returns[std::shared_ptr<td::table::Vector> vec]:
	KW_VECTOR symbolName = identifier LT typeParameter GT;

// map SomeMap<str, StructA>
mapDeclaration
	returns[std::shared_ptr<td::table::Map> map]:
	KW_MAP symbolName = identifier LT key = typeParameter COMMA val = typeParameter GT;

// template DoIt(a: i32, b: str) "{a} {b}";
templateDefinition:
	KW_TEMPLATE symbolName = identifier '(' (
		identifier ':' typeParameter (
			COMMA identifier ':' typeParameter
		)*
	) ')' ('=>' KW_STRING)? stringLiteral;

typeParameter
	returns[std::shared_ptr<td::table::TypeParameter> type_param]:
	primitiveTypeIdentifier
	| identifier;

structMember
	returns[std::shared_ptr<td::table::StructMember> mem]:
	typeDeclaration
	| fieldDeclaration;

typeDeclaration
	returns[std::shared_ptr<td::table::TypeDeclaration> type_decl]:
	(
		structDeclaration
		| variantDeclaration
		| vectorDeclaration
		| mapDeclaration
	);

fieldDeclaration
	returns[std::shared_ptr<td::table::FieldDeclaration> field_decl]:
	primitiveMemberDeclaration
	| symrefMemberDeclaration
	| inlineStructDeclaration
	| inlineVariantDeclaration
	| inlineVectorDeclaration
	| inlineMapDeclaration;

primitiveMemberDeclaration
	returns[std::shared_ptr<td::table::FieldDeclaration> field_decl]:
	impliedTypePrimitiveMemberDeclaration
	| (
		identifier COLON (
			primitiveTypeIdentifier EQ (
				floatLiteral
				| intLiteral
			)
			| (
				primitiveTypeIdentifier (
					EQ explicitPrimitiveLiteral
				)?
			)
		)
	);

// TODO: move symref identifier into its own rule so symvol resolution only has to happen in one
// place during second pass? Or should vector/map value types have a symref type they share?

symrefMemberDeclaration
	returns[std::shared_ptr<td::table::FieldDeclaration> field_decl]:
	fieldIdentifier = identifier COLON symrefIdentifier = identifier;

impliedTypePrimitiveMemberDeclaration
	returns[std::shared_ptr<td::table::FieldDeclaration> field_decl]:
	identifier EQ (
		floatLiteral
		| intLiteral
		| explicitPrimitiveLiteral
	);

inlineStructDeclaration
	returns[std::shared_ptr<td::table::FieldDeclaration> field_decl]:
	identifier COLON KW_STRUCT LBRACE (structMember SEMI)* RBRACE;

inlineVariantDeclaration
	returns[std::shared_ptr<td::table::FieldDeclaration> field_decl]:
	identifier COLON KW_VARIANT LBRACE (structMember SEMI)* RBRACE;

inlineVectorDeclaration
	returns[std::shared_ptr<td::table::FieldDeclaration> field_decl]:
	identifier COLON KW_VECTOR LT typeParameter GT;

inlineMapDeclaration
	returns[std::shared_ptr<td::table::FieldDeclaration> field_decl]:
	identifier COLON KW_MAP LT key = typeParameter COMMA val = typeParameter GT;

// TODO probably get rid of valuedPrimitiveType, etc. and just do primitive type resolution in a
// separate pass?

typedefVersionDeclaration
	returns[std::shared_ptr<std::string> version]:
	KW_TYPEDEF EQ identifier SEMI;

moduleDeclaration
	returns[std::shared_ptr<td::SymbolPath> path]:
	KW_MODULE simplePath SEMI;

// TODO use declarations.
useDeclaration: 'use' useTree ';';
useTree: (simplePath? '::')? (
		'*'
		| '{' ( useTree (',' useTree)* ','?)? '}'
	)
	| simplePath ('as' identifier)?;

simplePath
	returns[std::shared_ptr<td::SymbolPath> path]:
	(leading_pathsep = PATHSEP)? identifier (PATHSEP identifier)*;

explicitPrimitiveLiteral
	returns[td::table::PrimitiveType type, td::table::PrimitiveValue val]:
	boolLiteral
	| charLiteral
	| stringLiteral
	| f32Literal
	| f64Literal
	| u8Literal
	| u16Literal
	| u32Literal
	| u64Literal
	| i8Literal
	| i16Literal
	| i32Literal
	| i64Literal;

boolLiteral
	returns[bool val]: KW_TRUE | KW_FALSE;
charLiteral
	returns[char32_t val]: CHAR_LITERAL;
stringLiteral
	returns[std::shared_ptr<std::string> val]:
	STRING_LITERAL
	| RAW_STRING_LITERAL;
f32Literal
	returns[float val]: floatLiteral 'f32';
f64Literal
	returns[double val]: floatLiteral 'f64';
u8Literal
	returns[uint8_t val]: intLiteral 'u8';
u16Literal
	returns[uint16_t val]: intLiteral 'u16';
u32Literal
	returns[uint32_t val]: intLiteral 'u32';
u64Literal
	returns[uint64_t val]: intLiteral 'u64';
i8Literal
	returns[int8_t val]: intLiteral 'i8';
i16Literal
	returns[int16_t val]: intLiteral 'i16';
i32Literal
	returns[int32_t val]: intLiteral 'i32';
i64Literal
	returns[int64_t val]: intLiteral 'i64';

floatLiteral: FLOAT_LITERAL;
intLiteral:
	(MINUS? (DEC_DIGITS | DEC_DIGITS_UNDERSCORE))
	| (HEX_PREFIX (HEX_DIGITS | HEX_DIGITS_UNDERSCORE))
	| (OCT_PREFIX (OCT_DIGITS | OCT_DIGITS_UNDERSCORE))
	| (BIN_PREFIX (BIN_DIGITS | BIN_DIGITS_UNDERSCORE));

identifier
	returns[std::shared_ptr<std::string> id]:
	nki = NON_KEYWORD_IDENTIFIER
	| RAW_ESCAPE nki = NON_KEYWORD_IDENTIFIER;

primitiveTypeIdentifier
	returns[td::table::PrimitiveType primitive_type]:
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