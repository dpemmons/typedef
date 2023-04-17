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
		WS=92, CHAR_LITERAL=93, STRING_LITERAL=94, RAW_STRING_LITERAL=95, DEC_DIGITS=96, 
		DEC_DIGITS_UNDERSCORE=97, HEX_DIGITS=98, HEX_DIGITS_UNDERSCORE=99, OCT_DIGITS=100, 
		OCT_DIGITS_UNDERSCORE=101, BIN_DIGITS=102, BIN_DIGITS_UNDERSCORE=103, 
		FLOAT_LITERAL=104, OCT_DIGIT=105, DEC_DIGIT=106, HEX_DIGIT=107, HEX_PREFIX=108, 
		OCT_PREFIX=109, BIN_PREFIX=110, RAW_ESCAPE=111, PLUS=112, MINUS=113, STAR=114, 
		SLASH=115, PERCENT=116, CARET=117, NOT=118, AND=119, OR=120, ANDAND=121, 
		OROR=122, PLUSEQ=123, MINUSEQ=124, STAREQ=125, SLASHEQ=126, PERCENTEQ=127, 
		CARETEQ=128, ANDEQ=129, OREQ=130, SHLEQ=131, SHREQ=132, EQ=133, EQEQ=134, 
		NE=135, GT=136, LT=137, GE=138, LE=139, AT=140, UNDERSCORE=141, DOT=142, 
		DOTDOT=143, DOTDOTDOT=144, COMMA=145, SEMI=146, COLON=147, PATHSEP=148, 
		RARROW=149, FATARROW=150, POUND=151, DOLLAR=152, QUESTION=153, LBRACE=154, 
		RBRACE=155, LBRACK=156, RBRACK=157, LPAREN=158, RPAREN=159;
	public static final int
		RULE_compilationUnit = 0, RULE_item = 1, RULE_valueDefinition = 2, RULE_primitiveFragment = 3, 
		RULE_boolFragment = 4, RULE_charFragment = 5, RULE_stringFragment = 6, 
		RULE_f32Fragment = 7, RULE_f64Fragment = 8, RULE_u8Fragment = 9, RULE_u16Fragment = 10, 
		RULE_u32Fragment = 11, RULE_u64Fragment = 12, RULE_i8Fragment = 13, RULE_i16Fragment = 14, 
		RULE_i32Fragment = 15, RULE_i64Fragment = 16, RULE_type_ = 17, RULE_parameterizedType = 18, 
		RULE_typedefVersionDeclaration = 19, RULE_moduleDeclaration = 20, RULE_useDeclaration = 21, 
		RULE_useTree = 22, RULE_simplePath = 23, RULE_boolLiteral = 24, RULE_charLiteral = 25, 
		RULE_f32Literal = 26, RULE_f64Literal = 27, RULE_u8Literal = 28, RULE_u16Literal = 29, 
		RULE_u32Literal = 30, RULE_u64Literal = 31, RULE_i8Literal = 32, RULE_i16Literal = 33, 
		RULE_i32Literal = 34, RULE_i64Literal = 35, RULE_stringLiteral = 36, RULE_identifier = 37, 
		RULE_keyword = 38;
	private static String[] makeRuleNames() {
		return new String[] {
			"compilationUnit", "item", "valueDefinition", "primitiveFragment", "boolFragment", 
			"charFragment", "stringFragment", "f32Fragment", "f64Fragment", "u8Fragment", 
			"u16Fragment", "u32Fragment", "u64Fragment", "i8Fragment", "i16Fragment", 
			"i32Fragment", "i64Fragment", "type_", "parameterizedType", "typedefVersionDeclaration", 
			"moduleDeclaration", "useDeclaration", "useTree", "simplePath", "boolLiteral", 
			"charLiteral", "f32Literal", "f64Literal", "u8Literal", "u16Literal", 
			"u32Literal", "u64Literal", "i8Literal", "i16Literal", "i32Literal", 
			"i64Literal", "stringLiteral", "identifier", "keyword"
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
			"'bool'", "'char'", "'str'", "'f32'", "'f64'", "'u8'", "'u16'", "'u32'", 
			"'u64'", "'i8'", "'i16'", "'i32'", "'i64'", null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, "'0x'", "'0o'", "'0b'", 
			"'r#'", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'", "'!'", "'&'", "'|'", 
			"'&&'", "'||'", "'+='", "'-='", "'*='", "'/='", "'%='", "'^='", "'&='", 
			"'|='", "'<<='", "'>>='", "'='", "'=='", "'!='", "'>'", "'<'", "'>='", 
			"'<='", "'@'", "'_'", "'.'", "'..'", "'...'", "','", "';'", "':'", "'::'", 
			"'->'", "'=>'", "'#'", "'$'", "'?'", "'{'", "'}'", "'['", "']'", "'('", 
			"')'"
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
			"WS", "CHAR_LITERAL", "STRING_LITERAL", "RAW_STRING_LITERAL", "DEC_DIGITS", 
			"DEC_DIGITS_UNDERSCORE", "HEX_DIGITS", "HEX_DIGITS_UNDERSCORE", "OCT_DIGITS", 
			"OCT_DIGITS_UNDERSCORE", "BIN_DIGITS", "BIN_DIGITS_UNDERSCORE", "FLOAT_LITERAL", 
			"OCT_DIGIT", "DEC_DIGIT", "HEX_DIGIT", "HEX_PREFIX", "OCT_PREFIX", "BIN_PREFIX", 
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
			setState(78);
			typedefVersionDeclaration();
			setState(82);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,0,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(79);
					match(WS);
					}
					} 
				}
				setState(84);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,0,_ctx);
			}
			setState(86);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==KW_MODULE) {
				{
				setState(85);
				moduleDeclaration();
				}
			}

			setState(97);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(91);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==WS) {
						{
						{
						setState(88);
						match(WS);
						}
						}
						setState(93);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(94);
					useDeclaration();
					}
					} 
				}
				setState(99);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
			}
			setState(109);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(103);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==WS) {
						{
						{
						setState(100);
						match(WS);
						}
						}
						setState(105);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(106);
					item();
					}
					} 
				}
				setState(111);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
			}
			setState(115);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(112);
				match(WS);
				}
				}
				setState(117);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(118);
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
			setState(120);
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
			setState(122);
			((ValueDefinitionContext)_localctx).identifier = identifier();
			setState(126);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,7,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(123);
					match(WS);
					}
					} 
				}
				setState(128);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,7,_ctx);
			}
			setState(129);
			((ValueDefinitionContext)_localctx).primitiveFragment = primitiveFragment();
			setState(133);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(130);
				match(WS);
				}
				}
				setState(135);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(136);
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
			setState(178);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
			case 1:
				{
				setState(139);
				((PrimitiveFragmentContext)_localctx).boolFragment = boolFragment();
				((PrimitiveFragmentContext)_localctx).maybe_val =  ((PrimitiveFragmentContext)_localctx).boolFragment->literal->maybe_val;
				}
				break;
			case 2:
				{
				setState(142);
				((PrimitiveFragmentContext)_localctx).charFragment = charFragment();
				((PrimitiveFragmentContext)_localctx).maybe_val =  ((PrimitiveFragmentContext)_localctx).charFragment->literal->maybe_val;
				}
				break;
			case 3:
				{
				setState(145);
				((PrimitiveFragmentContext)_localctx).stringFragment = stringFragment();
				((PrimitiveFragmentContext)_localctx).maybe_val =  ((PrimitiveFragmentContext)_localctx).stringFragment->literal->maybe_val;
				}
				break;
			case 4:
				{
				setState(148);
				((PrimitiveFragmentContext)_localctx).f32Fragment = f32Fragment();
				((PrimitiveFragmentContext)_localctx).maybe_val =  ((PrimitiveFragmentContext)_localctx).f32Fragment->literal->maybe_val;
				}
				break;
			case 5:
				{
				setState(151);
				((PrimitiveFragmentContext)_localctx).f64Fragment = f64Fragment();
				((PrimitiveFragmentContext)_localctx).maybe_val =  ((PrimitiveFragmentContext)_localctx).f64Fragment->literal->maybe_val;
				}
				break;
			case 6:
				{
				setState(154);
				((PrimitiveFragmentContext)_localctx).u8Fragment = u8Fragment();
				((PrimitiveFragmentContext)_localctx).maybe_val =  ((PrimitiveFragmentContext)_localctx).u8Fragment->literal->maybe_val;
				}
				break;
			case 7:
				{
				setState(157);
				((PrimitiveFragmentContext)_localctx).u16Fragment = u16Fragment();
				((PrimitiveFragmentContext)_localctx).maybe_val =  ((PrimitiveFragmentContext)_localctx).u16Fragment->literal->maybe_val;
				}
				break;
			case 8:
				{
				setState(160);
				((PrimitiveFragmentContext)_localctx).u32Fragment = u32Fragment();
				((PrimitiveFragmentContext)_localctx).maybe_val =  ((PrimitiveFragmentContext)_localctx).u32Fragment->literal->maybe_val;
				}
				break;
			case 9:
				{
				setState(163);
				((PrimitiveFragmentContext)_localctx).u64Fragment = u64Fragment();
				((PrimitiveFragmentContext)_localctx).maybe_val =  ((PrimitiveFragmentContext)_localctx).u64Fragment->literal->maybe_val;
				}
				break;
			case 10:
				{
				setState(166);
				((PrimitiveFragmentContext)_localctx).i8Fragment = i8Fragment();
				((PrimitiveFragmentContext)_localctx).maybe_val =  ((PrimitiveFragmentContext)_localctx).i8Fragment->literal->maybe_val;
				}
				break;
			case 11:
				{
				setState(169);
				((PrimitiveFragmentContext)_localctx).i16Fragment = i16Fragment();
				((PrimitiveFragmentContext)_localctx).maybe_val =  ((PrimitiveFragmentContext)_localctx).i16Fragment->literal->maybe_val;
				}
				break;
			case 12:
				{
				setState(172);
				((PrimitiveFragmentContext)_localctx).i32Fragment = i32Fragment();
				((PrimitiveFragmentContext)_localctx).maybe_val =  ((PrimitiveFragmentContext)_localctx).i32Fragment->literal->maybe_val;
				}
				break;
			case 13:
				{
				setState(175);
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
			setState(188);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COLON) {
				{
				setState(180);
				match(COLON);
				setState(184);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(181);
					match(WS);
					}
					}
					setState(186);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(187);
				match(KW_BOOL);
				}
			}

			setState(193);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(190);
				match(WS);
				}
				}
				setState(195);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(196);
			match(EQ);
			setState(200);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(197);
				match(WS);
				}
				}
				setState(202);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(203);
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
			setState(213);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COLON) {
				{
				setState(205);
				match(COLON);
				setState(209);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(206);
					match(WS);
					}
					}
					setState(211);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(212);
				match(KW_CHAR);
				}
			}

			setState(218);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(215);
				match(WS);
				}
				}
				setState(220);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(221);
			match(EQ);
			setState(225);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(222);
				match(WS);
				}
				}
				setState(227);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(228);
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
		public TerminalNode EQ() { return getToken(TypedefParser.EQ, 0); }
		public StringLiteralContext stringLiteral() {
			return getRuleContext(StringLiteralContext.class,0);
		}
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public TerminalNode KW_STRING() { return getToken(TypedefParser.KW_STRING, 0); }
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
			setState(238);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COLON) {
				{
				setState(230);
				match(COLON);
				setState(234);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(231);
					match(WS);
					}
					}
					setState(236);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(237);
				match(KW_STRING);
				}
			}

			setState(243);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(240);
				match(WS);
				}
				}
				setState(245);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(246);
			match(EQ);
			setState(250);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(247);
				match(WS);
				}
				}
				setState(252);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(253);
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
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public List<TerminalNode> KW_F32() { return getTokens(TypedefParser.KW_F32); }
		public TerminalNode KW_F32(int i) {
			return getToken(TypedefParser.KW_F32, i);
		}
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
			setState(291);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(255);
				match(COLON);
				setState(259);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(256);
					match(WS);
					}
					}
					setState(261);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(262);
				match(KW_F32);
				setState(266);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(263);
					match(WS);
					}
					}
					setState(268);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(269);
				match(EQ);
				setState(273);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(270);
					match(WS);
					}
					}
					setState(275);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(276);
				((F32FragmentContext)_localctx).literal = f32Literal();
				setState(278);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_F32) {
					{
					setState(277);
					match(KW_F32);
					}
				}

				}
				}
				break;
			case EQ:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(280);
				match(EQ);
				setState(284);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(281);
					match(WS);
					}
					}
					setState(286);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(287);
				((F32FragmentContext)_localctx).literal = f32Literal();
				setState(289);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_F32) {
					{
					setState(288);
					match(KW_F32);
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

	public static class F64FragmentContext extends ParserRuleContext {
		public F64LiteralContext literal;
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public List<TerminalNode> KW_F64() { return getTokens(TypedefParser.KW_F64); }
		public TerminalNode KW_F64(int i) {
			return getToken(TypedefParser.KW_F64, i);
		}
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
			setState(328);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(293);
				match(COLON);
				setState(297);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(294);
					match(WS);
					}
					}
					setState(299);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(300);
				match(KW_F64);
				setState(304);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(301);
					match(WS);
					}
					}
					setState(306);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
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
				((F64FragmentContext)_localctx).literal = f64Literal();
				setState(316);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_F64) {
					{
					setState(315);
					match(KW_F64);
					}
				}

				}
				}
				break;
			case EQ:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(318);
				match(EQ);
				setState(322);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(319);
					match(WS);
					}
					}
					setState(324);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(325);
				((F64FragmentContext)_localctx).literal = f64Literal();
				setState(326);
				match(KW_F64);
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
			setState(365);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(330);
				match(COLON);
				setState(334);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(331);
					match(WS);
					}
					}
					setState(336);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(337);
				match(KW_U8);
				setState(341);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(338);
					match(WS);
					}
					}
					setState(343);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
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
				((U8FragmentContext)_localctx).literal = u8Literal();
				setState(353);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_U8) {
					{
					setState(352);
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
				setState(355);
				match(EQ);
				setState(359);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(356);
					match(WS);
					}
					}
					setState(361);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(362);
				((U8FragmentContext)_localctx).literal = u8Literal();
				setState(363);
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
			setState(402);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(367);
				match(COLON);
				setState(371);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(368);
					match(WS);
					}
					}
					setState(373);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(374);
				match(KW_U16);
				setState(378);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(375);
					match(WS);
					}
					}
					setState(380);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
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
				((U16FragmentContext)_localctx).literal = u16Literal();
				setState(390);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_U16) {
					{
					setState(389);
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
				setState(392);
				match(EQ);
				setState(396);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(393);
					match(WS);
					}
					}
					setState(398);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(399);
				((U16FragmentContext)_localctx).literal = u16Literal();
				setState(400);
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
			setState(439);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(404);
				match(COLON);
				setState(408);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(405);
					match(WS);
					}
					}
					setState(410);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(411);
				match(KW_U32);
				setState(415);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(412);
					match(WS);
					}
					}
					setState(417);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
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
				((U32FragmentContext)_localctx).literal = u32Literal();
				setState(427);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_U32) {
					{
					setState(426);
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
				setState(429);
				match(EQ);
				setState(433);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(430);
					match(WS);
					}
					}
					setState(435);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(436);
				((U32FragmentContext)_localctx).literal = u32Literal();
				setState(437);
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
			setState(476);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(441);
				match(COLON);
				setState(445);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(442);
					match(WS);
					}
					}
					setState(447);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(448);
				match(KW_U64);
				setState(452);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(449);
					match(WS);
					}
					}
					setState(454);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
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
				((U64FragmentContext)_localctx).literal = u64Literal();
				setState(464);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_U64) {
					{
					setState(463);
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
				setState(466);
				match(EQ);
				setState(470);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(467);
					match(WS);
					}
					}
					setState(472);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(473);
				((U64FragmentContext)_localctx).literal = u64Literal();
				setState(474);
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
			setState(513);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(478);
				match(COLON);
				setState(482);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(479);
					match(WS);
					}
					}
					setState(484);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(485);
				match(KW_I8);
				setState(489);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(486);
					match(WS);
					}
					}
					setState(491);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
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
				((I8FragmentContext)_localctx).literal = i8Literal();
				setState(501);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I8) {
					{
					setState(500);
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
				setState(503);
				match(EQ);
				setState(507);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(504);
					match(WS);
					}
					}
					setState(509);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(510);
				((I8FragmentContext)_localctx).literal = i8Literal();
				setState(511);
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
			setState(550);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(515);
				match(COLON);
				setState(519);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(516);
					match(WS);
					}
					}
					setState(521);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(522);
				match(KW_I16);
				setState(526);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(523);
					match(WS);
					}
					}
					setState(528);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
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
				((I16FragmentContext)_localctx).literal = i16Literal();
				setState(538);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I16) {
					{
					setState(537);
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
				setState(540);
				match(EQ);
				setState(544);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(541);
					match(WS);
					}
					}
					setState(546);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(547);
				((I16FragmentContext)_localctx).literal = i16Literal();
				setState(548);
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
			setState(588);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(552);
				match(COLON);
				setState(556);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(553);
					match(WS);
					}
					}
					setState(558);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(559);
				match(KW_I32);
				setState(563);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(560);
					match(WS);
					}
					}
					setState(565);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(566);
				match(EQ);
				setState(570);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(567);
					match(WS);
					}
					}
					setState(572);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(573);
				((I32FragmentContext)_localctx).literal = i32Literal();
				setState(575);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I32) {
					{
					setState(574);
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
				setState(577);
				match(EQ);
				setState(581);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(578);
					match(WS);
					}
					}
					setState(583);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(584);
				((I32FragmentContext)_localctx).literal = i32Literal();
				setState(586);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I32) {
					{
					setState(585);
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
			setState(625);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(590);
				match(COLON);
				setState(594);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(591);
					match(WS);
					}
					}
					setState(596);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(597);
				match(KW_I64);
				setState(601);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(598);
					match(WS);
					}
					}
					setState(603);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(604);
				match(EQ);
				setState(608);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(605);
					match(WS);
					}
					}
					setState(610);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(611);
				((I64FragmentContext)_localctx).literal = i64Literal();
				setState(613);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I64) {
					{
					setState(612);
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
				setState(615);
				match(EQ);
				setState(619);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(616);
					match(WS);
					}
					}
					setState(621);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(622);
				((I64FragmentContext)_localctx).literal = i64Literal();
				setState(623);
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
			setState(629);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,84,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(627);
				identifier();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(628);
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
			setState(631);
			identifier();
			setState(632);
			match(LT);
			setState(635); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				setState(635);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case NON_KEYWORD_IDENTIFIER:
				case RAW_ESCAPE:
					{
					setState(633);
					identifier();
					}
					break;
				case DEC_DIGITS:
				case DEC_DIGITS_UNDERSCORE:
				case HEX_PREFIX:
				case OCT_PREFIX:
				case BIN_PREFIX:
					{
					setState(634);
					u64Literal();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				setState(637); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( ((((_la - 83)) & ~0x3f) == 0 && ((1L << (_la - 83)) & ((1L << (NON_KEYWORD_IDENTIFIER - 83)) | (1L << (DEC_DIGITS - 83)) | (1L << (DEC_DIGITS_UNDERSCORE - 83)) | (1L << (HEX_PREFIX - 83)) | (1L << (OCT_PREFIX - 83)) | (1L << (BIN_PREFIX - 83)) | (1L << (RAW_ESCAPE - 83)))) != 0) );
			setState(639);
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
			setState(641);
			match(KW_TYPEDEF);
			setState(645);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(642);
				match(WS);
				}
				}
				setState(647);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(648);
			match(EQ);
			setState(652);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(649);
				match(WS);
				}
				}
				setState(654);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(655);
			identifier();
			setState(659);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(656);
				match(WS);
				}
				}
				setState(661);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(662);
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
			setState(664);
			match(KW_MODULE);
			setState(665);
			simplePath();
			setState(666);
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
			setState(668);
			match(KW_USE);
			setState(669);
			useTree();
			setState(670);
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
			setState(701);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,97,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(676);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NON_KEYWORD_IDENTIFIER || _la==RAW_ESCAPE || _la==PATHSEP) {
					{
					setState(673);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,90,_ctx) ) {
					case 1:
						{
						setState(672);
						simplePath();
						}
						break;
					}
					setState(675);
					match(PATHSEP);
					}
				}

				setState(694);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case STAR:
					{
					setState(678);
					match(STAR);
					}
					break;
				case LBRACE:
					{
					setState(679);
					match(LBRACE);
					setState(691);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (((((_la - 83)) & ~0x3f) == 0 && ((1L << (_la - 83)) & ((1L << (NON_KEYWORD_IDENTIFIER - 83)) | (1L << (RAW_ESCAPE - 83)) | (1L << (STAR - 83)))) != 0) || _la==PATHSEP || _la==LBRACE) {
						{
						setState(680);
						useTree();
						setState(685);
						_errHandler.sync(this);
						_alt = getInterpreter().adaptivePredict(_input,92,_ctx);
						while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
							if ( _alt==1 ) {
								{
								{
								setState(681);
								match(COMMA);
								setState(682);
								useTree();
								}
								} 
							}
							setState(687);
							_errHandler.sync(this);
							_alt = getInterpreter().adaptivePredict(_input,92,_ctx);
						}
						setState(689);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==COMMA) {
							{
							setState(688);
							match(COMMA);
							}
						}

						}
					}

					setState(693);
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
				setState(696);
				simplePath();
				setState(699);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_AS) {
					{
					setState(697);
					match(KW_AS);
					setState(698);
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
			setState(704);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PATHSEP) {
				{
				setState(703);
				match(PATHSEP);
				}
			}

			setState(706);
			identifier();
			setState(711);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,99,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(707);
					match(PATHSEP);
					setState(708);
					identifier();
					}
					} 
				}
				setState(713);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,99,_ctx);
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
			setState(714);
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
		enterRule(_localctx, 50, RULE_charLiteral);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(716);
			match(CHAR_LITERAL);

					((CharLiteralContext)_localctx).maybe_val =  GetCharValue(this, _localctx);
			  
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
		enterRule(_localctx, 52, RULE_f32Literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(719);
			match(FLOAT_LITERAL);

					((F32LiteralContext)_localctx).maybe_val =  GetFloatValue<float>(this, _localctx);
			  
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
		enterRule(_localctx, 54, RULE_f64Literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(722);
			match(FLOAT_LITERAL);

					((F64LiteralContext)_localctx).maybe_val =  GetFloatValue<double>(this, _localctx);
			  
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
		enterRule(_localctx, 56, RULE_u8Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(732);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
				{
				setState(725);
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
				setState(726);
				match(HEX_PREFIX);
				setState(727);
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
				setState(728);
				match(OCT_PREFIX);
				setState(729);
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
				setState(730);
				match(BIN_PREFIX);
				setState(731);
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

					((U8LiteralContext)_localctx).maybe_val =  GetIntValue<uint8_t>(this, _localctx);
			  
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
		enterRule(_localctx, 58, RULE_u16Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(743);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
				{
				setState(736);
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
				setState(737);
				match(HEX_PREFIX);
				setState(738);
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
				setState(739);
				match(OCT_PREFIX);
				setState(740);
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
				setState(741);
				match(BIN_PREFIX);
				setState(742);
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

					((U16LiteralContext)_localctx).maybe_val =  GetIntValue<uint16_t>(this, _localctx);
			  
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
		enterRule(_localctx, 60, RULE_u32Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(754);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
				{
				setState(747);
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
				setState(748);
				match(HEX_PREFIX);
				setState(749);
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
				setState(750);
				match(OCT_PREFIX);
				setState(751);
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
				setState(752);
				match(BIN_PREFIX);
				setState(753);
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

					((U32LiteralContext)_localctx).maybe_val =  GetIntValue<uint32_t>(this, _localctx);
			  
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
		enterRule(_localctx, 62, RULE_u64Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(765);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
				{
				setState(758);
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
				setState(759);
				match(HEX_PREFIX);
				setState(760);
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
				setState(761);
				match(OCT_PREFIX);
				setState(762);
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
				setState(763);
				match(BIN_PREFIX);
				setState(764);
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

					((U64LiteralContext)_localctx).maybe_val =  GetIntValue<uint64_t>(this, _localctx);
			  
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
		enterRule(_localctx, 64, RULE_i8Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(776);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
				{
				setState(769);
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
				setState(770);
				match(HEX_PREFIX);
				setState(771);
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
				setState(772);
				match(OCT_PREFIX);
				setState(773);
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
				setState(774);
				match(BIN_PREFIX);
				setState(775);
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

					((I8LiteralContext)_localctx).maybe_val =  GetIntValue<int8_t>(this, _localctx);
			  
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
		enterRule(_localctx, 66, RULE_i16Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(787);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
				{
				setState(780);
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
				setState(781);
				match(HEX_PREFIX);
				setState(782);
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
				setState(783);
				match(OCT_PREFIX);
				setState(784);
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
				setState(785);
				match(BIN_PREFIX);
				setState(786);
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

					((I16LiteralContext)_localctx).maybe_val =  GetIntValue<int16_t>(this, _localctx);
			  
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
		enterRule(_localctx, 68, RULE_i32Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(798);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
				{
				setState(791);
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
				setState(792);
				match(HEX_PREFIX);
				setState(793);
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
				setState(794);
				match(OCT_PREFIX);
				setState(795);
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
				setState(796);
				match(BIN_PREFIX);
				setState(797);
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
		enterRule(_localctx, 70, RULE_i64Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(809);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
				{
				setState(802);
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
				setState(803);
				match(HEX_PREFIX);
				setState(804);
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
				setState(805);
				match(OCT_PREFIX);
				setState(806);
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
				setState(807);
				match(BIN_PREFIX);
				setState(808);
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
		public Token STRING_LITERAL;
		public Token RAW_STRING_LITERAL;
		public TerminalNode STRING_LITERAL() { return getToken(TypedefParser.STRING_LITERAL, 0); }
		public TerminalNode RAW_STRING_LITERAL() { return getToken(TypedefParser.RAW_STRING_LITERAL, 0); }
		public StringLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stringLiteral; }
	}

	public final StringLiteralContext stringLiteral() throws RecognitionException {
		StringLiteralContext _localctx = new StringLiteralContext(_ctx, getState());
		enterRule(_localctx, 72, RULE_stringLiteral);
		try {
			setState(817);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case STRING_LITERAL:
				enterOuterAlt(_localctx, 1);
				{
				setState(813);
				((StringLiteralContext)_localctx).STRING_LITERAL = match(STRING_LITERAL);

						((StringLiteralContext)_localctx).maybe_val =  GetStringValue(this, ((StringLiteralContext)_localctx).STRING_LITERAL);
					
				}
				break;
			case RAW_STRING_LITERAL:
				enterOuterAlt(_localctx, 2);
				{
				setState(815);
				((StringLiteralContext)_localctx).RAW_STRING_LITERAL = match(RAW_STRING_LITERAL);

						((StringLiteralContext)_localctx).maybe_val =  GetRawString(this, ((StringLiteralContext)_localctx).RAW_STRING_LITERAL);
					
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
		enterRule(_localctx, 74, RULE_identifier);
		try {
			setState(822);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NON_KEYWORD_IDENTIFIER:
				enterOuterAlt(_localctx, 1);
				{
				setState(819);
				((IdentifierContext)_localctx).nki = match(NON_KEYWORD_IDENTIFIER);
				}
				break;
			case RAW_ESCAPE:
				enterOuterAlt(_localctx, 2);
				{
				setState(820);
				match(RAW_ESCAPE);
				setState(821);
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
		enterRule(_localctx, 76, RULE_keyword);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(824);
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u00a1\u033d\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\3\2\3\2\7\2S\n\2\f\2"+
		"\16\2V\13\2\3\2\5\2Y\n\2\3\2\7\2\\\n\2\f\2\16\2_\13\2\3\2\7\2b\n\2\f\2"+
		"\16\2e\13\2\3\2\7\2h\n\2\f\2\16\2k\13\2\3\2\7\2n\n\2\f\2\16\2q\13\2\3"+
		"\2\7\2t\n\2\f\2\16\2w\13\2\3\2\3\2\3\3\3\3\3\4\3\4\7\4\177\n\4\f\4\16"+
		"\4\u0082\13\4\3\4\3\4\7\4\u0086\n\4\f\4\16\4\u0089\13\4\3\4\3\4\3\4\3"+
		"\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5"+
		"\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3"+
		"\5\3\5\3\5\3\5\5\5\u00b5\n\5\3\6\3\6\7\6\u00b9\n\6\f\6\16\6\u00bc\13\6"+
		"\3\6\5\6\u00bf\n\6\3\6\7\6\u00c2\n\6\f\6\16\6\u00c5\13\6\3\6\3\6\7\6\u00c9"+
		"\n\6\f\6\16\6\u00cc\13\6\3\6\3\6\3\7\3\7\7\7\u00d2\n\7\f\7\16\7\u00d5"+
		"\13\7\3\7\5\7\u00d8\n\7\3\7\7\7\u00db\n\7\f\7\16\7\u00de\13\7\3\7\3\7"+
		"\7\7\u00e2\n\7\f\7\16\7\u00e5\13\7\3\7\3\7\3\b\3\b\7\b\u00eb\n\b\f\b\16"+
		"\b\u00ee\13\b\3\b\5\b\u00f1\n\b\3\b\7\b\u00f4\n\b\f\b\16\b\u00f7\13\b"+
		"\3\b\3\b\7\b\u00fb\n\b\f\b\16\b\u00fe\13\b\3\b\3\b\3\t\3\t\7\t\u0104\n"+
		"\t\f\t\16\t\u0107\13\t\3\t\3\t\7\t\u010b\n\t\f\t\16\t\u010e\13\t\3\t\3"+
		"\t\7\t\u0112\n\t\f\t\16\t\u0115\13\t\3\t\3\t\5\t\u0119\n\t\3\t\3\t\7\t"+
		"\u011d\n\t\f\t\16\t\u0120\13\t\3\t\3\t\5\t\u0124\n\t\5\t\u0126\n\t\3\n"+
		"\3\n\7\n\u012a\n\n\f\n\16\n\u012d\13\n\3\n\3\n\7\n\u0131\n\n\f\n\16\n"+
		"\u0134\13\n\3\n\3\n\7\n\u0138\n\n\f\n\16\n\u013b\13\n\3\n\3\n\5\n\u013f"+
		"\n\n\3\n\3\n\7\n\u0143\n\n\f\n\16\n\u0146\13\n\3\n\3\n\3\n\5\n\u014b\n"+
		"\n\3\13\3\13\7\13\u014f\n\13\f\13\16\13\u0152\13\13\3\13\3\13\7\13\u0156"+
		"\n\13\f\13\16\13\u0159\13\13\3\13\3\13\7\13\u015d\n\13\f\13\16\13\u0160"+
		"\13\13\3\13\3\13\5\13\u0164\n\13\3\13\3\13\7\13\u0168\n\13\f\13\16\13"+
		"\u016b\13\13\3\13\3\13\3\13\5\13\u0170\n\13\3\f\3\f\7\f\u0174\n\f\f\f"+
		"\16\f\u0177\13\f\3\f\3\f\7\f\u017b\n\f\f\f\16\f\u017e\13\f\3\f\3\f\7\f"+
		"\u0182\n\f\f\f\16\f\u0185\13\f\3\f\3\f\5\f\u0189\n\f\3\f\3\f\7\f\u018d"+
		"\n\f\f\f\16\f\u0190\13\f\3\f\3\f\3\f\5\f\u0195\n\f\3\r\3\r\7\r\u0199\n"+
		"\r\f\r\16\r\u019c\13\r\3\r\3\r\7\r\u01a0\n\r\f\r\16\r\u01a3\13\r\3\r\3"+
		"\r\7\r\u01a7\n\r\f\r\16\r\u01aa\13\r\3\r\3\r\5\r\u01ae\n\r\3\r\3\r\7\r"+
		"\u01b2\n\r\f\r\16\r\u01b5\13\r\3\r\3\r\3\r\5\r\u01ba\n\r\3\16\3\16\7\16"+
		"\u01be\n\16\f\16\16\16\u01c1\13\16\3\16\3\16\7\16\u01c5\n\16\f\16\16\16"+
		"\u01c8\13\16\3\16\3\16\7\16\u01cc\n\16\f\16\16\16\u01cf\13\16\3\16\3\16"+
		"\5\16\u01d3\n\16\3\16\3\16\7\16\u01d7\n\16\f\16\16\16\u01da\13\16\3\16"+
		"\3\16\3\16\5\16\u01df\n\16\3\17\3\17\7\17\u01e3\n\17\f\17\16\17\u01e6"+
		"\13\17\3\17\3\17\7\17\u01ea\n\17\f\17\16\17\u01ed\13\17\3\17\3\17\7\17"+
		"\u01f1\n\17\f\17\16\17\u01f4\13\17\3\17\3\17\5\17\u01f8\n\17\3\17\3\17"+
		"\7\17\u01fc\n\17\f\17\16\17\u01ff\13\17\3\17\3\17\3\17\5\17\u0204\n\17"+
		"\3\20\3\20\7\20\u0208\n\20\f\20\16\20\u020b\13\20\3\20\3\20\7\20\u020f"+
		"\n\20\f\20\16\20\u0212\13\20\3\20\3\20\7\20\u0216\n\20\f\20\16\20\u0219"+
		"\13\20\3\20\3\20\5\20\u021d\n\20\3\20\3\20\7\20\u0221\n\20\f\20\16\20"+
		"\u0224\13\20\3\20\3\20\3\20\5\20\u0229\n\20\3\21\3\21\7\21\u022d\n\21"+
		"\f\21\16\21\u0230\13\21\3\21\3\21\7\21\u0234\n\21\f\21\16\21\u0237\13"+
		"\21\3\21\3\21\7\21\u023b\n\21\f\21\16\21\u023e\13\21\3\21\3\21\5\21\u0242"+
		"\n\21\3\21\3\21\7\21\u0246\n\21\f\21\16\21\u0249\13\21\3\21\3\21\5\21"+
		"\u024d\n\21\5\21\u024f\n\21\3\22\3\22\7\22\u0253\n\22\f\22\16\22\u0256"+
		"\13\22\3\22\3\22\7\22\u025a\n\22\f\22\16\22\u025d\13\22\3\22\3\22\7\22"+
		"\u0261\n\22\f\22\16\22\u0264\13\22\3\22\3\22\5\22\u0268\n\22\3\22\3\22"+
		"\7\22\u026c\n\22\f\22\16\22\u026f\13\22\3\22\3\22\3\22\5\22\u0274\n\22"+
		"\3\23\3\23\5\23\u0278\n\23\3\24\3\24\3\24\3\24\6\24\u027e\n\24\r\24\16"+
		"\24\u027f\3\24\3\24\3\25\3\25\7\25\u0286\n\25\f\25\16\25\u0289\13\25\3"+
		"\25\3\25\7\25\u028d\n\25\f\25\16\25\u0290\13\25\3\25\3\25\7\25\u0294\n"+
		"\25\f\25\16\25\u0297\13\25\3\25\3\25\3\26\3\26\3\26\3\26\3\27\3\27\3\27"+
		"\3\27\3\30\5\30\u02a4\n\30\3\30\5\30\u02a7\n\30\3\30\3\30\3\30\3\30\3"+
		"\30\7\30\u02ae\n\30\f\30\16\30\u02b1\13\30\3\30\5\30\u02b4\n\30\5\30\u02b6"+
		"\n\30\3\30\5\30\u02b9\n\30\3\30\3\30\3\30\5\30\u02be\n\30\5\30\u02c0\n"+
		"\30\3\31\5\31\u02c3\n\31\3\31\3\31\3\31\7\31\u02c8\n\31\f\31\16\31\u02cb"+
		"\13\31\3\32\3\32\3\33\3\33\3\33\3\34\3\34\3\34\3\35\3\35\3\35\3\36\3\36"+
		"\3\36\3\36\3\36\3\36\3\36\5\36\u02df\n\36\3\36\3\36\3\37\3\37\3\37\3\37"+
		"\3\37\3\37\3\37\5\37\u02ea\n\37\3\37\3\37\3 \3 \3 \3 \3 \3 \3 \5 \u02f5"+
		"\n \3 \3 \3!\3!\3!\3!\3!\3!\3!\5!\u0300\n!\3!\3!\3\"\3\"\3\"\3\"\3\"\3"+
		"\"\3\"\5\"\u030b\n\"\3\"\3\"\3#\3#\3#\3#\3#\3#\3#\5#\u0316\n#\3#\3#\3"+
		"$\3$\3$\3$\3$\3$\3$\5$\u0321\n$\3$\3$\3%\3%\3%\3%\3%\3%\3%\5%\u032c\n"+
		"%\3%\3%\3&\3&\3&\3&\5&\u0334\n&\3\'\3\'\3\'\5\'\u0339\n\'\3(\3(\3(\2\2"+
		")\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$&(*,.\60\62\64\668:<>@BDF"+
		"HJLN\2\b\4\2\6\6\f\f\3\2bc\3\2de\3\2fg\3\2hi\5\2\4\b\n\17\22G\2\u039e"+
		"\2P\3\2\2\2\4z\3\2\2\2\6|\3\2\2\2\b\u00b4\3\2\2\2\n\u00be\3\2\2\2\f\u00d7"+
		"\3\2\2\2\16\u00f0\3\2\2\2\20\u0125\3\2\2\2\22\u014a\3\2\2\2\24\u016f\3"+
		"\2\2\2\26\u0194\3\2\2\2\30\u01b9\3\2\2\2\32\u01de\3\2\2\2\34\u0203\3\2"+
		"\2\2\36\u0228\3\2\2\2 \u024e\3\2\2\2\"\u0273\3\2\2\2$\u0277\3\2\2\2&\u0279"+
		"\3\2\2\2(\u0283\3\2\2\2*\u029a\3\2\2\2,\u029e\3\2\2\2.\u02bf\3\2\2\2\60"+
		"\u02c2\3\2\2\2\62\u02cc\3\2\2\2\64\u02ce\3\2\2\2\66\u02d1\3\2\2\28\u02d4"+
		"\3\2\2\2:\u02de\3\2\2\2<\u02e9\3\2\2\2>\u02f4\3\2\2\2@\u02ff\3\2\2\2B"+
		"\u030a\3\2\2\2D\u0315\3\2\2\2F\u0320\3\2\2\2H\u032b\3\2\2\2J\u0333\3\2"+
		"\2\2L\u0338\3\2\2\2N\u033a\3\2\2\2PT\5(\25\2QS\7^\2\2RQ\3\2\2\2SV\3\2"+
		"\2\2TR\3\2\2\2TU\3\2\2\2UX\3\2\2\2VT\3\2\2\2WY\5*\26\2XW\3\2\2\2XY\3\2"+
		"\2\2Yc\3\2\2\2Z\\\7^\2\2[Z\3\2\2\2\\_\3\2\2\2][\3\2\2\2]^\3\2\2\2^`\3"+
		"\2\2\2_]\3\2\2\2`b\5,\27\2a]\3\2\2\2be\3\2\2\2ca\3\2\2\2cd\3\2\2\2do\3"+
		"\2\2\2ec\3\2\2\2fh\7^\2\2gf\3\2\2\2hk\3\2\2\2ig\3\2\2\2ij\3\2\2\2jl\3"+
		"\2\2\2ki\3\2\2\2ln\5\4\3\2mi\3\2\2\2nq\3\2\2\2om\3\2\2\2op\3\2\2\2pu\3"+
		"\2\2\2qo\3\2\2\2rt\7^\2\2sr\3\2\2\2tw\3\2\2\2us\3\2\2\2uv\3\2\2\2vx\3"+
		"\2\2\2wu\3\2\2\2xy\7\2\2\3y\3\3\2\2\2z{\5\6\4\2{\5\3\2\2\2|\u0080\5L\'"+
		"\2}\177\7^\2\2~}\3\2\2\2\177\u0082\3\2\2\2\u0080~\3\2\2\2\u0080\u0081"+
		"\3\2\2\2\u0081\u0083\3\2\2\2\u0082\u0080\3\2\2\2\u0083\u0087\5\b\5\2\u0084"+
		"\u0086\7^\2\2\u0085\u0084\3\2\2\2\u0086\u0089\3\2\2\2\u0087\u0085\3\2"+
		"\2\2\u0087\u0088\3\2\2\2\u0088\u008a\3\2\2\2\u0089\u0087\3\2\2\2\u008a"+
		"\u008b\7\u0094\2\2\u008b\u008c\b\4\1\2\u008c\7\3\2\2\2\u008d\u008e\5\n"+
		"\6\2\u008e\u008f\b\5\1\2\u008f\u00b5\3\2\2\2\u0090\u0091\5\f\7\2\u0091"+
		"\u0092\b\5\1\2\u0092\u00b5\3\2\2\2\u0093\u0094\5\16\b\2\u0094\u0095\b"+
		"\5\1\2\u0095\u00b5\3\2\2\2\u0096\u0097\5\20\t\2\u0097\u0098\b\5\1\2\u0098"+
		"\u00b5\3\2\2\2\u0099\u009a\5\22\n\2\u009a\u009b\b\5\1\2\u009b\u00b5\3"+
		"\2\2\2\u009c\u009d\5\24\13\2\u009d\u009e\b\5\1\2\u009e\u00b5\3\2\2\2\u009f"+
		"\u00a0\5\26\f\2\u00a0\u00a1\b\5\1\2\u00a1\u00b5\3\2\2\2\u00a2\u00a3\5"+
		"\30\r\2\u00a3\u00a4\b\5\1\2\u00a4\u00b5\3\2\2\2\u00a5\u00a6\5\32\16\2"+
		"\u00a6\u00a7\b\5\1\2\u00a7\u00b5\3\2\2\2\u00a8\u00a9\5\34\17\2\u00a9\u00aa"+
		"\b\5\1\2\u00aa\u00b5\3\2\2\2\u00ab\u00ac\5\36\20\2\u00ac\u00ad\b\5\1\2"+
		"\u00ad\u00b5\3\2\2\2\u00ae\u00af\5 \21\2\u00af\u00b0\b\5\1\2\u00b0\u00b5"+
		"\3\2\2\2\u00b1\u00b2\5\"\22\2\u00b2\u00b3\b\5\1\2\u00b3\u00b5\3\2\2\2"+
		"\u00b4\u008d\3\2\2\2\u00b4\u0090\3\2\2\2\u00b4\u0093\3\2\2\2\u00b4\u0096"+
		"\3\2\2\2\u00b4\u0099\3\2\2\2\u00b4\u009c\3\2\2\2\u00b4\u009f\3\2\2\2\u00b4"+
		"\u00a2\3\2\2\2\u00b4\u00a5\3\2\2\2\u00b4\u00a8\3\2\2\2\u00b4\u00ab\3\2"+
		"\2\2\u00b4\u00ae\3\2\2\2\u00b4\u00b1\3\2\2\2\u00b5\t\3\2\2\2\u00b6\u00ba"+
		"\7\u0095\2\2\u00b7\u00b9\7^\2\2\u00b8\u00b7\3\2\2\2\u00b9\u00bc\3\2\2"+
		"\2\u00ba\u00b8\3\2\2\2\u00ba\u00bb\3\2\2\2\u00bb\u00bd\3\2\2\2\u00bc\u00ba"+
		"\3\2\2\2\u00bd\u00bf\7H\2\2\u00be\u00b6\3\2\2\2\u00be\u00bf\3\2\2\2\u00bf"+
		"\u00c3\3\2\2\2\u00c0\u00c2\7^\2\2\u00c1\u00c0\3\2\2\2\u00c2\u00c5\3\2"+
		"\2\2\u00c3\u00c1\3\2\2\2\u00c3\u00c4\3\2\2\2\u00c4\u00c6\3\2\2\2\u00c5"+
		"\u00c3\3\2\2\2\u00c6\u00ca\7\u0087\2\2\u00c7\u00c9\7^\2\2\u00c8\u00c7"+
		"\3\2\2\2\u00c9\u00cc\3\2\2\2\u00ca\u00c8\3\2\2\2\u00ca\u00cb\3\2\2\2\u00cb"+
		"\u00cd\3\2\2\2\u00cc\u00ca\3\2\2\2\u00cd\u00ce\5\62\32\2\u00ce\13\3\2"+
		"\2\2\u00cf\u00d3\7\u0095\2\2\u00d0\u00d2\7^\2\2\u00d1\u00d0\3\2\2\2\u00d2"+
		"\u00d5\3\2\2\2\u00d3\u00d1\3\2\2\2\u00d3\u00d4\3\2\2\2\u00d4\u00d6\3\2"+
		"\2\2\u00d5\u00d3\3\2\2\2\u00d6\u00d8\7I\2\2\u00d7\u00cf\3\2\2\2\u00d7"+
		"\u00d8\3\2\2\2\u00d8\u00dc\3\2\2\2\u00d9\u00db\7^\2\2\u00da\u00d9\3\2"+
		"\2\2\u00db\u00de\3\2\2\2\u00dc\u00da\3\2\2\2\u00dc\u00dd\3\2\2\2\u00dd"+
		"\u00df\3\2\2\2\u00de\u00dc\3\2\2\2\u00df\u00e3\7\u0087\2\2\u00e0\u00e2"+
		"\7^\2\2\u00e1\u00e0\3\2\2\2\u00e2\u00e5\3\2\2\2\u00e3\u00e1\3\2\2\2\u00e3"+
		"\u00e4\3\2\2\2\u00e4\u00e6\3\2\2\2\u00e5\u00e3\3\2\2\2\u00e6\u00e7\5\64"+
		"\33\2\u00e7\r\3\2\2\2\u00e8\u00ec\7\u0095\2\2\u00e9\u00eb\7^\2\2\u00ea"+
		"\u00e9\3\2\2\2\u00eb\u00ee\3\2\2\2\u00ec\u00ea\3\2\2\2\u00ec\u00ed\3\2"+
		"\2\2\u00ed\u00ef\3\2\2\2\u00ee\u00ec\3\2\2\2\u00ef\u00f1\7J\2\2\u00f0"+
		"\u00e8\3\2\2\2\u00f0\u00f1\3\2\2\2\u00f1\u00f5\3\2\2\2\u00f2\u00f4\7^"+
		"\2\2\u00f3\u00f2\3\2\2\2\u00f4\u00f7\3\2\2\2\u00f5\u00f3\3\2\2\2\u00f5"+
		"\u00f6\3\2\2\2\u00f6\u00f8\3\2\2\2\u00f7\u00f5\3\2\2\2\u00f8\u00fc\7\u0087"+
		"\2\2\u00f9\u00fb\7^\2\2\u00fa\u00f9\3\2\2\2\u00fb\u00fe\3\2\2\2\u00fc"+
		"\u00fa\3\2\2\2\u00fc\u00fd\3\2\2\2\u00fd\u00ff\3\2\2\2\u00fe\u00fc\3\2"+
		"\2\2\u00ff\u0100\5J&\2\u0100\17\3\2\2\2\u0101\u0105\7\u0095\2\2\u0102"+
		"\u0104\7^\2\2\u0103\u0102\3\2\2\2\u0104\u0107\3\2\2\2\u0105\u0103\3\2"+
		"\2\2\u0105\u0106\3\2\2\2\u0106\u0108\3\2\2\2\u0107\u0105\3\2\2\2\u0108"+
		"\u010c\7K\2\2\u0109\u010b\7^\2\2\u010a\u0109\3\2\2\2\u010b\u010e\3\2\2"+
		"\2\u010c\u010a\3\2\2\2\u010c\u010d\3\2\2\2\u010d\u010f\3\2\2\2\u010e\u010c"+
		"\3\2\2\2\u010f\u0113\7\u0087\2\2\u0110\u0112\7^\2\2\u0111\u0110\3\2\2"+
		"\2\u0112\u0115\3\2\2\2\u0113\u0111\3\2\2\2\u0113\u0114\3\2\2\2\u0114\u0116"+
		"\3\2\2\2\u0115\u0113\3\2\2\2\u0116\u0118\5\66\34\2\u0117\u0119\7K\2\2"+
		"\u0118\u0117\3\2\2\2\u0118\u0119\3\2\2\2\u0119\u0126\3\2\2\2\u011a\u011e"+
		"\7\u0087\2\2\u011b\u011d\7^\2\2\u011c\u011b\3\2\2\2\u011d\u0120\3\2\2"+
		"\2\u011e\u011c\3\2\2\2\u011e\u011f\3\2\2\2\u011f\u0121\3\2\2\2\u0120\u011e"+
		"\3\2\2\2\u0121\u0123\5\66\34\2\u0122\u0124\7K\2\2\u0123\u0122\3\2\2\2"+
		"\u0123\u0124\3\2\2\2\u0124\u0126\3\2\2\2\u0125\u0101\3\2\2\2\u0125\u011a"+
		"\3\2\2\2\u0126\21\3\2\2\2\u0127\u012b\7\u0095\2\2\u0128\u012a\7^\2\2\u0129"+
		"\u0128\3\2\2\2\u012a\u012d\3\2\2\2\u012b\u0129\3\2\2\2\u012b\u012c\3\2"+
		"\2\2\u012c\u012e\3\2\2\2\u012d\u012b\3\2\2\2\u012e\u0132\7L\2\2\u012f"+
		"\u0131\7^\2\2\u0130\u012f\3\2\2\2\u0131\u0134\3\2\2\2\u0132\u0130\3\2"+
		"\2\2\u0132\u0133\3\2\2\2\u0133\u0135\3\2\2\2\u0134\u0132\3\2\2\2\u0135"+
		"\u0139\7\u0087\2\2\u0136\u0138\7^\2\2\u0137\u0136\3\2\2\2\u0138\u013b"+
		"\3\2\2\2\u0139\u0137\3\2\2\2\u0139\u013a\3\2\2\2\u013a\u013c\3\2\2\2\u013b"+
		"\u0139\3\2\2\2\u013c\u013e\58\35\2\u013d\u013f\7L\2\2\u013e\u013d\3\2"+
		"\2\2\u013e\u013f\3\2\2\2\u013f\u014b\3\2\2\2\u0140\u0144\7\u0087\2\2\u0141"+
		"\u0143\7^\2\2\u0142\u0141\3\2\2\2\u0143\u0146\3\2\2\2\u0144\u0142\3\2"+
		"\2\2\u0144\u0145\3\2\2\2\u0145\u0147\3\2\2\2\u0146\u0144\3\2\2\2\u0147"+
		"\u0148\58\35\2\u0148\u0149\7L\2\2\u0149\u014b\3\2\2\2\u014a\u0127\3\2"+
		"\2\2\u014a\u0140\3\2\2\2\u014b\23\3\2\2\2\u014c\u0150\7\u0095\2\2\u014d"+
		"\u014f\7^\2\2\u014e\u014d\3\2\2\2\u014f\u0152\3\2\2\2\u0150\u014e\3\2"+
		"\2\2\u0150\u0151\3\2\2\2\u0151\u0153\3\2\2\2\u0152\u0150\3\2\2\2\u0153"+
		"\u0157\7M\2\2\u0154\u0156\7^\2\2\u0155\u0154\3\2\2\2\u0156\u0159\3\2\2"+
		"\2\u0157\u0155\3\2\2\2\u0157\u0158\3\2\2\2\u0158\u015a\3\2\2\2\u0159\u0157"+
		"\3\2\2\2\u015a\u015e\7\u0087\2\2\u015b\u015d\7^\2\2\u015c\u015b\3\2\2"+
		"\2\u015d\u0160\3\2\2\2\u015e\u015c\3\2\2\2\u015e\u015f\3\2\2\2\u015f\u0161"+
		"\3\2\2\2\u0160\u015e\3\2\2\2\u0161\u0163\5:\36\2\u0162\u0164\7M\2\2\u0163"+
		"\u0162\3\2\2\2\u0163\u0164\3\2\2\2\u0164\u0170\3\2\2\2\u0165\u0169\7\u0087"+
		"\2\2\u0166\u0168\7^\2\2\u0167\u0166\3\2\2\2\u0168\u016b\3\2\2\2\u0169"+
		"\u0167\3\2\2\2\u0169\u016a\3\2\2\2\u016a\u016c\3\2\2\2\u016b\u0169\3\2"+
		"\2\2\u016c\u016d\5:\36\2\u016d\u016e\7M\2\2\u016e\u0170\3\2\2\2\u016f"+
		"\u014c\3\2\2\2\u016f\u0165\3\2\2\2\u0170\25\3\2\2\2\u0171\u0175\7\u0095"+
		"\2\2\u0172\u0174\7^\2\2\u0173\u0172\3\2\2\2\u0174\u0177\3\2\2\2\u0175"+
		"\u0173\3\2\2\2\u0175\u0176\3\2\2\2\u0176\u0178\3\2\2\2\u0177\u0175\3\2"+
		"\2\2\u0178\u017c\7N\2\2\u0179\u017b\7^\2\2\u017a\u0179\3\2\2\2\u017b\u017e"+
		"\3\2\2\2\u017c\u017a\3\2\2\2\u017c\u017d\3\2\2\2\u017d\u017f\3\2\2\2\u017e"+
		"\u017c\3\2\2\2\u017f\u0183\7\u0087\2\2\u0180\u0182\7^\2\2\u0181\u0180"+
		"\3\2\2\2\u0182\u0185\3\2\2\2\u0183\u0181\3\2\2\2\u0183\u0184\3\2\2\2\u0184"+
		"\u0186\3\2\2\2\u0185\u0183\3\2\2\2\u0186\u0188\5<\37\2\u0187\u0189\7N"+
		"\2\2\u0188\u0187\3\2\2\2\u0188\u0189\3\2\2\2\u0189\u0195\3\2\2\2\u018a"+
		"\u018e\7\u0087\2\2\u018b\u018d\7^\2\2\u018c\u018b\3\2\2\2\u018d\u0190"+
		"\3\2\2\2\u018e\u018c\3\2\2\2\u018e\u018f\3\2\2\2\u018f\u0191\3\2\2\2\u0190"+
		"\u018e\3\2\2\2\u0191\u0192\5<\37\2\u0192\u0193\7N\2\2\u0193\u0195\3\2"+
		"\2\2\u0194\u0171\3\2\2\2\u0194\u018a\3\2\2\2\u0195\27\3\2\2\2\u0196\u019a"+
		"\7\u0095\2\2\u0197\u0199\7^\2\2\u0198\u0197\3\2\2\2\u0199\u019c\3\2\2"+
		"\2\u019a\u0198\3\2\2\2\u019a\u019b\3\2\2\2\u019b\u019d\3\2\2\2\u019c\u019a"+
		"\3\2\2\2\u019d\u01a1\7O\2\2\u019e\u01a0\7^\2\2\u019f\u019e\3\2\2\2\u01a0"+
		"\u01a3\3\2\2\2\u01a1\u019f\3\2\2\2\u01a1\u01a2\3\2\2\2\u01a2\u01a4\3\2"+
		"\2\2\u01a3\u01a1\3\2\2\2\u01a4\u01a8\7\u0087\2\2\u01a5\u01a7\7^\2\2\u01a6"+
		"\u01a5\3\2\2\2\u01a7\u01aa\3\2\2\2\u01a8\u01a6\3\2\2\2\u01a8\u01a9\3\2"+
		"\2\2\u01a9\u01ab\3\2\2\2\u01aa\u01a8\3\2\2\2\u01ab\u01ad\5> \2\u01ac\u01ae"+
		"\7O\2\2\u01ad\u01ac\3\2\2\2\u01ad\u01ae\3\2\2\2\u01ae\u01ba\3\2\2\2\u01af"+
		"\u01b3\7\u0087\2\2\u01b0\u01b2\7^\2\2\u01b1\u01b0\3\2\2\2\u01b2\u01b5"+
		"\3\2\2\2\u01b3\u01b1\3\2\2\2\u01b3\u01b4\3\2\2\2\u01b4\u01b6\3\2\2\2\u01b5"+
		"\u01b3\3\2\2\2\u01b6\u01b7\5> \2\u01b7\u01b8\7O\2\2\u01b8\u01ba\3\2\2"+
		"\2\u01b9\u0196\3\2\2\2\u01b9\u01af\3\2\2\2\u01ba\31\3\2\2\2\u01bb\u01bf"+
		"\7\u0095\2\2\u01bc\u01be\7^\2\2\u01bd\u01bc\3\2\2\2\u01be\u01c1\3\2\2"+
		"\2\u01bf\u01bd\3\2\2\2\u01bf\u01c0\3\2\2\2\u01c0\u01c2\3\2\2\2\u01c1\u01bf"+
		"\3\2\2\2\u01c2\u01c6\7P\2\2\u01c3\u01c5\7^\2\2\u01c4\u01c3\3\2\2\2\u01c5"+
		"\u01c8\3\2\2\2\u01c6\u01c4\3\2\2\2\u01c6\u01c7\3\2\2\2\u01c7\u01c9\3\2"+
		"\2\2\u01c8\u01c6\3\2\2\2\u01c9\u01cd\7\u0087\2\2\u01ca\u01cc\7^\2\2\u01cb"+
		"\u01ca\3\2\2\2\u01cc\u01cf\3\2\2\2\u01cd\u01cb\3\2\2\2\u01cd\u01ce\3\2"+
		"\2\2\u01ce\u01d0\3\2\2\2\u01cf\u01cd\3\2\2\2\u01d0\u01d2\5@!\2\u01d1\u01d3"+
		"\7P\2\2\u01d2\u01d1\3\2\2\2\u01d2\u01d3\3\2\2\2\u01d3\u01df\3\2\2\2\u01d4"+
		"\u01d8\7\u0087\2\2\u01d5\u01d7\7^\2\2\u01d6\u01d5\3\2\2\2\u01d7\u01da"+
		"\3\2\2\2\u01d8\u01d6\3\2\2\2\u01d8\u01d9\3\2\2\2\u01d9\u01db\3\2\2\2\u01da"+
		"\u01d8\3\2\2\2\u01db\u01dc\5@!\2\u01dc\u01dd\7P\2\2\u01dd\u01df\3\2\2"+
		"\2\u01de\u01bb\3\2\2\2\u01de\u01d4\3\2\2\2\u01df\33\3\2\2\2\u01e0\u01e4"+
		"\7\u0095\2\2\u01e1\u01e3\7^\2\2\u01e2\u01e1\3\2\2\2\u01e3\u01e6\3\2\2"+
		"\2\u01e4\u01e2\3\2\2\2\u01e4\u01e5\3\2\2\2\u01e5\u01e7\3\2\2\2\u01e6\u01e4"+
		"\3\2\2\2\u01e7\u01eb\7Q\2\2\u01e8\u01ea\7^\2\2\u01e9\u01e8\3\2\2\2\u01ea"+
		"\u01ed\3\2\2\2\u01eb\u01e9\3\2\2\2\u01eb\u01ec\3\2\2\2\u01ec\u01ee\3\2"+
		"\2\2\u01ed\u01eb\3\2\2\2\u01ee\u01f2\7\u0087\2\2\u01ef\u01f1\7^\2\2\u01f0"+
		"\u01ef\3\2\2\2\u01f1\u01f4\3\2\2\2\u01f2\u01f0\3\2\2\2\u01f2\u01f3\3\2"+
		"\2\2\u01f3\u01f5\3\2\2\2\u01f4\u01f2\3\2\2\2\u01f5\u01f7\5B\"\2\u01f6"+
		"\u01f8\7Q\2\2\u01f7\u01f6\3\2\2\2\u01f7\u01f8\3\2\2\2\u01f8\u0204\3\2"+
		"\2\2\u01f9\u01fd\7\u0087\2\2\u01fa\u01fc\7^\2\2\u01fb\u01fa\3\2\2\2\u01fc"+
		"\u01ff\3\2\2\2\u01fd\u01fb\3\2\2\2\u01fd\u01fe\3\2\2\2\u01fe\u0200\3\2"+
		"\2\2\u01ff\u01fd\3\2\2\2\u0200\u0201\5B\"\2\u0201\u0202\7Q\2\2\u0202\u0204"+
		"\3\2\2\2\u0203\u01e0\3\2\2\2\u0203\u01f9\3\2\2\2\u0204\35\3\2\2\2\u0205"+
		"\u0209\7\u0095\2\2\u0206\u0208\7^\2\2\u0207\u0206\3\2\2\2\u0208\u020b"+
		"\3\2\2\2\u0209\u0207\3\2\2\2\u0209\u020a\3\2\2\2\u020a\u020c\3\2\2\2\u020b"+
		"\u0209\3\2\2\2\u020c\u0210\7R\2\2\u020d\u020f\7^\2\2\u020e\u020d\3\2\2"+
		"\2\u020f\u0212\3\2\2\2\u0210\u020e\3\2\2\2\u0210\u0211\3\2\2\2\u0211\u0213"+
		"\3\2\2\2\u0212\u0210\3\2\2\2\u0213\u0217\7\u0087\2\2\u0214\u0216\7^\2"+
		"\2\u0215\u0214\3\2\2\2\u0216\u0219\3\2\2\2\u0217\u0215\3\2\2\2\u0217\u0218"+
		"\3\2\2\2\u0218\u021a\3\2\2\2\u0219\u0217\3\2\2\2\u021a\u021c\5D#\2\u021b"+
		"\u021d\7R\2\2\u021c\u021b\3\2\2\2\u021c\u021d\3\2\2\2\u021d\u0229\3\2"+
		"\2\2\u021e\u0222\7\u0087\2\2\u021f\u0221\7^\2\2\u0220\u021f\3\2\2\2\u0221"+
		"\u0224\3\2\2\2\u0222\u0220\3\2\2\2\u0222\u0223\3\2\2\2\u0223\u0225\3\2"+
		"\2\2\u0224\u0222\3\2\2\2\u0225\u0226\5D#\2\u0226\u0227\7R\2\2\u0227\u0229"+
		"\3\2\2\2\u0228\u0205\3\2\2\2\u0228\u021e\3\2\2\2\u0229\37\3\2\2\2\u022a"+
		"\u022e\7\u0095\2\2\u022b\u022d\7^\2\2\u022c\u022b\3\2\2\2\u022d\u0230"+
		"\3\2\2\2\u022e\u022c\3\2\2\2\u022e\u022f\3\2\2\2\u022f\u0231\3\2\2\2\u0230"+
		"\u022e\3\2\2\2\u0231\u0235\7S\2\2\u0232\u0234\7^\2\2\u0233\u0232\3\2\2"+
		"\2\u0234\u0237\3\2\2\2\u0235\u0233\3\2\2\2\u0235\u0236\3\2\2\2\u0236\u0238"+
		"\3\2\2\2\u0237\u0235\3\2\2\2\u0238\u023c\7\u0087\2\2\u0239\u023b\7^\2"+
		"\2\u023a\u0239\3\2\2\2\u023b\u023e\3\2\2\2\u023c\u023a\3\2\2\2\u023c\u023d"+
		"\3\2\2\2\u023d\u023f\3\2\2\2\u023e\u023c\3\2\2\2\u023f\u0241\5F$\2\u0240"+
		"\u0242\7S\2\2\u0241\u0240\3\2\2\2\u0241\u0242\3\2\2\2\u0242\u024f\3\2"+
		"\2\2\u0243\u0247\7\u0087\2\2\u0244\u0246\7^\2\2\u0245\u0244\3\2\2\2\u0246"+
		"\u0249\3\2\2\2\u0247\u0245\3\2\2\2\u0247\u0248\3\2\2\2\u0248\u024a\3\2"+
		"\2\2\u0249\u0247\3\2\2\2\u024a\u024c\5F$\2\u024b\u024d\7S\2\2\u024c\u024b"+
		"\3\2\2\2\u024c\u024d\3\2\2\2\u024d\u024f\3\2\2\2\u024e\u022a\3\2\2\2\u024e"+
		"\u0243\3\2\2\2\u024f!\3\2\2\2\u0250\u0254\7\u0095\2\2\u0251\u0253\7^\2"+
		"\2\u0252\u0251\3\2\2\2\u0253\u0256\3\2\2\2\u0254\u0252\3\2\2\2\u0254\u0255"+
		"\3\2\2\2\u0255\u0257\3\2\2\2\u0256\u0254\3\2\2\2\u0257\u025b\7T\2\2\u0258"+
		"\u025a\7^\2\2\u0259\u0258\3\2\2\2\u025a\u025d\3\2\2\2\u025b\u0259\3\2"+
		"\2\2\u025b\u025c\3\2\2\2\u025c\u025e\3\2\2\2\u025d\u025b\3\2\2\2\u025e"+
		"\u0262\7\u0087\2\2\u025f\u0261\7^\2\2\u0260\u025f\3\2\2\2\u0261\u0264"+
		"\3\2\2\2\u0262\u0260\3\2\2\2\u0262\u0263\3\2\2\2\u0263\u0265\3\2\2\2\u0264"+
		"\u0262\3\2\2\2\u0265\u0267\5H%\2\u0266\u0268\7T\2\2\u0267\u0266\3\2\2"+
		"\2\u0267\u0268\3\2\2\2\u0268\u0274\3\2\2\2\u0269\u026d\7\u0087\2\2\u026a"+
		"\u026c\7^\2\2\u026b\u026a\3\2\2\2\u026c\u026f\3\2\2\2\u026d\u026b\3\2"+
		"\2\2\u026d\u026e\3\2\2\2\u026e\u0270\3\2\2\2\u026f\u026d\3\2\2\2\u0270"+
		"\u0271\5H%\2\u0271\u0272\7T\2\2\u0272\u0274\3\2\2\2\u0273\u0250\3\2\2"+
		"\2\u0273\u0269\3\2\2\2\u0274#\3\2\2\2\u0275\u0278\5L\'\2\u0276\u0278\5"+
		"&\24\2\u0277\u0275\3\2\2\2\u0277\u0276\3\2\2\2\u0278%\3\2\2\2\u0279\u027a"+
		"\5L\'\2\u027a\u027d\7\u008b\2\2\u027b\u027e\5L\'\2\u027c\u027e\5@!\2\u027d"+
		"\u027b\3\2\2\2\u027d\u027c\3\2\2\2\u027e\u027f\3\2\2\2\u027f\u027d\3\2"+
		"\2\2\u027f\u0280\3\2\2\2\u0280\u0281\3\2\2\2\u0281\u0282\7\u008a\2\2\u0282"+
		"\'\3\2\2\2\u0283\u0287\7\16\2\2\u0284\u0286\7^\2\2\u0285\u0284\3\2\2\2"+
		"\u0286\u0289\3\2\2\2\u0287\u0285\3\2\2\2\u0287\u0288\3\2\2\2\u0288\u028a"+
		"\3\2\2\2\u0289\u0287\3\2\2\2\u028a\u028e\7\u0087\2\2\u028b\u028d\7^\2"+
		"\2\u028c\u028b\3\2\2\2\u028d\u0290\3\2\2\2\u028e\u028c\3\2\2\2\u028e\u028f"+
		"\3\2\2\2\u028f\u0291\3\2\2\2\u0290\u028e\3\2\2\2\u0291\u0295\5L\'\2\u0292"+
		"\u0294\7^\2\2\u0293\u0292\3\2\2\2\u0294\u0297\3\2\2\2\u0295\u0293\3\2"+
		"\2\2\u0295\u0296\3\2\2\2\u0296\u0298\3\2\2\2\u0297\u0295\3\2\2\2\u0298"+
		"\u0299\7\u0094\2\2\u0299)\3\2\2\2\u029a\u029b\7\n\2\2\u029b\u029c\5\60"+
		"\31\2\u029c\u029d\7\u0094\2\2\u029d+\3\2\2\2\u029e\u029f\7\17\2\2\u029f"+
		"\u02a0\5.\30\2\u02a0\u02a1\7\u0094\2\2\u02a1-\3\2\2\2\u02a2\u02a4\5\60"+
		"\31\2\u02a3\u02a2\3\2\2\2\u02a3\u02a4\3\2\2\2\u02a4\u02a5\3\2\2\2\u02a5"+
		"\u02a7\7\u0096\2\2\u02a6\u02a3\3\2\2\2\u02a6\u02a7\3\2\2\2\u02a7\u02b8"+
		"\3\2\2\2\u02a8\u02b9\7t\2\2\u02a9\u02b5\7\u009c\2\2\u02aa\u02af\5.\30"+
		"\2\u02ab\u02ac\7\u0093\2\2\u02ac\u02ae\5.\30\2\u02ad\u02ab\3\2\2\2\u02ae"+
		"\u02b1\3\2\2\2\u02af\u02ad\3\2\2\2\u02af\u02b0\3\2\2\2\u02b0\u02b3\3\2"+
		"\2\2\u02b1\u02af\3\2\2\2\u02b2\u02b4\7\u0093\2\2\u02b3\u02b2\3\2\2\2\u02b3"+
		"\u02b4\3\2\2\2\u02b4\u02b6\3\2\2\2\u02b5\u02aa\3\2\2\2\u02b5\u02b6\3\2"+
		"\2\2\u02b6\u02b7\3\2\2\2\u02b7\u02b9\7\u009d\2\2\u02b8\u02a8\3\2\2\2\u02b8"+
		"\u02a9\3\2\2\2\u02b9\u02c0\3\2\2\2\u02ba\u02bd\5\60\31\2\u02bb\u02bc\7"+
		"\4\2\2\u02bc\u02be\5L\'\2\u02bd\u02bb\3\2\2\2\u02bd\u02be\3\2\2\2\u02be"+
		"\u02c0\3\2\2\2\u02bf\u02a6\3\2\2\2\u02bf\u02ba\3\2\2\2\u02c0/\3\2\2\2"+
		"\u02c1\u02c3\7\u0096\2\2\u02c2\u02c1\3\2\2\2\u02c2\u02c3\3\2\2\2\u02c3"+
		"\u02c4\3\2\2\2\u02c4\u02c9\5L\'\2\u02c5\u02c6\7\u0096\2\2\u02c6\u02c8"+
		"\5L\'\2\u02c7\u02c5\3\2\2\2\u02c8\u02cb\3\2\2\2\u02c9\u02c7\3\2\2\2\u02c9"+
		"\u02ca\3\2\2\2\u02ca\61\3\2\2\2\u02cb\u02c9\3\2\2\2\u02cc\u02cd\t\2\2"+
		"\2\u02cd\63\3\2\2\2\u02ce\u02cf\7_\2\2\u02cf\u02d0\b\33\1\2\u02d0\65\3"+
		"\2\2\2\u02d1\u02d2\7j\2\2\u02d2\u02d3\b\34\1\2\u02d3\67\3\2\2\2\u02d4"+
		"\u02d5\7j\2\2\u02d5\u02d6\b\35\1\2\u02d69\3\2\2\2\u02d7\u02df\t\3\2\2"+
		"\u02d8\u02d9\7n\2\2\u02d9\u02df\t\4\2\2\u02da\u02db\7o\2\2\u02db\u02df"+
		"\t\5\2\2\u02dc\u02dd\7p\2\2\u02dd\u02df\t\6\2\2\u02de\u02d7\3\2\2\2\u02de"+
		"\u02d8\3\2\2\2\u02de\u02da\3\2\2\2\u02de\u02dc\3\2\2\2\u02df\u02e0\3\2"+
		"\2\2\u02e0\u02e1\b\36\1\2\u02e1;\3\2\2\2\u02e2\u02ea\t\3\2\2\u02e3\u02e4"+
		"\7n\2\2\u02e4\u02ea\t\4\2\2\u02e5\u02e6\7o\2\2\u02e6\u02ea\t\5\2\2\u02e7"+
		"\u02e8\7p\2\2\u02e8\u02ea\t\6\2\2\u02e9\u02e2\3\2\2\2\u02e9\u02e3\3\2"+
		"\2\2\u02e9\u02e5\3\2\2\2\u02e9\u02e7\3\2\2\2\u02ea\u02eb\3\2\2\2\u02eb"+
		"\u02ec\b\37\1\2\u02ec=\3\2\2\2\u02ed\u02f5\t\3\2\2\u02ee\u02ef\7n\2\2"+
		"\u02ef\u02f5\t\4\2\2\u02f0\u02f1\7o\2\2\u02f1\u02f5\t\5\2\2\u02f2\u02f3"+
		"\7p\2\2\u02f3\u02f5\t\6\2\2\u02f4\u02ed\3\2\2\2\u02f4\u02ee\3\2\2\2\u02f4"+
		"\u02f0\3\2\2\2\u02f4\u02f2\3\2\2\2\u02f5\u02f6\3\2\2\2\u02f6\u02f7\b "+
		"\1\2\u02f7?\3\2\2\2\u02f8\u0300\t\3\2\2\u02f9\u02fa\7n\2\2\u02fa\u0300"+
		"\t\4\2\2\u02fb\u02fc\7o\2\2\u02fc\u0300\t\5\2\2\u02fd\u02fe\7p\2\2\u02fe"+
		"\u0300\t\6\2\2\u02ff\u02f8\3\2\2\2\u02ff\u02f9\3\2\2\2\u02ff\u02fb\3\2"+
		"\2\2\u02ff\u02fd\3\2\2\2\u0300\u0301\3\2\2\2\u0301\u0302\b!\1\2\u0302"+
		"A\3\2\2\2\u0303\u030b\t\3\2\2\u0304\u0305\7n\2\2\u0305\u030b\t\4\2\2\u0306"+
		"\u0307\7o\2\2\u0307\u030b\t\5\2\2\u0308\u0309\7p\2\2\u0309\u030b\t\6\2"+
		"\2\u030a\u0303\3\2\2\2\u030a\u0304\3\2\2\2\u030a\u0306\3\2\2\2\u030a\u0308"+
		"\3\2\2\2\u030b\u030c\3\2\2\2\u030c\u030d\b\"\1\2\u030dC\3\2\2\2\u030e"+
		"\u0316\t\3\2\2\u030f\u0310\7n\2\2\u0310\u0316\t\4\2\2\u0311\u0312\7o\2"+
		"\2\u0312\u0316\t\5\2\2\u0313\u0314\7p\2\2\u0314\u0316\t\6\2\2\u0315\u030e"+
		"\3\2\2\2\u0315\u030f\3\2\2\2\u0315\u0311\3\2\2\2\u0315\u0313\3\2\2\2\u0316"+
		"\u0317\3\2\2\2\u0317\u0318\b#\1\2\u0318E\3\2\2\2\u0319\u0321\t\3\2\2\u031a"+
		"\u031b\7n\2\2\u031b\u0321\t\4\2\2\u031c\u031d\7o\2\2\u031d\u0321\t\5\2"+
		"\2\u031e\u031f\7p\2\2\u031f\u0321\t\6\2\2\u0320\u0319\3\2\2\2\u0320\u031a"+
		"\3\2\2\2\u0320\u031c\3\2\2\2\u0320\u031e\3\2\2\2\u0321\u0322\3\2\2\2\u0322"+
		"\u0323\b$\1\2\u0323G\3\2\2\2\u0324\u032c\t\3\2\2\u0325\u0326\7n\2\2\u0326"+
		"\u032c\t\4\2\2\u0327\u0328\7o\2\2\u0328\u032c\t\5\2\2\u0329\u032a\7p\2"+
		"\2\u032a\u032c\t\6\2\2\u032b\u0324\3\2\2\2\u032b\u0325\3\2\2\2\u032b\u0327"+
		"\3\2\2\2\u032b\u0329\3\2\2\2\u032c\u032d\3\2\2\2\u032d\u032e\b%\1\2\u032e"+
		"I\3\2\2\2\u032f\u0330\7`\2\2\u0330\u0334\b&\1\2\u0331\u0332\7a\2\2\u0332"+
		"\u0334\b&\1\2\u0333\u032f\3\2\2\2\u0333\u0331\3\2\2\2\u0334K\3\2\2\2\u0335"+
		"\u0339\7U\2\2\u0336\u0337\7q\2\2\u0337\u0339\7U\2\2\u0338\u0335\3\2\2"+
		"\2\u0338\u0336\3\2\2\2\u0339M\3\2\2\2\u033a\u033b\t\7\2\2\u033bO\3\2\2"+
		"\2pTX]ciou\u0080\u0087\u00b4\u00ba\u00be\u00c3\u00ca\u00d3\u00d7\u00dc"+
		"\u00e3\u00ec\u00f0\u00f5\u00fc\u0105\u010c\u0113\u0118\u011e\u0123\u0125"+
		"\u012b\u0132\u0139\u013e\u0144\u014a\u0150\u0157\u015e\u0163\u0169\u016f"+
		"\u0175\u017c\u0183\u0188\u018e\u0194\u019a\u01a1\u01a8\u01ad\u01b3\u01b9"+
		"\u01bf\u01c6\u01cd\u01d2\u01d8\u01de\u01e4\u01eb\u01f2\u01f7\u01fd\u0203"+
		"\u0209\u0210\u0217\u021c\u0222\u0228\u022e\u0235\u023c\u0241\u0247\u024c"+
		"\u024e\u0254\u025b\u0262\u0267\u026d\u0273\u0277\u027d\u027f\u0287\u028e"+
		"\u0295\u02a3\u02a6\u02af\u02b3\u02b5\u02b8\u02bd\u02bf\u02c2\u02c9\u02de"+
		"\u02e9\u02f4\u02ff\u030a\u0315\u0320\u032b\u0333\u0338";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}