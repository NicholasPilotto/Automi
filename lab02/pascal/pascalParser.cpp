
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
    setState(38);
    match(pascalParser::T__0);
    setState(39);
    match(pascalParser::ID);
    setState(40);
    match(pascalParser::T__1);
    setState(41);
    match(pascalParser::T__2);
    setState(42);
    decl_list();
    setState(43);
    main_code();
    setState(44);
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
    setState(50);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(46);
      decl();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(47);
      decl();
      setState(48);
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
    setState(58);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(52);
      match(pascalParser::ID);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(53);
      match(pascalParser::T__3);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(54);
      match(pascalParser::ID);
      setState(55);
      match(pascalParser::T__4);
      setState(56);
      match(pascalParser::T__5);
      setState(57);
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
    setState(60);
    match(pascalParser::T__6);
    setState(61);
    st_list();
    setState(62);
    match(pascalParser::T__7);
    setState(63);
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
    setState(70);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::T__10:
      case pascalParser::T__11:
      case pascalParser::T__12:
      case pascalParser::T__15:
      case pascalParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(65);
        statement();
        break;
      }

      case pascalParser::T__6: {
        enterOuterAlt(_localctx, 2);
        setState(66);
        match(pascalParser::T__6);
        setState(67);
        st_list();
        setState(68);
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
    setState(79);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(72);
      statement();
      setState(73);
      match(pascalParser::T__1);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(75);
      statement();
      setState(76);
      match(pascalParser::T__1);
      setState(77);
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

pascalParser::OperationContext* pascalParser::StatementContext::operation() {
  return getRuleContext<pascalParser::OperationContext>(0);
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
    setState(87);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(81);
      assign();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(82);
      branch();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(83);
      out();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(84);
      in();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(85);
      repeat();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(86);
      operation();
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

pascalParser::InContext* pascalParser::AssignContext::in() {
  return getRuleContext<pascalParser::InContext>(0);
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
    setState(89);
    match(pascalParser::ID);
    setState(90);
    match(pascalParser::T__9);
    setState(93);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::ID:
      case pascalParser::NUMBER: {
        setState(91);
        expr();
        break;
      }

      case pascalParser::T__11: {
        setState(92);
        in();
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

//----------------- OperationContext ------------------------------------------------------------------

pascalParser::OperationContext::OperationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::OperationContext::ID() {
  return getToken(pascalParser::ID, 0);
}

pascalParser::OperationsContext* pascalParser::OperationContext::operations() {
  return getRuleContext<pascalParser::OperationsContext>(0);
}


size_t pascalParser::OperationContext::getRuleIndex() const {
  return pascalParser::RuleOperation;
}

void pascalParser::OperationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation(this);
}

void pascalParser::OperationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation(this);
}

pascalParser::OperationContext* pascalParser::operation() {
  OperationContext *_localctx = _tracker.createInstance<OperationContext>(_ctx, getState());
  enterRule(_localctx, 16, pascalParser::RuleOperation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(95);
    match(pascalParser::ID);
    setState(96);
    match(pascalParser::T__9);
    setState(97);
    operations(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperationsContext ------------------------------------------------------------------

pascalParser::OperationsContext::OperationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::ExprContext* pascalParser::OperationsContext::expr() {
  return getRuleContext<pascalParser::ExprContext>(0);
}

tree::TerminalNode* pascalParser::OperationsContext::OPEN_BRACKET() {
  return getToken(pascalParser::OPEN_BRACKET, 0);
}

std::vector<pascalParser::OperationsContext *> pascalParser::OperationsContext::operations() {
  return getRuleContexts<pascalParser::OperationsContext>();
}

pascalParser::OperationsContext* pascalParser::OperationsContext::operations(size_t i) {
  return getRuleContext<pascalParser::OperationsContext>(i);
}

tree::TerminalNode* pascalParser::OperationsContext::CLOSE_BRACKET() {
  return getToken(pascalParser::CLOSE_BRACKET, 0);
}

tree::TerminalNode* pascalParser::OperationsContext::ADD() {
  return getToken(pascalParser::ADD, 0);
}

tree::TerminalNode* pascalParser::OperationsContext::SUB() {
  return getToken(pascalParser::SUB, 0);
}

tree::TerminalNode* pascalParser::OperationsContext::MUL() {
  return getToken(pascalParser::MUL, 0);
}

tree::TerminalNode* pascalParser::OperationsContext::DIV() {
  return getToken(pascalParser::DIV, 0);
}

tree::TerminalNode* pascalParser::OperationsContext::MOD() {
  return getToken(pascalParser::MOD, 0);
}


size_t pascalParser::OperationsContext::getRuleIndex() const {
  return pascalParser::RuleOperations;
}

void pascalParser::OperationsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperations(this);
}

void pascalParser::OperationsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperations(this);
}


pascalParser::OperationsContext* pascalParser::operations() {
   return operations(0);
}

pascalParser::OperationsContext* pascalParser::operations(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  pascalParser::OperationsContext *_localctx = _tracker.createInstance<OperationsContext>(_ctx, parentState);
  pascalParser::OperationsContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 18;
  enterRecursionRule(_localctx, 18, pascalParser::RuleOperations, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(105);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::ID:
      case pascalParser::NUMBER: {
        setState(100);
        expr();
        break;
      }

      case pascalParser::OPEN_BRACKET: {
        setState(101);
        match(pascalParser::OPEN_BRACKET);
        setState(102);
        operations(0);
        setState(103);
        match(pascalParser::CLOSE_BRACKET);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(124);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(122);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<OperationsContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleOperations);
          setState(107);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(108);
          match(pascalParser::ADD);
          setState(109);
          operations(7);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<OperationsContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleOperations);
          setState(110);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(111);
          match(pascalParser::SUB);
          setState(112);
          operations(6);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<OperationsContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleOperations);
          setState(113);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(114);
          match(pascalParser::MUL);
          setState(115);
          operations(5);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<OperationsContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleOperations);
          setState(116);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(117);
          match(pascalParser::DIV);
          setState(118);
          operations(4);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<OperationsContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleOperations);
          setState(119);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(120);
          match(pascalParser::MOD);
          setState(121);
          operations(3);
          break;
        }

        default:
          break;
        } 
      }
      setState(126);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    }
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

tree::TerminalNode* pascalParser::OutContext::OPEN_BRACKET() {
  return getToken(pascalParser::OPEN_BRACKET, 0);
}

tree::TerminalNode* pascalParser::OutContext::CLOSE_BRACKET() {
  return getToken(pascalParser::CLOSE_BRACKET, 0);
}

tree::TerminalNode* pascalParser::OutContext::String() {
  return getToken(pascalParser::String, 0);
}

pascalParser::ExprContext* pascalParser::OutContext::expr() {
  return getRuleContext<pascalParser::ExprContext>(0);
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
  enterRule(_localctx, 20, pascalParser::RuleOut);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(127);
    match(pascalParser::T__10);
    setState(128);
    match(pascalParser::OPEN_BRACKET);
    setState(131);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::String: {
        setState(129);
        match(pascalParser::String);
        break;
      }

      case pascalParser::ID:
      case pascalParser::NUMBER: {
        setState(130);
        expr();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(133);
    match(pascalParser::CLOSE_BRACKET);
   
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

tree::TerminalNode* pascalParser::InContext::OPEN_BRACKET() {
  return getToken(pascalParser::OPEN_BRACKET, 0);
}

tree::TerminalNode* pascalParser::InContext::ID() {
  return getToken(pascalParser::ID, 0);
}

tree::TerminalNode* pascalParser::InContext::CLOSE_BRACKET() {
  return getToken(pascalParser::CLOSE_BRACKET, 0);
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
  enterRule(_localctx, 22, pascalParser::RuleIn);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(135);
    match(pascalParser::T__11);
    setState(136);
    match(pascalParser::OPEN_BRACKET);
    setState(137);
    match(pascalParser::ID);
    setState(138);
    match(pascalParser::CLOSE_BRACKET);
   
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
    setState(140);
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

pascalParser::If_stContext* pascalParser::BranchContext::if_st() {
  return getRuleContext<pascalParser::If_stContext>(0);
}

pascalParser::Else_stContext* pascalParser::BranchContext::else_st() {
  return getRuleContext<pascalParser::Else_stContext>(0);
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
    setState(146);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(142);
      if_st();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(143);
      if_st();
      setState(144);
      else_st();
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

//----------------- If_stContext ------------------------------------------------------------------

pascalParser::If_stContext::If_stContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::GuardContext* pascalParser::If_stContext::guard() {
  return getRuleContext<pascalParser::GuardContext>(0);
}

pascalParser::Code_blockContext* pascalParser::If_stContext::code_block() {
  return getRuleContext<pascalParser::Code_blockContext>(0);
}


size_t pascalParser::If_stContext::getRuleIndex() const {
  return pascalParser::RuleIf_st;
}

void pascalParser::If_stContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_st(this);
}

void pascalParser::If_stContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_st(this);
}

pascalParser::If_stContext* pascalParser::if_st() {
  If_stContext *_localctx = _tracker.createInstance<If_stContext>(_ctx, getState());
  enterRule(_localctx, 28, pascalParser::RuleIf_st);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(148);
    match(pascalParser::T__12);
    setState(149);
    guard();
    setState(150);
    match(pascalParser::T__13);
    setState(151);
    code_block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Else_stContext ------------------------------------------------------------------

pascalParser::Else_stContext::Else_stContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::Code_blockContext* pascalParser::Else_stContext::code_block() {
  return getRuleContext<pascalParser::Code_blockContext>(0);
}


size_t pascalParser::Else_stContext::getRuleIndex() const {
  return pascalParser::RuleElse_st;
}

void pascalParser::Else_stContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElse_st(this);
}

void pascalParser::Else_stContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElse_st(this);
}

pascalParser::Else_stContext* pascalParser::else_st() {
  Else_stContext *_localctx = _tracker.createInstance<Else_stContext>(_ctx, getState());
  enterRule(_localctx, 30, pascalParser::RuleElse_st);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(153);
    match(pascalParser::T__14);
    setState(154);
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

pascalParser::St_listContext* pascalParser::RepeatContext::st_list() {
  return getRuleContext<pascalParser::St_listContext>(0);
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
  enterRule(_localctx, 32, pascalParser::RuleRepeat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(156);
    match(pascalParser::T__15);
    setState(157);
    st_list();
    setState(158);
    match(pascalParser::T__16);
    setState(159);
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

std::vector<pascalParser::RelationContext *> pascalParser::GuardContext::relation() {
  return getRuleContexts<pascalParser::RelationContext>();
}

pascalParser::RelationContext* pascalParser::GuardContext::relation(size_t i) {
  return getRuleContext<pascalParser::RelationContext>(i);
}

tree::TerminalNode* pascalParser::GuardContext::BOOLEAN_OPERATORS() {
  return getToken(pascalParser::BOOLEAN_OPERATORS, 0);
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
  enterRule(_localctx, 34, pascalParser::RuleGuard);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(166);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(161);
      relation();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(162);
      relation();
      setState(163);
      match(pascalParser::BOOLEAN_OPERATORS);
      setState(164);
      relation();
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

//----------------- RelationContext ------------------------------------------------------------------

pascalParser::RelationContext::RelationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<pascalParser::OperationsContext *> pascalParser::RelationContext::operations() {
  return getRuleContexts<pascalParser::OperationsContext>();
}

pascalParser::OperationsContext* pascalParser::RelationContext::operations(size_t i) {
  return getRuleContext<pascalParser::OperationsContext>(i);
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

tree::TerminalNode* pascalParser::RelationContext::OPEN_BRACKET() {
  return getToken(pascalParser::OPEN_BRACKET, 0);
}

pascalParser::RelationContext* pascalParser::RelationContext::relation() {
  return getRuleContext<pascalParser::RelationContext>(0);
}

tree::TerminalNode* pascalParser::RelationContext::CLOSE_BRACKET() {
  return getToken(pascalParser::CLOSE_BRACKET, 0);
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
  enterRule(_localctx, 36, pascalParser::RuleRelation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(196);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(168);
      operations(0);
      setState(169);
      match(pascalParser::LT);
      setState(170);
      operations(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(172);
      operations(0);
      setState(173);
      match(pascalParser::LEQ);
      setState(174);
      operations(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(176);
      operations(0);
      setState(177);
      match(pascalParser::EQ);
      setState(178);
      operations(0);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(180);
      operations(0);
      setState(181);
      match(pascalParser::NEQ);
      setState(182);
      operations(0);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(184);
      operations(0);
      setState(185);
      match(pascalParser::GEQ);
      setState(186);
      operations(0);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(188);
      operations(0);
      setState(189);
      match(pascalParser::GT);
      setState(190);
      operations(0);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(192);
      match(pascalParser::OPEN_BRACKET);
      setState(193);
      relation();
      setState(194);
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

bool pascalParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 9: return operationsSempred(dynamic_cast<OperationsContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool pascalParser::operationsSempred(OperationsContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 6);
    case 1: return precpred(_ctx, 5);
    case 2: return precpred(_ctx, 4);
    case 3: return precpred(_ctx, 3);
    case 4: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> pascalParser::_decisionToDFA;
atn::PredictionContextCache pascalParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN pascalParser::_atn;
std::vector<uint16_t> pascalParser::_serializedATN;

std::vector<std::string> pascalParser::_ruleNames = {
  "start", "decl_list", "decl", "main_code", "code_block", "st_list", "statement", 
  "assign", "operation", "operations", "out", "in", "expr", "branch", "if_st", 
  "else_st", "repeat", "guard", "relation"
};

std::vector<std::string> pascalParser::_literalNames = {
  "", "'program'", "';'", "'var'", "','", "':'", "'integer'", "'begin'", 
  "'end'", "'.'", "':='", "'writeln'", "'readln'", "'if'", "'then'", "'else'", 
  "'repeat'", "'until'", "'+'", "'-'", "'*'", "'/'", "'%'", "", "", "'='", 
  "'<'", "'<='", "'>'", "'>='", "'<>'", "", "", "'('", "')'"
};

std::vector<std::string> pascalParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "ADD", "SUB", "MUL", "DIV", "MOD", "String", "BOOLEAN_OPERATORS", "EQ", 
  "LT", "LEQ", "GT", "GEQ", "NEQ", "ID", "NUMBER", "OPEN_BRACKET", "CLOSE_BRACKET", 
  "R_COMMENT", "C_COMMENT", "LINE_COMMENT", "WS", "ErrorChar"
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
       0x3, 0x29, 0xc9, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
       0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x5, 0x3, 0x35, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
       0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x3d, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 
       0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
       0x6, 0x3, 0x6, 0x5, 0x6, 0x49, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 
       0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x52, 0xa, 
       0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
       0x5, 0x8, 0x5a, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
       0x5, 0x9, 0x60, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
       0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 
       0xb, 0x6c, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
       0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
       0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x7d, 0xa, 0xb, 
       0xc, 0xb, 0xe, 0xb, 0x80, 0xb, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
       0x3, 0xc, 0x5, 0xc, 0x86, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 
       0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 
       0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x95, 0xa, 0xf, 0x3, 
       0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 
       0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
       0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 
       0x13, 0xa9, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
       0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
       0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
       0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
       0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
       0x5, 0x14, 0xc7, 0xa, 0x14, 0x3, 0x14, 0x2, 0x3, 0x14, 0x15, 0x2, 
       0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 
       0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x2, 0x3, 0x3, 0x2, 0x21, 0x22, 
       0x2, 0xcf, 0x2, 0x28, 0x3, 0x2, 0x2, 0x2, 0x4, 0x34, 0x3, 0x2, 0x2, 
       0x2, 0x6, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x8, 0x3e, 0x3, 0x2, 0x2, 0x2, 
       0xa, 0x48, 0x3, 0x2, 0x2, 0x2, 0xc, 0x51, 0x3, 0x2, 0x2, 0x2, 0xe, 
       0x59, 0x3, 0x2, 0x2, 0x2, 0x10, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x12, 0x61, 
       0x3, 0x2, 0x2, 0x2, 0x14, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x16, 0x81, 0x3, 
       0x2, 0x2, 0x2, 0x18, 0x89, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x8e, 0x3, 0x2, 
       0x2, 0x2, 0x1c, 0x94, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x96, 0x3, 0x2, 0x2, 
       0x2, 0x20, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x22, 0x9e, 0x3, 0x2, 0x2, 0x2, 
       0x24, 0xa8, 0x3, 0x2, 0x2, 0x2, 0x26, 0xc6, 0x3, 0x2, 0x2, 0x2, 0x28, 
       0x29, 0x7, 0x3, 0x2, 0x2, 0x29, 0x2a, 0x7, 0x21, 0x2, 0x2, 0x2a, 
       0x2b, 0x7, 0x4, 0x2, 0x2, 0x2b, 0x2c, 0x7, 0x5, 0x2, 0x2, 0x2c, 0x2d, 
       0x5, 0x4, 0x3, 0x2, 0x2d, 0x2e, 0x5, 0x8, 0x5, 0x2, 0x2e, 0x2f, 0x7, 
       0x2, 0x2, 0x3, 0x2f, 0x3, 0x3, 0x2, 0x2, 0x2, 0x30, 0x35, 0x5, 0x6, 
       0x4, 0x2, 0x31, 0x32, 0x5, 0x6, 0x4, 0x2, 0x32, 0x33, 0x5, 0x4, 0x3, 
       0x2, 0x33, 0x35, 0x3, 0x2, 0x2, 0x2, 0x34, 0x30, 0x3, 0x2, 0x2, 0x2, 
       0x34, 0x31, 0x3, 0x2, 0x2, 0x2, 0x35, 0x5, 0x3, 0x2, 0x2, 0x2, 0x36, 
       0x3d, 0x7, 0x21, 0x2, 0x2, 0x37, 0x3d, 0x7, 0x6, 0x2, 0x2, 0x38, 
       0x39, 0x7, 0x21, 0x2, 0x2, 0x39, 0x3a, 0x7, 0x7, 0x2, 0x2, 0x3a, 
       0x3b, 0x7, 0x8, 0x2, 0x2, 0x3b, 0x3d, 0x7, 0x4, 0x2, 0x2, 0x3c, 0x36, 
       0x3, 0x2, 0x2, 0x2, 0x3c, 0x37, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x38, 0x3, 
       0x2, 0x2, 0x2, 0x3d, 0x7, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3f, 0x7, 0x9, 
       0x2, 0x2, 0x3f, 0x40, 0x5, 0xc, 0x7, 0x2, 0x40, 0x41, 0x7, 0xa, 0x2, 
       0x2, 0x41, 0x42, 0x7, 0xb, 0x2, 0x2, 0x42, 0x9, 0x3, 0x2, 0x2, 0x2, 
       0x43, 0x49, 0x5, 0xe, 0x8, 0x2, 0x44, 0x45, 0x7, 0x9, 0x2, 0x2, 0x45, 
       0x46, 0x5, 0xc, 0x7, 0x2, 0x46, 0x47, 0x7, 0xa, 0x2, 0x2, 0x47, 0x49, 
       0x3, 0x2, 0x2, 0x2, 0x48, 0x43, 0x3, 0x2, 0x2, 0x2, 0x48, 0x44, 0x3, 
       0x2, 0x2, 0x2, 0x49, 0xb, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4b, 0x5, 0xe, 
       0x8, 0x2, 0x4b, 0x4c, 0x7, 0x4, 0x2, 0x2, 0x4c, 0x52, 0x3, 0x2, 0x2, 
       0x2, 0x4d, 0x4e, 0x5, 0xe, 0x8, 0x2, 0x4e, 0x4f, 0x7, 0x4, 0x2, 0x2, 
       0x4f, 0x50, 0x5, 0xc, 0x7, 0x2, 0x50, 0x52, 0x3, 0x2, 0x2, 0x2, 0x51, 
       0x4a, 0x3, 0x2, 0x2, 0x2, 0x51, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x52, 0xd, 
       0x3, 0x2, 0x2, 0x2, 0x53, 0x5a, 0x5, 0x10, 0x9, 0x2, 0x54, 0x5a, 
       0x5, 0x1c, 0xf, 0x2, 0x55, 0x5a, 0x5, 0x16, 0xc, 0x2, 0x56, 0x5a, 
       0x5, 0x18, 0xd, 0x2, 0x57, 0x5a, 0x5, 0x22, 0x12, 0x2, 0x58, 0x5a, 
       0x5, 0x12, 0xa, 0x2, 0x59, 0x53, 0x3, 0x2, 0x2, 0x2, 0x59, 0x54, 
       0x3, 0x2, 0x2, 0x2, 0x59, 0x55, 0x3, 0x2, 0x2, 0x2, 0x59, 0x56, 0x3, 
       0x2, 0x2, 0x2, 0x59, 0x57, 0x3, 0x2, 0x2, 0x2, 0x59, 0x58, 0x3, 0x2, 
       0x2, 0x2, 0x5a, 0xf, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 0x7, 0x21, 0x2, 
       0x2, 0x5c, 0x5f, 0x7, 0xc, 0x2, 0x2, 0x5d, 0x60, 0x5, 0x1a, 0xe, 
       0x2, 0x5e, 0x60, 0x5, 0x18, 0xd, 0x2, 0x5f, 0x5d, 0x3, 0x2, 0x2, 
       0x2, 0x5f, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x60, 0x11, 0x3, 0x2, 0x2, 0x2, 
       0x61, 0x62, 0x7, 0x21, 0x2, 0x2, 0x62, 0x63, 0x7, 0xc, 0x2, 0x2, 
       0x63, 0x64, 0x5, 0x14, 0xb, 0x2, 0x64, 0x13, 0x3, 0x2, 0x2, 0x2, 
       0x65, 0x66, 0x8, 0xb, 0x1, 0x2, 0x66, 0x6c, 0x5, 0x1a, 0xe, 0x2, 
       0x67, 0x68, 0x7, 0x23, 0x2, 0x2, 0x68, 0x69, 0x5, 0x14, 0xb, 0x2, 
       0x69, 0x6a, 0x7, 0x24, 0x2, 0x2, 0x6a, 0x6c, 0x3, 0x2, 0x2, 0x2, 
       0x6b, 0x65, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x67, 0x3, 0x2, 0x2, 0x2, 0x6c, 
       0x7e, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6e, 0xc, 0x8, 0x2, 0x2, 0x6e, 0x6f, 
       0x7, 0x14, 0x2, 0x2, 0x6f, 0x7d, 0x5, 0x14, 0xb, 0x9, 0x70, 0x71, 
       0xc, 0x7, 0x2, 0x2, 0x71, 0x72, 0x7, 0x15, 0x2, 0x2, 0x72, 0x7d, 
       0x5, 0x14, 0xb, 0x8, 0x73, 0x74, 0xc, 0x6, 0x2, 0x2, 0x74, 0x75, 
       0x7, 0x16, 0x2, 0x2, 0x75, 0x7d, 0x5, 0x14, 0xb, 0x7, 0x76, 0x77, 
       0xc, 0x5, 0x2, 0x2, 0x77, 0x78, 0x7, 0x17, 0x2, 0x2, 0x78, 0x7d, 
       0x5, 0x14, 0xb, 0x6, 0x79, 0x7a, 0xc, 0x4, 0x2, 0x2, 0x7a, 0x7b, 
       0x7, 0x18, 0x2, 0x2, 0x7b, 0x7d, 0x5, 0x14, 0xb, 0x5, 0x7c, 0x6d, 
       0x3, 0x2, 0x2, 0x2, 0x7c, 0x70, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x73, 0x3, 
       0x2, 0x2, 0x2, 0x7c, 0x76, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x79, 0x3, 0x2, 
       0x2, 0x2, 0x7d, 0x80, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7c, 0x3, 0x2, 0x2, 
       0x2, 0x7e, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x15, 0x3, 0x2, 0x2, 0x2, 
       0x80, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x81, 0x82, 0x7, 0xd, 0x2, 0x2, 0x82, 
       0x85, 0x7, 0x23, 0x2, 0x2, 0x83, 0x86, 0x7, 0x19, 0x2, 0x2, 0x84, 
       0x86, 0x5, 0x1a, 0xe, 0x2, 0x85, 0x83, 0x3, 0x2, 0x2, 0x2, 0x85, 
       0x84, 0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 
       0x7, 0x24, 0x2, 0x2, 0x88, 0x17, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 
       0x7, 0xe, 0x2, 0x2, 0x8a, 0x8b, 0x7, 0x23, 0x2, 0x2, 0x8b, 0x8c, 
       0x7, 0x21, 0x2, 0x2, 0x8c, 0x8d, 0x7, 0x24, 0x2, 0x2, 0x8d, 0x19, 
       0x3, 0x2, 0x2, 0x2, 0x8e, 0x8f, 0x9, 0x2, 0x2, 0x2, 0x8f, 0x1b, 0x3, 
       0x2, 0x2, 0x2, 0x90, 0x95, 0x5, 0x1e, 0x10, 0x2, 0x91, 0x92, 0x5, 
       0x1e, 0x10, 0x2, 0x92, 0x93, 0x5, 0x20, 0x11, 0x2, 0x93, 0x95, 0x3, 
       0x2, 0x2, 0x2, 0x94, 0x90, 0x3, 0x2, 0x2, 0x2, 0x94, 0x91, 0x3, 0x2, 
       0x2, 0x2, 0x95, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x96, 0x97, 0x7, 0xf, 0x2, 
       0x2, 0x97, 0x98, 0x5, 0x24, 0x13, 0x2, 0x98, 0x99, 0x7, 0x10, 0x2, 
       0x2, 0x99, 0x9a, 0x5, 0xa, 0x6, 0x2, 0x9a, 0x1f, 0x3, 0x2, 0x2, 0x2, 
       0x9b, 0x9c, 0x7, 0x11, 0x2, 0x2, 0x9c, 0x9d, 0x5, 0xa, 0x6, 0x2, 
       0x9d, 0x21, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9f, 0x7, 0x12, 0x2, 0x2, 
       0x9f, 0xa0, 0x5, 0xc, 0x7, 0x2, 0xa0, 0xa1, 0x7, 0x13, 0x2, 0x2, 
       0xa1, 0xa2, 0x5, 0x24, 0x13, 0x2, 0xa2, 0x23, 0x3, 0x2, 0x2, 0x2, 
       0xa3, 0xa9, 0x5, 0x26, 0x14, 0x2, 0xa4, 0xa5, 0x5, 0x26, 0x14, 0x2, 
       0xa5, 0xa6, 0x7, 0x1a, 0x2, 0x2, 0xa6, 0xa7, 0x5, 0x26, 0x14, 0x2, 
       0xa7, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa8, 
       0xa4, 0x3, 0x2, 0x2, 0x2, 0xa9, 0x25, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 
       0x5, 0x14, 0xb, 0x2, 0xab, 0xac, 0x7, 0x1c, 0x2, 0x2, 0xac, 0xad, 
       0x5, 0x14, 0xb, 0x2, 0xad, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 
       0x5, 0x14, 0xb, 0x2, 0xaf, 0xb0, 0x7, 0x1d, 0x2, 0x2, 0xb0, 0xb1, 
       0x5, 0x14, 0xb, 0x2, 0xb1, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb3, 
       0x5, 0x14, 0xb, 0x2, 0xb3, 0xb4, 0x7, 0x1b, 0x2, 0x2, 0xb4, 0xb5, 
       0x5, 0x14, 0xb, 0x2, 0xb5, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 
       0x5, 0x14, 0xb, 0x2, 0xb7, 0xb8, 0x7, 0x20, 0x2, 0x2, 0xb8, 0xb9, 
       0x5, 0x14, 0xb, 0x2, 0xb9, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 
       0x5, 0x14, 0xb, 0x2, 0xbb, 0xbc, 0x7, 0x1f, 0x2, 0x2, 0xbc, 0xbd, 
       0x5, 0x14, 0xb, 0x2, 0xbd, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbf, 
       0x5, 0x14, 0xb, 0x2, 0xbf, 0xc0, 0x7, 0x1e, 0x2, 0x2, 0xc0, 0xc1, 
       0x5, 0x14, 0xb, 0x2, 0xc1, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 
       0x7, 0x23, 0x2, 0x2, 0xc3, 0xc4, 0x5, 0x26, 0x14, 0x2, 0xc4, 0xc5, 
       0x7, 0x24, 0x2, 0x2, 0xc5, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xaa, 
       0x3, 0x2, 0x2, 0x2, 0xc6, 0xae, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xb2, 0x3, 
       0x2, 0x2, 0x2, 0xc6, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xba, 0x3, 0x2, 
       0x2, 0x2, 0xc6, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc2, 0x3, 0x2, 0x2, 
       0x2, 0xc7, 0x27, 0x3, 0x2, 0x2, 0x2, 0xf, 0x34, 0x3c, 0x48, 0x51, 
       0x59, 0x5f, 0x6b, 0x7c, 0x7e, 0x85, 0x94, 0xa8, 0xc6, 
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
