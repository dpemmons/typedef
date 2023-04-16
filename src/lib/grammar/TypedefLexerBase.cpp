#include "TypedefLexer.h"
#include "TypedefLexerBase.h"

TypedefLexerBase::TypedefLexerBase(antlr4::CharStream *input)
    : antlr4::Lexer(input), previousTokenType_(0), currentTokenType_(0) {}

std::unique_ptr<antlr4::Token> TypedefLexerBase::nextToken() {
  auto next = Lexer::nextToken();

  if (next->getChannel() == antlr4::Token::DEFAULT_CHANNEL) {
    previousTokenType_ = currentTokenType_;
    currentTokenType_ = next->getType();
  }

  return next;
}

bool TypedefLexerBase::SOF() { return _input->LA(-1) <= 0; }

bool TypedefLexerBase::floatDotPossible() {
  size_t next = _input->LA(1);
  // only block . _ identifier after float
  if (next == '.' || next == '_') {
    return false;
  }
  if (next == 'f') {
    // 1.f32
    if (_input->LA(2) == '3' && _input->LA(3) == '2') {
      return true;
    }
    // 1.f64
    if (_input->LA(2) == '6' && _input->LA(3) == '4') {
      return true;
    }
    return false;
  }
  if (next >= 'a' && next <= 'z') {
    return false;
  }
  if (next >= 'A' && next <= 'Z') {
    return false;
  }
  return true;
}

bool TypedefLexerBase::floatLiteralPossible() {
  if (currentTokenType_ == 0 || previousTokenType_ == 0) {
    return true;
  }

  if (currentTokenType_ != TypedefLexer::DOT) {
    return true;
  }

  switch (previousTokenType_) {
    case TypedefLexer::CHAR_LITERAL:
    case TypedefLexer::STRING_LITERAL:
    case TypedefLexer::RAW_STRING_LITERAL:
    case TypedefLexer::BYTE_LITERAL:
    case TypedefLexer::BYTE_STRING_LITERAL:
    case TypedefLexer::RAW_BYTE_STRING_LITERAL:

    case TypedefLexer::KW_SUPER:
    case TypedefLexer::KW_SELFVALUE:
    case TypedefLexer::KW_SELFTYPE:

    case TypedefLexer::GT:
    case TypedefLexer::RBRACE:
    case TypedefLexer::RBRACK:
    case TypedefLexer::RPAREN:

    case TypedefLexer::NON_KEYWORD_IDENTIFIER:
    // case TypedefLexer::RAW_IDENTIFIER:
      // No float literal can follow any of the above tokens.
      return false;
    default:
      return true;
  }
}
