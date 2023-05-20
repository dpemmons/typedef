grammar TmplStr;

tmpl: (text taggedStatement text?)*;

taggedStatement: '<%' statement '%>';

statement: identifier;
text: TEXT;

identifier
	returns[std::string id]
	@after {
		$id = $nki->getText();
  }:
	nki = NON_KEYWORD_IDENTIFIER
	| RAW_ESCAPE nki = NON_KEYWORD_IDENTIFIER;

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

RAW_ESCAPE: 'r#';

COMMENT: '<!--' .*? '-->' -> skip;
TAG: '<' .*? '>'; // must come after other tag-like structures
TEXT: ~[<&]+; // any sequence of chars except < and & chars
