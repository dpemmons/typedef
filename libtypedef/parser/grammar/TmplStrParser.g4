parser grammar TmplStrParser;

options {
	tokenVocab = TmplStrLexer;
}

@header {
#include "libtypedef/parser/tmpl_str_table.h"
}

@parser::definitions {
#include <memory>
#include <string>
}

tmpl
	returns[td::TmplStrTablePtr tbl]
	@init {$tbl = std::make_shared<td::TmplStrTable>();}: ( item {$tbl->items.push_back($item.ctx->itm);})*;

item
	returns[td::TmplStrTable::ItemPtr itm]
	@init {$itm = std::make_shared<td::TmplStrTable::Item>();}:
	textItem {$itm->text = $textItem.ctx->txt;}
	| insertion {$itm->insertion = $insertion.ctx->ins;}
	| forBlock {$itm->for_block = $forBlock.ctx->for_block;}
	| fullIIfBlock {$itm->if_block  = $fullIIfBlock.ctx->if_block;};

//-----------------------------------------------------------------------------
// Simple variable insertion.
// ----------------------------------------------------------------------------
insertion
	returns[td::TmplStrTable::InsertionPtr ins]:
	'<' identifier '>' {
		$ins = std::make_shared<td::TmplStrTable::Insertion>();
		$ins->identifier = $identifier.id;
	};

//-----------------------------------------------------------------------------
// For blocks. Eg. <for something> foo </for>
// ----------------------------------------------------------------------------
forBlock
	returns[td::TmplStrTable::ForBlockPtr for_block]
	@init {$for_block = std::make_shared<td::TmplStrTable::ForBlock>();}:
	(
		'<' KW_FOR identifier {$for_block->loop_variable = $identifier.ctx->id;} KW_IN identifier {$for_block->iterable_identifier = $identifier.ctx->id;
		} '>'
	) (item {$for_block->body_items.push_back($item.ctx->itm);})* forClose;

forClose: '<' SLASH KW_FOR '>';

//-----------------------------------------------------------------------------
// If blocks. Eg. <if something> foo <else if something> bar <else> baz </if>
// ----------------------------------------------------------------------------
fullIIfBlock
	returns[td::TmplStrTable::IfBlockPtr if_block]:
	ifBlock {$if_block = $ifBlock.ctx->if_block;} (
		elseIfBlock {$if_block->else_ifs.push_back($elseIfBlock.ctx->else_if_block);}
	)* (
		elseBlock {$if_block->else_body_items = $elseBlock.ctx->else_body_items;}
	)? ifClose;

// TODO wire up conditionals

ifOpen
	returns[td::TmplStrTable::StrPtr conditional]:
	'<' KW_IF identifier '>' {$conditional = $identifier.ctx->id;};

ifBlock
	returns[td::TmplStrTable::IfBlockPtr if_block]
	@init {$if_block = std::make_shared<td::TmplStrTable::IfBlock>();}:
	ifOpen (
		item {$if_block->body_items.push_back($item.ctx->itm);}
	)*;

elseIfStmt
	returns[td::TmplStrTable::StrPtr conditional]:
	'<' KW_ELSE KW_IF identifier '>' {$conditional = $identifier.ctx->id;};
elseIfBlock
	returns[td::TmplStrTable::ElseIfBlockPtr else_if_block]
	@init {$else_if_block = std::make_shared<td::TmplStrTable::ElseIfBlock>();}:
	elseIfStmt (
		item {$else_if_block->body_items.push_back($item.ctx->itm);}
	)*;

elseStmt: '<' KW_ELSE '>';
elseBlock
	returns[std::vector<td::TmplStrTable::ItemPtr> else_body_items]:
	elseStmt (item {$else_body_items.push_back($item.ctx->itm);})*;

ifClose: '<' SLASH KW_IF '>';

//-----------------------------------------------------------------------------
// Simple text and identifiers.
// -----------------------------------------------------------------------------
textItem
	returns[td::TmplStrTable::StrPtr txt]:
	TEXT {$txt = std::make_shared<std::string>($TEXT->getText());};

identifier
	returns[td::TmplStrTable::StrPtr id]:
	(
		nki = NON_KEYWORD_IDENTIFIER
		| RAW_ESCAPE nki = NON_KEYWORD_IDENTIFIER
	) {$id = std::make_shared<std::string>($nki->getText());};

