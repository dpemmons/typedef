parser grammar TypedefParser;

options { tokenVocab=TypedefLexer; }

compilationUnit:
	typedefVersionDeclaration moduleDeclaration importStatement* (
		enumDeclaration
		| messageDeclaration
	)* EOF;

typedefVersionDeclaration: TYPEDEF EQ IDENTIFIER SEMI;
moduleDeclaration: MODULE moduleName SEMI;

// Imports
importStatement:
	singleImportStatement
	| wildcardImportStatement;
singleImportStatement:
	IMPORT qualifiedName (AS identifier)? SEMI;
wildcardImportStatement: IMPORT qualifiedName '.*' SEMI;

// Enums
enumDeclaration:
	ENUM identifier (COLON primitiveFixedPointType) LBRACE enumBody RBRACE SEMI;
enumBody: ( enumField COMMA)+ (enumField COMMA?)?;
enumField: identifier EQ integerLiteral;

// Messages
messageDeclaration:
	MESSAGE identifier LBRACE messageBody RBRACE SEMI;
messageBody: (fieldDeclaration | enumDeclaration)*;

fieldDeclaration:
	identifier COLON type position (EQ value)? SEMI;

// Value definitions ----------------------------------------------------------
value: literal | array | map | identifier;

array: LBRACK (value (COMMA value)*)? COMMA? RBRACK;
map: LBRACE (keyValue (COMMA keyValue)* COMMA?)? RBRACE;
keyValue: identifier COLON value;

type: arrayIdentifier | typeType;
arrayIdentifier: typeType LBRACK integerLiteral? RBRACK;

qualifiedName: (moduleName PS)* identifier (DOT identifier)*;
moduleName: identifier (PS identifier)*;

position: AT integerLiteral;
identifier: IDENTIFIER;

literal:
	integerLiteral
	| floatLiteral
	| CHAR_LITERAL
	| STRING_LITERAL
	| boolLiteral
	| TEXT_BLOCK;

semver: SEMVER;

boolLiteral: TRUE | FALSE;

integerLiteral:
	DECIMAL_LITERAL
	| HEX_LITERAL
	| OCT_LITERAL
	| BINARY_LITERAL;

floatLiteral: FLOAT_LITERAL | HEX_FLOAT_LITERAL;

typeType: (identifier | primitiveType) (
		LBRACK integerLiteral RBRACK
	)*;

primitiveFixedPointType:
	BYTE
	| INT8
	| UINT8
	| INT16
	| UINT16
	| INT32
	| UINT32
	| INT64
	| UINT64;

primitiveType:
	BOOL
	| BYTE
	| INT8
	| UINT8
	| INT16
	| UINT16
	| INT32
	| UINT32
	| INT64
	| UINT64
	| FLOAT16
	| FLOAT32
	| FLOAT64;
