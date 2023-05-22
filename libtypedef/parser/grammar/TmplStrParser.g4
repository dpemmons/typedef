parser grammar TmplStrParser;

options {
	tokenVocab = TmplStrLexer;
}

tmpl: (text taggedStatement?)*;

taggedStatement: '<' statement '>';

statement: identifier;
text: TEXT;

identifier
	returns[std::string id]
	@after {
		$id = $nki->getText();
  }:
	nki = NON_KEYWORD_IDENTIFIER
	| RAW_ESCAPE nki = NON_KEYWORD_IDENTIFIER;

