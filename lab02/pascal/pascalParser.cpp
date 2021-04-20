
// Generated from pascal.g4 by ANTLR 4.9.2


#include "pascalListener.h"

#include "pascalParser.h"


using namespace antlrcpp;
using namespace antlr4;

pascalParser::pascalParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

pascalParser::~pascalParser() {
  delete _interpreter;
}

std::string pascalParser::getGrammarFileName() const {
  return "pascal.g4";
}

const std::vector<std::string>& pascalParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& pascalParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- StartContext ------------------------------------------------------------------

pascalParser::StartContext::StartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::StartContext::ID() {
  return getToken(pascalParser::ID, 0);
}

pascalParser::Decl_listContext* pascalParser::StartContext::decl_list() {
  return getRuleContext<pascalParser::Decl_listContext>(0);
}

pascalParser::Main_codeContext* pascalParser::StartContext::main_code() {
  return getRuleContext<pascalParser::Main_codeContext>(0);
}

tree::TerminalNode* pascalParser::StartContext::EOF() {
  return getToken(pascalParser::EOF, 0);
}


size_t pascalParser::StartContext::getRuleIndex() const {
  return pascalParser::RuleStart;
}

void pascalParser::StartContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStart(this);
}

void pascalParser::StartContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStart(this);
}

pascalParser::StartContext* pascalParser::start() {
  StartContext *_localctx = _tracker.createInstance<StartContext>(_ctx, getState());
  enterRule(_localctx, 0, pascalParser::RuleStart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(34);
    match(pascalParser::T__0);
    setState(35);
    match(pascalParser::ID);
    setState(36);
    match(pascalParser::T__1);
    setState(37);
    match(pascalParser::T__2);
    setState(38);
    decl_list();
    setState(39);
    main_code();
    setState(40);
    match(pascalParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Decl_listContext ------------------------------------------------------------------

pascalParser::Decl_listContext::Decl_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::DeclContext* pascalParser::Decl_listContext::decl() {
  return getRuleContext<pascalParser::DeclContext>(0);
}

pascalParser::Decl_listContext* pascalParser::Decl_listContext::decl_list() {
  return getRuleContext<pascalParser::Decl_listContext>(0);
}


size_t pascalParser::Decl_listContext::getRuleIndex() const {
  return pascalParser::RuleDecl_list;
}

void pascalParser::Decl_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecl_list(this);
}

void pascalParser::Decl_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecl_list(this);
}

pascalParser::Decl_listContext* pascalParser::decl_list() {
  Decl_listContext *_localctx = _tracker.createInstance<Decl_listContext>(_ctx, getState());
  enterRule(_localctx, 2, pascalParser::RuleDecl_list);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(46);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(42);
      decl();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(43);
      decl();
      setState(44);
      decl_list();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclContext ------------------------------------------------------------------

pascalParser::DeclContext::DeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::DeclContext::ID() {
  return getToken(pascalParser::ID, 0);
}


size_t pascalParser::DeclContext::getRuleIndex() const {
  return pascalParser::RuleDecl;
}

void pascalParser::DeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecl(this);
}

void pascalParser::DeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecl(this);
}

pascalParser::DeclContext* pascalParser::decl() {
  DeclContext *_localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 4, pascalParser::RuleDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(54);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(48);
      match(pascalParser::ID);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(49);
      match(pascalParser::T__3);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(50);
      match(pascalParser::ID);
      setState(51);
      match(pascalParser::T__4);
      setState(52);
      match(pascalParser::T__5);
      setState(53);
      match(pascalParser::T__1);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Main_codeContext ------------------------------------------------------------------

pascalParser::Main_codeContext::Main_codeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::St_listContext* pascalParser::Main_codeContext::st_list() {
  return getRuleContext<pascalParser::St_listContext>(0);
}


size_t pascalParser::Main_codeContext::getRuleIndex() const {
  return pascalParser::RuleMain_code;
}

void pascalParser::Main_codeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMain_code(this);
}

void pascalParser::Main_codeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMain_code(this);
}

pascalParser::Main_codeContext* pascalParser::main_code() {
  Main_codeContext *_localctx = _tracker.createInstance<Main_codeContext>(_ctx, getState());
  enterRule(_localctx, 6, pascalParser::RuleMain_code);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(56);
    match(pascalParser::T__6);
    setState(57);
    st_list();
    setState(58);
    match(pascalParser::T__7);
    setState(59);
    match(pascalParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Code_blockContext ------------------------------------------------------------------

pascalParser::Code_blockContext::Code_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::StatementContext* pascalParser::Code_blockContext::statement() {
  return getRuleContext<pascalParser::StatementContext>(0);
}

pascalParser::St_listContext* pascalParser::Code_blockContext::st_list() {
  return getRuleContext<pascalParser::St_listContext>(0);
}


size_t pascalParser::Code_blockContext::getRuleIndex() const {
  return pascalParser::RuleCode_block;
}

void pascalParser::Code_blockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCode_block(this);
}

void pascalParser::Code_blockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCode_block(this);
}

pascalParser::Code_blockContext* pascalParser::code_block() {
  Code_blockContext *_localctx = _tracker.createInstance<Code_blockContext>(_ctx, getState());
  enterRule(_localctx, 8, pascalParser::RuleCode_block);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(66);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::T__10:
      case pascalParser::T__11:
      case pascalParser::T__13:
      case pascalParser::WRITE:
      case pascalParser::READ:
      case pascalParser::ID:
      case pascalParser::NUMBER:
      case pascalParser::CLOSE_BRACKET: {
        enterOuterAlt(_localctx, 1);
        setState(61);
        statement();
        break;
      }

      case pascalParser::T__6: {
        enterOuterAlt(_localctx, 2);
        setState(62);
        match(pascalParser::T__6);
        setState(63);
        st_list();
        setState(64);
        match(pascalParser::T__7);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- St_listContext ------------------------------------------------------------------

pascalParser::St_listContext::St_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::StatementContext* pascalParser::St_listContext::statement() {
  return getRuleContext<pascalParser::StatementContext>(0);
}

pascalParser::St_listContext* pascalParser::St_listContext::st_list() {
  return getRuleContext<pascalParser::St_listContext>(0);
}


size_t pascalParser::St_listContext::getRuleIndex() const {
  return pascalParser::RuleSt_list;
}

void pascalParser::St_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSt_list(this);
}

void pascalParser::St_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSt_list(this);
}

pascalParser::St_listContext* pascalParser::st_list() {
  St_listContext *_localctx = _tracker.createInstance<St_listContext>(_ctx, getState());
  enterRule(_localctx, 10, pascalParser::RuleSt_list);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(75);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(68);
      statement();
      setState(69);
      match(pascalParser::T__1);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(71);
      statement();
      setState(72);
      match(pascalParser::T__1);
      setState(73);
      st_list();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

pascalParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::AssignContext* pascalParser::StatementContext::assign() {
  return getRuleContext<pascalParser::AssignContext>(0);
}

pascalParser::BranchContext* pascalParser::StatementContext::branch() {
  return getRuleContext<pascalParser::BranchContext>(0);
}

pascalParser::OutContext* pascalParser::StatementContext::out() {
  return getRuleContext<pascalParser::OutContext>(0);
}

pascalParser::InContext* pascalParser::StatementContext::in() {
  return getRuleContext<pascalParser::InContext>(0);
}

pascalParser::RepeatContext* pascalParser::StatementContext::repeat() {
  return getRuleContext<pascalParser::RepeatContext>(0);
}


size_t pascalParser::StatementContext::getRuleIndex() const {
  return pascalParser::RuleStatement;
}

void pascalParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void pascalParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

pascalParser::StatementContext* pascalParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 12, pascalParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(82);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(77);
      assign();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(78);
      branch();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(79);
      out();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(80);
      in();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(81);
      repeat();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignContext ------------------------------------------------------------------

pascalParser::AssignContext::AssignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::AssignContext::ID() {
  return getToken(pascalParser::ID, 0);
}

pascalParser::ExprContext* pascalParser::AssignContext::expr() {
  return getRuleContext<pascalParser::ExprContext>(0);
}


size_t pascalParser::AssignContext::getRuleIndex() const {
  return pascalParser::RuleAssign;
}

void pascalParser::AssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssign(this);
}

void pascalParser::AssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssign(this);
}

pascalParser::AssignContext* pascalParser::assign() {
  AssignContext *_localctx = _tracker.createInstance<AssignContext>(_ctx, getState());
  enterRule(_localctx, 14, pascalParser::RuleAssign);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(84);
    match(pascalParser::ID);
    setState(85);
    match(pascalParser::T__9);
    setState(86);
    expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OutContext ------------------------------------------------------------------

pascalParser::OutContext::OutContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::PrintContext* pascalParser::OutContext::print() {
  return getRuleContext<pascalParser::PrintContext>(0);
}

pascalParser::OutContext* pascalParser::OutContext::out() {
  return getRuleContext<pascalParser::OutContext>(0);
}


size_t pascalParser::OutContext::getRuleIndex() const {
  return pascalParser::RuleOut;
}

void pascalParser::OutContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOut(this);
}

void pascalParser::OutContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOut(this);
}

pascalParser::OutContext* pascalParser::out() {
  OutContext *_localctx = _tracker.createInstance<OutContext>(_ctx, getState());
  enterRule(_localctx, 16, pascalParser::RuleOut);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(92);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(88);
      print();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(89);
      print();
      setState(90);
      out();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintContext ------------------------------------------------------------------

pascalParser::PrintContext::PrintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::PrintContext::WRITE() {
  return getToken(pascalParser::WRITE, 0);
}

tree::TerminalNode* pascalParser::PrintContext::OPEN_BRACKET() {
  return getToken(pascalParser::OPEN_BRACKET, 0);
}

pascalParser::ExprContext* pascalParser::PrintContext::expr() {
  return getRuleContext<pascalParser::ExprContext>(0);
}

tree::TerminalNode* pascalParser::PrintContext::CLOSE_BRACKET() {
  return getToken(pascalParser::CLOSE_BRACKET, 0);
}


size_t pascalParser::PrintContext::getRuleIndex() const {
  return pascalParser::RulePrint;
}

void pascalParser::PrintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrint(this);
}

void pascalParser::PrintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrint(this);
}

pascalParser::PrintContext* pascalParser::print() {
  PrintContext *_localctx = _tracker.createInstance<PrintContext>(_ctx, getState());
  enterRule(_localctx, 18, pascalParser::RulePrint);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(100);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(94);
      match(pascalParser::WRITE);
      setState(95);
      match(pascalParser::OPEN_BRACKET);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(96);
      match(pascalParser::T__10);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(97);
      expr();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(98);
      match(pascalParser::T__10);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(99);
      match(pascalParser::CLOSE_BRACKET);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InContext ------------------------------------------------------------------

pascalParser::InContext::InContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::ReadContext* pascalParser::InContext::read() {
  return getRuleContext<pascalParser::ReadContext>(0);
}

pascalParser::InContext* pascalParser::InContext::in() {
  return getRuleContext<pascalParser::InContext>(0);
}


size_t pascalParser::InContext::getRuleIndex() const {
  return pascalParser::RuleIn;
}

void pascalParser::InContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIn(this);
}

void pascalParser::InContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIn(this);
}

pascalParser::InContext* pascalParser::in() {
  InContext *_localctx = _tracker.createInstance<InContext>(_ctx, getState());
  enterRule(_localctx, 20, pascalParser::RuleIn);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(106);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(102);
      read();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(103);
      read();
      setState(104);
      in();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReadContext ------------------------------------------------------------------

pascalParser::ReadContext::ReadContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::ReadContext::READ() {
  return getToken(pascalParser::READ, 0);
}

tree::TerminalNode* pascalParser::ReadContext::OPEN_BRACKET() {
  return getToken(pascalParser::OPEN_BRACKET, 0);
}

tree::TerminalNode* pascalParser::ReadContext::ID() {
  return getToken(pascalParser::ID, 0);
}

tree::TerminalNode* pascalParser::ReadContext::CLOSE_BRACKET() {
  return getToken(pascalParser::CLOSE_BRACKET, 0);
}


size_t pascalParser::ReadContext::getRuleIndex() const {
  return pascalParser::RuleRead;
}

void pascalParser::ReadContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRead(this);
}

void pascalParser::ReadContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRead(this);
}

pascalParser::ReadContext* pascalParser::read() {
  ReadContext *_localctx = _tracker.createInstance<ReadContext>(_ctx, getState());
  enterRule(_localctx, 22, pascalParser::RuleRead);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(112);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::READ: {
        enterOuterAlt(_localctx, 1);
        setState(108);
        match(pascalParser::READ);
        setState(109);
        match(pascalParser::OPEN_BRACKET);
        break;
      }

      case pascalParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(110);
        match(pascalParser::ID);
        break;
      }

      case pascalParser::CLOSE_BRACKET: {
        enterOuterAlt(_localctx, 3);
        setState(111);
        match(pascalParser::CLOSE_BRACKET);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

pascalParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::ExprContext::NUMBER() {
  return getToken(pascalParser::NUMBER, 0);
}

tree::TerminalNode* pascalParser::ExprContext::ID() {
  return getToken(pascalParser::ID, 0);
}


size_t pascalParser::ExprContext::getRuleIndex() const {
  return pascalParser::RuleExpr;
}

void pascalParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void pascalParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}

pascalParser::ExprContext* pascalParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 24, pascalParser::RuleExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(114);
    _la = _input->LA(1);
    if (!(_la == pascalParser::ID

    || _la == pascalParser::NUMBER)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BranchContext ------------------------------------------------------------------

pascalParser::BranchContext::BranchContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::RelationContext* pascalParser::BranchContext::relation() {
  return getRuleContext<pascalParser::RelationContext>(0);
}

pascalParser::Code_blockContext* pascalParser::BranchContext::code_block() {
  return getRuleContext<pascalParser::Code_blockContext>(0);
}


size_t pascalParser::BranchContext::getRuleIndex() const {
  return pascalParser::RuleBranch;
}

void pascalParser::BranchContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBranch(this);
}

void pascalParser::BranchContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBranch(this);
}

pascalParser::BranchContext* pascalParser::branch() {
  BranchContext *_localctx = _tracker.createInstance<BranchContext>(_ctx, getState());
  enterRule(_localctx, 26, pascalParser::RuleBranch);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(116);
    match(pascalParser::T__11);
    setState(117);
    relation();
    setState(118);
    match(pascalParser::T__12);
    setState(119);
    code_block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RepeatContext ------------------------------------------------------------------

pascalParser::RepeatContext::RepeatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::StatementContext* pascalParser::RepeatContext::statement() {
  return getRuleContext<pascalParser::StatementContext>(0);
}

pascalParser::GuardContext* pascalParser::RepeatContext::guard() {
  return getRuleContext<pascalParser::GuardContext>(0);
}


size_t pascalParser::RepeatContext::getRuleIndex() const {
  return pascalParser::RuleRepeat;
}

void pascalParser::RepeatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRepeat(this);
}

void pascalParser::RepeatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRepeat(this);
}

pascalParser::RepeatContext* pascalParser::repeat() {
  RepeatContext *_localctx = _tracker.createInstance<RepeatContext>(_ctx, getState());
  enterRule(_localctx, 28, pascalParser::RuleRepeat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(121);
    match(pascalParser::T__13);
    setState(122);
    statement();
    setState(123);
    match(pascalParser::T__14);
    setState(124);
    guard();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GuardContext ------------------------------------------------------------------

pascalParser::GuardContext::GuardContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::RelationContext* pascalParser::GuardContext::relation() {
  return getRuleContext<pascalParser::RelationContext>(0);
}


size_t pascalParser::GuardContext::getRuleIndex() const {
  return pascalParser::RuleGuard;
}

void pascalParser::GuardContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGuard(this);
}

void pascalParser::GuardContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGuard(this);
}

pascalParser::GuardContext* pascalParser::guard() {
  GuardContext *_localctx = _tracker.createInstance<GuardContext>(_ctx, getState());
  enterRule(_localctx, 30, pascalParser::RuleGuard);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(129);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::ID:
      case pascalParser::NUMBER: {
        enterOuterAlt(_localctx, 1);
        setState(126);
        relation();
        break;
      }

      case pascalParser::T__15: {
        enterOuterAlt(_localctx, 2);
        setState(127);
        match(pascalParser::T__15);
        setState(128);
        relation();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelationContext ------------------------------------------------------------------

pascalParser::RelationContext::RelationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<pascalParser::ExprContext *> pascalParser::RelationContext::expr() {
  return getRuleContexts<pascalParser::ExprContext>();
}

pascalParser::ExprContext* pascalParser::RelationContext::expr(size_t i) {
  return getRuleContext<pascalParser::ExprContext>(i);
}

tree::TerminalNode* pascalParser::RelationContext::LT() {
  return getToken(pascalParser::LT, 0);
}

tree::TerminalNode* pascalParser::RelationContext::LEQ() {
  return getToken(pascalParser::LEQ, 0);
}

tree::TerminalNode* pascalParser::RelationContext::EQ() {
  return getToken(pascalParser::EQ, 0);
}

tree::TerminalNode* pascalParser::RelationContext::NEQ() {
  return getToken(pascalParser::NEQ, 0);
}

tree::TerminalNode* pascalParser::RelationContext::GEQ() {
  return getToken(pascalParser::GEQ, 0);
}

tree::TerminalNode* pascalParser::RelationContext::GT() {
  return getToken(pascalParser::GT, 0);
}


size_t pascalParser::RelationContext::getRuleIndex() const {
  return pascalParser::RuleRelation;
}

void pascalParser::RelationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelation(this);
}

void pascalParser::RelationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelation(this);
}

pascalParser::RelationContext* pascalParser::relation() {
  RelationContext *_localctx = _tracker.createInstance<RelationContext>(_ctx, getState());
  enterRule(_localctx, 32, pascalParser::RuleRelation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(155);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(131);
      expr();
      setState(132);
      match(pascalParser::LT);
      setState(133);
      expr();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(135);
      expr();
      setState(136);
      match(pascalParser::LEQ);
      setState(137);
      expr();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(139);
      expr();
      setState(140);
      match(pascalParser::EQ);
      setState(141);
      expr();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(143);
      expr();
      setState(144);
      match(pascalParser::NEQ);
      setState(145);
      expr();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(147);
      expr();
      setState(148);
      match(pascalParser::GEQ);
      setState(149);
      expr();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(151);
      expr();
      setState(152);
      match(pascalParser::GT);
      setState(153);
      expr();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> pascalParser::_decisionToDFA;
atn::PredictionContextCache pascalParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN pascalParser::_atn;
std::vector<uint16_t> pascalParser::_serializedATN;

std::vector<std::string> pascalParser::_ruleNames = {
  "start", "decl_list", "decl", "main_code", "code_block", "st_list", "statement", 
  "assign", "out", "print", "in", "read", "expr", "branch", "repeat", "guard", 
  "relation"
};

std::vector<std::string> pascalParser::_literalNames = {
  "", "'program'", "';'", "'var'", "','", "':'", "'integer'", "'begin'", 
  "'end'", "'.'", "':='", "'''", "'if'", "'then'", "'repeat'", "'until'", 
  "'or'", "'writeln'", "'readln'", "'='", "'<'", "'<='", "'>'", "'>='", 
  "'<>'", "", "", "'('", "')'"
};

std::vector<std::string> pascalParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "WRITE", 
  "READ", "EQ", "LT", "LEQ", "GT", "GEQ", "NEQ", "ID", "NUMBER", "OPEN_BRACKET", 
  "CLOSE_BRACKET", "R_COMMENT", "C_COMMENT", "LINE_COMMENT", "WS", "ErrorChar"
};

dfa::Vocabulary pascalParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> pascalParser::_tokenNames;

pascalParser::Initializer::Initializer() {
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
       0x3, 0x23, 0xa0, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
       0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x31, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 
       0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x39, 0xa, 0x4, 
       0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 
       0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x45, 0xa, 0x6, 0x3, 
       0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
       0x5, 0x7, 0x4e, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
       0x3, 0x8, 0x5, 0x8, 0x55, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
       0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x5f, 
       0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
       0xb, 0x5, 0xb, 0x67, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
       0xc, 0x5, 0xc, 0x6d, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
       0xd, 0x5, 0xd, 0x73, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 
       0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
       0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 
       0x84, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
       0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
       0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
       0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
       0x12, 0x3, 0x12, 0x5, 0x12, 0x9e, 0xa, 0x12, 0x3, 0x12, 0x2, 0x2, 
       0x13, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 
       0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x2, 0x3, 0x3, 0x2, 0x1b, 0x1c, 
       0x2, 0xa5, 0x2, 0x24, 0x3, 0x2, 0x2, 0x2, 0x4, 0x30, 0x3, 0x2, 0x2, 
       0x2, 0x6, 0x38, 0x3, 0x2, 0x2, 0x2, 0x8, 0x3a, 0x3, 0x2, 0x2, 0x2, 
       0xa, 0x44, 0x3, 0x2, 0x2, 0x2, 0xc, 0x4d, 0x3, 0x2, 0x2, 0x2, 0xe, 
       0x54, 0x3, 0x2, 0x2, 0x2, 0x10, 0x56, 0x3, 0x2, 0x2, 0x2, 0x12, 0x5e, 
       0x3, 0x2, 0x2, 0x2, 0x14, 0x66, 0x3, 0x2, 0x2, 0x2, 0x16, 0x6c, 0x3, 
       0x2, 0x2, 0x2, 0x18, 0x72, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x74, 0x3, 0x2, 
       0x2, 0x2, 0x1c, 0x76, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x7b, 0x3, 0x2, 0x2, 
       0x2, 0x20, 0x83, 0x3, 0x2, 0x2, 0x2, 0x22, 0x9d, 0x3, 0x2, 0x2, 0x2, 
       0x24, 0x25, 0x7, 0x3, 0x2, 0x2, 0x25, 0x26, 0x7, 0x1b, 0x2, 0x2, 
       0x26, 0x27, 0x7, 0x4, 0x2, 0x2, 0x27, 0x28, 0x7, 0x5, 0x2, 0x2, 0x28, 
       0x29, 0x5, 0x4, 0x3, 0x2, 0x29, 0x2a, 0x5, 0x8, 0x5, 0x2, 0x2a, 0x2b, 
       0x7, 0x2, 0x2, 0x3, 0x2b, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x31, 0x5, 
       0x6, 0x4, 0x2, 0x2d, 0x2e, 0x5, 0x6, 0x4, 0x2, 0x2e, 0x2f, 0x5, 0x4, 
       0x3, 0x2, 0x2f, 0x31, 0x3, 0x2, 0x2, 0x2, 0x30, 0x2c, 0x3, 0x2, 0x2, 
       0x2, 0x30, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x31, 0x5, 0x3, 0x2, 0x2, 0x2, 
       0x32, 0x39, 0x7, 0x1b, 0x2, 0x2, 0x33, 0x39, 0x7, 0x6, 0x2, 0x2, 
       0x34, 0x35, 0x7, 0x1b, 0x2, 0x2, 0x35, 0x36, 0x7, 0x7, 0x2, 0x2, 
       0x36, 0x37, 0x7, 0x8, 0x2, 0x2, 0x37, 0x39, 0x7, 0x4, 0x2, 0x2, 0x38, 
       0x32, 0x3, 0x2, 0x2, 0x2, 0x38, 0x33, 0x3, 0x2, 0x2, 0x2, 0x38, 0x34, 
       0x3, 0x2, 0x2, 0x2, 0x39, 0x7, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x7, 
       0x9, 0x2, 0x2, 0x3b, 0x3c, 0x5, 0xc, 0x7, 0x2, 0x3c, 0x3d, 0x7, 0xa, 
       0x2, 0x2, 0x3d, 0x3e, 0x7, 0xb, 0x2, 0x2, 0x3e, 0x9, 0x3, 0x2, 0x2, 
       0x2, 0x3f, 0x45, 0x5, 0xe, 0x8, 0x2, 0x40, 0x41, 0x7, 0x9, 0x2, 0x2, 
       0x41, 0x42, 0x5, 0xc, 0x7, 0x2, 0x42, 0x43, 0x7, 0xa, 0x2, 0x2, 0x43, 
       0x45, 0x3, 0x2, 0x2, 0x2, 0x44, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x44, 0x40, 
       0x3, 0x2, 0x2, 0x2, 0x45, 0xb, 0x3, 0x2, 0x2, 0x2, 0x46, 0x47, 0x5, 
       0xe, 0x8, 0x2, 0x47, 0x48, 0x7, 0x4, 0x2, 0x2, 0x48, 0x4e, 0x3, 0x2, 
       0x2, 0x2, 0x49, 0x4a, 0x5, 0xe, 0x8, 0x2, 0x4a, 0x4b, 0x7, 0x4, 0x2, 
       0x2, 0x4b, 0x4c, 0x5, 0xc, 0x7, 0x2, 0x4c, 0x4e, 0x3, 0x2, 0x2, 0x2, 
       0x4d, 0x46, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4e, 
       0xd, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x55, 0x5, 0x10, 0x9, 0x2, 0x50, 0x55, 
       0x5, 0x1c, 0xf, 0x2, 0x51, 0x55, 0x5, 0x12, 0xa, 0x2, 0x52, 0x55, 
       0x5, 0x16, 0xc, 0x2, 0x53, 0x55, 0x5, 0x1e, 0x10, 0x2, 0x54, 0x4f, 
       0x3, 0x2, 0x2, 0x2, 0x54, 0x50, 0x3, 0x2, 0x2, 0x2, 0x54, 0x51, 0x3, 
       0x2, 0x2, 0x2, 0x54, 0x52, 0x3, 0x2, 0x2, 0x2, 0x54, 0x53, 0x3, 0x2, 
       0x2, 0x2, 0x55, 0xf, 0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 0x7, 0x1b, 0x2, 
       0x2, 0x57, 0x58, 0x7, 0xc, 0x2, 0x2, 0x58, 0x59, 0x5, 0x1a, 0xe, 
       0x2, 0x59, 0x11, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5f, 0x5, 0x14, 0xb, 
       0x2, 0x5b, 0x5c, 0x5, 0x14, 0xb, 0x2, 0x5c, 0x5d, 0x5, 0x12, 0xa, 
       0x2, 0x5d, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5a, 0x3, 0x2, 0x2, 0x2, 
       0x5e, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x13, 0x3, 0x2, 0x2, 0x2, 0x60, 
       0x61, 0x7, 0x13, 0x2, 0x2, 0x61, 0x67, 0x7, 0x1d, 0x2, 0x2, 0x62, 
       0x67, 0x7, 0xd, 0x2, 0x2, 0x63, 0x67, 0x5, 0x1a, 0xe, 0x2, 0x64, 
       0x67, 0x7, 0xd, 0x2, 0x2, 0x65, 0x67, 0x7, 0x1e, 0x2, 0x2, 0x66, 
       0x60, 0x3, 0x2, 0x2, 0x2, 0x66, 0x62, 0x3, 0x2, 0x2, 0x2, 0x66, 0x63, 
       0x3, 0x2, 0x2, 0x2, 0x66, 0x64, 0x3, 0x2, 0x2, 0x2, 0x66, 0x65, 0x3, 
       0x2, 0x2, 0x2, 0x67, 0x15, 0x3, 0x2, 0x2, 0x2, 0x68, 0x6d, 0x5, 0x18, 
       0xd, 0x2, 0x69, 0x6a, 0x5, 0x18, 0xd, 0x2, 0x6a, 0x6b, 0x5, 0x16, 
       0xc, 0x2, 0x6b, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x68, 0x3, 0x2, 0x2, 
       0x2, 0x6c, 0x69, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x17, 0x3, 0x2, 0x2, 0x2, 
       0x6e, 0x6f, 0x7, 0x14, 0x2, 0x2, 0x6f, 0x73, 0x7, 0x1d, 0x2, 0x2, 
       0x70, 0x73, 0x7, 0x1b, 0x2, 0x2, 0x71, 0x73, 0x7, 0x1e, 0x2, 0x2, 
       0x72, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x72, 0x70, 0x3, 0x2, 0x2, 0x2, 0x72, 
       0x71, 0x3, 0x2, 0x2, 0x2, 0x73, 0x19, 0x3, 0x2, 0x2, 0x2, 0x74, 0x75, 
       0x9, 0x2, 0x2, 0x2, 0x75, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x7, 
       0xe, 0x2, 0x2, 0x77, 0x78, 0x5, 0x22, 0x12, 0x2, 0x78, 0x79, 0x7, 
       0xf, 0x2, 0x2, 0x79, 0x7a, 0x5, 0xa, 0x6, 0x2, 0x7a, 0x1d, 0x3, 0x2, 
       0x2, 0x2, 0x7b, 0x7c, 0x7, 0x10, 0x2, 0x2, 0x7c, 0x7d, 0x5, 0xe, 
       0x8, 0x2, 0x7d, 0x7e, 0x7, 0x11, 0x2, 0x2, 0x7e, 0x7f, 0x5, 0x20, 
       0x11, 0x2, 0x7f, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x80, 0x84, 0x5, 0x22, 
       0x12, 0x2, 0x81, 0x82, 0x7, 0x12, 0x2, 0x2, 0x82, 0x84, 0x5, 0x22, 
       0x12, 0x2, 0x83, 0x80, 0x3, 0x2, 0x2, 0x2, 0x83, 0x81, 0x3, 0x2, 
       0x2, 0x2, 0x84, 0x21, 0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 0x5, 0x1a, 
       0xe, 0x2, 0x86, 0x87, 0x7, 0x16, 0x2, 0x2, 0x87, 0x88, 0x5, 0x1a, 
       0xe, 0x2, 0x88, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x5, 0x1a, 
       0xe, 0x2, 0x8a, 0x8b, 0x7, 0x17, 0x2, 0x2, 0x8b, 0x8c, 0x5, 0x1a, 
       0xe, 0x2, 0x8c, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 0x5, 0x1a, 
       0xe, 0x2, 0x8e, 0x8f, 0x7, 0x15, 0x2, 0x2, 0x8f, 0x90, 0x5, 0x1a, 
       0xe, 0x2, 0x90, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x91, 0x92, 0x5, 0x1a, 
       0xe, 0x2, 0x92, 0x93, 0x7, 0x1a, 0x2, 0x2, 0x93, 0x94, 0x5, 0x1a, 
       0xe, 0x2, 0x94, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x95, 0x96, 0x5, 0x1a, 
       0xe, 0x2, 0x96, 0x97, 0x7, 0x19, 0x2, 0x2, 0x97, 0x98, 0x5, 0x1a, 
       0xe, 0x2, 0x98, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9a, 0x5, 0x1a, 
       0xe, 0x2, 0x9a, 0x9b, 0x7, 0x18, 0x2, 0x2, 0x9b, 0x9c, 0x5, 0x1a, 
       0xe, 0x2, 0x9c, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x85, 0x3, 0x2, 0x2, 
       0x2, 0x9d, 0x89, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x8d, 0x3, 0x2, 0x2, 0x2, 
       0x9d, 0x91, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x95, 0x3, 0x2, 0x2, 0x2, 0x9d, 
       0x99, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x23, 0x3, 0x2, 0x2, 0x2, 0xd, 0x30, 
       0x38, 0x44, 0x4d, 0x54, 0x5e, 0x66, 0x6c, 0x72, 0x83, 0x9d, 
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

pascalParser::Initializer pascalParser::_init;
