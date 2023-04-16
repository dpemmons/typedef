// Generated from /home/dpemmons/src/typedef/src/lib/grammar/TypedefParser.g4 by ANTLR 4.9.2

#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include "parser_helpers.h"
#include "symbol_table.h"

import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class TypedefParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.9.2", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		KW_ARRAY=1, KW_AS=2, KW_ENUM=3, KW_FALSE=4, KW_FN=5, KW_IMPL=6, KW_MESSAGE=7, 
		KW_MODULE=8, KW_STRUCT=9, KW_TRUE=10, KW_TYPE=11, KW_TYPEDEF=12, KW_USE=13, 
		KW_VARIANT=14, KW_VECTOR=15, KW_AND=16, KW_IN=17, KW_LET=18, KW_NOT=19, 
		KW_OR=20, KW_SIZEOF=21, KW_THIS=22, KW_TRAIT=23, KW_WHERE=24, KW_XOR=25, 
		KW_BREAK=26, KW_CONTINUE=27, KW_DEFAULT=28, KW_DO=29, KW_ELSE=30, KW_FOR=31, 
		KW_GOTO=32, KW_IF=33, KW_LOOP=34, KW_MATCH=35, KW_MOVE=36, KW_RETURN=37, 
		KW_TRY=38, KW_WHILE=39, KW_YIELD=40, KW_ABSTRACT=41, KW_AUTO=42, KW_CONST=43, 
		KW_DOUBLE=44, KW_EXTERN=45, KW_FINAL=46, KW_FLOAT=47, KW_INT=48, KW_LONG=49, 
		KW_MACRO=50, KW_MUT=51, KW_OVERRIDE=52, KW_PRIVATE=53, KW_PUB=54, KW_REF=55, 
		KW_SELFTYPE=56, KW_SELFVALUE=57, KW_SIGNED=58, KW_STATIC=59, KW_SUPER=60, 
		KW_SWITCH=61, KW_TYPEOF=62, KW_UNION=63, KW_UNSAFE=64, KW_UNSIGNED=65, 
		KW_UNSIZED=66, KW_VIRTUAL=67, KW_VOID=68, KW_VOLATILE=69, KW_BOOL=70, 
		KW_CHAR=71, KW_STRING=72, KW_F32=73, KW_F64=74, KW_U8=75, KW_U16=76, KW_U32=77, 
		KW_U64=78, KW_I8=79, KW_I16=80, KW_I32=81, KW_I64=82, NON_KEYWORD_IDENTIFIER=83, 
		LINE_COMMENT=84, BLOCK_COMMENT=85, INNER_LINE_DOC=86, INNER_BLOCK_DOC=87, 
		OUTER_LINE_DOC=88, OUTER_BLOCK_DOC=89, BLOCK_COMMENT_OR_DOC=90, SHEBANG=91, 
		WS=92, CHAR_LITERAL=93, STRING_LITERAL=94, RAW_STRING_LITERAL=95, BYTE_LITERAL=96, 
		BYTE_STRING_LITERAL=97, RAW_BYTE_STRING_LITERAL=98, DEC_DIGITS=99, DEC_DIGITS_UNDERSCORE=100, 
		HEX_DIGITS=101, HEX_DIGITS_UNDERSCORE=102, OCT_DIGITS=103, OCT_DIGITS_UNDERSCORE=104, 
		BIN_DIGITS=105, BIN_DIGITS_UNDERSCORE=106, FLOAT_LITERAL=107, OCT_DIGIT=108, 
		DEC_DIGIT=109, HEX_DIGIT=110, HEX_PREFIX=111, OCT_PREFIX=112, BIN_PREFIX=113, 
		LIFETIME_OR_LABEL=114, RAW_ESCAPE=115, PLUS=116, MINUS=117, STAR=118, 
		SLASH=119, PERCENT=120, CARET=121, NOT=122, AND=123, OR=124, ANDAND=125, 
		OROR=126, PLUSEQ=127, MINUSEQ=128, STAREQ=129, SLASHEQ=130, PERCENTEQ=131, 
		CARETEQ=132, ANDEQ=133, OREQ=134, SHLEQ=135, SHREQ=136, EQ=137, EQEQ=138, 
		NE=139, GT=140, LT=141, GE=142, LE=143, AT=144, UNDERSCORE=145, DOT=146, 
		DOTDOT=147, DOTDOTDOT=148, COMMA=149, SEMI=150, COLON=151, PATHSEP=152, 
		RARROW=153, FATARROW=154, POUND=155, DOLLAR=156, QUESTION=157, LBRACE=158, 
		RBRACE=159, LBRACK=160, RBRACK=161, LPAREN=162, RPAREN=163;
	public static final int
		RULE_compilationUnit = 0, RULE_item = 1, RULE_valueDefinition = 2, RULE_primitiveFragment = 3, 
		RULE_boolFragment = 4, RULE_charFragment = 5, RULE_stringFragment = 6, 
		RULE_f32Fragment = 7, RULE_f64Fragment = 8, RULE_u8Fragment = 9, RULE_u16Fragment = 10, 
		RULE_u32Fragment = 11, RULE_u64Fragment = 12, RULE_i8Fragment = 13, RULE_i16Fragment = 14, 
		RULE_i32Fragment = 15, RULE_i64Fragment = 16, RULE_type_ = 17, RULE_parameterizedType = 18, 
		RULE_typedefVersionDeclaration = 19, RULE_moduleDeclaration = 20, RULE_useDeclaration = 21, 
		RULE_useTree = 22, RULE_simplePath = 23, RULE_boolLiteral = 24, RULE_byteLiteral = 25, 
		RULE_charLiteral = 26, RULE_f32Literal = 27, RULE_f64Literal = 28, RULE_u8Literal = 29, 
		RULE_u16Literal = 30, RULE_u32Literal = 31, RULE_u64Literal = 32, RULE_i8Literal = 33, 
		RULE_i16Literal = 34, RULE_i32Literal = 35, RULE_i64Literal = 36, RULE_stringLiteral = 37, 
		RULE_byteStringLiteral = 38, RULE_identifier = 39, RULE_keyword = 40;
	private static String[] makeRuleNames() {
		return new String[] {
			"compilationUnit", "item", "valueDefinition", "primitiveFragment", "boolFragment", 
			"charFragment", "stringFragment", "f32Fragment", "f64Fragment", "u8Fragment", 
			"u16Fragment", "u32Fragment", "u64Fragment", "i8Fragment", "i16Fragment", 
			"i32Fragment", "i64Fragment", "type_", "parameterizedType", "typedefVersionDeclaration", 
			"moduleDeclaration", "useDeclaration", "useTree", "simplePath", "boolLiteral", 
			"byteLiteral", "charLiteral", "f32Literal", "f64Literal", "u8Literal", 
			"u16Literal", "u32Literal", "u64Literal", "i8Literal", "i16Literal", 
			"i32Literal", "i64Literal", "stringLiteral", "byteStringLiteral", "identifier", 
			"keyword"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'array'", "'as'", "'enum'", "'false'", "'fn'", "'impl'", "'message'", 
			"'module'", "'struct'", "'true'", "'type'", "'typedef'", "'use'", "'variant'", 
			"'vector'", "'and'", "'in'", "'let'", "'not'", "'or'", "'sizeof'", "'this'", 
			"'trait'", "'where'", "'xor'", "'break'", "'continue'", "'default'", 
			"'do'", "'else'", "'for'", "'goto'", "'if'", "'loop'", "'match'", "'move'", 
			"'return'", "'try'", "'while'", "'yield'", "'abstract'", "'auto'", "'const'", 
			"'double'", "'extern'", "'final'", "'float'", "'int'", "'long'", "'macro'", 
			"'mut'", "'override'", "'private'", "'pub'", "'ref'", "'Self'", "'self'", 
			"'signed'", "'static'", "'super'", "'switch'", "'typeof'", "'union'", 
			"'unsafe'", "'unsigned'", "'unsized'", "'virtual'", "'void'", "'volatile'", 
			"'bool'", "'char'", "'string'", "'f32'", "'f64'", "'u8'", "'u16'", "'u32'", 
			"'u64'", "'i8'", "'i16'", "'i32'", "'i64'", null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, "'0x'", 
			"'0o'", "'0b'", null, "'r#'", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'", 
			"'!'", "'&'", "'|'", "'&&'", "'||'", "'+='", "'-='", "'*='", "'/='", 
			"'%='", "'^='", "'&='", "'|='", "'<<='", "'>>='", "'='", "'=='", "'!='", 
			"'>'", "'<'", "'>='", "'<='", "'@'", "'_'", "'.'", "'..'", "'...'", "','", 
			"';'", "':'", "'::'", "'->'", "'=>'", "'#'", "'$'", "'?'", "'{'", "'}'", 
			"'['", "']'", "'('", "')'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "KW_ARRAY", "KW_AS", "KW_ENUM", "KW_FALSE", "KW_FN", "KW_IMPL", 
			"KW_MESSAGE", "KW_MODULE", "KW_STRUCT", "KW_TRUE", "KW_TYPE", "KW_TYPEDEF", 
			"KW_USE", "KW_VARIANT", "KW_VECTOR", "KW_AND", "KW_IN", "KW_LET", "KW_NOT", 
			"KW_OR", "KW_SIZEOF", "KW_THIS", "KW_TRAIT", "KW_WHERE", "KW_XOR", "KW_BREAK", 
			"KW_CONTINUE", "KW_DEFAULT", "KW_DO", "KW_ELSE", "KW_FOR", "KW_GOTO", 
			"KW_IF", "KW_LOOP", "KW_MATCH", "KW_MOVE", "KW_RETURN", "KW_TRY", "KW_WHILE", 
			"KW_YIELD", "KW_ABSTRACT", "KW_AUTO", "KW_CONST", "KW_DOUBLE", "KW_EXTERN", 
			"KW_FINAL", "KW_FLOAT", "KW_INT", "KW_LONG", "KW_MACRO", "KW_MUT", "KW_OVERRIDE", 
			"KW_PRIVATE", "KW_PUB", "KW_REF", "KW_SELFTYPE", "KW_SELFVALUE", "KW_SIGNED", 
			"KW_STATIC", "KW_SUPER", "KW_SWITCH", "KW_TYPEOF", "KW_UNION", "KW_UNSAFE", 
			"KW_UNSIGNED", "KW_UNSIZED", "KW_VIRTUAL", "KW_VOID", "KW_VOLATILE", 
			"KW_BOOL", "KW_CHAR", "KW_STRING", "KW_F32", "KW_F64", "KW_U8", "KW_U16", 
			"KW_U32", "KW_U64", "KW_I8", "KW_I16", "KW_I32", "KW_I64", "NON_KEYWORD_IDENTIFIER", 
			"LINE_COMMENT", "BLOCK_COMMENT", "INNER_LINE_DOC", "INNER_BLOCK_DOC", 
			"OUTER_LINE_DOC", "OUTER_BLOCK_DOC", "BLOCK_COMMENT_OR_DOC", "SHEBANG", 
			"WS", "CHAR_LITERAL", "STRING_LITERAL", "RAW_STRING_LITERAL", "BYTE_LITERAL", 
			"BYTE_STRING_LITERAL", "RAW_BYTE_STRING_LITERAL", "DEC_DIGITS", "DEC_DIGITS_UNDERSCORE", 
			"HEX_DIGITS", "HEX_DIGITS_UNDERSCORE", "OCT_DIGITS", "OCT_DIGITS_UNDERSCORE", 
			"BIN_DIGITS", "BIN_DIGITS_UNDERSCORE", "FLOAT_LITERAL", "OCT_DIGIT", 
			"DEC_DIGIT", "HEX_DIGIT", "HEX_PREFIX", "OCT_PREFIX", "BIN_PREFIX", "LIFETIME_OR_LABEL", 
			"RAW_ESCAPE", "PLUS", "MINUS", "STAR", "SLASH", "PERCENT", "CARET", "NOT", 
			"AND", "OR", "ANDAND", "OROR", "PLUSEQ", "MINUSEQ", "STAREQ", "SLASHEQ", 
			"PERCENTEQ", "CARETEQ", "ANDEQ", "OREQ", "SHLEQ", "SHREQ", "EQ", "EQEQ", 
			"NE", "GT", "LT", "GE", "LE", "AT", "UNDERSCORE", "DOT", "DOTDOT", "DOTDOTDOT", 
			"COMMA", "SEMI", "COLON", "PATHSEP", "RARROW", "FATARROW", "POUND", "DOLLAR", 
			"QUESTION", "LBRACE", "RBRACE", "LBRACK", "RBRACK", "LPAREN", "RPAREN"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "TypedefParser.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }


		td::SymbolTable symbol_table;

	public TypedefParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	public static class CompilationUnitContext extends ParserRuleContext {
		public TypedefVersionDeclarationContext typedefVersionDeclaration() {
			return getRuleContext(TypedefVersionDeclarationContext.class,0);
		}
		public TerminalNode EOF() { return getToken(TypedefParser.EOF, 0); }
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public ModuleDeclarationContext moduleDeclaration() {
			return getRuleContext(ModuleDeclarationContext.class,0);
		}
		public List<UseDeclarationContext> useDeclaration() {
			return getRuleContexts(UseDeclarationContext.class);
		}
		public UseDeclarationContext useDeclaration(int i) {
			return getRuleContext(UseDeclarationContext.class,i);
		}
		public List<ItemContext> item() {
			return getRuleContexts(ItemContext.class);
		}
		public ItemContext item(int i) {
			return getRuleContext(ItemContext.class,i);
		}
		public CompilationUnitContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compilationUnit; }
	}

	public final CompilationUnitContext compilationUnit() throws RecognitionException {
		CompilationUnitContext _localctx = new CompilationUnitContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_compilationUnit);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(82);
			typedefVersionDeclaration();
			setState(86);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,0,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(83);
					match(WS);
					}
					} 
				}
				setState(88);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,0,_ctx);
			}
			setState(90);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==KW_MODULE) {
				{
				setState(89);
				moduleDeclaration();
				}
			}

			setState(101);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(95);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==WS) {
						{
						{
						setState(92);
						match(WS);
						}
						}
						setState(97);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(98);
					useDeclaration();
					}
					} 
				}
				setState(103);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
			}
			setState(113);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(107);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==WS) {
						{
						{
						setState(104);
						match(WS);
						}
						}
						setState(109);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(110);
					item();
					}
					} 
				}
				setState(115);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
			}
			setState(119);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(116);
				match(WS);
				}
				}
				setState(121);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(122);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ItemContext extends ParserRuleContext {
		public ValueDefinitionContext valueDefinition() {
			return getRuleContext(ValueDefinitionContext.class,0);
		}
		public ItemContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_item; }
	}

	public final ItemContext item() throws RecognitionException {
		ItemContext _localctx = new ItemContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_item);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(124);
			valueDefinition();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ValueDefinitionContext extends ParserRuleContext {
		public IdentifierContext identifier;
		public PrimitiveFragmentContext primitiveFragment;
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public PrimitiveFragmentContext primitiveFragment() {
			return getRuleContext(PrimitiveFragmentContext.class,0);
		}
		public TerminalNode SEMI() { return getToken(TypedefParser.SEMI, 0); }
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public ValueDefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_valueDefinition; }
	}

	public final ValueDefinitionContext valueDefinition() throws RecognitionException {
		ValueDefinitionContext _localctx = new ValueDefinitionContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_valueDefinition);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(126);
			((ValueDefinitionContext)_localctx).identifier = identifier();
			setState(130);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,7,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(127);
					match(WS);
					}
					} 
				}
				setState(132);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,7,_ctx);
			}
			setState(133);
			((ValueDefinitionContext)_localctx).primitiveFragment = primitiveFragment();
			setState(137);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(134);
				match(WS);
				}
				}
				setState(139);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(140);
			match(SEMI);

				if (((ValueDefinitionContext)_localctx).primitiveFragment->maybe_val) {
					if (!symbol_table.TryInsert(((ValueDefinitionContext)_localctx).identifier->id, ((ValueDefinitionContext)_localctx).primitiveFragment->maybe_val.value())) {
						throw DuplicateSymbol(this, ((ValueDefinitionContext)_localctx).identifier, ((ValueDefinitionContext)_localctx).identifier->NON_KEYWORD_IDENTIFIER()->getSymbol());
					}
				}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PrimitiveFragmentContext extends ParserRuleContext {
		public std::optional<td::SymbolTable::Value> maybe_val;
		public BoolFragmentContext boolFragment;
		public CharFragmentContext charFragment;
		public StringFragmentContext stringFragment;
		public F32FragmentContext f32Fragment;
		public F64FragmentContext f64Fragment;
		public U8FragmentContext u8Fragment;
		public U16FragmentContext u16Fragment;
		public U32FragmentContext u32Fragment;
		public U64FragmentContext u64Fragment;
		public I8FragmentContext i8Fragment;
		public I16FragmentContext i16Fragment;
		public I32FragmentContext i32Fragment;
		public I64FragmentContext i64Fragment;
		public BoolFragmentContext boolFragment() {
			return getRuleContext(BoolFragmentContext.class,0);
		}
		public CharFragmentContext charFragment() {
			return getRuleContext(CharFragmentContext.class,0);
		}
		public StringFragmentContext stringFragment() {
			return getRuleContext(StringFragmentContext.class,0);
		}
		public F32FragmentContext f32Fragment() {
			return getRuleContext(F32FragmentContext.class,0);
		}
		public F64FragmentContext f64Fragment() {
			return getRuleContext(F64FragmentContext.class,0);
		}
		public U8FragmentContext u8Fragment() {
			return getRuleContext(U8FragmentContext.class,0);
		}
		public U16FragmentContext u16Fragment() {
			return getRuleContext(U16FragmentContext.class,0);
		}
		public U32FragmentContext u32Fragment() {
			return getRuleContext(U32FragmentContext.class,0);
		}
		public U64FragmentContext u64Fragment() {
			return getRuleContext(U64FragmentContext.class,0);
		}
		public I8FragmentContext i8Fragment() {
			return getRuleContext(I8FragmentContext.class,0);
		}
		public I16FragmentContext i16Fragment() {
			return getRuleContext(I16FragmentContext.class,0);
		}
		public I32FragmentContext i32Fragment() {
			return getRuleContext(I32FragmentContext.class,0);
		}
		public I64FragmentContext i64Fragment() {
			return getRuleContext(I64FragmentContext.class,0);
		}
		public PrimitiveFragmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_primitiveFragment; }
	}

	public final PrimitiveFragmentContext primitiveFragment() throws RecognitionException {
		PrimitiveFragmentContext _localctx = new PrimitiveFragmentContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_primitiveFragment);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(182);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
			case 1:
				{
				setState(143);
				((PrimitiveFragmentContext)_localctx).boolFragment = boolFragment();
				((PrimitiveFragmentContext)_localctx).maybe_val =  ((PrimitiveFragmentContext)_localctx).boolFragment->literal->maybe_val;
				}
				break;
			case 2:
				{
				setState(146);
				((PrimitiveFragmentContext)_localctx).charFragment = charFragment();
				((PrimitiveFragmentContext)_localctx).maybe_val =  ((PrimitiveFragmentContext)_localctx).charFragment->literal->maybe_val;
				}
				break;
			case 3:
				{
				setState(149);
				((PrimitiveFragmentContext)_localctx).stringFragment = stringFragment();
				((PrimitiveFragmentContext)_localctx).maybe_val =  ((PrimitiveFragmentContext)_localctx).stringFragment->literal->maybe_val;
				}
				break;
			case 4:
				{
				setState(152);
				((PrimitiveFragmentContext)_localctx).f32Fragment = f32Fragment();
				((PrimitiveFragmentContext)_localctx).maybe_val =  ((PrimitiveFragmentContext)_localctx).f32Fragment->literal->maybe_val;
				}
				break;
			case 5:
				{
				setState(155);
				((PrimitiveFragmentContext)_localctx).f64Fragment = f64Fragment();
				((PrimitiveFragmentContext)_localctx).maybe_val =  ((PrimitiveFragmentContext)_localctx).f64Fragment->literal->maybe_val;
				}
				break;
			case 6:
				{
				setState(158);
				((PrimitiveFragmentContext)_localctx).u8Fragment = u8Fragment();
				((PrimitiveFragmentContext)_localctx).maybe_val =  ((PrimitiveFragmentContext)_localctx).u8Fragment->literal->maybe_val;
				}
				break;
			case 7:
				{
				setState(161);
				((PrimitiveFragmentContext)_localctx).u16Fragment = u16Fragment();
				((PrimitiveFragmentContext)_localctx).maybe_val =  ((PrimitiveFragmentContext)_localctx).u16Fragment->literal->maybe_val;
				}
				break;
			case 8:
				{
				setState(164);
				((PrimitiveFragmentContext)_localctx).u32Fragment = u32Fragment();
				((PrimitiveFragmentContext)_localctx).maybe_val =  ((PrimitiveFragmentContext)_localctx).u32Fragment->literal->maybe_val;
				}
				break;
			case 9:
				{
				setState(167);
				((PrimitiveFragmentContext)_localctx).u64Fragment = u64Fragment();
				((PrimitiveFragmentContext)_localctx).maybe_val =  ((PrimitiveFragmentContext)_localctx).u64Fragment->literal->maybe_val;
				}
				break;
			case 10:
				{
				setState(170);
				((PrimitiveFragmentContext)_localctx).i8Fragment = i8Fragment();
				((PrimitiveFragmentContext)_localctx).maybe_val =  ((PrimitiveFragmentContext)_localctx).i8Fragment->literal->maybe_val;
				}
				break;
			case 11:
				{
				setState(173);
				((PrimitiveFragmentContext)_localctx).i16Fragment = i16Fragment();
				((PrimitiveFragmentContext)_localctx).maybe_val =  ((PrimitiveFragmentContext)_localctx).i16Fragment->literal->maybe_val;
				}
				break;
			case 12:
				{
				setState(176);
				((PrimitiveFragmentContext)_localctx).i32Fragment = i32Fragment();
				((PrimitiveFragmentContext)_localctx).maybe_val =  ((PrimitiveFragmentContext)_localctx).i32Fragment->literal->maybe_val;
				}
				break;
			case 13:
				{
				setState(179);
				((PrimitiveFragmentContext)_localctx).i64Fragment = i64Fragment();
				((PrimitiveFragmentContext)_localctx).maybe_val =  ((PrimitiveFragmentContext)_localctx).i64Fragment->literal->maybe_val;
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BoolFragmentContext extends ParserRuleContext {
		public BoolLiteralContext literal;
		public TerminalNode EQ() { return getToken(TypedefParser.EQ, 0); }
		public BoolLiteralContext boolLiteral() {
			return getRuleContext(BoolLiteralContext.class,0);
		}
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public TerminalNode KW_BOOL() { return getToken(TypedefParser.KW_BOOL, 0); }
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public BoolFragmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_boolFragment; }
	}

	public final BoolFragmentContext boolFragment() throws RecognitionException {
		BoolFragmentContext _localctx = new BoolFragmentContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_boolFragment);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(192);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COLON) {
				{
				setState(184);
				match(COLON);
				setState(188);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(185);
					match(WS);
					}
					}
					setState(190);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(191);
				match(KW_BOOL);
				}
			}

			setState(197);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(194);
				match(WS);
				}
				}
				setState(199);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(200);
			match(EQ);
			setState(204);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(201);
				match(WS);
				}
				}
				setState(206);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(207);
			((BoolFragmentContext)_localctx).literal = boolLiteral();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CharFragmentContext extends ParserRuleContext {
		public CharLiteralContext literal;
		public TerminalNode EQ() { return getToken(TypedefParser.EQ, 0); }
		public CharLiteralContext charLiteral() {
			return getRuleContext(CharLiteralContext.class,0);
		}
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public TerminalNode KW_CHAR() { return getToken(TypedefParser.KW_CHAR, 0); }
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public CharFragmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_charFragment; }
	}

	public final CharFragmentContext charFragment() throws RecognitionException {
		CharFragmentContext _localctx = new CharFragmentContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_charFragment);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(217);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COLON) {
				{
				setState(209);
				match(COLON);
				setState(213);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(210);
					match(WS);
					}
					}
					setState(215);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(216);
				match(KW_CHAR);
				}
			}

			setState(222);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(219);
				match(WS);
				}
				}
				setState(224);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(225);
			match(EQ);
			setState(229);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(226);
				match(WS);
				}
				}
				setState(231);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(232);
			((CharFragmentContext)_localctx).literal = charLiteral();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StringFragmentContext extends ParserRuleContext {
		public StringLiteralContext literal;
		public TerminalNode KW_STRING() { return getToken(TypedefParser.KW_STRING, 0); }
		public TerminalNode EQ() { return getToken(TypedefParser.EQ, 0); }
		public StringLiteralContext stringLiteral() {
			return getRuleContext(StringLiteralContext.class,0);
		}
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public StringFragmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stringFragment; }
	}

	public final StringFragmentContext stringFragment() throws RecognitionException {
		StringFragmentContext _localctx = new StringFragmentContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_stringFragment);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(234);
			match(KW_STRING);
			setState(238);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(235);
				match(WS);
				}
				}
				setState(240);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(241);
			match(EQ);
			setState(245);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(242);
				match(WS);
				}
				}
				setState(247);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(248);
			((StringFragmentContext)_localctx).literal = stringLiteral();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class F32FragmentContext extends ParserRuleContext {
		public F32LiteralContext literal;
		public TerminalNode KW_F32() { return getToken(TypedefParser.KW_F32, 0); }
		public TerminalNode EQ() { return getToken(TypedefParser.EQ, 0); }
		public F32LiteralContext f32Literal() {
			return getRuleContext(F32LiteralContext.class,0);
		}
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public F32FragmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_f32Fragment; }
	}

	public final F32FragmentContext f32Fragment() throws RecognitionException {
		F32FragmentContext _localctx = new F32FragmentContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_f32Fragment);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(250);
			match(KW_F32);
			setState(254);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(251);
				match(WS);
				}
				}
				setState(256);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(257);
			match(EQ);
			setState(261);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(258);
				match(WS);
				}
				}
				setState(263);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(264);
			((F32FragmentContext)_localctx).literal = f32Literal();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class F64FragmentContext extends ParserRuleContext {
		public F64LiteralContext literal;
		public TerminalNode KW_F64() { return getToken(TypedefParser.KW_F64, 0); }
		public TerminalNode EQ() { return getToken(TypedefParser.EQ, 0); }
		public F64LiteralContext f64Literal() {
			return getRuleContext(F64LiteralContext.class,0);
		}
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public F64FragmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_f64Fragment; }
	}

	public final F64FragmentContext f64Fragment() throws RecognitionException {
		F64FragmentContext _localctx = new F64FragmentContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_f64Fragment);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(266);
			match(KW_F64);
			setState(270);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(267);
				match(WS);
				}
				}
				setState(272);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(273);
			match(EQ);
			setState(277);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(274);
				match(WS);
				}
				}
				setState(279);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(280);
			((F64FragmentContext)_localctx).literal = f64Literal();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class U8FragmentContext extends ParserRuleContext {
		public U8LiteralContext literal;
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public List<TerminalNode> KW_U8() { return getTokens(TypedefParser.KW_U8); }
		public TerminalNode KW_U8(int i) {
			return getToken(TypedefParser.KW_U8, i);
		}
		public TerminalNode EQ() { return getToken(TypedefParser.EQ, 0); }
		public U8LiteralContext u8Literal() {
			return getRuleContext(U8LiteralContext.class,0);
		}
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public U8FragmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_u8Fragment; }
	}

	public final U8FragmentContext u8Fragment() throws RecognitionException {
		U8FragmentContext _localctx = new U8FragmentContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_u8Fragment);
		int _la;
		try {
			setState(317);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(282);
				match(COLON);
				setState(286);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(283);
					match(WS);
					}
					}
					setState(288);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(289);
				match(KW_U8);
				setState(293);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(290);
					match(WS);
					}
					}
					setState(295);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(296);
				match(EQ);
				setState(300);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(297);
					match(WS);
					}
					}
					setState(302);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(303);
				((U8FragmentContext)_localctx).literal = u8Literal();
				setState(305);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_U8) {
					{
					setState(304);
					match(KW_U8);
					}
				}

				}
				}
				break;
			case EQ:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(307);
				match(EQ);
				setState(311);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(308);
					match(WS);
					}
					}
					setState(313);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(314);
				((U8FragmentContext)_localctx).literal = u8Literal();
				setState(315);
				match(KW_U8);
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class U16FragmentContext extends ParserRuleContext {
		public U16LiteralContext literal;
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public List<TerminalNode> KW_U16() { return getTokens(TypedefParser.KW_U16); }
		public TerminalNode KW_U16(int i) {
			return getToken(TypedefParser.KW_U16, i);
		}
		public TerminalNode EQ() { return getToken(TypedefParser.EQ, 0); }
		public U16LiteralContext u16Literal() {
			return getRuleContext(U16LiteralContext.class,0);
		}
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public U16FragmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_u16Fragment; }
	}

	public final U16FragmentContext u16Fragment() throws RecognitionException {
		U16FragmentContext _localctx = new U16FragmentContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_u16Fragment);
		int _la;
		try {
			setState(354);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(319);
				match(COLON);
				setState(323);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(320);
					match(WS);
					}
					}
					setState(325);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(326);
				match(KW_U16);
				setState(330);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(327);
					match(WS);
					}
					}
					setState(332);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(333);
				match(EQ);
				setState(337);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(334);
					match(WS);
					}
					}
					setState(339);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(340);
				((U16FragmentContext)_localctx).literal = u16Literal();
				setState(342);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_U16) {
					{
					setState(341);
					match(KW_U16);
					}
				}

				}
				}
				break;
			case EQ:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(344);
				match(EQ);
				setState(348);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(345);
					match(WS);
					}
					}
					setState(350);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(351);
				((U16FragmentContext)_localctx).literal = u16Literal();
				setState(352);
				match(KW_U16);
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class U32FragmentContext extends ParserRuleContext {
		public U32LiteralContext literal;
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public List<TerminalNode> KW_U32() { return getTokens(TypedefParser.KW_U32); }
		public TerminalNode KW_U32(int i) {
			return getToken(TypedefParser.KW_U32, i);
		}
		public TerminalNode EQ() { return getToken(TypedefParser.EQ, 0); }
		public U32LiteralContext u32Literal() {
			return getRuleContext(U32LiteralContext.class,0);
		}
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public U32FragmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_u32Fragment; }
	}

	public final U32FragmentContext u32Fragment() throws RecognitionException {
		U32FragmentContext _localctx = new U32FragmentContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_u32Fragment);
		int _la;
		try {
			setState(391);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(356);
				match(COLON);
				setState(360);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(357);
					match(WS);
					}
					}
					setState(362);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(363);
				match(KW_U32);
				setState(367);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(364);
					match(WS);
					}
					}
					setState(369);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(370);
				match(EQ);
				setState(374);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(371);
					match(WS);
					}
					}
					setState(376);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(377);
				((U32FragmentContext)_localctx).literal = u32Literal();
				setState(379);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_U32) {
					{
					setState(378);
					match(KW_U32);
					}
				}

				}
				}
				break;
			case EQ:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(381);
				match(EQ);
				setState(385);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(382);
					match(WS);
					}
					}
					setState(387);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(388);
				((U32FragmentContext)_localctx).literal = u32Literal();
				setState(389);
				match(KW_U32);
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class U64FragmentContext extends ParserRuleContext {
		public U64LiteralContext literal;
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public List<TerminalNode> KW_U64() { return getTokens(TypedefParser.KW_U64); }
		public TerminalNode KW_U64(int i) {
			return getToken(TypedefParser.KW_U64, i);
		}
		public TerminalNode EQ() { return getToken(TypedefParser.EQ, 0); }
		public U64LiteralContext u64Literal() {
			return getRuleContext(U64LiteralContext.class,0);
		}
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public U64FragmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_u64Fragment; }
	}

	public final U64FragmentContext u64Fragment() throws RecognitionException {
		U64FragmentContext _localctx = new U64FragmentContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_u64Fragment);
		int _la;
		try {
			setState(428);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(393);
				match(COLON);
				setState(397);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(394);
					match(WS);
					}
					}
					setState(399);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(400);
				match(KW_U64);
				setState(404);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(401);
					match(WS);
					}
					}
					setState(406);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(407);
				match(EQ);
				setState(411);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(408);
					match(WS);
					}
					}
					setState(413);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(414);
				((U64FragmentContext)_localctx).literal = u64Literal();
				setState(416);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_U64) {
					{
					setState(415);
					match(KW_U64);
					}
				}

				}
				}
				break;
			case EQ:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(418);
				match(EQ);
				setState(422);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(419);
					match(WS);
					}
					}
					setState(424);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(425);
				((U64FragmentContext)_localctx).literal = u64Literal();
				setState(426);
				match(KW_U64);
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class I8FragmentContext extends ParserRuleContext {
		public I8LiteralContext literal;
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public List<TerminalNode> KW_I8() { return getTokens(TypedefParser.KW_I8); }
		public TerminalNode KW_I8(int i) {
			return getToken(TypedefParser.KW_I8, i);
		}
		public TerminalNode EQ() { return getToken(TypedefParser.EQ, 0); }
		public I8LiteralContext i8Literal() {
			return getRuleContext(I8LiteralContext.class,0);
		}
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public I8FragmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_i8Fragment; }
	}

	public final I8FragmentContext i8Fragment() throws RecognitionException {
		I8FragmentContext _localctx = new I8FragmentContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_i8Fragment);
		int _la;
		try {
			setState(465);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(430);
				match(COLON);
				setState(434);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(431);
					match(WS);
					}
					}
					setState(436);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(437);
				match(KW_I8);
				setState(441);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(438);
					match(WS);
					}
					}
					setState(443);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(444);
				match(EQ);
				setState(448);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(445);
					match(WS);
					}
					}
					setState(450);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(451);
				((I8FragmentContext)_localctx).literal = i8Literal();
				setState(453);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I8) {
					{
					setState(452);
					match(KW_I8);
					}
				}

				}
				}
				break;
			case EQ:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(455);
				match(EQ);
				setState(459);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(456);
					match(WS);
					}
					}
					setState(461);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(462);
				((I8FragmentContext)_localctx).literal = i8Literal();
				setState(463);
				match(KW_I8);
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class I16FragmentContext extends ParserRuleContext {
		public I16LiteralContext literal;
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public List<TerminalNode> KW_I16() { return getTokens(TypedefParser.KW_I16); }
		public TerminalNode KW_I16(int i) {
			return getToken(TypedefParser.KW_I16, i);
		}
		public TerminalNode EQ() { return getToken(TypedefParser.EQ, 0); }
		public I16LiteralContext i16Literal() {
			return getRuleContext(I16LiteralContext.class,0);
		}
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public I16FragmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_i16Fragment; }
	}

	public final I16FragmentContext i16Fragment() throws RecognitionException {
		I16FragmentContext _localctx = new I16FragmentContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_i16Fragment);
		int _la;
		try {
			setState(502);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(467);
				match(COLON);
				setState(471);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(468);
					match(WS);
					}
					}
					setState(473);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(474);
				match(KW_I16);
				setState(478);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(475);
					match(WS);
					}
					}
					setState(480);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(481);
				match(EQ);
				setState(485);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(482);
					match(WS);
					}
					}
					setState(487);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(488);
				((I16FragmentContext)_localctx).literal = i16Literal();
				setState(490);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I16) {
					{
					setState(489);
					match(KW_I16);
					}
				}

				}
				}
				break;
			case EQ:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(492);
				match(EQ);
				setState(496);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(493);
					match(WS);
					}
					}
					setState(498);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(499);
				((I16FragmentContext)_localctx).literal = i16Literal();
				setState(500);
				match(KW_I16);
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class I32FragmentContext extends ParserRuleContext {
		public I32LiteralContext literal;
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public List<TerminalNode> KW_I32() { return getTokens(TypedefParser.KW_I32); }
		public TerminalNode KW_I32(int i) {
			return getToken(TypedefParser.KW_I32, i);
		}
		public TerminalNode EQ() { return getToken(TypedefParser.EQ, 0); }
		public I32LiteralContext i32Literal() {
			return getRuleContext(I32LiteralContext.class,0);
		}
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public I32FragmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_i32Fragment; }
	}

	public final I32FragmentContext i32Fragment() throws RecognitionException {
		I32FragmentContext _localctx = new I32FragmentContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_i32Fragment);
		int _la;
		try {
			setState(540);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(504);
				match(COLON);
				setState(508);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(505);
					match(WS);
					}
					}
					setState(510);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(511);
				match(KW_I32);
				setState(515);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(512);
					match(WS);
					}
					}
					setState(517);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(518);
				match(EQ);
				setState(522);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(519);
					match(WS);
					}
					}
					setState(524);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(525);
				((I32FragmentContext)_localctx).literal = i32Literal();
				setState(527);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I32) {
					{
					setState(526);
					match(KW_I32);
					}
				}

				}
				}
				break;
			case EQ:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(529);
				match(EQ);
				setState(533);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(530);
					match(WS);
					}
					}
					setState(535);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(536);
				((I32FragmentContext)_localctx).literal = i32Literal();
				setState(538);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I32) {
					{
					setState(537);
					match(KW_I32);
					}
				}

				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class I64FragmentContext extends ParserRuleContext {
		public I64LiteralContext literal;
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public List<TerminalNode> KW_I64() { return getTokens(TypedefParser.KW_I64); }
		public TerminalNode KW_I64(int i) {
			return getToken(TypedefParser.KW_I64, i);
		}
		public TerminalNode EQ() { return getToken(TypedefParser.EQ, 0); }
		public I64LiteralContext i64Literal() {
			return getRuleContext(I64LiteralContext.class,0);
		}
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public I64FragmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_i64Fragment; }
	}

	public final I64FragmentContext i64Fragment() throws RecognitionException {
		I64FragmentContext _localctx = new I64FragmentContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_i64Fragment);
		int _la;
		try {
			setState(577);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(542);
				match(COLON);
				setState(546);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(543);
					match(WS);
					}
					}
					setState(548);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(549);
				match(KW_I64);
				setState(553);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(550);
					match(WS);
					}
					}
					setState(555);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(556);
				match(EQ);
				setState(560);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(557);
					match(WS);
					}
					}
					setState(562);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(563);
				((I64FragmentContext)_localctx).literal = i64Literal();
				setState(565);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I64) {
					{
					setState(564);
					match(KW_I64);
					}
				}

				}
				}
				break;
			case EQ:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(567);
				match(EQ);
				setState(571);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(568);
					match(WS);
					}
					}
					setState(573);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(574);
				((I64FragmentContext)_localctx).literal = i64Literal();
				setState(575);
				match(KW_I64);
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Type_Context extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public ParameterizedTypeContext parameterizedType() {
			return getRuleContext(ParameterizedTypeContext.class,0);
		}
		public Type_Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type_; }
	}

	public final Type_Context type_() throws RecognitionException {
		Type_Context _localctx = new Type_Context(_ctx, getState());
		enterRule(_localctx, 34, RULE_type_);
		try {
			setState(581);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,73,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(579);
				identifier();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(580);
				parameterizedType();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ParameterizedTypeContext extends ParserRuleContext {
		public List<IdentifierContext> identifier() {
			return getRuleContexts(IdentifierContext.class);
		}
		public IdentifierContext identifier(int i) {
			return getRuleContext(IdentifierContext.class,i);
		}
		public TerminalNode LT() { return getToken(TypedefParser.LT, 0); }
		public TerminalNode GT() { return getToken(TypedefParser.GT, 0); }
		public List<U64LiteralContext> u64Literal() {
			return getRuleContexts(U64LiteralContext.class);
		}
		public U64LiteralContext u64Literal(int i) {
			return getRuleContext(U64LiteralContext.class,i);
		}
		public ParameterizedTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameterizedType; }
	}

	public final ParameterizedTypeContext parameterizedType() throws RecognitionException {
		ParameterizedTypeContext _localctx = new ParameterizedTypeContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_parameterizedType);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(583);
			identifier();
			setState(584);
			match(LT);
			setState(587); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				setState(587);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case NON_KEYWORD_IDENTIFIER:
				case RAW_ESCAPE:
					{
					setState(585);
					identifier();
					}
					break;
				case DEC_DIGITS:
				case DEC_DIGITS_UNDERSCORE:
				case HEX_PREFIX:
				case OCT_PREFIX:
				case BIN_PREFIX:
					{
					setState(586);
					u64Literal();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				setState(589); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( ((((_la - 83)) & ~0x3f) == 0 && ((1L << (_la - 83)) & ((1L << (NON_KEYWORD_IDENTIFIER - 83)) | (1L << (DEC_DIGITS - 83)) | (1L << (DEC_DIGITS_UNDERSCORE - 83)) | (1L << (HEX_PREFIX - 83)) | (1L << (OCT_PREFIX - 83)) | (1L << (BIN_PREFIX - 83)) | (1L << (RAW_ESCAPE - 83)))) != 0) );
			setState(591);
			match(GT);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypedefVersionDeclarationContext extends ParserRuleContext {
		public TerminalNode KW_TYPEDEF() { return getToken(TypedefParser.KW_TYPEDEF, 0); }
		public TerminalNode EQ() { return getToken(TypedefParser.EQ, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode SEMI() { return getToken(TypedefParser.SEMI, 0); }
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public TypedefVersionDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typedefVersionDeclaration; }
	}

	public final TypedefVersionDeclarationContext typedefVersionDeclaration() throws RecognitionException {
		TypedefVersionDeclarationContext _localctx = new TypedefVersionDeclarationContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_typedefVersionDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(593);
			match(KW_TYPEDEF);
			setState(597);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(594);
				match(WS);
				}
				}
				setState(599);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(600);
			match(EQ);
			setState(604);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(601);
				match(WS);
				}
				}
				setState(606);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(607);
			identifier();
			setState(611);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(608);
				match(WS);
				}
				}
				setState(613);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(614);
			match(SEMI);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ModuleDeclarationContext extends ParserRuleContext {
		public TerminalNode KW_MODULE() { return getToken(TypedefParser.KW_MODULE, 0); }
		public SimplePathContext simplePath() {
			return getRuleContext(SimplePathContext.class,0);
		}
		public TerminalNode SEMI() { return getToken(TypedefParser.SEMI, 0); }
		public ModuleDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_moduleDeclaration; }
	}

	public final ModuleDeclarationContext moduleDeclaration() throws RecognitionException {
		ModuleDeclarationContext _localctx = new ModuleDeclarationContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_moduleDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(616);
			match(KW_MODULE);
			setState(617);
			simplePath();
			setState(618);
			match(SEMI);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class UseDeclarationContext extends ParserRuleContext {
		public TerminalNode KW_USE() { return getToken(TypedefParser.KW_USE, 0); }
		public UseTreeContext useTree() {
			return getRuleContext(UseTreeContext.class,0);
		}
		public TerminalNode SEMI() { return getToken(TypedefParser.SEMI, 0); }
		public UseDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_useDeclaration; }
	}

	public final UseDeclarationContext useDeclaration() throws RecognitionException {
		UseDeclarationContext _localctx = new UseDeclarationContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_useDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(620);
			match(KW_USE);
			setState(621);
			useTree();
			setState(622);
			match(SEMI);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class UseTreeContext extends ParserRuleContext {
		public TerminalNode STAR() { return getToken(TypedefParser.STAR, 0); }
		public TerminalNode LBRACE() { return getToken(TypedefParser.LBRACE, 0); }
		public TerminalNode RBRACE() { return getToken(TypedefParser.RBRACE, 0); }
		public TerminalNode PATHSEP() { return getToken(TypedefParser.PATHSEP, 0); }
		public List<UseTreeContext> useTree() {
			return getRuleContexts(UseTreeContext.class);
		}
		public UseTreeContext useTree(int i) {
			return getRuleContext(UseTreeContext.class,i);
		}
		public SimplePathContext simplePath() {
			return getRuleContext(SimplePathContext.class,0);
		}
		public List<TerminalNode> COMMA() { return getTokens(TypedefParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(TypedefParser.COMMA, i);
		}
		public TerminalNode KW_AS() { return getToken(TypedefParser.KW_AS, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public UseTreeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_useTree; }
	}

	public final UseTreeContext useTree() throws RecognitionException {
		UseTreeContext _localctx = new UseTreeContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_useTree);
		int _la;
		try {
			int _alt;
			setState(653);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,86,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(628);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NON_KEYWORD_IDENTIFIER || _la==RAW_ESCAPE || _la==PATHSEP) {
					{
					setState(625);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,79,_ctx) ) {
					case 1:
						{
						setState(624);
						simplePath();
						}
						break;
					}
					setState(627);
					match(PATHSEP);
					}
				}

				setState(646);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case STAR:
					{
					setState(630);
					match(STAR);
					}
					break;
				case LBRACE:
					{
					setState(631);
					match(LBRACE);
					setState(643);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (((((_la - 83)) & ~0x3f) == 0 && ((1L << (_la - 83)) & ((1L << (NON_KEYWORD_IDENTIFIER - 83)) | (1L << (RAW_ESCAPE - 83)) | (1L << (STAR - 83)))) != 0) || _la==PATHSEP || _la==LBRACE) {
						{
						setState(632);
						useTree();
						setState(637);
						_errHandler.sync(this);
						_alt = getInterpreter().adaptivePredict(_input,81,_ctx);
						while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
							if ( _alt==1 ) {
								{
								{
								setState(633);
								match(COMMA);
								setState(634);
								useTree();
								}
								} 
							}
							setState(639);
							_errHandler.sync(this);
							_alt = getInterpreter().adaptivePredict(_input,81,_ctx);
						}
						setState(641);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==COMMA) {
							{
							setState(640);
							match(COMMA);
							}
						}

						}
					}

					setState(645);
					match(RBRACE);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(648);
				simplePath();
				setState(651);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_AS) {
					{
					setState(649);
					match(KW_AS);
					setState(650);
					identifier();
					}
				}

				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SimplePathContext extends ParserRuleContext {
		public List<IdentifierContext> identifier() {
			return getRuleContexts(IdentifierContext.class);
		}
		public IdentifierContext identifier(int i) {
			return getRuleContext(IdentifierContext.class,i);
		}
		public List<TerminalNode> PATHSEP() { return getTokens(TypedefParser.PATHSEP); }
		public TerminalNode PATHSEP(int i) {
			return getToken(TypedefParser.PATHSEP, i);
		}
		public SimplePathContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_simplePath; }
	}

	public final SimplePathContext simplePath() throws RecognitionException {
		SimplePathContext _localctx = new SimplePathContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_simplePath);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(656);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PATHSEP) {
				{
				setState(655);
				match(PATHSEP);
				}
			}

			setState(658);
			identifier();
			setState(663);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,88,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(659);
					match(PATHSEP);
					setState(660);
					identifier();
					}
					} 
				}
				setState(665);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,88,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BoolLiteralContext extends ParserRuleContext {
		public std::optional<bool> maybe_val;
		public TerminalNode KW_TRUE() { return getToken(TypedefParser.KW_TRUE, 0); }
		public TerminalNode KW_FALSE() { return getToken(TypedefParser.KW_FALSE, 0); }
		public BoolLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_boolLiteral; }
	}

	public final BoolLiteralContext boolLiteral() throws RecognitionException {
		BoolLiteralContext _localctx = new BoolLiteralContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_boolLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(666);
			_la = _input.LA(1);
			if ( !(_la==KW_FALSE || _la==KW_TRUE) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
			_ctx.stop = _input.LT(-1);

					// From boolLiteral grammar.
					if (_localctx->start->getType() == TypedefParser::KW_FALSE) {
						((BoolLiteralContext)_localctx).maybe_val =  false;
					} else if (_localctx->start->getType() == TypedefParser::KW_TRUE) {
						((BoolLiteralContext)_localctx).maybe_val =  true;
					} else {
						throw InputMismatchException(this);
					}	
					// End from boolLiteral grammar.
			  
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ByteLiteralContext extends ParserRuleContext {
		public std::optional<uint8_t> maybe_val;
		public TerminalNode BYTE_LITERAL() { return getToken(TypedefParser.BYTE_LITERAL, 0); }
		public ByteLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_byteLiteral; }
	}

	public final ByteLiteralContext byteLiteral() throws RecognitionException {
		ByteLiteralContext _localctx = new ByteLiteralContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_byteLiteral);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(668);
			match(BYTE_LITERAL);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CharLiteralContext extends ParserRuleContext {
		public std::optional<char32_t> maybe_val;
		public TerminalNode CHAR_LITERAL() { return getToken(TypedefParser.CHAR_LITERAL, 0); }
		public CharLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_charLiteral; }
	}

	public final CharLiteralContext charLiteral() throws RecognitionException {
		CharLiteralContext _localctx = new CharLiteralContext(_ctx, getState());
		enterRule(_localctx, 52, RULE_charLiteral);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(670);
			match(CHAR_LITERAL);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class F32LiteralContext extends ParserRuleContext {
		public std::optional<float> maybe_val;
		public TerminalNode FLOAT_LITERAL() { return getToken(TypedefParser.FLOAT_LITERAL, 0); }
		public F32LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_f32Literal; }
	}

	public final F32LiteralContext f32Literal() throws RecognitionException {
		F32LiteralContext _localctx = new F32LiteralContext(_ctx, getState());
		enterRule(_localctx, 54, RULE_f32Literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(672);
			match(FLOAT_LITERAL);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class F64LiteralContext extends ParserRuleContext {
		public std::optional<double> maybe_val;
		public TerminalNode FLOAT_LITERAL() { return getToken(TypedefParser.FLOAT_LITERAL, 0); }
		public F64LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_f64Literal; }
	}

	public final F64LiteralContext f64Literal() throws RecognitionException {
		F64LiteralContext _localctx = new F64LiteralContext(_ctx, getState());
		enterRule(_localctx, 56, RULE_f64Literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(674);
			match(FLOAT_LITERAL);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class U8LiteralContext extends ParserRuleContext {
		public std::optional<uint8_t> maybe_val;
		public TerminalNode DEC_DIGITS() { return getToken(TypedefParser.DEC_DIGITS, 0); }
		public TerminalNode DEC_DIGITS_UNDERSCORE() { return getToken(TypedefParser.DEC_DIGITS_UNDERSCORE, 0); }
		public TerminalNode HEX_PREFIX() { return getToken(TypedefParser.HEX_PREFIX, 0); }
		public TerminalNode OCT_PREFIX() { return getToken(TypedefParser.OCT_PREFIX, 0); }
		public TerminalNode BIN_PREFIX() { return getToken(TypedefParser.BIN_PREFIX, 0); }
		public TerminalNode HEX_DIGITS() { return getToken(TypedefParser.HEX_DIGITS, 0); }
		public TerminalNode HEX_DIGITS_UNDERSCORE() { return getToken(TypedefParser.HEX_DIGITS_UNDERSCORE, 0); }
		public TerminalNode OCT_DIGITS() { return getToken(TypedefParser.OCT_DIGITS, 0); }
		public TerminalNode OCT_DIGITS_UNDERSCORE() { return getToken(TypedefParser.OCT_DIGITS_UNDERSCORE, 0); }
		public TerminalNode BIN_DIGITS() { return getToken(TypedefParser.BIN_DIGITS, 0); }
		public TerminalNode BIN_DIGITS_UNDERSCORE() { return getToken(TypedefParser.BIN_DIGITS_UNDERSCORE, 0); }
		public U8LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_u8Literal; }
	}

	public final U8LiteralContext u8Literal() throws RecognitionException {
		U8LiteralContext _localctx = new U8LiteralContext(_ctx, getState());
		enterRule(_localctx, 58, RULE_u8Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(683);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
				{
				setState(676);
				_la = _input.LA(1);
				if ( !(_la==DEC_DIGITS || _la==DEC_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			case HEX_PREFIX:
				{
				{
				setState(677);
				match(HEX_PREFIX);
				setState(678);
				_la = _input.LA(1);
				if ( !(_la==HEX_DIGITS || _la==HEX_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			case OCT_PREFIX:
				{
				{
				setState(679);
				match(OCT_PREFIX);
				setState(680);
				_la = _input.LA(1);
				if ( !(_la==OCT_DIGITS || _la==OCT_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			case BIN_PREFIX:
				{
				{
				setState(681);
				match(BIN_PREFIX);
				setState(682);
				_la = _input.LA(1);
				if ( !(_la==BIN_DIGITS || _la==BIN_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			}
			}
			_ctx.stop = _input.LT(-1);

					((U8LiteralContext)_localctx).maybe_val =  GetIntValue<uint8_t>(this, _localctx);
			  
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class U16LiteralContext extends ParserRuleContext {
		public std::optional<uint16_t> maybe_val;
		public TerminalNode DEC_DIGITS() { return getToken(TypedefParser.DEC_DIGITS, 0); }
		public TerminalNode DEC_DIGITS_UNDERSCORE() { return getToken(TypedefParser.DEC_DIGITS_UNDERSCORE, 0); }
		public TerminalNode HEX_PREFIX() { return getToken(TypedefParser.HEX_PREFIX, 0); }
		public TerminalNode OCT_PREFIX() { return getToken(TypedefParser.OCT_PREFIX, 0); }
		public TerminalNode BIN_PREFIX() { return getToken(TypedefParser.BIN_PREFIX, 0); }
		public TerminalNode HEX_DIGITS() { return getToken(TypedefParser.HEX_DIGITS, 0); }
		public TerminalNode HEX_DIGITS_UNDERSCORE() { return getToken(TypedefParser.HEX_DIGITS_UNDERSCORE, 0); }
		public TerminalNode OCT_DIGITS() { return getToken(TypedefParser.OCT_DIGITS, 0); }
		public TerminalNode OCT_DIGITS_UNDERSCORE() { return getToken(TypedefParser.OCT_DIGITS_UNDERSCORE, 0); }
		public TerminalNode BIN_DIGITS() { return getToken(TypedefParser.BIN_DIGITS, 0); }
		public TerminalNode BIN_DIGITS_UNDERSCORE() { return getToken(TypedefParser.BIN_DIGITS_UNDERSCORE, 0); }
		public U16LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_u16Literal; }
	}

	public final U16LiteralContext u16Literal() throws RecognitionException {
		U16LiteralContext _localctx = new U16LiteralContext(_ctx, getState());
		enterRule(_localctx, 60, RULE_u16Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(692);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
				{
				setState(685);
				_la = _input.LA(1);
				if ( !(_la==DEC_DIGITS || _la==DEC_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			case HEX_PREFIX:
				{
				{
				setState(686);
				match(HEX_PREFIX);
				setState(687);
				_la = _input.LA(1);
				if ( !(_la==HEX_DIGITS || _la==HEX_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			case OCT_PREFIX:
				{
				{
				setState(688);
				match(OCT_PREFIX);
				setState(689);
				_la = _input.LA(1);
				if ( !(_la==OCT_DIGITS || _la==OCT_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			case BIN_PREFIX:
				{
				{
				setState(690);
				match(BIN_PREFIX);
				setState(691);
				_la = _input.LA(1);
				if ( !(_la==BIN_DIGITS || _la==BIN_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			}
			}
			_ctx.stop = _input.LT(-1);

					((U16LiteralContext)_localctx).maybe_val =  GetIntValue<uint16_t>(this, _localctx);
			  
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class U32LiteralContext extends ParserRuleContext {
		public std::optional<uint32_t> maybe_val;
		public TerminalNode DEC_DIGITS() { return getToken(TypedefParser.DEC_DIGITS, 0); }
		public TerminalNode DEC_DIGITS_UNDERSCORE() { return getToken(TypedefParser.DEC_DIGITS_UNDERSCORE, 0); }
		public TerminalNode HEX_PREFIX() { return getToken(TypedefParser.HEX_PREFIX, 0); }
		public TerminalNode OCT_PREFIX() { return getToken(TypedefParser.OCT_PREFIX, 0); }
		public TerminalNode BIN_PREFIX() { return getToken(TypedefParser.BIN_PREFIX, 0); }
		public TerminalNode HEX_DIGITS() { return getToken(TypedefParser.HEX_DIGITS, 0); }
		public TerminalNode HEX_DIGITS_UNDERSCORE() { return getToken(TypedefParser.HEX_DIGITS_UNDERSCORE, 0); }
		public TerminalNode OCT_DIGITS() { return getToken(TypedefParser.OCT_DIGITS, 0); }
		public TerminalNode OCT_DIGITS_UNDERSCORE() { return getToken(TypedefParser.OCT_DIGITS_UNDERSCORE, 0); }
		public TerminalNode BIN_DIGITS() { return getToken(TypedefParser.BIN_DIGITS, 0); }
		public TerminalNode BIN_DIGITS_UNDERSCORE() { return getToken(TypedefParser.BIN_DIGITS_UNDERSCORE, 0); }
		public U32LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_u32Literal; }
	}

	public final U32LiteralContext u32Literal() throws RecognitionException {
		U32LiteralContext _localctx = new U32LiteralContext(_ctx, getState());
		enterRule(_localctx, 62, RULE_u32Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(701);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
				{
				setState(694);
				_la = _input.LA(1);
				if ( !(_la==DEC_DIGITS || _la==DEC_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			case HEX_PREFIX:
				{
				{
				setState(695);
				match(HEX_PREFIX);
				setState(696);
				_la = _input.LA(1);
				if ( !(_la==HEX_DIGITS || _la==HEX_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			case OCT_PREFIX:
				{
				{
				setState(697);
				match(OCT_PREFIX);
				setState(698);
				_la = _input.LA(1);
				if ( !(_la==OCT_DIGITS || _la==OCT_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			case BIN_PREFIX:
				{
				{
				setState(699);
				match(BIN_PREFIX);
				setState(700);
				_la = _input.LA(1);
				if ( !(_la==BIN_DIGITS || _la==BIN_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			}
			}
			_ctx.stop = _input.LT(-1);

					((U32LiteralContext)_localctx).maybe_val =  GetIntValue<uint32_t>(this, _localctx);
			  
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class U64LiteralContext extends ParserRuleContext {
		public std::optional<uint64_t> maybe_val;
		public TerminalNode DEC_DIGITS() { return getToken(TypedefParser.DEC_DIGITS, 0); }
		public TerminalNode DEC_DIGITS_UNDERSCORE() { return getToken(TypedefParser.DEC_DIGITS_UNDERSCORE, 0); }
		public TerminalNode HEX_PREFIX() { return getToken(TypedefParser.HEX_PREFIX, 0); }
		public TerminalNode OCT_PREFIX() { return getToken(TypedefParser.OCT_PREFIX, 0); }
		public TerminalNode BIN_PREFIX() { return getToken(TypedefParser.BIN_PREFIX, 0); }
		public TerminalNode HEX_DIGITS() { return getToken(TypedefParser.HEX_DIGITS, 0); }
		public TerminalNode HEX_DIGITS_UNDERSCORE() { return getToken(TypedefParser.HEX_DIGITS_UNDERSCORE, 0); }
		public TerminalNode OCT_DIGITS() { return getToken(TypedefParser.OCT_DIGITS, 0); }
		public TerminalNode OCT_DIGITS_UNDERSCORE() { return getToken(TypedefParser.OCT_DIGITS_UNDERSCORE, 0); }
		public TerminalNode BIN_DIGITS() { return getToken(TypedefParser.BIN_DIGITS, 0); }
		public TerminalNode BIN_DIGITS_UNDERSCORE() { return getToken(TypedefParser.BIN_DIGITS_UNDERSCORE, 0); }
		public U64LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_u64Literal; }
	}

	public final U64LiteralContext u64Literal() throws RecognitionException {
		U64LiteralContext _localctx = new U64LiteralContext(_ctx, getState());
		enterRule(_localctx, 64, RULE_u64Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(710);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
				{
				setState(703);
				_la = _input.LA(1);
				if ( !(_la==DEC_DIGITS || _la==DEC_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			case HEX_PREFIX:
				{
				{
				setState(704);
				match(HEX_PREFIX);
				setState(705);
				_la = _input.LA(1);
				if ( !(_la==HEX_DIGITS || _la==HEX_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			case OCT_PREFIX:
				{
				{
				setState(706);
				match(OCT_PREFIX);
				setState(707);
				_la = _input.LA(1);
				if ( !(_la==OCT_DIGITS || _la==OCT_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			case BIN_PREFIX:
				{
				{
				setState(708);
				match(BIN_PREFIX);
				setState(709);
				_la = _input.LA(1);
				if ( !(_la==BIN_DIGITS || _la==BIN_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			}
			}
			_ctx.stop = _input.LT(-1);

					((U64LiteralContext)_localctx).maybe_val =  GetIntValue<uint64_t>(this, _localctx);
			  
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class I8LiteralContext extends ParserRuleContext {
		public std::optional<int8_t> maybe_val;
		public TerminalNode DEC_DIGITS() { return getToken(TypedefParser.DEC_DIGITS, 0); }
		public TerminalNode DEC_DIGITS_UNDERSCORE() { return getToken(TypedefParser.DEC_DIGITS_UNDERSCORE, 0); }
		public TerminalNode HEX_PREFIX() { return getToken(TypedefParser.HEX_PREFIX, 0); }
		public TerminalNode OCT_PREFIX() { return getToken(TypedefParser.OCT_PREFIX, 0); }
		public TerminalNode BIN_PREFIX() { return getToken(TypedefParser.BIN_PREFIX, 0); }
		public TerminalNode HEX_DIGITS() { return getToken(TypedefParser.HEX_DIGITS, 0); }
		public TerminalNode HEX_DIGITS_UNDERSCORE() { return getToken(TypedefParser.HEX_DIGITS_UNDERSCORE, 0); }
		public TerminalNode OCT_DIGITS() { return getToken(TypedefParser.OCT_DIGITS, 0); }
		public TerminalNode OCT_DIGITS_UNDERSCORE() { return getToken(TypedefParser.OCT_DIGITS_UNDERSCORE, 0); }
		public TerminalNode BIN_DIGITS() { return getToken(TypedefParser.BIN_DIGITS, 0); }
		public TerminalNode BIN_DIGITS_UNDERSCORE() { return getToken(TypedefParser.BIN_DIGITS_UNDERSCORE, 0); }
		public I8LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_i8Literal; }
	}

	public final I8LiteralContext i8Literal() throws RecognitionException {
		I8LiteralContext _localctx = new I8LiteralContext(_ctx, getState());
		enterRule(_localctx, 66, RULE_i8Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(719);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
				{
				setState(712);
				_la = _input.LA(1);
				if ( !(_la==DEC_DIGITS || _la==DEC_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			case HEX_PREFIX:
				{
				{
				setState(713);
				match(HEX_PREFIX);
				setState(714);
				_la = _input.LA(1);
				if ( !(_la==HEX_DIGITS || _la==HEX_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			case OCT_PREFIX:
				{
				{
				setState(715);
				match(OCT_PREFIX);
				setState(716);
				_la = _input.LA(1);
				if ( !(_la==OCT_DIGITS || _la==OCT_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			case BIN_PREFIX:
				{
				{
				setState(717);
				match(BIN_PREFIX);
				setState(718);
				_la = _input.LA(1);
				if ( !(_la==BIN_DIGITS || _la==BIN_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			}
			}
			_ctx.stop = _input.LT(-1);

					((I8LiteralContext)_localctx).maybe_val =  GetIntValue<int8_t>(this, _localctx);
			  
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class I16LiteralContext extends ParserRuleContext {
		public std::optional<int16_t> maybe_val;
		public TerminalNode DEC_DIGITS() { return getToken(TypedefParser.DEC_DIGITS, 0); }
		public TerminalNode DEC_DIGITS_UNDERSCORE() { return getToken(TypedefParser.DEC_DIGITS_UNDERSCORE, 0); }
		public TerminalNode HEX_PREFIX() { return getToken(TypedefParser.HEX_PREFIX, 0); }
		public TerminalNode OCT_PREFIX() { return getToken(TypedefParser.OCT_PREFIX, 0); }
		public TerminalNode BIN_PREFIX() { return getToken(TypedefParser.BIN_PREFIX, 0); }
		public TerminalNode HEX_DIGITS() { return getToken(TypedefParser.HEX_DIGITS, 0); }
		public TerminalNode HEX_DIGITS_UNDERSCORE() { return getToken(TypedefParser.HEX_DIGITS_UNDERSCORE, 0); }
		public TerminalNode OCT_DIGITS() { return getToken(TypedefParser.OCT_DIGITS, 0); }
		public TerminalNode OCT_DIGITS_UNDERSCORE() { return getToken(TypedefParser.OCT_DIGITS_UNDERSCORE, 0); }
		public TerminalNode BIN_DIGITS() { return getToken(TypedefParser.BIN_DIGITS, 0); }
		public TerminalNode BIN_DIGITS_UNDERSCORE() { return getToken(TypedefParser.BIN_DIGITS_UNDERSCORE, 0); }
		public I16LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_i16Literal; }
	}

	public final I16LiteralContext i16Literal() throws RecognitionException {
		I16LiteralContext _localctx = new I16LiteralContext(_ctx, getState());
		enterRule(_localctx, 68, RULE_i16Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(728);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
				{
				setState(721);
				_la = _input.LA(1);
				if ( !(_la==DEC_DIGITS || _la==DEC_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			case HEX_PREFIX:
				{
				{
				setState(722);
				match(HEX_PREFIX);
				setState(723);
				_la = _input.LA(1);
				if ( !(_la==HEX_DIGITS || _la==HEX_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			case OCT_PREFIX:
				{
				{
				setState(724);
				match(OCT_PREFIX);
				setState(725);
				_la = _input.LA(1);
				if ( !(_la==OCT_DIGITS || _la==OCT_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			case BIN_PREFIX:
				{
				{
				setState(726);
				match(BIN_PREFIX);
				setState(727);
				_la = _input.LA(1);
				if ( !(_la==BIN_DIGITS || _la==BIN_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			}
			}
			_ctx.stop = _input.LT(-1);

					((I16LiteralContext)_localctx).maybe_val =  GetIntValue<int16_t>(this, _localctx);
			  
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class I32LiteralContext extends ParserRuleContext {
		public std::optional<int32_t> maybe_val;
		public TerminalNode DEC_DIGITS() { return getToken(TypedefParser.DEC_DIGITS, 0); }
		public TerminalNode DEC_DIGITS_UNDERSCORE() { return getToken(TypedefParser.DEC_DIGITS_UNDERSCORE, 0); }
		public TerminalNode HEX_PREFIX() { return getToken(TypedefParser.HEX_PREFIX, 0); }
		public TerminalNode OCT_PREFIX() { return getToken(TypedefParser.OCT_PREFIX, 0); }
		public TerminalNode BIN_PREFIX() { return getToken(TypedefParser.BIN_PREFIX, 0); }
		public TerminalNode HEX_DIGITS() { return getToken(TypedefParser.HEX_DIGITS, 0); }
		public TerminalNode HEX_DIGITS_UNDERSCORE() { return getToken(TypedefParser.HEX_DIGITS_UNDERSCORE, 0); }
		public TerminalNode OCT_DIGITS() { return getToken(TypedefParser.OCT_DIGITS, 0); }
		public TerminalNode OCT_DIGITS_UNDERSCORE() { return getToken(TypedefParser.OCT_DIGITS_UNDERSCORE, 0); }
		public TerminalNode BIN_DIGITS() { return getToken(TypedefParser.BIN_DIGITS, 0); }
		public TerminalNode BIN_DIGITS_UNDERSCORE() { return getToken(TypedefParser.BIN_DIGITS_UNDERSCORE, 0); }
		public I32LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_i32Literal; }
	}

	public final I32LiteralContext i32Literal() throws RecognitionException {
		I32LiteralContext _localctx = new I32LiteralContext(_ctx, getState());
		enterRule(_localctx, 70, RULE_i32Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(737);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
				{
				setState(730);
				_la = _input.LA(1);
				if ( !(_la==DEC_DIGITS || _la==DEC_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			case HEX_PREFIX:
				{
				{
				setState(731);
				match(HEX_PREFIX);
				setState(732);
				_la = _input.LA(1);
				if ( !(_la==HEX_DIGITS || _la==HEX_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			case OCT_PREFIX:
				{
				{
				setState(733);
				match(OCT_PREFIX);
				setState(734);
				_la = _input.LA(1);
				if ( !(_la==OCT_DIGITS || _la==OCT_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			case BIN_PREFIX:
				{
				{
				setState(735);
				match(BIN_PREFIX);
				setState(736);
				_la = _input.LA(1);
				if ( !(_la==BIN_DIGITS || _la==BIN_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}

					((I32LiteralContext)_localctx).maybe_val =  GetIntValue<int32_t>(this, _localctx);
			  
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class I64LiteralContext extends ParserRuleContext {
		public std::optional<int64_t> maybe_val;
		public TerminalNode DEC_DIGITS() { return getToken(TypedefParser.DEC_DIGITS, 0); }
		public TerminalNode DEC_DIGITS_UNDERSCORE() { return getToken(TypedefParser.DEC_DIGITS_UNDERSCORE, 0); }
		public TerminalNode HEX_PREFIX() { return getToken(TypedefParser.HEX_PREFIX, 0); }
		public TerminalNode OCT_PREFIX() { return getToken(TypedefParser.OCT_PREFIX, 0); }
		public TerminalNode BIN_PREFIX() { return getToken(TypedefParser.BIN_PREFIX, 0); }
		public TerminalNode HEX_DIGITS() { return getToken(TypedefParser.HEX_DIGITS, 0); }
		public TerminalNode HEX_DIGITS_UNDERSCORE() { return getToken(TypedefParser.HEX_DIGITS_UNDERSCORE, 0); }
		public TerminalNode OCT_DIGITS() { return getToken(TypedefParser.OCT_DIGITS, 0); }
		public TerminalNode OCT_DIGITS_UNDERSCORE() { return getToken(TypedefParser.OCT_DIGITS_UNDERSCORE, 0); }
		public TerminalNode BIN_DIGITS() { return getToken(TypedefParser.BIN_DIGITS, 0); }
		public TerminalNode BIN_DIGITS_UNDERSCORE() { return getToken(TypedefParser.BIN_DIGITS_UNDERSCORE, 0); }
		public I64LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_i64Literal; }
	}

	public final I64LiteralContext i64Literal() throws RecognitionException {
		I64LiteralContext _localctx = new I64LiteralContext(_ctx, getState());
		enterRule(_localctx, 72, RULE_i64Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(748);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
				{
				setState(741);
				_la = _input.LA(1);
				if ( !(_la==DEC_DIGITS || _la==DEC_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			case HEX_PREFIX:
				{
				{
				setState(742);
				match(HEX_PREFIX);
				setState(743);
				_la = _input.LA(1);
				if ( !(_la==HEX_DIGITS || _la==HEX_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			case OCT_PREFIX:
				{
				{
				setState(744);
				match(OCT_PREFIX);
				setState(745);
				_la = _input.LA(1);
				if ( !(_la==OCT_DIGITS || _la==OCT_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			case BIN_PREFIX:
				{
				{
				setState(746);
				match(BIN_PREFIX);
				setState(747);
				_la = _input.LA(1);
				if ( !(_la==BIN_DIGITS || _la==BIN_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}

					((I64LiteralContext)_localctx).maybe_val =  GetIntValue<int64_t>(this, _localctx);
			  
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StringLiteralContext extends ParserRuleContext {
		public std::optional<std::string> maybe_val;
		public TerminalNode STRING_LITERAL() { return getToken(TypedefParser.STRING_LITERAL, 0); }
		public TerminalNode RAW_STRING_LITERAL() { return getToken(TypedefParser.RAW_STRING_LITERAL, 0); }
		public StringLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stringLiteral; }
	}

	public final StringLiteralContext stringLiteral() throws RecognitionException {
		StringLiteralContext _localctx = new StringLiteralContext(_ctx, getState());
		enterRule(_localctx, 74, RULE_stringLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(752);
			_la = _input.LA(1);
			if ( !(_la==STRING_LITERAL || _la==RAW_STRING_LITERAL) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ByteStringLiteralContext extends ParserRuleContext {
		public std::optional<std::string> maybe_val;
		public TerminalNode BYTE_STRING_LITERAL() { return getToken(TypedefParser.BYTE_STRING_LITERAL, 0); }
		public TerminalNode RAW_BYTE_STRING_LITERAL() { return getToken(TypedefParser.RAW_BYTE_STRING_LITERAL, 0); }
		public ByteStringLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_byteStringLiteral; }
	}

	public final ByteStringLiteralContext byteStringLiteral() throws RecognitionException {
		ByteStringLiteralContext _localctx = new ByteStringLiteralContext(_ctx, getState());
		enterRule(_localctx, 76, RULE_byteStringLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(754);
			_la = _input.LA(1);
			if ( !(_la==BYTE_STRING_LITERAL || _la==RAW_BYTE_STRING_LITERAL) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IdentifierContext extends ParserRuleContext {
		public std::string id;
		public Token nki;
		public TerminalNode NON_KEYWORD_IDENTIFIER() { return getToken(TypedefParser.NON_KEYWORD_IDENTIFIER, 0); }
		public TerminalNode RAW_ESCAPE() { return getToken(TypedefParser.RAW_ESCAPE, 0); }
		public IdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_identifier; }
	}

	public final IdentifierContext identifier() throws RecognitionException {
		IdentifierContext _localctx = new IdentifierContext(_ctx, getState());
		enterRule(_localctx, 78, RULE_identifier);
		try {
			setState(759);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NON_KEYWORD_IDENTIFIER:
				enterOuterAlt(_localctx, 1);
				{
				setState(756);
				((IdentifierContext)_localctx).nki = match(NON_KEYWORD_IDENTIFIER);
				}
				break;
			case RAW_ESCAPE:
				enterOuterAlt(_localctx, 2);
				{
				setState(757);
				match(RAW_ESCAPE);
				setState(758);
				((IdentifierContext)_localctx).nki = match(NON_KEYWORD_IDENTIFIER);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);

					((IdentifierContext)_localctx).id =  ((IdentifierContext)_localctx).nki->getText();
			  
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class KeywordContext extends ParserRuleContext {
		public TerminalNode KW_AS() { return getToken(TypedefParser.KW_AS, 0); }
		public TerminalNode KW_ENUM() { return getToken(TypedefParser.KW_ENUM, 0); }
		public TerminalNode KW_FALSE() { return getToken(TypedefParser.KW_FALSE, 0); }
		public TerminalNode KW_FN() { return getToken(TypedefParser.KW_FN, 0); }
		public TerminalNode KW_IMPL() { return getToken(TypedefParser.KW_IMPL, 0); }
		public TerminalNode KW_MODULE() { return getToken(TypedefParser.KW_MODULE, 0); }
		public TerminalNode KW_STRUCT() { return getToken(TypedefParser.KW_STRUCT, 0); }
		public TerminalNode KW_TRUE() { return getToken(TypedefParser.KW_TRUE, 0); }
		public TerminalNode KW_TYPE() { return getToken(TypedefParser.KW_TYPE, 0); }
		public TerminalNode KW_TYPEDEF() { return getToken(TypedefParser.KW_TYPEDEF, 0); }
		public TerminalNode KW_USE() { return getToken(TypedefParser.KW_USE, 0); }
		public TerminalNode KW_AND() { return getToken(TypedefParser.KW_AND, 0); }
		public TerminalNode KW_IN() { return getToken(TypedefParser.KW_IN, 0); }
		public TerminalNode KW_LET() { return getToken(TypedefParser.KW_LET, 0); }
		public TerminalNode KW_NOT() { return getToken(TypedefParser.KW_NOT, 0); }
		public TerminalNode KW_OR() { return getToken(TypedefParser.KW_OR, 0); }
		public TerminalNode KW_SIZEOF() { return getToken(TypedefParser.KW_SIZEOF, 0); }
		public TerminalNode KW_THIS() { return getToken(TypedefParser.KW_THIS, 0); }
		public TerminalNode KW_TRAIT() { return getToken(TypedefParser.KW_TRAIT, 0); }
		public TerminalNode KW_WHERE() { return getToken(TypedefParser.KW_WHERE, 0); }
		public TerminalNode KW_XOR() { return getToken(TypedefParser.KW_XOR, 0); }
		public TerminalNode KW_BREAK() { return getToken(TypedefParser.KW_BREAK, 0); }
		public TerminalNode KW_CONTINUE() { return getToken(TypedefParser.KW_CONTINUE, 0); }
		public TerminalNode KW_DEFAULT() { return getToken(TypedefParser.KW_DEFAULT, 0); }
		public TerminalNode KW_DO() { return getToken(TypedefParser.KW_DO, 0); }
		public TerminalNode KW_ELSE() { return getToken(TypedefParser.KW_ELSE, 0); }
		public TerminalNode KW_FOR() { return getToken(TypedefParser.KW_FOR, 0); }
		public TerminalNode KW_GOTO() { return getToken(TypedefParser.KW_GOTO, 0); }
		public TerminalNode KW_IF() { return getToken(TypedefParser.KW_IF, 0); }
		public TerminalNode KW_LOOP() { return getToken(TypedefParser.KW_LOOP, 0); }
		public TerminalNode KW_MATCH() { return getToken(TypedefParser.KW_MATCH, 0); }
		public TerminalNode KW_MOVE() { return getToken(TypedefParser.KW_MOVE, 0); }
		public TerminalNode KW_RETURN() { return getToken(TypedefParser.KW_RETURN, 0); }
		public TerminalNode KW_TRY() { return getToken(TypedefParser.KW_TRY, 0); }
		public TerminalNode KW_WHILE() { return getToken(TypedefParser.KW_WHILE, 0); }
		public TerminalNode KW_YIELD() { return getToken(TypedefParser.KW_YIELD, 0); }
		public TerminalNode KW_ABSTRACT() { return getToken(TypedefParser.KW_ABSTRACT, 0); }
		public TerminalNode KW_AUTO() { return getToken(TypedefParser.KW_AUTO, 0); }
		public TerminalNode KW_CONST() { return getToken(TypedefParser.KW_CONST, 0); }
		public TerminalNode KW_DOUBLE() { return getToken(TypedefParser.KW_DOUBLE, 0); }
		public TerminalNode KW_EXTERN() { return getToken(TypedefParser.KW_EXTERN, 0); }
		public TerminalNode KW_FINAL() { return getToken(TypedefParser.KW_FINAL, 0); }
		public TerminalNode KW_FLOAT() { return getToken(TypedefParser.KW_FLOAT, 0); }
		public TerminalNode KW_INT() { return getToken(TypedefParser.KW_INT, 0); }
		public TerminalNode KW_LONG() { return getToken(TypedefParser.KW_LONG, 0); }
		public TerminalNode KW_MACRO() { return getToken(TypedefParser.KW_MACRO, 0); }
		public TerminalNode KW_MUT() { return getToken(TypedefParser.KW_MUT, 0); }
		public TerminalNode KW_OVERRIDE() { return getToken(TypedefParser.KW_OVERRIDE, 0); }
		public TerminalNode KW_PRIVATE() { return getToken(TypedefParser.KW_PRIVATE, 0); }
		public TerminalNode KW_PUB() { return getToken(TypedefParser.KW_PUB, 0); }
		public TerminalNode KW_REF() { return getToken(TypedefParser.KW_REF, 0); }
		public TerminalNode KW_SELFTYPE() { return getToken(TypedefParser.KW_SELFTYPE, 0); }
		public TerminalNode KW_SELFVALUE() { return getToken(TypedefParser.KW_SELFVALUE, 0); }
		public TerminalNode KW_SIGNED() { return getToken(TypedefParser.KW_SIGNED, 0); }
		public TerminalNode KW_STATIC() { return getToken(TypedefParser.KW_STATIC, 0); }
		public TerminalNode KW_SUPER() { return getToken(TypedefParser.KW_SUPER, 0); }
		public TerminalNode KW_SWITCH() { return getToken(TypedefParser.KW_SWITCH, 0); }
		public TerminalNode KW_TYPEOF() { return getToken(TypedefParser.KW_TYPEOF, 0); }
		public TerminalNode KW_UNION() { return getToken(TypedefParser.KW_UNION, 0); }
		public TerminalNode KW_UNSAFE() { return getToken(TypedefParser.KW_UNSAFE, 0); }
		public TerminalNode KW_UNSIGNED() { return getToken(TypedefParser.KW_UNSIGNED, 0); }
		public TerminalNode KW_UNSIZED() { return getToken(TypedefParser.KW_UNSIZED, 0); }
		public TerminalNode KW_VIRTUAL() { return getToken(TypedefParser.KW_VIRTUAL, 0); }
		public TerminalNode KW_VOID() { return getToken(TypedefParser.KW_VOID, 0); }
		public TerminalNode KW_VOLATILE() { return getToken(TypedefParser.KW_VOLATILE, 0); }
		public KeywordContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_keyword; }
	}

	public final KeywordContext keyword() throws RecognitionException {
		KeywordContext _localctx = new KeywordContext(_ctx, getState());
		enterRule(_localctx, 80, RULE_keyword);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(761);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << KW_AS) | (1L << KW_ENUM) | (1L << KW_FALSE) | (1L << KW_FN) | (1L << KW_IMPL) | (1L << KW_MODULE) | (1L << KW_STRUCT) | (1L << KW_TRUE) | (1L << KW_TYPE) | (1L << KW_TYPEDEF) | (1L << KW_USE) | (1L << KW_AND) | (1L << KW_IN) | (1L << KW_LET) | (1L << KW_NOT) | (1L << KW_OR) | (1L << KW_SIZEOF) | (1L << KW_THIS) | (1L << KW_TRAIT) | (1L << KW_WHERE) | (1L << KW_XOR) | (1L << KW_BREAK) | (1L << KW_CONTINUE) | (1L << KW_DEFAULT) | (1L << KW_DO) | (1L << KW_ELSE) | (1L << KW_FOR) | (1L << KW_GOTO) | (1L << KW_IF) | (1L << KW_LOOP) | (1L << KW_MATCH) | (1L << KW_MOVE) | (1L << KW_RETURN) | (1L << KW_TRY) | (1L << KW_WHILE) | (1L << KW_YIELD) | (1L << KW_ABSTRACT) | (1L << KW_AUTO) | (1L << KW_CONST) | (1L << KW_DOUBLE) | (1L << KW_EXTERN) | (1L << KW_FINAL) | (1L << KW_FLOAT) | (1L << KW_INT) | (1L << KW_LONG) | (1L << KW_MACRO) | (1L << KW_MUT) | (1L << KW_OVERRIDE) | (1L << KW_PRIVATE) | (1L << KW_PUB) | (1L << KW_REF) | (1L << KW_SELFTYPE) | (1L << KW_SELFVALUE) | (1L << KW_SIGNED) | (1L << KW_STATIC) | (1L << KW_SUPER) | (1L << KW_SWITCH) | (1L << KW_TYPEOF) | (1L << KW_UNION))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (KW_UNSAFE - 64)) | (1L << (KW_UNSIGNED - 64)) | (1L << (KW_UNSIZED - 64)) | (1L << (KW_VIRTUAL - 64)) | (1L << (KW_VOID - 64)) | (1L << (KW_VOLATILE - 64)))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u00a5\u02fe\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\3\2\3\2"+
		"\7\2W\n\2\f\2\16\2Z\13\2\3\2\5\2]\n\2\3\2\7\2`\n\2\f\2\16\2c\13\2\3\2"+
		"\7\2f\n\2\f\2\16\2i\13\2\3\2\7\2l\n\2\f\2\16\2o\13\2\3\2\7\2r\n\2\f\2"+
		"\16\2u\13\2\3\2\7\2x\n\2\f\2\16\2{\13\2\3\2\3\2\3\3\3\3\3\4\3\4\7\4\u0083"+
		"\n\4\f\4\16\4\u0086\13\4\3\4\3\4\7\4\u008a\n\4\f\4\16\4\u008d\13\4\3\4"+
		"\3\4\3\4\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3"+
		"\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5"+
		"\3\5\3\5\3\5\3\5\3\5\3\5\5\5\u00b9\n\5\3\6\3\6\7\6\u00bd\n\6\f\6\16\6"+
		"\u00c0\13\6\3\6\5\6\u00c3\n\6\3\6\7\6\u00c6\n\6\f\6\16\6\u00c9\13\6\3"+
		"\6\3\6\7\6\u00cd\n\6\f\6\16\6\u00d0\13\6\3\6\3\6\3\7\3\7\7\7\u00d6\n\7"+
		"\f\7\16\7\u00d9\13\7\3\7\5\7\u00dc\n\7\3\7\7\7\u00df\n\7\f\7\16\7\u00e2"+
		"\13\7\3\7\3\7\7\7\u00e6\n\7\f\7\16\7\u00e9\13\7\3\7\3\7\3\b\3\b\7\b\u00ef"+
		"\n\b\f\b\16\b\u00f2\13\b\3\b\3\b\7\b\u00f6\n\b\f\b\16\b\u00f9\13\b\3\b"+
		"\3\b\3\t\3\t\7\t\u00ff\n\t\f\t\16\t\u0102\13\t\3\t\3\t\7\t\u0106\n\t\f"+
		"\t\16\t\u0109\13\t\3\t\3\t\3\n\3\n\7\n\u010f\n\n\f\n\16\n\u0112\13\n\3"+
		"\n\3\n\7\n\u0116\n\n\f\n\16\n\u0119\13\n\3\n\3\n\3\13\3\13\7\13\u011f"+
		"\n\13\f\13\16\13\u0122\13\13\3\13\3\13\7\13\u0126\n\13\f\13\16\13\u0129"+
		"\13\13\3\13\3\13\7\13\u012d\n\13\f\13\16\13\u0130\13\13\3\13\3\13\5\13"+
		"\u0134\n\13\3\13\3\13\7\13\u0138\n\13\f\13\16\13\u013b\13\13\3\13\3\13"+
		"\3\13\5\13\u0140\n\13\3\f\3\f\7\f\u0144\n\f\f\f\16\f\u0147\13\f\3\f\3"+
		"\f\7\f\u014b\n\f\f\f\16\f\u014e\13\f\3\f\3\f\7\f\u0152\n\f\f\f\16\f\u0155"+
		"\13\f\3\f\3\f\5\f\u0159\n\f\3\f\3\f\7\f\u015d\n\f\f\f\16\f\u0160\13\f"+
		"\3\f\3\f\3\f\5\f\u0165\n\f\3\r\3\r\7\r\u0169\n\r\f\r\16\r\u016c\13\r\3"+
		"\r\3\r\7\r\u0170\n\r\f\r\16\r\u0173\13\r\3\r\3\r\7\r\u0177\n\r\f\r\16"+
		"\r\u017a\13\r\3\r\3\r\5\r\u017e\n\r\3\r\3\r\7\r\u0182\n\r\f\r\16\r\u0185"+
		"\13\r\3\r\3\r\3\r\5\r\u018a\n\r\3\16\3\16\7\16\u018e\n\16\f\16\16\16\u0191"+
		"\13\16\3\16\3\16\7\16\u0195\n\16\f\16\16\16\u0198\13\16\3\16\3\16\7\16"+
		"\u019c\n\16\f\16\16\16\u019f\13\16\3\16\3\16\5\16\u01a3\n\16\3\16\3\16"+
		"\7\16\u01a7\n\16\f\16\16\16\u01aa\13\16\3\16\3\16\3\16\5\16\u01af\n\16"+
		"\3\17\3\17\7\17\u01b3\n\17\f\17\16\17\u01b6\13\17\3\17\3\17\7\17\u01ba"+
		"\n\17\f\17\16\17\u01bd\13\17\3\17\3\17\7\17\u01c1\n\17\f\17\16\17\u01c4"+
		"\13\17\3\17\3\17\5\17\u01c8\n\17\3\17\3\17\7\17\u01cc\n\17\f\17\16\17"+
		"\u01cf\13\17\3\17\3\17\3\17\5\17\u01d4\n\17\3\20\3\20\7\20\u01d8\n\20"+
		"\f\20\16\20\u01db\13\20\3\20\3\20\7\20\u01df\n\20\f\20\16\20\u01e2\13"+
		"\20\3\20\3\20\7\20\u01e6\n\20\f\20\16\20\u01e9\13\20\3\20\3\20\5\20\u01ed"+
		"\n\20\3\20\3\20\7\20\u01f1\n\20\f\20\16\20\u01f4\13\20\3\20\3\20\3\20"+
		"\5\20\u01f9\n\20\3\21\3\21\7\21\u01fd\n\21\f\21\16\21\u0200\13\21\3\21"+
		"\3\21\7\21\u0204\n\21\f\21\16\21\u0207\13\21\3\21\3\21\7\21\u020b\n\21"+
		"\f\21\16\21\u020e\13\21\3\21\3\21\5\21\u0212\n\21\3\21\3\21\7\21\u0216"+
		"\n\21\f\21\16\21\u0219\13\21\3\21\3\21\5\21\u021d\n\21\5\21\u021f\n\21"+
		"\3\22\3\22\7\22\u0223\n\22\f\22\16\22\u0226\13\22\3\22\3\22\7\22\u022a"+
		"\n\22\f\22\16\22\u022d\13\22\3\22\3\22\7\22\u0231\n\22\f\22\16\22\u0234"+
		"\13\22\3\22\3\22\5\22\u0238\n\22\3\22\3\22\7\22\u023c\n\22\f\22\16\22"+
		"\u023f\13\22\3\22\3\22\3\22\5\22\u0244\n\22\3\23\3\23\5\23\u0248\n\23"+
		"\3\24\3\24\3\24\3\24\6\24\u024e\n\24\r\24\16\24\u024f\3\24\3\24\3\25\3"+
		"\25\7\25\u0256\n\25\f\25\16\25\u0259\13\25\3\25\3\25\7\25\u025d\n\25\f"+
		"\25\16\25\u0260\13\25\3\25\3\25\7\25\u0264\n\25\f\25\16\25\u0267\13\25"+
		"\3\25\3\25\3\26\3\26\3\26\3\26\3\27\3\27\3\27\3\27\3\30\5\30\u0274\n\30"+
		"\3\30\5\30\u0277\n\30\3\30\3\30\3\30\3\30\3\30\7\30\u027e\n\30\f\30\16"+
		"\30\u0281\13\30\3\30\5\30\u0284\n\30\5\30\u0286\n\30\3\30\5\30\u0289\n"+
		"\30\3\30\3\30\3\30\5\30\u028e\n\30\5\30\u0290\n\30\3\31\5\31\u0293\n\31"+
		"\3\31\3\31\3\31\7\31\u0298\n\31\f\31\16\31\u029b\13\31\3\32\3\32\3\33"+
		"\3\33\3\34\3\34\3\35\3\35\3\36\3\36\3\37\3\37\3\37\3\37\3\37\3\37\3\37"+
		"\5\37\u02ae\n\37\3 \3 \3 \3 \3 \3 \3 \5 \u02b7\n \3!\3!\3!\3!\3!\3!\3"+
		"!\5!\u02c0\n!\3\"\3\"\3\"\3\"\3\"\3\"\3\"\5\"\u02c9\n\"\3#\3#\3#\3#\3"+
		"#\3#\3#\5#\u02d2\n#\3$\3$\3$\3$\3$\3$\3$\5$\u02db\n$\3%\3%\3%\3%\3%\3"+
		"%\3%\5%\u02e4\n%\3%\3%\3&\3&\3&\3&\3&\3&\3&\5&\u02ef\n&\3&\3&\3\'\3\'"+
		"\3(\3(\3)\3)\3)\5)\u02fa\n)\3*\3*\3*\2\2+\2\4\6\b\n\f\16\20\22\24\26\30"+
		"\32\34\36 \"$&(*,.\60\62\64\668:<>@BDFHJLNPR\2\n\4\2\6\6\f\f\3\2ef\3\2"+
		"gh\3\2ij\3\2kl\3\2`a\3\2cd\5\2\4\b\n\17\22G\2\u0351\2T\3\2\2\2\4~\3\2"+
		"\2\2\6\u0080\3\2\2\2\b\u00b8\3\2\2\2\n\u00c2\3\2\2\2\f\u00db\3\2\2\2\16"+
		"\u00ec\3\2\2\2\20\u00fc\3\2\2\2\22\u010c\3\2\2\2\24\u013f\3\2\2\2\26\u0164"+
		"\3\2\2\2\30\u0189\3\2\2\2\32\u01ae\3\2\2\2\34\u01d3\3\2\2\2\36\u01f8\3"+
		"\2\2\2 \u021e\3\2\2\2\"\u0243\3\2\2\2$\u0247\3\2\2\2&\u0249\3\2\2\2(\u0253"+
		"\3\2\2\2*\u026a\3\2\2\2,\u026e\3\2\2\2.\u028f\3\2\2\2\60\u0292\3\2\2\2"+
		"\62\u029c\3\2\2\2\64\u029e\3\2\2\2\66\u02a0\3\2\2\28\u02a2\3\2\2\2:\u02a4"+
		"\3\2\2\2<\u02ad\3\2\2\2>\u02b6\3\2\2\2@\u02bf\3\2\2\2B\u02c8\3\2\2\2D"+
		"\u02d1\3\2\2\2F\u02da\3\2\2\2H\u02e3\3\2\2\2J\u02ee\3\2\2\2L\u02f2\3\2"+
		"\2\2N\u02f4\3\2\2\2P\u02f9\3\2\2\2R\u02fb\3\2\2\2TX\5(\25\2UW\7^\2\2V"+
		"U\3\2\2\2WZ\3\2\2\2XV\3\2\2\2XY\3\2\2\2Y\\\3\2\2\2ZX\3\2\2\2[]\5*\26\2"+
		"\\[\3\2\2\2\\]\3\2\2\2]g\3\2\2\2^`\7^\2\2_^\3\2\2\2`c\3\2\2\2a_\3\2\2"+
		"\2ab\3\2\2\2bd\3\2\2\2ca\3\2\2\2df\5,\27\2ea\3\2\2\2fi\3\2\2\2ge\3\2\2"+
		"\2gh\3\2\2\2hs\3\2\2\2ig\3\2\2\2jl\7^\2\2kj\3\2\2\2lo\3\2\2\2mk\3\2\2"+
		"\2mn\3\2\2\2np\3\2\2\2om\3\2\2\2pr\5\4\3\2qm\3\2\2\2ru\3\2\2\2sq\3\2\2"+
		"\2st\3\2\2\2ty\3\2\2\2us\3\2\2\2vx\7^\2\2wv\3\2\2\2x{\3\2\2\2yw\3\2\2"+
		"\2yz\3\2\2\2z|\3\2\2\2{y\3\2\2\2|}\7\2\2\3}\3\3\2\2\2~\177\5\6\4\2\177"+
		"\5\3\2\2\2\u0080\u0084\5P)\2\u0081\u0083\7^\2\2\u0082\u0081\3\2\2\2\u0083"+
		"\u0086\3\2\2\2\u0084\u0082\3\2\2\2\u0084\u0085\3\2\2\2\u0085\u0087\3\2"+
		"\2\2\u0086\u0084\3\2\2\2\u0087\u008b\5\b\5\2\u0088\u008a\7^\2\2\u0089"+
		"\u0088\3\2\2\2\u008a\u008d\3\2\2\2\u008b\u0089\3\2\2\2\u008b\u008c\3\2"+
		"\2\2\u008c\u008e\3\2\2\2\u008d\u008b\3\2\2\2\u008e\u008f\7\u0098\2\2\u008f"+
		"\u0090\b\4\1\2\u0090\7\3\2\2\2\u0091\u0092\5\n\6\2\u0092\u0093\b\5\1\2"+
		"\u0093\u00b9\3\2\2\2\u0094\u0095\5\f\7\2\u0095\u0096\b\5\1\2\u0096\u00b9"+
		"\3\2\2\2\u0097\u0098\5\16\b\2\u0098\u0099\b\5\1\2\u0099\u00b9\3\2\2\2"+
		"\u009a\u009b\5\20\t\2\u009b\u009c\b\5\1\2\u009c\u00b9\3\2\2\2\u009d\u009e"+
		"\5\22\n\2\u009e\u009f\b\5\1\2\u009f\u00b9\3\2\2\2\u00a0\u00a1\5\24\13"+
		"\2\u00a1\u00a2\b\5\1\2\u00a2\u00b9\3\2\2\2\u00a3\u00a4\5\26\f\2\u00a4"+
		"\u00a5\b\5\1\2\u00a5\u00b9\3\2\2\2\u00a6\u00a7\5\30\r\2\u00a7\u00a8\b"+
		"\5\1\2\u00a8\u00b9\3\2\2\2\u00a9\u00aa\5\32\16\2\u00aa\u00ab\b\5\1\2\u00ab"+
		"\u00b9\3\2\2\2\u00ac\u00ad\5\34\17\2\u00ad\u00ae\b\5\1\2\u00ae\u00b9\3"+
		"\2\2\2\u00af\u00b0\5\36\20\2\u00b0\u00b1\b\5\1\2\u00b1\u00b9\3\2\2\2\u00b2"+
		"\u00b3\5 \21\2\u00b3\u00b4\b\5\1\2\u00b4\u00b9\3\2\2\2\u00b5\u00b6\5\""+
		"\22\2\u00b6\u00b7\b\5\1\2\u00b7\u00b9\3\2\2\2\u00b8\u0091\3\2\2\2\u00b8"+
		"\u0094\3\2\2\2\u00b8\u0097\3\2\2\2\u00b8\u009a\3\2\2\2\u00b8\u009d\3\2"+
		"\2\2\u00b8\u00a0\3\2\2\2\u00b8\u00a3\3\2\2\2\u00b8\u00a6\3\2\2\2\u00b8"+
		"\u00a9\3\2\2\2\u00b8\u00ac\3\2\2\2\u00b8\u00af\3\2\2\2\u00b8\u00b2\3\2"+
		"\2\2\u00b8\u00b5\3\2\2\2\u00b9\t\3\2\2\2\u00ba\u00be\7\u0099\2\2\u00bb"+
		"\u00bd\7^\2\2\u00bc\u00bb\3\2\2\2\u00bd\u00c0\3\2\2\2\u00be\u00bc\3\2"+
		"\2\2\u00be\u00bf\3\2\2\2\u00bf\u00c1\3\2\2\2\u00c0\u00be\3\2\2\2\u00c1"+
		"\u00c3\7H\2\2\u00c2\u00ba\3\2\2\2\u00c2\u00c3\3\2\2\2\u00c3\u00c7\3\2"+
		"\2\2\u00c4\u00c6\7^\2\2\u00c5\u00c4\3\2\2\2\u00c6\u00c9\3\2\2\2\u00c7"+
		"\u00c5\3\2\2\2\u00c7\u00c8\3\2\2\2\u00c8\u00ca\3\2\2\2\u00c9\u00c7\3\2"+
		"\2\2\u00ca\u00ce\7\u008b\2\2\u00cb\u00cd\7^\2\2\u00cc\u00cb\3\2\2\2\u00cd"+
		"\u00d0\3\2\2\2\u00ce\u00cc\3\2\2\2\u00ce\u00cf\3\2\2\2\u00cf\u00d1\3\2"+
		"\2\2\u00d0\u00ce\3\2\2\2\u00d1\u00d2\5\62\32\2\u00d2\13\3\2\2\2\u00d3"+
		"\u00d7\7\u0099\2\2\u00d4\u00d6\7^\2\2\u00d5\u00d4\3\2\2\2\u00d6\u00d9"+
		"\3\2\2\2\u00d7\u00d5\3\2\2\2\u00d7\u00d8\3\2\2\2\u00d8\u00da\3\2\2\2\u00d9"+
		"\u00d7\3\2\2\2\u00da\u00dc\7I\2\2\u00db\u00d3\3\2\2\2\u00db\u00dc\3\2"+
		"\2\2\u00dc\u00e0\3\2\2\2\u00dd\u00df\7^\2\2\u00de\u00dd\3\2\2\2\u00df"+
		"\u00e2\3\2\2\2\u00e0\u00de\3\2\2\2\u00e0\u00e1\3\2\2\2\u00e1\u00e3\3\2"+
		"\2\2\u00e2\u00e0\3\2\2\2\u00e3\u00e7\7\u008b\2\2\u00e4\u00e6\7^\2\2\u00e5"+
		"\u00e4\3\2\2\2\u00e6\u00e9\3\2\2\2\u00e7\u00e5\3\2\2\2\u00e7\u00e8\3\2"+
		"\2\2\u00e8\u00ea\3\2\2\2\u00e9\u00e7\3\2\2\2\u00ea\u00eb\5\66\34\2\u00eb"+
		"\r\3\2\2\2\u00ec\u00f0\7J\2\2\u00ed\u00ef\7^\2\2\u00ee\u00ed\3\2\2\2\u00ef"+
		"\u00f2\3\2\2\2\u00f0\u00ee\3\2\2\2\u00f0\u00f1\3\2\2\2\u00f1\u00f3\3\2"+
		"\2\2\u00f2\u00f0\3\2\2\2\u00f3\u00f7\7\u008b\2\2\u00f4\u00f6\7^\2\2\u00f5"+
		"\u00f4\3\2\2\2\u00f6\u00f9\3\2\2\2\u00f7\u00f5\3\2\2\2\u00f7\u00f8\3\2"+
		"\2\2\u00f8\u00fa\3\2\2\2\u00f9\u00f7\3\2\2\2\u00fa\u00fb\5L\'\2\u00fb"+
		"\17\3\2\2\2\u00fc\u0100\7K\2\2\u00fd\u00ff\7^\2\2\u00fe\u00fd\3\2\2\2"+
		"\u00ff\u0102\3\2\2\2\u0100\u00fe\3\2\2\2\u0100\u0101\3\2\2\2\u0101\u0103"+
		"\3\2\2\2\u0102\u0100\3\2\2\2\u0103\u0107\7\u008b\2\2\u0104\u0106\7^\2"+
		"\2\u0105\u0104\3\2\2\2\u0106\u0109\3\2\2\2\u0107\u0105\3\2\2\2\u0107\u0108"+
		"\3\2\2\2\u0108\u010a\3\2\2\2\u0109\u0107\3\2\2\2\u010a\u010b\58\35\2\u010b"+
		"\21\3\2\2\2\u010c\u0110\7L\2\2\u010d\u010f\7^\2\2\u010e\u010d\3\2\2\2"+
		"\u010f\u0112\3\2\2\2\u0110\u010e\3\2\2\2\u0110\u0111\3\2\2\2\u0111\u0113"+
		"\3\2\2\2\u0112\u0110\3\2\2\2\u0113\u0117\7\u008b\2\2\u0114\u0116\7^\2"+
		"\2\u0115\u0114\3\2\2\2\u0116\u0119\3\2\2\2\u0117\u0115\3\2\2\2\u0117\u0118"+
		"\3\2\2\2\u0118\u011a\3\2\2\2\u0119\u0117\3\2\2\2\u011a\u011b\5:\36\2\u011b"+
		"\23\3\2\2\2\u011c\u0120\7\u0099\2\2\u011d\u011f\7^\2\2\u011e\u011d\3\2"+
		"\2\2\u011f\u0122\3\2\2\2\u0120\u011e\3\2\2\2\u0120\u0121\3\2\2\2\u0121"+
		"\u0123\3\2\2\2\u0122\u0120\3\2\2\2\u0123\u0127\7M\2\2\u0124\u0126\7^\2"+
		"\2\u0125\u0124\3\2\2\2\u0126\u0129\3\2\2\2\u0127\u0125\3\2\2\2\u0127\u0128"+
		"\3\2\2\2\u0128\u012a\3\2\2\2\u0129\u0127\3\2\2\2\u012a\u012e\7\u008b\2"+
		"\2\u012b\u012d\7^\2\2\u012c\u012b\3\2\2\2\u012d\u0130\3\2\2\2\u012e\u012c"+
		"\3\2\2\2\u012e\u012f\3\2\2\2\u012f\u0131\3\2\2\2\u0130\u012e\3\2\2\2\u0131"+
		"\u0133\5<\37\2\u0132\u0134\7M\2\2\u0133\u0132\3\2\2\2\u0133\u0134\3\2"+
		"\2\2\u0134\u0140\3\2\2\2\u0135\u0139\7\u008b\2\2\u0136\u0138\7^\2\2\u0137"+
		"\u0136\3\2\2\2\u0138\u013b\3\2\2\2\u0139\u0137\3\2\2\2\u0139\u013a\3\2"+
		"\2\2\u013a\u013c\3\2\2\2\u013b\u0139\3\2\2\2\u013c\u013d\5<\37\2\u013d"+
		"\u013e\7M\2\2\u013e\u0140\3\2\2\2\u013f\u011c\3\2\2\2\u013f\u0135\3\2"+
		"\2\2\u0140\25\3\2\2\2\u0141\u0145\7\u0099\2\2\u0142\u0144\7^\2\2\u0143"+
		"\u0142\3\2\2\2\u0144\u0147\3\2\2\2\u0145\u0143\3\2\2\2\u0145\u0146\3\2"+
		"\2\2\u0146\u0148\3\2\2\2\u0147\u0145\3\2\2\2\u0148\u014c\7N\2\2\u0149"+
		"\u014b\7^\2\2\u014a\u0149\3\2\2\2\u014b\u014e\3\2\2\2\u014c\u014a\3\2"+
		"\2\2\u014c\u014d\3\2\2\2\u014d\u014f\3\2\2\2\u014e\u014c\3\2\2\2\u014f"+
		"\u0153\7\u008b\2\2\u0150\u0152\7^\2\2\u0151\u0150\3\2\2\2\u0152\u0155"+
		"\3\2\2\2\u0153\u0151\3\2\2\2\u0153\u0154\3\2\2\2\u0154\u0156\3\2\2\2\u0155"+
		"\u0153\3\2\2\2\u0156\u0158\5> \2\u0157\u0159\7N\2\2\u0158\u0157\3\2\2"+
		"\2\u0158\u0159\3\2\2\2\u0159\u0165\3\2\2\2\u015a\u015e\7\u008b\2\2\u015b"+
		"\u015d\7^\2\2\u015c\u015b\3\2\2\2\u015d\u0160\3\2\2\2\u015e\u015c\3\2"+
		"\2\2\u015e\u015f\3\2\2\2\u015f\u0161\3\2\2\2\u0160\u015e\3\2\2\2\u0161"+
		"\u0162\5> \2\u0162\u0163\7N\2\2\u0163\u0165\3\2\2\2\u0164\u0141\3\2\2"+
		"\2\u0164\u015a\3\2\2\2\u0165\27\3\2\2\2\u0166\u016a\7\u0099\2\2\u0167"+
		"\u0169\7^\2\2\u0168\u0167\3\2\2\2\u0169\u016c\3\2\2\2\u016a\u0168\3\2"+
		"\2\2\u016a\u016b\3\2\2\2\u016b\u016d\3\2\2\2\u016c\u016a\3\2\2\2\u016d"+
		"\u0171\7O\2\2\u016e\u0170\7^\2\2\u016f\u016e\3\2\2\2\u0170\u0173\3\2\2"+
		"\2\u0171\u016f\3\2\2\2\u0171\u0172\3\2\2\2\u0172\u0174\3\2\2\2\u0173\u0171"+
		"\3\2\2\2\u0174\u0178\7\u008b\2\2\u0175\u0177\7^\2\2\u0176\u0175\3\2\2"+
		"\2\u0177\u017a\3\2\2\2\u0178\u0176\3\2\2\2\u0178\u0179\3\2\2\2\u0179\u017b"+
		"\3\2\2\2\u017a\u0178\3\2\2\2\u017b\u017d\5@!\2\u017c\u017e\7O\2\2\u017d"+
		"\u017c\3\2\2\2\u017d\u017e\3\2\2\2\u017e\u018a\3\2\2\2\u017f\u0183\7\u008b"+
		"\2\2\u0180\u0182\7^\2\2\u0181\u0180\3\2\2\2\u0182\u0185\3\2\2\2\u0183"+
		"\u0181\3\2\2\2\u0183\u0184\3\2\2\2\u0184\u0186\3\2\2\2\u0185\u0183\3\2"+
		"\2\2\u0186\u0187\5@!\2\u0187\u0188\7O\2\2\u0188\u018a\3\2\2\2\u0189\u0166"+
		"\3\2\2\2\u0189\u017f\3\2\2\2\u018a\31\3\2\2\2\u018b\u018f\7\u0099\2\2"+
		"\u018c\u018e\7^\2\2\u018d\u018c\3\2\2\2\u018e\u0191\3\2\2\2\u018f\u018d"+
		"\3\2\2\2\u018f\u0190\3\2\2\2\u0190\u0192\3\2\2\2\u0191\u018f\3\2\2\2\u0192"+
		"\u0196\7P\2\2\u0193\u0195\7^\2\2\u0194\u0193\3\2\2\2\u0195\u0198\3\2\2"+
		"\2\u0196\u0194\3\2\2\2\u0196\u0197\3\2\2\2\u0197\u0199\3\2\2\2\u0198\u0196"+
		"\3\2\2\2\u0199\u019d\7\u008b\2\2\u019a\u019c\7^\2\2\u019b\u019a\3\2\2"+
		"\2\u019c\u019f\3\2\2\2\u019d\u019b\3\2\2\2\u019d\u019e\3\2\2\2\u019e\u01a0"+
		"\3\2\2\2\u019f\u019d\3\2\2\2\u01a0\u01a2\5B\"\2\u01a1\u01a3\7P\2\2\u01a2"+
		"\u01a1\3\2\2\2\u01a2\u01a3\3\2\2\2\u01a3\u01af\3\2\2\2\u01a4\u01a8\7\u008b"+
		"\2\2\u01a5\u01a7\7^\2\2\u01a6\u01a5\3\2\2\2\u01a7\u01aa\3\2\2\2\u01a8"+
		"\u01a6\3\2\2\2\u01a8\u01a9\3\2\2\2\u01a9\u01ab\3\2\2\2\u01aa\u01a8\3\2"+
		"\2\2\u01ab\u01ac\5B\"\2\u01ac\u01ad\7P\2\2\u01ad\u01af\3\2\2\2\u01ae\u018b"+
		"\3\2\2\2\u01ae\u01a4\3\2\2\2\u01af\33\3\2\2\2\u01b0\u01b4\7\u0099\2\2"+
		"\u01b1\u01b3\7^\2\2\u01b2\u01b1\3\2\2\2\u01b3\u01b6\3\2\2\2\u01b4\u01b2"+
		"\3\2\2\2\u01b4\u01b5\3\2\2\2\u01b5\u01b7\3\2\2\2\u01b6\u01b4\3\2\2\2\u01b7"+
		"\u01bb\7Q\2\2\u01b8\u01ba\7^\2\2\u01b9\u01b8\3\2\2\2\u01ba\u01bd\3\2\2"+
		"\2\u01bb\u01b9\3\2\2\2\u01bb\u01bc\3\2\2\2\u01bc\u01be\3\2\2\2\u01bd\u01bb"+
		"\3\2\2\2\u01be\u01c2\7\u008b\2\2\u01bf\u01c1\7^\2\2\u01c0\u01bf\3\2\2"+
		"\2\u01c1\u01c4\3\2\2\2\u01c2\u01c0\3\2\2\2\u01c2\u01c3\3\2\2\2\u01c3\u01c5"+
		"\3\2\2\2\u01c4\u01c2\3\2\2\2\u01c5\u01c7\5D#\2\u01c6\u01c8\7Q\2\2\u01c7"+
		"\u01c6\3\2\2\2\u01c7\u01c8\3\2\2\2\u01c8\u01d4\3\2\2\2\u01c9\u01cd\7\u008b"+
		"\2\2\u01ca\u01cc\7^\2\2\u01cb\u01ca\3\2\2\2\u01cc\u01cf\3\2\2\2\u01cd"+
		"\u01cb\3\2\2\2\u01cd\u01ce\3\2\2\2\u01ce\u01d0\3\2\2\2\u01cf\u01cd\3\2"+
		"\2\2\u01d0\u01d1\5D#\2\u01d1\u01d2\7Q\2\2\u01d2\u01d4\3\2\2\2\u01d3\u01b0"+
		"\3\2\2\2\u01d3\u01c9\3\2\2\2\u01d4\35\3\2\2\2\u01d5\u01d9\7\u0099\2\2"+
		"\u01d6\u01d8\7^\2\2\u01d7\u01d6\3\2\2\2\u01d8\u01db\3\2\2\2\u01d9\u01d7"+
		"\3\2\2\2\u01d9\u01da\3\2\2\2\u01da\u01dc\3\2\2\2\u01db\u01d9\3\2\2\2\u01dc"+
		"\u01e0\7R\2\2\u01dd\u01df\7^\2\2\u01de\u01dd\3\2\2\2\u01df\u01e2\3\2\2"+
		"\2\u01e0\u01de\3\2\2\2\u01e0\u01e1\3\2\2\2\u01e1\u01e3\3\2\2\2\u01e2\u01e0"+
		"\3\2\2\2\u01e3\u01e7\7\u008b\2\2\u01e4\u01e6\7^\2\2\u01e5\u01e4\3\2\2"+
		"\2\u01e6\u01e9\3\2\2\2\u01e7\u01e5\3\2\2\2\u01e7\u01e8\3\2\2\2\u01e8\u01ea"+
		"\3\2\2\2\u01e9\u01e7\3\2\2\2\u01ea\u01ec\5F$\2\u01eb\u01ed\7R\2\2\u01ec"+
		"\u01eb\3\2\2\2\u01ec\u01ed\3\2\2\2\u01ed\u01f9\3\2\2\2\u01ee\u01f2\7\u008b"+
		"\2\2\u01ef\u01f1\7^\2\2\u01f0\u01ef\3\2\2\2\u01f1\u01f4\3\2\2\2\u01f2"+
		"\u01f0\3\2\2\2\u01f2\u01f3\3\2\2\2\u01f3\u01f5\3\2\2\2\u01f4\u01f2\3\2"+
		"\2\2\u01f5\u01f6\5F$\2\u01f6\u01f7\7R\2\2\u01f7\u01f9\3\2\2\2\u01f8\u01d5"+
		"\3\2\2\2\u01f8\u01ee\3\2\2\2\u01f9\37\3\2\2\2\u01fa\u01fe\7\u0099\2\2"+
		"\u01fb\u01fd\7^\2\2\u01fc\u01fb\3\2\2\2\u01fd\u0200\3\2\2\2\u01fe\u01fc"+
		"\3\2\2\2\u01fe\u01ff\3\2\2\2\u01ff\u0201\3\2\2\2\u0200\u01fe\3\2\2\2\u0201"+
		"\u0205\7S\2\2\u0202\u0204\7^\2\2\u0203\u0202\3\2\2\2\u0204\u0207\3\2\2"+
		"\2\u0205\u0203\3\2\2\2\u0205\u0206\3\2\2\2\u0206\u0208\3\2\2\2\u0207\u0205"+
		"\3\2\2\2\u0208\u020c\7\u008b\2\2\u0209\u020b\7^\2\2\u020a\u0209\3\2\2"+
		"\2\u020b\u020e\3\2\2\2\u020c\u020a\3\2\2\2\u020c\u020d\3\2\2\2\u020d\u020f"+
		"\3\2\2\2\u020e\u020c\3\2\2\2\u020f\u0211\5H%\2\u0210\u0212\7S\2\2\u0211"+
		"\u0210\3\2\2\2\u0211\u0212\3\2\2\2\u0212\u021f\3\2\2\2\u0213\u0217\7\u008b"+
		"\2\2\u0214\u0216\7^\2\2\u0215\u0214\3\2\2\2\u0216\u0219\3\2\2\2\u0217"+
		"\u0215\3\2\2\2\u0217\u0218\3\2\2\2\u0218\u021a\3\2\2\2\u0219\u0217\3\2"+
		"\2\2\u021a\u021c\5H%\2\u021b\u021d\7S\2\2\u021c\u021b\3\2\2\2\u021c\u021d"+
		"\3\2\2\2\u021d\u021f\3\2\2\2\u021e\u01fa\3\2\2\2\u021e\u0213\3\2\2\2\u021f"+
		"!\3\2\2\2\u0220\u0224\7\u0099\2\2\u0221\u0223\7^\2\2\u0222\u0221\3\2\2"+
		"\2\u0223\u0226\3\2\2\2\u0224\u0222\3\2\2\2\u0224\u0225\3\2\2\2\u0225\u0227"+
		"\3\2\2\2\u0226\u0224\3\2\2\2\u0227\u022b\7T\2\2\u0228\u022a\7^\2\2\u0229"+
		"\u0228\3\2\2\2\u022a\u022d\3\2\2\2\u022b\u0229\3\2\2\2\u022b\u022c\3\2"+
		"\2\2\u022c\u022e\3\2\2\2\u022d\u022b\3\2\2\2\u022e\u0232\7\u008b\2\2\u022f"+
		"\u0231\7^\2\2\u0230\u022f\3\2\2\2\u0231\u0234\3\2\2\2\u0232\u0230\3\2"+
		"\2\2\u0232\u0233\3\2\2\2\u0233\u0235\3\2\2\2\u0234\u0232\3\2\2\2\u0235"+
		"\u0237\5J&\2\u0236\u0238\7T\2\2\u0237\u0236\3\2\2\2\u0237\u0238\3\2\2"+
		"\2\u0238\u0244\3\2\2\2\u0239\u023d\7\u008b\2\2\u023a\u023c\7^\2\2\u023b"+
		"\u023a\3\2\2\2\u023c\u023f\3\2\2\2\u023d\u023b\3\2\2\2\u023d\u023e\3\2"+
		"\2\2\u023e\u0240\3\2\2\2\u023f\u023d\3\2\2\2\u0240\u0241\5J&\2\u0241\u0242"+
		"\7T\2\2\u0242\u0244\3\2\2\2\u0243\u0220\3\2\2\2\u0243\u0239\3\2\2\2\u0244"+
		"#\3\2\2\2\u0245\u0248\5P)\2\u0246\u0248\5&\24\2\u0247\u0245\3\2\2\2\u0247"+
		"\u0246\3\2\2\2\u0248%\3\2\2\2\u0249\u024a\5P)\2\u024a\u024d\7\u008f\2"+
		"\2\u024b\u024e\5P)\2\u024c\u024e\5B\"\2\u024d\u024b\3\2\2\2\u024d\u024c"+
		"\3\2\2\2\u024e\u024f\3\2\2\2\u024f\u024d\3\2\2\2\u024f\u0250\3\2\2\2\u0250"+
		"\u0251\3\2\2\2\u0251\u0252\7\u008e\2\2\u0252\'\3\2\2\2\u0253\u0257\7\16"+
		"\2\2\u0254\u0256\7^\2\2\u0255\u0254\3\2\2\2\u0256\u0259\3\2\2\2\u0257"+
		"\u0255\3\2\2\2\u0257\u0258\3\2\2\2\u0258\u025a\3\2\2\2\u0259\u0257\3\2"+
		"\2\2\u025a\u025e\7\u008b\2\2\u025b\u025d\7^\2\2\u025c\u025b\3\2\2\2\u025d"+
		"\u0260\3\2\2\2\u025e\u025c\3\2\2\2\u025e\u025f\3\2\2\2\u025f\u0261\3\2"+
		"\2\2\u0260\u025e\3\2\2\2\u0261\u0265\5P)\2\u0262\u0264\7^\2\2\u0263\u0262"+
		"\3\2\2\2\u0264\u0267\3\2\2\2\u0265\u0263\3\2\2\2\u0265\u0266\3\2\2\2\u0266"+
		"\u0268\3\2\2\2\u0267\u0265\3\2\2\2\u0268\u0269\7\u0098\2\2\u0269)\3\2"+
		"\2\2\u026a\u026b\7\n\2\2\u026b\u026c\5\60\31\2\u026c\u026d\7\u0098\2\2"+
		"\u026d+\3\2\2\2\u026e\u026f\7\17\2\2\u026f\u0270\5.\30\2\u0270\u0271\7"+
		"\u0098\2\2\u0271-\3\2\2\2\u0272\u0274\5\60\31\2\u0273\u0272\3\2\2\2\u0273"+
		"\u0274\3\2\2\2\u0274\u0275\3\2\2\2\u0275\u0277\7\u009a\2\2\u0276\u0273"+
		"\3\2\2\2\u0276\u0277\3\2\2\2\u0277\u0288\3\2\2\2\u0278\u0289\7x\2\2\u0279"+
		"\u0285\7\u00a0\2\2\u027a\u027f\5.\30\2\u027b\u027c\7\u0097\2\2\u027c\u027e"+
		"\5.\30\2\u027d\u027b\3\2\2\2\u027e\u0281\3\2\2\2\u027f\u027d\3\2\2\2\u027f"+
		"\u0280\3\2\2\2\u0280\u0283\3\2\2\2\u0281\u027f\3\2\2\2\u0282\u0284\7\u0097"+
		"\2\2\u0283\u0282\3\2\2\2\u0283\u0284\3\2\2\2\u0284\u0286\3\2\2\2\u0285"+
		"\u027a\3\2\2\2\u0285\u0286\3\2\2\2\u0286\u0287\3\2\2\2\u0287\u0289\7\u00a1"+
		"\2\2\u0288\u0278\3\2\2\2\u0288\u0279\3\2\2\2\u0289\u0290\3\2\2\2\u028a"+
		"\u028d\5\60\31\2\u028b\u028c\7\4\2\2\u028c\u028e\5P)\2\u028d\u028b\3\2"+
		"\2\2\u028d\u028e\3\2\2\2\u028e\u0290\3\2\2\2\u028f\u0276\3\2\2\2\u028f"+
		"\u028a\3\2\2\2\u0290/\3\2\2\2\u0291\u0293\7\u009a\2\2\u0292\u0291\3\2"+
		"\2\2\u0292\u0293\3\2\2\2\u0293\u0294\3\2\2\2\u0294\u0299\5P)\2\u0295\u0296"+
		"\7\u009a\2\2\u0296\u0298\5P)\2\u0297\u0295\3\2\2\2\u0298\u029b\3\2\2\2"+
		"\u0299\u0297\3\2\2\2\u0299\u029a\3\2\2\2\u029a\61\3\2\2\2\u029b\u0299"+
		"\3\2\2\2\u029c\u029d\t\2\2\2\u029d\63\3\2\2\2\u029e\u029f\7b\2\2\u029f"+
		"\65\3\2\2\2\u02a0\u02a1\7_\2\2\u02a1\67\3\2\2\2\u02a2\u02a3\7m\2\2\u02a3"+
		"9\3\2\2\2\u02a4\u02a5\7m\2\2\u02a5;\3\2\2\2\u02a6\u02ae\t\3\2\2\u02a7"+
		"\u02a8\7q\2\2\u02a8\u02ae\t\4\2\2\u02a9\u02aa\7r\2\2\u02aa\u02ae\t\5\2"+
		"\2\u02ab\u02ac\7s\2\2\u02ac\u02ae\t\6\2\2\u02ad\u02a6\3\2\2\2\u02ad\u02a7"+
		"\3\2\2\2\u02ad\u02a9\3\2\2\2\u02ad\u02ab\3\2\2\2\u02ae=\3\2\2\2\u02af"+
		"\u02b7\t\3\2\2\u02b0\u02b1\7q\2\2\u02b1\u02b7\t\4\2\2\u02b2\u02b3\7r\2"+
		"\2\u02b3\u02b7\t\5\2\2\u02b4\u02b5\7s\2\2\u02b5\u02b7\t\6\2\2\u02b6\u02af"+
		"\3\2\2\2\u02b6\u02b0\3\2\2\2\u02b6\u02b2\3\2\2\2\u02b6\u02b4\3\2\2\2\u02b7"+
		"?\3\2\2\2\u02b8\u02c0\t\3\2\2\u02b9\u02ba\7q\2\2\u02ba\u02c0\t\4\2\2\u02bb"+
		"\u02bc\7r\2\2\u02bc\u02c0\t\5\2\2\u02bd\u02be\7s\2\2\u02be\u02c0\t\6\2"+
		"\2\u02bf\u02b8\3\2\2\2\u02bf\u02b9\3\2\2\2\u02bf\u02bb\3\2\2\2\u02bf\u02bd"+
		"\3\2\2\2\u02c0A\3\2\2\2\u02c1\u02c9\t\3\2\2\u02c2\u02c3\7q\2\2\u02c3\u02c9"+
		"\t\4\2\2\u02c4\u02c5\7r\2\2\u02c5\u02c9\t\5\2\2\u02c6\u02c7\7s\2\2\u02c7"+
		"\u02c9\t\6\2\2\u02c8\u02c1\3\2\2\2\u02c8\u02c2\3\2\2\2\u02c8\u02c4\3\2"+
		"\2\2\u02c8\u02c6\3\2\2\2\u02c9C\3\2\2\2\u02ca\u02d2\t\3\2\2\u02cb\u02cc"+
		"\7q\2\2\u02cc\u02d2\t\4\2\2\u02cd\u02ce\7r\2\2\u02ce\u02d2\t\5\2\2\u02cf"+
		"\u02d0\7s\2\2\u02d0\u02d2\t\6\2\2\u02d1\u02ca\3\2\2\2\u02d1\u02cb\3\2"+
		"\2\2\u02d1\u02cd\3\2\2\2\u02d1\u02cf\3\2\2\2\u02d2E\3\2\2\2\u02d3\u02db"+
		"\t\3\2\2\u02d4\u02d5\7q\2\2\u02d5\u02db\t\4\2\2\u02d6\u02d7\7r\2\2\u02d7"+
		"\u02db\t\5\2\2\u02d8\u02d9\7s\2\2\u02d9\u02db\t\6\2\2\u02da\u02d3\3\2"+
		"\2\2\u02da\u02d4\3\2\2\2\u02da\u02d6\3\2\2\2\u02da\u02d8\3\2\2\2\u02db"+
		"G\3\2\2\2\u02dc\u02e4\t\3\2\2\u02dd\u02de\7q\2\2\u02de\u02e4\t\4\2\2\u02df"+
		"\u02e0\7r\2\2\u02e0\u02e4\t\5\2\2\u02e1\u02e2\7s\2\2\u02e2\u02e4\t\6\2"+
		"\2\u02e3\u02dc\3\2\2\2\u02e3\u02dd\3\2\2\2\u02e3\u02df\3\2\2\2\u02e3\u02e1"+
		"\3\2\2\2\u02e4\u02e5\3\2\2\2\u02e5\u02e6\b%\1\2\u02e6I\3\2\2\2\u02e7\u02ef"+
		"\t\3\2\2\u02e8\u02e9\7q\2\2\u02e9\u02ef\t\4\2\2\u02ea\u02eb\7r\2\2\u02eb"+
		"\u02ef\t\5\2\2\u02ec\u02ed\7s\2\2\u02ed\u02ef\t\6\2\2\u02ee\u02e7\3\2"+
		"\2\2\u02ee\u02e8\3\2\2\2\u02ee\u02ea\3\2\2\2\u02ee\u02ec\3\2\2\2\u02ef"+
		"\u02f0\3\2\2\2\u02f0\u02f1\b&\1\2\u02f1K\3\2\2\2\u02f2\u02f3\t\7\2\2\u02f3"+
		"M\3\2\2\2\u02f4\u02f5\t\b\2\2\u02f5O\3\2\2\2\u02f6\u02fa\7U\2\2\u02f7"+
		"\u02f8\7u\2\2\u02f8\u02fa\7U\2\2\u02f9\u02f6\3\2\2\2\u02f9\u02f7\3\2\2"+
		"\2\u02faQ\3\2\2\2\u02fb\u02fc\t\t\2\2\u02fcS\3\2\2\2dX\\agmsy\u0084\u008b"+
		"\u00b8\u00be\u00c2\u00c7\u00ce\u00d7\u00db\u00e0\u00e7\u00f0\u00f7\u0100"+
		"\u0107\u0110\u0117\u0120\u0127\u012e\u0133\u0139\u013f\u0145\u014c\u0153"+
		"\u0158\u015e\u0164\u016a\u0171\u0178\u017d\u0183\u0189\u018f\u0196\u019d"+
		"\u01a2\u01a8\u01ae\u01b4\u01bb\u01c2\u01c7\u01cd\u01d3\u01d9\u01e0\u01e7"+
		"\u01ec\u01f2\u01f8\u01fe\u0205\u020c\u0211\u0217\u021c\u021e\u0224\u022b"+
		"\u0232\u0237\u023d\u0243\u0247\u024d\u024f\u0257\u025e\u0265\u0273\u0276"+
		"\u027f\u0283\u0285\u0288\u028d\u028f\u0292\u0299\u02ad\u02b6\u02bf\u02c8"+
		"\u02d1\u02da\u02e3\u02ee\u02f9";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}