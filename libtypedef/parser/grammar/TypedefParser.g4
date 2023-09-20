parser grammar TypedefParser;

options {
	tokenVocab = TypedefLexer;
}

@header {
#include "libtypedef/parser/gramamr_types.h"
}

@parser::definitions {
#include <cstdint>
#include <memory>
#include <optional>
#include <variant>
#include <string>
#include "libtypedef/parser/literals.h"
}

compilationUnit:
	typedefVersionDeclaration moduleDeclaration (useDeclaration)* (
		typeDefinition
		| tmplDefinition
	)* EOF;

typedefVersionDeclaration: 'typedef' EQ identifier ';';
moduleDeclaration: 'module' symbolPath ';';

// struct|variant SomeVariant { optionA: i32; optionB: str; }
typeDefinition: (KW_STRUCT | KW_VARIANT) type_identifier = identifier? (
		LT (type_parameter = identifier COMMA)+ GT
	)? '{' fieldBlock '}' ';'?;

fieldBlock: ( typeDefinition | (fieldDefinition ';'))*;

fieldDefinition:
	field_identifier = identifier ':' (
		typeAnnotation
		| typeDefinition
	) ('=' primitiveLiteral)?;

typeAnnotation:
	typeIdentifier (LT typeAnnotation (COMMA typeAnnotation)* GT)?;

typeIdentifier:
	primitiveTypeIdentifier
	| KW_VECTOR
	| KW_MAP
	| userType;
userType
	returns[TypeDefinitionContext* type_definition]
	@init {$type_definition = nullptr;}: identifier;

// template DoIt(a: i32, b: str) "{a} {b}";
tmplDefinition:
	KW_TEMPLATE identifier LPAREN (
		functionParameter (COMMA functionParameter)*
	) RPAREN tmplBlock;

tmplBlock: START_TEMPLATE tmplItem* END_TEMPLATE;
tmplItem:
	tmplText
	| (TMPL_EXPR_OPEN tmplExpression TMPL_EXPR_CLOSE)
	| tmplIfBlock
	| tmplForBlock;

tmplText
	returns[std::string text]
	@after {$text = $ctx->txt->getText();}: txt = TMPL_TEXT;

tmplExpression: tmplFunctionCall | tmplStringExpression;
tmplFunctionCall:
	tmplIdentifier TMPL_LPAREN tmplValueReferencePath? (
		tmplValueReferencePath TMPL_COMMA
	)* TMPL_RPAREN;
tmplStringExpression: tmplValueReferencePath;

tmplIfBlock:
	tmplIfSubBlock //
	tmplElIfSubBlock* //
	tmplElseSubBlock? //
	(TMPL_EXPR_OPEN TMPL_KW_CLOSEIF TMPL_EXPR_CLOSE);
tmplIfSubBlock: (
		TMPL_EXPR_OPEN TMPL_KW_IF tmplExpression TMPL_EXPR_CLOSE
	) //
	tmplItem*; //
tmplElIfSubBlock:
	(
		TMPL_EXPR_OPEN TMPL_KW_ELIF tmplExpression TMPL_EXPR_CLOSE
	) //
	tmplItem*;
tmplElseSubBlock:
	TMPL_EXPR_OPEN TMPL_KW_ELSE TMPL_EXPR_CLOSE //
	tmplItem*;

// <for fo in bar> </for>
tmplForBlock:
	(
		TMPL_EXPR_OPEN TMPL_KW_FOR //
		tmplBindingVariable (TMPL_COMMA tmplBindingVariable)? //
		TMPL_KW_IN collection = tmplValueReferencePath TMPL_EXPR_CLOSE
	) //
	tmplItem* //
	(TMPL_EXPR_OPEN TMPL_KW_CLOSE_FOR TMPL_EXPR_CLOSE); //

tmplValueReferencePath
	returns[bool first_pass_visited, //
					// One or the other.
					TypeAnnotationContext* leaf_annotation, //
					TypeDefinitionContext* leaf_definition] //
	@init {	$first_pass_visited = false; //
					$leaf_annotation = nullptr; //
					$leaf_definition = nullptr;}: //
	tmplValueReference (TMPL_DOT tmplValueReference)*;
tmplValueReference: tmplIdentifier;
tmplBindingVariable
	returns[TypeAnnotationContext* type] //
	@init {$type = nullptr;}: //
	tmplIdentifier;
tmplIdentifier
	returns[std::string id]
	@after {$id = $ctx->nki->getText();}: nki = TMPL_NON_KEYWORD_IDENTIFIER;

functionParameter:
	identifier ':' parameter_type = typeAnnotation;

useDeclaration: 'use' symbolPath ';';

symbolPath: (leading_pathsep = PATHSEP)? identifier (
		PATHSEP identifier
	)*;

primitiveLiteral:
	boolLiteral
	| charLiteral
	| stringLiteral
	| floatLiteral
	| integerLiteral;

boolLiteral
	returns[bool bool_literal]
	@after {td::SetBoolLiteral($bool_literal, $ctx);}: KW_TRUE | KW_FALSE;
charLiteral
	returns[char32_t char_literal]
	@after {td::SetCharLiteral($char_literal, $ctx);}: CHAR_LITERAL;
stringLiteral
	returns[std::string string_literal]
	@after {td::SetStringLiteral($string_literal, $ctx);}: STRING_LITERAL | RAW_STRING_LITERAL;

floatLiteral
	returns[td::FloatLiteral float_literal]:
	FLOAT_LITERAL (KW_F32 | KW_F64)?;

integerLiteral
	returns[td::IntegerLiteral integer_literal]: (intDigits) (
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
