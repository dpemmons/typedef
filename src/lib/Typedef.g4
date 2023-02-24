grammar Typedef;

compilationUnit:
	typedefVersionDeclaration moduleDeclaration importStatement* (
		enumDeclaration
		| messageDeclaration
	)* EOF;

typedefVersionDeclaration: 'typedef' EQ semver SEMI;
moduleDeclaration: 'module' moduleName SEMI;

// Imports
importStatement:
	singleImportStatement
	| wildcardImportStatement;
singleImportStatement:
	'import' qualifiedName ('as' identifier)? SEMI;
wildcardImportStatement: 'import' qualifiedName '.*' SEMI;

// Enums
enumDeclaration:
	ENUM identifier (COLON primitiveFixedPointType) LBRACE enumBody RBRACE SEMI;
enumBody: ( enumField COMMA)+ (enumField COMMA?)?;
enumField: identifier EQ integerLiteral;

// Messages
messageDeclaration:
	'message' identifier LBRACE messageBody RBRACE SEMI;
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

qualifiedName: (moduleName '::')* identifier ('.' identifier)*;
moduleName: identifier ('::' identifier)*;

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

boolLiteral: 'true' | 'false';

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

// Primitive types
BOOL: 'bool';
BYTE: 'byte';

FLOAT32: 'float32';
FLOAT64: 'float64';

INT8: 'int8';
INT16: 'int16';
INT32: 'int32';
INT64: 'int64';

UINT8: 'uint8';
UINT16: 'uint16';
UINT32: 'uint32';
UINT64: 'uint64';

// reserved
FLOAT16: 'float16';
BFLAOT16: 'bfloat16';

// Keywords
DEFAULT: 'default';
ENUM: 'enum';
EXPORTS: 'exports';
EXTENDS: 'extends';
IMPLEMENTS: 'implements';
INTERFACE: 'interface';
MESSAGE: 'message';
MODULE: 'module';
PACKAGE: 'package';

// Incomplete semver. TODO: use a standards-compliant semver parser
// TODO: semvers and decimal numbers need to be parser rules
SEMVER:
	UNQUALIFIED_DECIMAL_LITERAL DOT UNQUALIFIED_DECIMAL_LITERAL DOT UNQUALIFIED_DECIMAL_LITERAL;

// Literals
DECIMAL_LITERAL:
	QUALIFIED_DECIMAL_LITERAL
	| UNQUALIFIED_DECIMAL_LITERAL;
QUALIFIED_DECIMAL_LITERAL: UNQUALIFIED_DECIMAL_LITERAL [lL];
UNQUALIFIED_DECIMAL_LITERAL: (
		'0'
		| [1-9] (Digits? | '_'+ Digits)
	);
HEX_LITERAL:
	'0' [xX] [0-9a-fA-F] ([0-9a-fA-F_]* [0-9a-fA-F])? [lL]?;
OCT_LITERAL: '0' '_'* [0-7] ([0-7_]* [0-7])? [lL]?;
BINARY_LITERAL: '0' [bB] [01] ([01_]* [01])? [lL]?;

FLOAT_LITERAL: (Digits '.' Digits? | '.' Digits) ExponentPart? [fFdD]?
	| Digits (ExponentPart [fFdD]? | [fFdD]);

HEX_FLOAT_LITERAL:
	'0' [xX] (HexDigits '.'? | HexDigits? '.' HexDigits) [pP] [+-]? Digits [fFdD]?;

BOOL_LITERAL: 'true' | 'false';

CHAR_LITERAL: '\'' (~['\\\r\n] | EscapeSequence) '\'';

STRING_LITERAL: '"' (~["\\\r\n] | EscapeSequence)* '"';
TEXT_BLOCK: '"""' [ \t]* [\r\n] (. | EscapeSequence)*? '"""';

// Separators
LPAREN: '(';
RPAREN: ')';
LBRACE: '{';
RBRACE: '}';
LBRACK: '[';
RBRACK: ']';
SEMI: ';';
COLON: ':';
COMMA: ',';
DOT: '.';
EQ: '=';
AT: '@';

// Whitespace and comments
WS: [ \t\r\n\u000C]+ -> channel(HIDDEN);
COMMENT: '/*' .*? '*/' -> channel(HIDDEN);
LINE_COMMENT: '//' ~[\r\n]* -> channel(HIDDEN);

IDENTIFIER: Letter LetterOrDigit*;

fragment ExponentPart: [eE] [+-]? Digits;

fragment EscapeSequence:
	'\\' [btnfr"'\\]
	| '\\' ([0-3]? [0-7])? [0-7]
	| '\\' 'u'+ HexDigit HexDigit HexDigit HexDigit;

// TODO: Separate Digits and DigitsWithDelimiter so the former can use a faster conversion function.
fragment HexDigits: HexDigit ((HexDigit | '_')* HexDigit)?;
fragment HexDigit: [0-9a-fA-F];
fragment Digits: [0-9] ([0-9_]* [0-9])?;
fragment LetterOrDigit: Letter | [0-9];
fragment Letter:
	[a-zA-Z$_] // these are the "java letters" below 0x7F
	| ~[\u0000-\u007F\uD800-\uDBFF]
	// covers all characters above 0x7F which are not a surrogate
	| [\uD800-\uDBFF] [\uDC00-\uDFFF];
// covers UTF-16 surrogate pairs encodings for U+10000 to U+10FFFF
