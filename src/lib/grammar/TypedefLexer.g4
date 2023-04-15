/*
 Copyright (c) 2010 The Rust Project Developers Copyright (c) 2020-2022 Student Main Copyright (c)
 2023 Scaled Compudyne LLC
 
 Permission is hereby granted, free of charge, to any person obtaining a copy of this software and
 associated documentation files (the "Software"), to deal in the Software without restriction,
 including without limitation the rights to use, copy, modify, merge, publish, distribute,
 sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice (including the next paragraph) shall be
 included in all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT
 NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
 DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT
 OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

lexer grammar TypedefLexer;

options {
	superClass = TypedefLexerBase;
}

@header {
    #include "TypedefLexerBase.h"
}

// Keywords
KW_ARRAY: 'array';
KW_AS: 'as';
KW_ENUM: 'enum';
KW_FALSE: 'false';
KW_FN: 'fn';
KW_IMPL: 'impl';
KW_MESSAGE: 'message';
KW_MODULE: 'module';
KW_STRUCT: 'struct';
KW_TRUE: 'true';
KW_TYPE: 'type';
KW_TYPEDEF: 'typedef';
KW_USE: 'use';
KW_VARIANT: 'variant';
KW_VECTOR: 'vector';

// reserved misc
KW_AND: 'and';
KW_IN: 'in';
KW_LET: 'let';
KW_NOT: 'not';
KW_OR: 'or';
KW_SIZEOF: 'sizeof';
KW_THIS: 'this';
KW_TRAIT: 'trait';
KW_WHERE: 'where';
KW_XOR: 'xor';

// reserved control flow
KW_BREAK: 'break';
KW_CONTINUE: 'continue';
KW_DEFAULT: 'default';
KW_DO: 'do';
KW_ELSE: 'else';
KW_FOR: 'for';
KW_GOTO: 'goto';
KW_IF: 'if';
KW_LOOP: 'loop';
KW_MATCH: 'match';
KW_MOVE: 'move';
KW_RETURN: 'return';
KW_TRY: 'try';
KW_WHILE: 'while';
KW_YIELD: 'yield';

// reserved type-related
KW_ABSTRACT: 'abstract';
KW_AUTO: 'auto';
KW_CONST: 'const';
KW_DOUBLE: 'double';
KW_EXTERN: 'extern';
KW_FINAL: 'final';
KW_FLOAT: 'float';
KW_INT: 'int';
KW_LONG: 'long';
KW_MACRO: 'macro';
KW_MUT: 'mut';
KW_OVERRIDE: 'override';
KW_PRIVATE: 'private';
KW_PUB: 'pub';
KW_REF: 'ref';
KW_SELFTYPE: 'Self';
KW_SELFVALUE: 'self';
KW_SIGNED: 'signed';
KW_STATIC: 'static';
KW_SUPER: 'super';
KW_SWITCH: 'switch';
KW_TYPEOF: 'typeof';
KW_UNION: 'union';
KW_UNSAFE: 'unsafe';
KW_UNSIGNED: 'unsigned';
KW_UNSIZED: 'unsized';
KW_VIRTUAL: 'virtual';
KW_VOID: 'void';
KW_VOLATILE: 'volatile';

// Built-in types
KW_BOOL: 'bool';
KW_CHAR: 'char';
KW_STRING: 'string';
KW_F32: 'f32';
KW_F64: 'f64';
KW_U8: 'u8';
KW_U16: 'u16';
KW_U32: 'u32';
KW_U64: 'u64';
KW_I8: 'i8';
KW_I16: 'i16';
KW_I32: 'i32';
KW_I64: 'i64';

// rule itself allow any identifier, but keyword has been matched before
NON_KEYWORD_IDENTIFIER:
	XID_Start XID_Continue*
	| '_' XID_Continue+;

// [\p{L}\p{Nl}\p{Other_ID_Start}-\p{Pattern_Syntax}-\p{Pattern_White_Space}]
fragment XID_Start: [\p{L}\p{Nl}] | UNICODE_OIDS;

// [\p{ID_Start}\p{Mn}\p{Mc}\p{Nd}\p{Pc}\p{Other_ID_Continue}-\p{Pattern_Syntax}-\p{Pattern_White_Space}]
fragment XID_Continue:
	XID_Start
	| [\p{Mn}\p{Mc}\p{Nd}\p{Pc}]
	| UNICODE_OIDC;

fragment UNICODE_OIDS:
	'\u1885' ..'\u1886'
	| '\u2118'
	| '\u212e'
	| '\u309b' ..'\u309c';

fragment UNICODE_OIDC:
	'\u00b7'
	| '\u0387'
	| '\u1369' ..'\u1371'
	| '\u19da';

// RAW_IDENTIFIER: 'r#' NON_KEYWORD_IDENTIFIER;
// comments https://doc.rust-lang.org/reference/comments.html
LINE_COMMENT: ('//' (~[/!] | '//') ~[\r\n]* | '//') -> channel (HIDDEN);

BLOCK_COMMENT:
	(
		'/*' (~[*!] | '**' | BLOCK_COMMENT_OR_DOC) (
			BLOCK_COMMENT_OR_DOC
			| ~[*]
		)*? '*/'
		| '/**/'
		| '/***/'
	) -> channel (HIDDEN);

INNER_LINE_DOC:
	'//!' ~[\n\r]* -> channel (HIDDEN); // isolated cr

INNER_BLOCK_DOC:
	'/*!' (BLOCK_COMMENT_OR_DOC | ~[*])*? '*/' -> channel (HIDDEN);

OUTER_LINE_DOC:
	'///' (~[/] ~[\n\r]*)? -> channel (HIDDEN); // isolated cr

OUTER_BLOCK_DOC:
	'/**' (~[*] | BLOCK_COMMENT_OR_DOC) (
		BLOCK_COMMENT_OR_DOC
		| ~[*]
	)*? '*/' -> channel (HIDDEN);

BLOCK_COMMENT_OR_DOC:
	(BLOCK_COMMENT | INNER_BLOCK_DOC | OUTER_BLOCK_DOC) -> channel (HIDDEN);

SHEBANG:
	{this->SOF()}? '\ufeff'? '#!' ~[\r\n]* -> channel(HIDDEN);

//ISOLATED_CR
// : '\r' {_input.LA(1)!='\n'}// not followed with \n ;

// whitespace https://doc.rust-lang.org/reference/whitespace.html
WHITESPACE: [\p{Zs}] -> channel(HIDDEN);
NEWLINE: ('\r\n' | [\r\n]) -> channel(HIDDEN);

// tokens char and string
CHAR_LITERAL:
	'\'' (
		~['\\\n\r\t]
		| QUOTE_ESCAPE
		| ASCII_ESCAPE
		| UNICODE_ESCAPE
	) '\'';

STRING_LITERAL:
	'"' (
		~["]
		| QUOTE_ESCAPE
		| ASCII_ESCAPE
		| UNICODE_ESCAPE
		| ESC_NEWLINE
	)* '"';

RAW_STRING_LITERAL: 'r' RAW_STRING_CONTENT;

fragment RAW_STRING_CONTENT:
	'#' RAW_STRING_CONTENT '#'
	| '"' .*? '"';

BYTE_LITERAL: 'b\'' (. | QUOTE_ESCAPE | BYTE_ESCAPE) '\'';

BYTE_STRING_LITERAL:
	'b"' (~["] | QUOTE_ESCAPE | BYTE_ESCAPE)* '"';

RAW_BYTE_STRING_LITERAL: 'br' RAW_STRING_CONTENT;

fragment ASCII_ESCAPE:
	'\\x' OCT_DIGIT HEX_DIGIT
	| COMMON_ESCAPE;

fragment BYTE_ESCAPE: '\\x' HEX_DIGIT HEX_DIGIT | COMMON_ESCAPE;

fragment COMMON_ESCAPE: '\\' [nrt\\0];

fragment UNICODE_ESCAPE:
	'\\u{' HEX_DIGIT HEX_DIGIT? HEX_DIGIT? HEX_DIGIT? HEX_DIGIT? HEX_DIGIT? '}';

fragment QUOTE_ESCAPE: '\\' ['"];

fragment ESC_NEWLINE: '\\' '\n';

// number

INTEGER_LITERAL:
	(DEC_LITERAL | BIN_LITERAL | OCT_LITERAL | HEX_LITERAL) INTEGER_SUFFIX?;

DEC_LITERAL: DEC_DIGIT (DEC_DIGIT | '_')*;

HEX_LITERAL: '0x' '_'* HEX_DIGIT (HEX_DIGIT | '_')*;

OCT_LITERAL: '0o' '_'* OCT_DIGIT (OCT_DIGIT | '_')*;

BIN_LITERAL: '0b' '_'* [01] [01_]*;

FLOAT_LITERAL:
	{this->floatLiteralPossible()}? (
		DEC_LITERAL '.' {this->floatDotPossible()}?
		| DEC_LITERAL ('.' DEC_LITERAL)? FLOAT_EXPONENT? FLOAT_SUFFIX?
	);

fragment INTEGER_SUFFIX:
	'u8'
	| 'u16'
	| 'u32'
	| 'u64'
	| 'u128'
	| 'i8'
	| 'i16'
	| 'i32'
	| 'i64'
	| 'i128';

fragment FLOAT_SUFFIX: 'f32' | 'f64';

fragment FLOAT_EXPONENT: [eE] [+-]? '_'* DEC_LITERAL;

fragment OCT_DIGIT: [0-7];

fragment DEC_DIGIT: [0-9];

fragment HEX_DIGIT: [0-9a-fA-F];

// LIFETIME_TOKEN: '\'' IDENTIFIER_OR_KEYWORD | '\'_';

LIFETIME_OR_LABEL: '\'' NON_KEYWORD_IDENTIFIER;

RAW_ESCAPE: 'r#';
PLUS: '+';
MINUS: '-';
STAR: '*';
SLASH: '/';
PERCENT: '%';
CARET: '^';
NOT: '!';
AND: '&';
OR: '|';
ANDAND: '&&';
OROR: '||';
PLUSEQ: '+=';
MINUSEQ: '-=';
STAREQ: '*=';
SLASHEQ: '/=';
PERCENTEQ: '%=';
CARETEQ: '^=';
ANDEQ: '&=';
OREQ: '|=';
SHLEQ: '<<=';
SHREQ: '>>=';
EQ: '=';
EQEQ: '==';
NE: '!=';
GT: '>';
LT: '<';
GE: '>=';
LE: '<=';
AT: '@';
UNDERSCORE: '_';
DOT: '.';
DOTDOT: '..';
DOTDOTDOT: '...';
COMMA: ',';
SEMI: ';';
COLON: ':';
PATHSEP: '::';
RARROW: '->';
FATARROW: '=>';
POUND: '#';
DOLLAR: '$';
QUESTION: '?';

LBRACE: '{';
RBRACE: '}';
LBRACK: '[';
RBRACK: ']';
LPAREN: '(';
RPAREN: ')';