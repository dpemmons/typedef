parser grammar TypedefParser;

options {
	tokenVocab = TypedefLexer;
}

compilationUnit:
	typedefVersionDeclaration moduleDeclaration? useDeclaration* item* EOF;

item: valueDefinitions;

// ValA: i32 = 42;
valueDefinitions: identifier COLON type_ EQ value SEMI;

type_: idetifier;

typedefVersionDeclaration: KW_TYPEDEF EQ identifier SEMI;
moduleDeclaration: KW_MODULE simplePath SEMI;

useDeclaration: 'use' useTree ';';
useTree: (simplePath? '::')? (
		'*'
		| '{' ( useTree (',' useTree)* ','?)? '}'
	)
	| simplePath ('as' identifier)?;

// // Enums
// enumDeclaration: KW_ENUM identifier LBRACE enumBody RBRACE SEMI;
// enumBody: ( identifier COMMA)+ (identifier COMMA?)?;

// Strucvt
// structDeclaration:
// 	KW_STRUCT identifier LBRACE structBody RBRACE SEMI;
// structBody: structFieldDeclaration*;
// structFieldDeclaration: identifier COLON identifier (EQ value)? SEMI;

// Value definitions ----------------------------------------------------------
// value: literalExpression | array | map | identifier;
value: literalExpression;

// array: LBRACK (value (COMMA value)*)? COMMA? RBRACK;
// map: LBRACE (keyValue (COMMA keyValue)* COMMA?)? RBRACE;
// keyValue: identifier COLON value;

simplePath: '::'? identifier ('::' identifier)*;

literalExpression:
	CHAR_LITERAL
	| STRING_LITERAL
	| RAW_STRING_LITERAL
	| BYTE_LITERAL
	| BYTE_STRING_LITERAL
	| RAW_BYTE_STRING_LITERAL
	| INTEGER_LITERAL
	| FLOAT_LITERAL
	| KW_TRUE
	| KW_FALSE;

// technical
identifier: NON_KEYWORD_IDENTIFIER | RAW_IDENTIFIER;
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
	| KW_CHAR
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