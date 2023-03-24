// Generated from /home/dpemmons/src/typedef/snippet.g4 by ANTLR 4.9.2
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class IntParseLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.9.2", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		INTEGER_LITERAL=1, DEC_LITERAL=2, HEX_LITERAL=3, OCT_LITERAL=4, BIN_LITERAL=5;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"INTEGER_LITERAL", "DEC_LITERAL", "HEX_LITERAL", "OCT_LITERAL", "BIN_LITERAL", 
			"INTEGER_SUFFIX", "DEC_DIGIT", "HEX_DIGIT", "OCT_DIGIT"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "INTEGER_LITERAL", "DEC_LITERAL", "HEX_LITERAL", "OCT_LITERAL", 
			"BIN_LITERAL"
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


	public IntParseLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "snippet.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\7~\b\1\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\3\2\3\2"+
		"\3\2\3\2\5\2\32\n\2\3\2\5\2\35\n\2\3\3\3\3\3\3\7\3\"\n\3\f\3\16\3%\13"+
		"\3\3\4\3\4\3\4\3\4\7\4+\n\4\f\4\16\4.\13\4\3\4\3\4\3\4\7\4\63\n\4\f\4"+
		"\16\4\66\13\4\3\5\3\5\3\5\3\5\7\5<\n\5\f\5\16\5?\13\5\3\5\3\5\3\5\7\5"+
		"D\n\5\f\5\16\5G\13\5\3\6\3\6\3\6\3\6\7\6M\n\6\f\6\16\6P\13\6\3\6\3\6\7"+
		"\6T\n\6\f\6\16\6W\13\6\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7"+
		"\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3"+
		"\7\5\7w\n\7\3\b\3\b\3\t\3\t\3\n\3\n\2\2\13\3\3\5\4\7\5\t\6\13\7\r\2\17"+
		"\2\21\2\23\2\3\2\7\3\2\62\63\4\2\62\63aa\3\2\62;\5\2\62;CHch\3\2\629\2"+
		"\u0090\2\3\3\2\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\3"+
		"\31\3\2\2\2\5\36\3\2\2\2\7&\3\2\2\2\t\67\3\2\2\2\13H\3\2\2\2\rv\3\2\2"+
		"\2\17x\3\2\2\2\21z\3\2\2\2\23|\3\2\2\2\25\32\5\5\3\2\26\32\5\13\6\2\27"+
		"\32\5\t\5\2\30\32\5\7\4\2\31\25\3\2\2\2\31\26\3\2\2\2\31\27\3\2\2\2\31"+
		"\30\3\2\2\2\32\34\3\2\2\2\33\35\5\r\7\2\34\33\3\2\2\2\34\35\3\2\2\2\35"+
		"\4\3\2\2\2\36#\5\17\b\2\37\"\5\17\b\2 \"\7a\2\2!\37\3\2\2\2! \3\2\2\2"+
		"\"%\3\2\2\2#!\3\2\2\2#$\3\2\2\2$\6\3\2\2\2%#\3\2\2\2&\'\7\62\2\2\'(\7"+
		"z\2\2(,\3\2\2\2)+\7a\2\2*)\3\2\2\2+.\3\2\2\2,*\3\2\2\2,-\3\2\2\2-/\3\2"+
		"\2\2.,\3\2\2\2/\64\5\21\t\2\60\63\5\21\t\2\61\63\7a\2\2\62\60\3\2\2\2"+
		"\62\61\3\2\2\2\63\66\3\2\2\2\64\62\3\2\2\2\64\65\3\2\2\2\65\b\3\2\2\2"+
		"\66\64\3\2\2\2\678\7\62\2\289\7q\2\29=\3\2\2\2:<\7a\2\2;:\3\2\2\2<?\3"+
		"\2\2\2=;\3\2\2\2=>\3\2\2\2>@\3\2\2\2?=\3\2\2\2@E\5\23\n\2AD\5\23\n\2B"+
		"D\7a\2\2CA\3\2\2\2CB\3\2\2\2DG\3\2\2\2EC\3\2\2\2EF\3\2\2\2F\n\3\2\2\2"+
		"GE\3\2\2\2HI\7\62\2\2IJ\7d\2\2JN\3\2\2\2KM\7a\2\2LK\3\2\2\2MP\3\2\2\2"+
		"NL\3\2\2\2NO\3\2\2\2OQ\3\2\2\2PN\3\2\2\2QU\t\2\2\2RT\t\3\2\2SR\3\2\2\2"+
		"TW\3\2\2\2US\3\2\2\2UV\3\2\2\2V\f\3\2\2\2WU\3\2\2\2XY\7w\2\2Yw\7:\2\2"+
		"Z[\7w\2\2[\\\7\63\2\2\\w\78\2\2]^\7w\2\2^_\7\65\2\2_w\7\64\2\2`a\7w\2"+
		"\2ab\78\2\2bw\7\66\2\2cd\7w\2\2de\7\63\2\2ef\7\64\2\2fw\7:\2\2gh\7k\2"+
		"\2hw\7:\2\2ij\7k\2\2jk\7\63\2\2kw\78\2\2lm\7k\2\2mn\7\65\2\2nw\7\64\2"+
		"\2op\7k\2\2pq\78\2\2qw\7\66\2\2rs\7k\2\2st\7\63\2\2tu\7\64\2\2uw\7:\2"+
		"\2vX\3\2\2\2vZ\3\2\2\2v]\3\2\2\2v`\3\2\2\2vc\3\2\2\2vg\3\2\2\2vi\3\2\2"+
		"\2vl\3\2\2\2vo\3\2\2\2vr\3\2\2\2w\16\3\2\2\2xy\t\4\2\2y\20\3\2\2\2z{\t"+
		"\5\2\2{\22\3\2\2\2|}\t\6\2\2}\24\3\2\2\2\20\2\31\34!#,\62\64=CENUv\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}