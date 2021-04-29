
// Generated from pascal.g4 by ANTLR 4.9.2


#include "pascalLexer.h"


using namespace antlr4;


pascalLexer::pascalLexer(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

pascalLexer::~pascalLexer() {
  delete _interpreter;
}

std::string pascalLexer::getGrammarFileName() const {
  return "pascal.g4";
}

const std::vector<std::string>& pascalLexer::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& pascalLexer::getChannelNames() const {
  return _channelNames;
}

const std::vector<std::string>& pascalLexer::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& pascalLexer::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& pascalLexer::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> pascalLexer::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& pascalLexer::getATN() const {
  return _atn;
}




// Static vars and initialization.
std::vector<dfa::DFA> pascalLexer::_decisionToDFA;
atn::PredictionContextCache pascalLexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN pascalLexer::_atn;
std::vector<uint16_t> pascalLexer::_serializedATN;

std::vector<std::string> pascalLexer::_ruleNames = {
  "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
  "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
  "ADD", "SUB", "MUL", "DIV", "MOD", "String", "BOOLEAN_OPERATORS", "EQ", 
  "LT", "LEQ", "GT", "GEQ", "NEQ", "ID", "NUMBER", "OPEN_BRACKET", "CLOSE_BRACKET", 
  "R_COMMENT", "C_COMMENT", "LINE_COMMENT", "WS", "ErrorChar"
};

std::vector<std::string> pascalLexer::_channelNames = {
  "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
};

std::vector<std::string> pascalLexer::_modeNames = {
  "DEFAULT_MODE"
};

std::vector<std::string> pascalLexer::_literalNames = {
  "", "'program'", "';'", "'var'", "','", "':'", "'integer'", "'begin'", 
  "'end'", "'.'", "':='", "'writeln'", "'readln'", "'if'", "'then'", "'else'", 
  "'repeat'", "'until'", "'+'", "'-'", "'*'", "'/'", "'%'", "", "", "'='", 
  "'<'", "'<='", "'>'", "'>='", "'<>'", "", "", "'('", "')'"
};

std::vector<std::string> pascalLexer::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "ADD", "SUB", "MUL", "DIV", "MOD", "String", "BOOLEAN_OPERATORS", "EQ", 
  "LT", "LEQ", "GT", "GEQ", "NEQ", "ID", "NUMBER", "OPEN_BRACKET", "CLOSE_BRACKET", 
  "R_COMMENT", "C_COMMENT", "LINE_COMMENT", "WS", "ErrorChar"
};

dfa::Vocabulary pascalLexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> pascalLexer::_tokenNames;

pascalLexer::Initializer::Initializer() {
  // This code could be in a static initializer lambda, but VS doesn't allow access to private class members from there.
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x2, 0x29, 0x111, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 
       0x4, 0x4, 0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 
       0x7, 0x9, 0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 
       0x9, 0xa, 0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 
       0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 
       0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 
       0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 
       0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 
       0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 
       0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 0x9, 0x1f, 
       0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 0x9, 0x22, 
       0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 0x25, 
       0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
       0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
       0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
       0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 
       0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
       0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
       0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 
       0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
       0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
       0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 
       0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 
       0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 
       0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 
       0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 
       0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 
       0xb0, 0xa, 0x18, 0xc, 0x18, 0xe, 0x18, 0xb3, 0xb, 0x18, 0x3, 0x18, 
       0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
       0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0xbf, 0xa, 0x19, 0x3, 
       0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
       0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
       0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x6, 0x20, 0xd1, 0xa, 0x20, 
       0xd, 0x20, 0xe, 0x20, 0xd2, 0x3, 0x20, 0x6, 0x20, 0xd6, 0xa, 0x20, 
       0xd, 0x20, 0xe, 0x20, 0xd7, 0x5, 0x20, 0xda, 0xa, 0x20, 0x3, 0x21, 
       0x6, 0x21, 0xdd, 0xa, 0x21, 0xd, 0x21, 0xe, 0x21, 0xde, 0x3, 0x22, 
       0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 
       0x3, 0x24, 0x7, 0x24, 0xe9, 0xa, 0x24, 0xc, 0x24, 0xe, 0x24, 0xec, 
       0xb, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 
       0x3, 0x25, 0x3, 0x25, 0x7, 0x25, 0xf5, 0xa, 0x25, 0xc, 0x25, 0xe, 
       0x25, 0xf8, 0xb, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 
       0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x7, 0x26, 0x102, 0xa, 
       0x26, 0xc, 0x26, 0xe, 0x26, 0x105, 0xb, 0x26, 0x3, 0x26, 0x3, 0x26, 
       0x3, 0x27, 0x6, 0x27, 0x10a, 0xa, 0x27, 0xd, 0x27, 0xe, 0x27, 0x10b, 
       0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 0x4, 0xea, 0xf6, 0x2, 
       0x29, 0x3, 0x3, 0x5, 0x4, 0x7, 0x5, 0x9, 0x6, 0xb, 0x7, 0xd, 0x8, 
       0xf, 0x9, 0x11, 0xa, 0x13, 0xb, 0x15, 0xc, 0x17, 0xd, 0x19, 0xe, 
       0x1b, 0xf, 0x1d, 0x10, 0x1f, 0x11, 0x21, 0x12, 0x23, 0x13, 0x25, 
       0x14, 0x27, 0x15, 0x29, 0x16, 0x2b, 0x17, 0x2d, 0x18, 0x2f, 0x19, 
       0x31, 0x1a, 0x33, 0x1b, 0x35, 0x1c, 0x37, 0x1d, 0x39, 0x1e, 0x3b, 
       0x1f, 0x3d, 0x20, 0x3f, 0x21, 0x41, 0x22, 0x43, 0x23, 0x45, 0x24, 
       0x47, 0x25, 0x49, 0x26, 0x4b, 0x27, 0x4d, 0x28, 0x4f, 0x29, 0x3, 
       0x2, 0x7, 0x4, 0x2, 0xc, 0xc, 0xf, 0xf, 0x3, 0x2, 0x63, 0x7c, 0x3, 
       0x2, 0x43, 0x5c, 0x3, 0x2, 0x32, 0x3b, 0x5, 0x2, 0xb, 0xc, 0xf, 0xf, 
       0x22, 0x22, 0x2, 0x11b, 0x2, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2, 0x5, 0x3, 
       0x2, 0x2, 0x2, 0x2, 0x7, 0x3, 0x2, 0x2, 0x2, 0x2, 0x9, 0x3, 0x2, 
       0x2, 0x2, 0x2, 0xb, 0x3, 0x2, 0x2, 0x2, 0x2, 0xd, 0x3, 0x2, 0x2, 
       0x2, 0x2, 0xf, 0x3, 0x2, 0x2, 0x2, 0x2, 0x11, 0x3, 0x2, 0x2, 0x2, 
       0x2, 0x13, 0x3, 0x2, 0x2, 0x2, 0x2, 0x15, 0x3, 0x2, 0x2, 0x2, 0x2, 
       0x17, 0x3, 0x2, 0x2, 0x2, 0x2, 0x19, 0x3, 0x2, 0x2, 0x2, 0x2, 0x1b, 
       0x3, 0x2, 0x2, 0x2, 0x2, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x2, 0x1f, 0x3, 
       0x2, 0x2, 0x2, 0x2, 0x21, 0x3, 0x2, 0x2, 0x2, 0x2, 0x23, 0x3, 0x2, 
       0x2, 0x2, 0x2, 0x25, 0x3, 0x2, 0x2, 0x2, 0x2, 0x27, 0x3, 0x2, 0x2, 
       0x2, 0x2, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2, 0x2b, 0x3, 0x2, 0x2, 0x2, 
       0x2, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2, 
       0x31, 0x3, 0x2, 0x2, 0x2, 0x2, 0x33, 0x3, 0x2, 0x2, 0x2, 0x2, 0x35, 
       0x3, 0x2, 0x2, 0x2, 0x2, 0x37, 0x3, 0x2, 0x2, 0x2, 0x2, 0x39, 0x3, 
       0x2, 0x2, 0x2, 0x2, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x2, 0x3d, 0x3, 0x2, 
       0x2, 0x2, 0x2, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x2, 0x41, 0x3, 0x2, 0x2, 
       0x2, 0x2, 0x43, 0x3, 0x2, 0x2, 0x2, 0x2, 0x45, 0x3, 0x2, 0x2, 0x2, 
       0x2, 0x47, 0x3, 0x2, 0x2, 0x2, 0x2, 0x49, 0x3, 0x2, 0x2, 0x2, 0x2, 
       0x4b, 0x3, 0x2, 0x2, 0x2, 0x2, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x2, 0x4f, 
       0x3, 0x2, 0x2, 0x2, 0x3, 0x51, 0x3, 0x2, 0x2, 0x2, 0x5, 0x59, 0x3, 
       0x2, 0x2, 0x2, 0x7, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x9, 0x5f, 0x3, 0x2, 
       0x2, 0x2, 0xb, 0x61, 0x3, 0x2, 0x2, 0x2, 0xd, 0x63, 0x3, 0x2, 0x2, 
       0x2, 0xf, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x11, 0x71, 0x3, 0x2, 0x2, 0x2, 
       0x13, 0x75, 0x3, 0x2, 0x2, 0x2, 0x15, 0x77, 0x3, 0x2, 0x2, 0x2, 0x17, 
       0x7a, 0x3, 0x2, 0x2, 0x2, 0x19, 0x82, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x89, 
       0x3, 0x2, 0x2, 0x2, 0x1d, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x91, 0x3, 
       0x2, 0x2, 0x2, 0x21, 0x96, 0x3, 0x2, 0x2, 0x2, 0x23, 0x9d, 0x3, 0x2, 
       0x2, 0x2, 0x25, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x27, 0xa5, 0x3, 0x2, 0x2, 
       0x2, 0x29, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x2b, 0xa9, 0x3, 0x2, 0x2, 0x2, 
       0x2d, 0xab, 0x3, 0x2, 0x2, 0x2, 0x2f, 0xad, 0x3, 0x2, 0x2, 0x2, 0x31, 
       0xbe, 0x3, 0x2, 0x2, 0x2, 0x33, 0xc0, 0x3, 0x2, 0x2, 0x2, 0x35, 0xc2, 
       0x3, 0x2, 0x2, 0x2, 0x37, 0xc4, 0x3, 0x2, 0x2, 0x2, 0x39, 0xc7, 0x3, 
       0x2, 0x2, 0x2, 0x3b, 0xc9, 0x3, 0x2, 0x2, 0x2, 0x3d, 0xcc, 0x3, 0x2, 
       0x2, 0x2, 0x3f, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x41, 0xdc, 0x3, 0x2, 0x2, 
       0x2, 0x43, 0xe0, 0x3, 0x2, 0x2, 0x2, 0x45, 0xe2, 0x3, 0x2, 0x2, 0x2, 
       0x47, 0xe4, 0x3, 0x2, 0x2, 0x2, 0x49, 0xf2, 0x3, 0x2, 0x2, 0x2, 0x4b, 
       0xfd, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x109, 0x3, 0x2, 0x2, 0x2, 0x4f, 
       0x10f, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x7, 0x72, 0x2, 0x2, 0x52, 
       0x53, 0x7, 0x74, 0x2, 0x2, 0x53, 0x54, 0x7, 0x71, 0x2, 0x2, 0x54, 
       0x55, 0x7, 0x69, 0x2, 0x2, 0x55, 0x56, 0x7, 0x74, 0x2, 0x2, 0x56, 
       0x57, 0x7, 0x63, 0x2, 0x2, 0x57, 0x58, 0x7, 0x6f, 0x2, 0x2, 0x58, 
       0x4, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 0x7, 0x3d, 0x2, 0x2, 0x5a, 0x6, 
       0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 0x7, 0x78, 0x2, 0x2, 0x5c, 0x5d, 
       0x7, 0x63, 0x2, 0x2, 0x5d, 0x5e, 0x7, 0x74, 0x2, 0x2, 0x5e, 0x8, 
       0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 0x7, 0x2e, 0x2, 0x2, 0x60, 0xa, 0x3, 
       0x2, 0x2, 0x2, 0x61, 0x62, 0x7, 0x3c, 0x2, 0x2, 0x62, 0xc, 0x3, 0x2, 
       0x2, 0x2, 0x63, 0x64, 0x7, 0x6b, 0x2, 0x2, 0x64, 0x65, 0x7, 0x70, 
       0x2, 0x2, 0x65, 0x66, 0x7, 0x76, 0x2, 0x2, 0x66, 0x67, 0x7, 0x67, 
       0x2, 0x2, 0x67, 0x68, 0x7, 0x69, 0x2, 0x2, 0x68, 0x69, 0x7, 0x67, 
       0x2, 0x2, 0x69, 0x6a, 0x7, 0x74, 0x2, 0x2, 0x6a, 0xe, 0x3, 0x2, 0x2, 
       0x2, 0x6b, 0x6c, 0x7, 0x64, 0x2, 0x2, 0x6c, 0x6d, 0x7, 0x67, 0x2, 
       0x2, 0x6d, 0x6e, 0x7, 0x69, 0x2, 0x2, 0x6e, 0x6f, 0x7, 0x6b, 0x2, 
       0x2, 0x6f, 0x70, 0x7, 0x70, 0x2, 0x2, 0x70, 0x10, 0x3, 0x2, 0x2, 
       0x2, 0x71, 0x72, 0x7, 0x67, 0x2, 0x2, 0x72, 0x73, 0x7, 0x70, 0x2, 
       0x2, 0x73, 0x74, 0x7, 0x66, 0x2, 0x2, 0x74, 0x12, 0x3, 0x2, 0x2, 
       0x2, 0x75, 0x76, 0x7, 0x30, 0x2, 0x2, 0x76, 0x14, 0x3, 0x2, 0x2, 
       0x2, 0x77, 0x78, 0x7, 0x3c, 0x2, 0x2, 0x78, 0x79, 0x7, 0x3f, 0x2, 
       0x2, 0x79, 0x16, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 0x7, 0x79, 0x2, 
       0x2, 0x7b, 0x7c, 0x7, 0x74, 0x2, 0x2, 0x7c, 0x7d, 0x7, 0x6b, 0x2, 
       0x2, 0x7d, 0x7e, 0x7, 0x76, 0x2, 0x2, 0x7e, 0x7f, 0x7, 0x67, 0x2, 
       0x2, 0x7f, 0x80, 0x7, 0x6e, 0x2, 0x2, 0x80, 0x81, 0x7, 0x70, 0x2, 
       0x2, 0x81, 0x18, 0x3, 0x2, 0x2, 0x2, 0x82, 0x83, 0x7, 0x74, 0x2, 
       0x2, 0x83, 0x84, 0x7, 0x67, 0x2, 0x2, 0x84, 0x85, 0x7, 0x63, 0x2, 
       0x2, 0x85, 0x86, 0x7, 0x66, 0x2, 0x2, 0x86, 0x87, 0x7, 0x6e, 0x2, 
       0x2, 0x87, 0x88, 0x7, 0x70, 0x2, 0x2, 0x88, 0x1a, 0x3, 0x2, 0x2, 
       0x2, 0x89, 0x8a, 0x7, 0x6b, 0x2, 0x2, 0x8a, 0x8b, 0x7, 0x68, 0x2, 
       0x2, 0x8b, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 0x7, 0x76, 0x2, 
       0x2, 0x8d, 0x8e, 0x7, 0x6a, 0x2, 0x2, 0x8e, 0x8f, 0x7, 0x67, 0x2, 
       0x2, 0x8f, 0x90, 0x7, 0x70, 0x2, 0x2, 0x90, 0x1e, 0x3, 0x2, 0x2, 
       0x2, 0x91, 0x92, 0x7, 0x67, 0x2, 0x2, 0x92, 0x93, 0x7, 0x6e, 0x2, 
       0x2, 0x93, 0x94, 0x7, 0x75, 0x2, 0x2, 0x94, 0x95, 0x7, 0x67, 0x2, 
       0x2, 0x95, 0x20, 0x3, 0x2, 0x2, 0x2, 0x96, 0x97, 0x7, 0x74, 0x2, 
       0x2, 0x97, 0x98, 0x7, 0x67, 0x2, 0x2, 0x98, 0x99, 0x7, 0x72, 0x2, 
       0x2, 0x99, 0x9a, 0x7, 0x67, 0x2, 0x2, 0x9a, 0x9b, 0x7, 0x63, 0x2, 
       0x2, 0x9b, 0x9c, 0x7, 0x76, 0x2, 0x2, 0x9c, 0x22, 0x3, 0x2, 0x2, 
       0x2, 0x9d, 0x9e, 0x7, 0x77, 0x2, 0x2, 0x9e, 0x9f, 0x7, 0x70, 0x2, 
       0x2, 0x9f, 0xa0, 0x7, 0x76, 0x2, 0x2, 0xa0, 0xa1, 0x7, 0x6b, 0x2, 
       0x2, 0xa1, 0xa2, 0x7, 0x6e, 0x2, 0x2, 0xa2, 0x24, 0x3, 0x2, 0x2, 
       0x2, 0xa3, 0xa4, 0x7, 0x2d, 0x2, 0x2, 0xa4, 0x26, 0x3, 0x2, 0x2, 
       0x2, 0xa5, 0xa6, 0x7, 0x2f, 0x2, 0x2, 0xa6, 0x28, 0x3, 0x2, 0x2, 
       0x2, 0xa7, 0xa8, 0x7, 0x2c, 0x2, 0x2, 0xa8, 0x2a, 0x3, 0x2, 0x2, 
       0x2, 0xa9, 0xaa, 0x7, 0x31, 0x2, 0x2, 0xaa, 0x2c, 0x3, 0x2, 0x2, 
       0x2, 0xab, 0xac, 0x7, 0x27, 0x2, 0x2, 0xac, 0x2e, 0x3, 0x2, 0x2, 
       0x2, 0xad, 0xb1, 0x7, 0x29, 0x2, 0x2, 0xae, 0xb0, 0xa, 0x2, 0x2, 
       0x2, 0xaf, 0xae, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb3, 0x3, 0x2, 0x2, 0x2, 
       0xb1, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb2, 
       0xb4, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb5, 
       0x7, 0x29, 0x2, 0x2, 0xb5, 0x30, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 
       0x7, 0x71, 0x2, 0x2, 0xb7, 0xbf, 0x7, 0x74, 0x2, 0x2, 0xb8, 0xb9, 
       0x7, 0x63, 0x2, 0x2, 0xb9, 0xba, 0x7, 0x70, 0x2, 0x2, 0xba, 0xbf, 
       0x7, 0x66, 0x2, 0x2, 0xbb, 0xbc, 0x7, 0x70, 0x2, 0x2, 0xbc, 0xbd, 
       0x7, 0x71, 0x2, 0x2, 0xbd, 0xbf, 0x7, 0x76, 0x2, 0x2, 0xbe, 0xb6, 
       0x3, 0x2, 0x2, 0x2, 0xbe, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbb, 0x3, 
       0x2, 0x2, 0x2, 0xbf, 0x32, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc1, 0x7, 0x3f, 
       0x2, 0x2, 0xc1, 0x34, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 0x7, 0x3e, 
       0x2, 0x2, 0xc3, 0x36, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x7, 0x3e, 
       0x2, 0x2, 0xc5, 0xc6, 0x7, 0x3f, 0x2, 0x2, 0xc6, 0x38, 0x3, 0x2, 
       0x2, 0x2, 0xc7, 0xc8, 0x7, 0x40, 0x2, 0x2, 0xc8, 0x3a, 0x3, 0x2, 
       0x2, 0x2, 0xc9, 0xca, 0x7, 0x40, 0x2, 0x2, 0xca, 0xcb, 0x7, 0x3f, 
       0x2, 0x2, 0xcb, 0x3c, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0x7, 0x3e, 
       0x2, 0x2, 0xcd, 0xce, 0x7, 0x40, 0x2, 0x2, 0xce, 0x3e, 0x3, 0x2, 
       0x2, 0x2, 0xcf, 0xd1, 0x9, 0x3, 0x2, 0x2, 0xd0, 0xcf, 0x3, 0x2, 0x2, 
       0x2, 0xd1, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd0, 0x3, 0x2, 0x2, 0x2, 
       0xd2, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xda, 0x3, 0x2, 0x2, 0x2, 0xd4, 
       0xd6, 0x9, 0x4, 0x2, 0x2, 0xd5, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 
       0x3, 0x2, 0x2, 0x2, 0xd7, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd8, 0x3, 
       0x2, 0x2, 0x2, 0xd8, 0xda, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xd0, 0x3, 0x2, 
       0x2, 0x2, 0xd9, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xda, 0x40, 0x3, 0x2, 0x2, 
       0x2, 0xdb, 0xdd, 0x9, 0x5, 0x2, 0x2, 0xdc, 0xdb, 0x3, 0x2, 0x2, 0x2, 
       0xdd, 0xde, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xde, 
       0xdf, 0x3, 0x2, 0x2, 0x2, 0xdf, 0x42, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe1, 
       0x7, 0x2a, 0x2, 0x2, 0xe1, 0x44, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe3, 
       0x7, 0x2b, 0x2, 0x2, 0xe3, 0x46, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe5, 
       0x7, 0x2a, 0x2, 0x2, 0xe5, 0xe6, 0x7, 0x2c, 0x2, 0x2, 0xe6, 0xea, 
       0x3, 0x2, 0x2, 0x2, 0xe7, 0xe9, 0xb, 0x2, 0x2, 0x2, 0xe8, 0xe7, 0x3, 
       0x2, 0x2, 0x2, 0xe9, 0xec, 0x3, 0x2, 0x2, 0x2, 0xea, 0xeb, 0x3, 0x2, 
       0x2, 0x2, 0xea, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xed, 0x3, 0x2, 0x2, 
       0x2, 0xec, 0xea, 0x3, 0x2, 0x2, 0x2, 0xed, 0xee, 0x7, 0x2c, 0x2, 
       0x2, 0xee, 0xef, 0x7, 0x2b, 0x2, 0x2, 0xef, 0xf0, 0x3, 0x2, 0x2, 
       0x2, 0xf0, 0xf1, 0x8, 0x24, 0x2, 0x2, 0xf1, 0x48, 0x3, 0x2, 0x2, 
       0x2, 0xf2, 0xf6, 0x7, 0x7d, 0x2, 0x2, 0xf3, 0xf5, 0xb, 0x2, 0x2, 
       0x2, 0xf4, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf8, 0x3, 0x2, 0x2, 0x2, 
       0xf6, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf7, 
       0xf9, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xfa, 
       0x7, 0x7f, 0x2, 0x2, 0xfa, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xfc, 
       0x8, 0x25, 0x2, 0x2, 0xfc, 0x4a, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfe, 
       0x7, 0x31, 0x2, 0x2, 0xfe, 0xff, 0x7, 0x31, 0x2, 0x2, 0xff, 0x103, 
       0x3, 0x2, 0x2, 0x2, 0x100, 0x102, 0xa, 0x2, 0x2, 0x2, 0x101, 0x100, 
       0x3, 0x2, 0x2, 0x2, 0x102, 0x105, 0x3, 0x2, 0x2, 0x2, 0x103, 0x101, 
       0x3, 0x2, 0x2, 0x2, 0x103, 0x104, 0x3, 0x2, 0x2, 0x2, 0x104, 0x106, 
       0x3, 0x2, 0x2, 0x2, 0x105, 0x103, 0x3, 0x2, 0x2, 0x2, 0x106, 0x107, 
       0x8, 0x26, 0x2, 0x2, 0x107, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x108, 0x10a, 
       0x9, 0x6, 0x2, 0x2, 0x109, 0x108, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x10b, 
       0x3, 0x2, 0x2, 0x2, 0x10b, 0x109, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x10c, 
       0x3, 0x2, 0x2, 0x2, 0x10c, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10e, 
       0x8, 0x27, 0x2, 0x2, 0x10e, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x110, 
       0xb, 0x2, 0x2, 0x2, 0x110, 0x50, 0x3, 0x2, 0x2, 0x2, 0xd, 0x2, 0xb1, 
       0xbe, 0xd2, 0xd7, 0xd9, 0xde, 0xea, 0xf6, 0x103, 0x10b, 0x3, 0x8, 
       0x2, 0x2, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

pascalLexer::Initializer pascalLexer::_init;
