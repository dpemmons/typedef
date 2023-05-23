parser grammar TmplStrParser;

options {
	tokenVocab = TmplStrLexer;
}

@header {
}

@parser::definitions {
#include <string>
}

tmpl: item*;

item: text | replacement | forBlock | ifBlock;

replacement
	returns[std::string id]:
	'<' identifier '>' {$id = $identifier.id;};

forBlock: forOpen item* forClose;
forOpen: '<' KW_FOR identifier KW_IN identifier '>';
forClose: '<' SLASH KW_FOR '>';

ifBlock: ifOpen item* (elseIfStmt item*)* (elseStmt item*)? ifClose;
ifOpen: '<' KW_IF identifier '>';
elseIfStmt: '<' KW_ELSE KW_IF identifier '>';
elseStmt: '<' KW_ELSE '>';
ifClose: '<' SLASH KW_IF '>';

text
	returns[std::string txt]: TEXT { $txt = $TEXT->getText(); };

identifier
	returns[std::string id]
	@after {
		$id = $nki->getText();
  }:
	nki = NON_KEYWORD_IDENTIFIER
	| RAW_ESCAPE nki = NON_KEYWORD_IDENTIFIER;

