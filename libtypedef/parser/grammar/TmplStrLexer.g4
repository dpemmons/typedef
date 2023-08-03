lexer grammar TmplStrLexer;

//-----------------------------------------------------------------------------
// Default mode rules \
// -----------------------------------------------------------------------------
OPEN: '<' -> mode(ISLAND);
TEXT: ~'<'+; // clump all text together

//-----------------------------------------------------------------------------
// Island grammar for template tags. See 12.3 in the ANTLR4 book.
// -----------------------------------------------------------------------------
mode ISLAND;
CLOSE: '>' -> mode(DEFAULT_MODE);
SLASH: '/';
COMMA: ',';
LPAREN: '(';
RPAREN: ')';
PATHSEP: '::';
KW_FOR: 'for';
KW_IN: 'in';
KW_IF: 'if';
KW_ELSE: 'else';

// rule itself allow any identifier, but keyword has been matched before
NON_KEYWORD_IDENTIFIER:
	XID_Start XID_Continue*
	| '_' XID_Continue+;

RAW_ESCAPE: 'r#';

fragment XID_Start: [\p{L}\p{Nl}] | UNICODE_OIDS;

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

WS: ([\p{Zs}] | ('\r\n' | [\r\n])) -> skip;
