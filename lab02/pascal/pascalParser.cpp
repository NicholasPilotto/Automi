
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
    setState(40);
    match(pascalParser::T__0);
    setState(41);
    match(pascalParser::ID);
    setState(42);
    match(pascalParser::T__1);
    setState(43);
    match(pascalParser::T__2);
    setState(44);
    decl_list();
    setState(45);
    main_code();
    setState(46);
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
    setState(52);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(48);
      decl();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(49);
      decl();
      setState(50);
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
    setState(60);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(54);
      match(pascalParser::ID);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(55);
      match(pascalParser::T__3);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(56);
      match(pascalParser::ID);
      setState(57);
      match(pascalParser::T__4);
      setState(58);
      match(pascalParser::T__5);
      setState(59);
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
    setState(62);
    match(pascalParser::T__6);
    setState(63);
    st_list();
    setState(64);
    match(pascalParser::T__7);
    setState(65);
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
    setState(72);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::T__10:
      case pascalParser::T__11:
      case pascalParser::T__12:
      case pascalParser::T__15:
      case pascalParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(67);
        statement();
        break;
      }

      case pascalParser::T__6: {
        enterOuterAlt(_localctx, 2);
        setState(68);
        match(pascalParser::T__6);
        setState(69);
        st_list();
        setState(70);
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
    setState(81);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(74);
      statement();
      setState(75);
      match(pascalParser::T__1);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(77);
      statement();
      setState(78);
      match(pascalParser::T__1);
      setState(79);
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
    setState(89);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(83);
      assign();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(84);
      branch();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(85);
      out();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(86);
      in();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(87);
      repeat();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(88);
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
    setState(91);
    match(pascalParser::ID);
    setState(92);
    match(pascalParser::T__9);
    setState(95);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::ID:
      case pascalParser::NUMBER: {
        setState(93);
        expr();
        break;
      }

      case pascalParser::T__11: {
        setState(94);
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
    setState(97);
    match(pascalParser::ID);
    setState(98);
    match(pascalParser::T__9);
    setState(99);
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
    setState(107);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::ID:
      case pascalParser::NUMBER: {
        setState(102);
        expr();
        break;
      }

      case pascalParser::OPEN_BRACKET: {
        setState(103);
        match(pascalParser::OPEN_BRACKET);
        setState(104);
        operations(0);
        setState(105);
        match(pascalParser::CLOSE_BRACKET);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(126);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(124);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<OperationsContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleOperations);
          setState(109);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(110);
          match(pascalParser::ADD);
          setState(111);
          operations(7);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<OperationsContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleOperations);
          setState(112);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(113);
          match(pascalParser::SUB);
          setState(114);
          operations(6);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<OperationsContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleOperations);
          setState(115);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(116);
          match(pascalParser::MUL);
          setState(117);
          operations(5);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<OperationsContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleOperations);
          setState(118);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(119);
          match(pascalParser::DIV);
          setState(120);
          operations(4);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<OperationsContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleOperations);
          setState(121);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(122);
          match(pascalParser::MOD);
          setState(123);
          operations(3);
          break;
        }

        default:
          break;
        } 
      }
      setState(128);
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
    setState(129);
    match(pascalParser::T__10);
    setState(130);
    match(pascalParser::OPEN_BRACKET);
    setState(133);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::String: {
        setState(131);
        match(pascalParser::String);
        break;
      }

      case pascalParser::ID:
      case pascalParser::NUMBER: {
        setState(132);
        expr();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(135);
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
    setState(137);
    match(pascalParser::T__11);
    setState(138);
    match(pascalParser::OPEN_BRACKET);
    setState(139);
    match(pascalParser::ID);
    setState(140);
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
    setState(142);
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
    setState(148);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(144);
      if_st();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(145);
      if_st();
      setState(146);
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
    setState(150);
    match(pascalParser::T__12);
    setState(151);
    guard();
    setState(152);
    match(pascalParser::T__13);
    setState(153);
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
    setState(155);
    match(pascalParser::T__14);
    setState(156);
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
    setState(158);
    match(pascalParser::T__15);
    setState(159);
    st_list();
    setState(160);
    match(pascalParser::T__16);
    setState(161);
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

pascalParser::Boolean_operatorsContext* pascalParser::GuardContext::boolean_operators() {
  return getRuleContext<pascalParser::Boolean_operatorsContext>(0);
}

pascalParser::ExprContext* pascalParser::GuardContext::expr() {
  return getRuleContext<pascalParser::ExprContext>(0);
}

tree::TerminalNode* pascalParser::GuardContext::OPEN_BRACKET() {
  return getToken(pascalParser::OPEN_BRACKET, 0);
}

pascalParser::GuardContext* pascalParser::GuardContext::guard() {
  return getRuleContext<pascalParser::GuardContext>(0);
}

tree::TerminalNode* pascalParser::GuardContext::CLOSE_BRACKET() {
  return getToken(pascalParser::CLOSE_BRACKET, 0);
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
    setState(177);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(163);
      relation();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(164);
      relation();
      setState(165);
      boolean_operators();
      setState(166);
      relation();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(168);
      match(pascalParser::T__17);
      setState(171);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
      case 1: {
        setState(169);
        relation();
        break;
      }

      case 2: {
        setState(170);
        expr();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(173);
      match(pascalParser::OPEN_BRACKET);
      setState(174);
      guard();
      setState(175);
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

//----------------- Boolean_operatorsContext ------------------------------------------------------------------

pascalParser::Boolean_operatorsContext::Boolean_operatorsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t pascalParser::Boolean_operatorsContext::getRuleIndex() const {
  return pascalParser::RuleBoolean_operators;
}

void pascalParser::Boolean_operatorsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolean_operators(this);
}

void pascalParser::Boolean_operatorsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolean_operators(this);
}

pascalParser::Boolean_operatorsContext* pascalParser::boolean_operators() {
  Boolean_operatorsContext *_localctx = _tracker.createInstance<Boolean_operatorsContext>(_ctx, getState());
  enterRule(_localctx, 36, pascalParser::RuleBoolean_operators);
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
    setState(179);
    _la = _input->LA(1);
    if (!(_la == pascalParser::T__18

    || _la == pascalParser::T__19)) {
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
  enterRule(_localctx, 38, pascalParser::RuleRelation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(209);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(181);
      operations(0);
      setState(182);
      match(pascalParser::LT);
      setState(183);
      operations(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(185);
      operations(0);
      setState(186);
      match(pascalParser::LEQ);
      setState(187);
      operations(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(189);
      operations(0);
      setState(190);
      match(pascalParser::EQ);
      setState(191);
      operations(0);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(193);
      operations(0);
      setState(194);
      match(pascalParser::NEQ);
      setState(195);
      operations(0);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(197);
      operations(0);
      setState(198);
      match(pascalParser::GEQ);
      setState(199);
      operations(0);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(201);
      operations(0);
      setState(202);
      match(pascalParser::GT);
      setState(203);
      operations(0);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(205);
      match(pascalParser::OPEN_BRACKET);
      setState(206);
      relation();
      setState(207);
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
  "else_st", "repeat", "guard", "boolean_operators", "relation"
};

std::vector<std::string> pascalParser::_literalNames = {
  "", "'program'", "';'", "'var'", "','", "':'", "'integer'", "'begin'", 
  "'end'", "'.'", "':='", "'writeln'", "'readln'", "'if'", "'then'", "'else'", 
  "'repeat'", "'until'", "'not'", "'or'", "'and'", "'+'", "'-'", "'*'", 
  "'/'", "'%'", "", "'='", "'<'", "'<='", "'>'", "'>='", "'<>'", "", "", 
  "'('", "')'"
};

std::vector<std::string> pascalParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "ADD", "SUB", "MUL", "DIV", "MOD", "String", "EQ", "LT", "LEQ", 
  "GT", "GEQ", "NEQ", "ID", "NUMBER", "OPEN_BRACKET", "CLOSE_BRACKET", "R_COMMENT", 
  "C_COMMENT", "LINE_COMMENT", "WS", "ErrorChar"
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
       0x3, 0x2b, 0xd6, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
       0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x37, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 
       0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x3f, 0xa, 0x4, 
       0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 
       0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x4b, 0xa, 0x6, 0x3, 
       0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
       0x5, 0x7, 0x54, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
       0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x5c, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 
       0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x62, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 
       0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
       0xb, 0x3, 0xb, 0x5, 0xb, 0x6e, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
       0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
       0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 
       0xb, 0x7f, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x82, 0xb, 0xb, 0x3, 0xc, 
       0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x88, 0xa, 0xc, 0x3, 0xc, 
       0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
       0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 
       0x97, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
       0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 
       0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0xae, 
       0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 
       0xb4, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 
       0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
       0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
       0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
       0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
       0x15, 0x3, 0x15, 0x5, 0x15, 0xd4, 0xa, 0x15, 0x3, 0x15, 0x2, 0x3, 
       0x14, 0x16, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 
       0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2, 
       0x4, 0x3, 0x2, 0x23, 0x24, 0x3, 0x2, 0x15, 0x16, 0x2, 0xde, 0x2, 
       0x2a, 0x3, 0x2, 0x2, 0x2, 0x4, 0x36, 0x3, 0x2, 0x2, 0x2, 0x6, 0x3e, 
       0x3, 0x2, 0x2, 0x2, 0x8, 0x40, 0x3, 0x2, 0x2, 0x2, 0xa, 0x4a, 0x3, 
       0x2, 0x2, 0x2, 0xc, 0x53, 0x3, 0x2, 0x2, 0x2, 0xe, 0x5b, 0x3, 0x2, 
       0x2, 0x2, 0x10, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x12, 0x63, 0x3, 0x2, 0x2, 
       0x2, 0x14, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x16, 0x83, 0x3, 0x2, 0x2, 0x2, 
       0x18, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x90, 0x3, 0x2, 0x2, 0x2, 0x1c, 
       0x96, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x98, 0x3, 0x2, 0x2, 0x2, 0x20, 0x9d, 
       0x3, 0x2, 0x2, 0x2, 0x22, 0xa0, 0x3, 0x2, 0x2, 0x2, 0x24, 0xb3, 0x3, 
       0x2, 0x2, 0x2, 0x26, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x28, 0xd3, 0x3, 0x2, 
       0x2, 0x2, 0x2a, 0x2b, 0x7, 0x3, 0x2, 0x2, 0x2b, 0x2c, 0x7, 0x23, 
       0x2, 0x2, 0x2c, 0x2d, 0x7, 0x4, 0x2, 0x2, 0x2d, 0x2e, 0x7, 0x5, 0x2, 
       0x2, 0x2e, 0x2f, 0x5, 0x4, 0x3, 0x2, 0x2f, 0x30, 0x5, 0x8, 0x5, 0x2, 
       0x30, 0x31, 0x7, 0x2, 0x2, 0x3, 0x31, 0x3, 0x3, 0x2, 0x2, 0x2, 0x32, 
       0x37, 0x5, 0x6, 0x4, 0x2, 0x33, 0x34, 0x5, 0x6, 0x4, 0x2, 0x34, 0x35, 
       0x5, 0x4, 0x3, 0x2, 0x35, 0x37, 0x3, 0x2, 0x2, 0x2, 0x36, 0x32, 0x3, 
       0x2, 0x2, 0x2, 0x36, 0x33, 0x3, 0x2, 0x2, 0x2, 0x37, 0x5, 0x3, 0x2, 
       0x2, 0x2, 0x38, 0x3f, 0x7, 0x23, 0x2, 0x2, 0x39, 0x3f, 0x7, 0x6, 
       0x2, 0x2, 0x3a, 0x3b, 0x7, 0x23, 0x2, 0x2, 0x3b, 0x3c, 0x7, 0x7, 
       0x2, 0x2, 0x3c, 0x3d, 0x7, 0x8, 0x2, 0x2, 0x3d, 0x3f, 0x7, 0x4, 0x2, 
       0x2, 0x3e, 0x38, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x39, 0x3, 0x2, 0x2, 0x2, 
       0x3e, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x7, 0x3, 0x2, 0x2, 0x2, 0x40, 
       0x41, 0x7, 0x9, 0x2, 0x2, 0x41, 0x42, 0x5, 0xc, 0x7, 0x2, 0x42, 0x43, 
       0x7, 0xa, 0x2, 0x2, 0x43, 0x44, 0x7, 0xb, 0x2, 0x2, 0x44, 0x9, 0x3, 
       0x2, 0x2, 0x2, 0x45, 0x4b, 0x5, 0xe, 0x8, 0x2, 0x46, 0x47, 0x7, 0x9, 
       0x2, 0x2, 0x47, 0x48, 0x5, 0xc, 0x7, 0x2, 0x48, 0x49, 0x7, 0xa, 0x2, 
       0x2, 0x49, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x45, 0x3, 0x2, 0x2, 0x2, 
       0x4a, 0x46, 0x3, 0x2, 0x2, 0x2, 0x4b, 0xb, 0x3, 0x2, 0x2, 0x2, 0x4c, 
       0x4d, 0x5, 0xe, 0x8, 0x2, 0x4d, 0x4e, 0x7, 0x4, 0x2, 0x2, 0x4e, 0x54, 
       0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 0x5, 0xe, 0x8, 0x2, 0x50, 0x51, 0x7, 
       0x4, 0x2, 0x2, 0x51, 0x52, 0x5, 0xc, 0x7, 0x2, 0x52, 0x54, 0x3, 0x2, 
       0x2, 0x2, 0x53, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x53, 0x4f, 0x3, 0x2, 0x2, 
       0x2, 0x54, 0xd, 0x3, 0x2, 0x2, 0x2, 0x55, 0x5c, 0x5, 0x10, 0x9, 0x2, 
       0x56, 0x5c, 0x5, 0x1c, 0xf, 0x2, 0x57, 0x5c, 0x5, 0x16, 0xc, 0x2, 
       0x58, 0x5c, 0x5, 0x18, 0xd, 0x2, 0x59, 0x5c, 0x5, 0x22, 0x12, 0x2, 
       0x5a, 0x5c, 0x5, 0x12, 0xa, 0x2, 0x5b, 0x55, 0x3, 0x2, 0x2, 0x2, 
       0x5b, 0x56, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x57, 0x3, 0x2, 0x2, 0x2, 0x5b, 
       0x58, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5a, 
       0x3, 0x2, 0x2, 0x2, 0x5c, 0xf, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 0x7, 
       0x23, 0x2, 0x2, 0x5e, 0x61, 0x7, 0xc, 0x2, 0x2, 0x5f, 0x62, 0x5, 
       0x1a, 0xe, 0x2, 0x60, 0x62, 0x5, 0x18, 0xd, 0x2, 0x61, 0x5f, 0x3, 
       0x2, 0x2, 0x2, 0x61, 0x60, 0x3, 0x2, 0x2, 0x2, 0x62, 0x11, 0x3, 0x2, 
       0x2, 0x2, 0x63, 0x64, 0x7, 0x23, 0x2, 0x2, 0x64, 0x65, 0x7, 0xc, 
       0x2, 0x2, 0x65, 0x66, 0x5, 0x14, 0xb, 0x2, 0x66, 0x13, 0x3, 0x2, 
       0x2, 0x2, 0x67, 0x68, 0x8, 0xb, 0x1, 0x2, 0x68, 0x6e, 0x5, 0x1a, 
       0xe, 0x2, 0x69, 0x6a, 0x7, 0x25, 0x2, 0x2, 0x6a, 0x6b, 0x5, 0x14, 
       0xb, 0x2, 0x6b, 0x6c, 0x7, 0x26, 0x2, 0x2, 0x6c, 0x6e, 0x3, 0x2, 
       0x2, 0x2, 0x6d, 0x67, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x69, 0x3, 0x2, 0x2, 
       0x2, 0x6e, 0x80, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 0xc, 0x8, 0x2, 0x2, 
       0x70, 0x71, 0x7, 0x17, 0x2, 0x2, 0x71, 0x7f, 0x5, 0x14, 0xb, 0x9, 
       0x72, 0x73, 0xc, 0x7, 0x2, 0x2, 0x73, 0x74, 0x7, 0x18, 0x2, 0x2, 
       0x74, 0x7f, 0x5, 0x14, 0xb, 0x8, 0x75, 0x76, 0xc, 0x6, 0x2, 0x2, 
       0x76, 0x77, 0x7, 0x19, 0x2, 0x2, 0x77, 0x7f, 0x5, 0x14, 0xb, 0x7, 
       0x78, 0x79, 0xc, 0x5, 0x2, 0x2, 0x79, 0x7a, 0x7, 0x1a, 0x2, 0x2, 
       0x7a, 0x7f, 0x5, 0x14, 0xb, 0x6, 0x7b, 0x7c, 0xc, 0x4, 0x2, 0x2, 
       0x7c, 0x7d, 0x7, 0x1b, 0x2, 0x2, 0x7d, 0x7f, 0x5, 0x14, 0xb, 0x5, 
       0x7e, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x72, 0x3, 0x2, 0x2, 0x2, 0x7e, 
       0x75, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x78, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7b, 
       0x3, 0x2, 0x2, 0x2, 0x7f, 0x82, 0x3, 0x2, 0x2, 0x2, 0x80, 0x7e, 0x3, 
       0x2, 0x2, 0x2, 0x80, 0x81, 0x3, 0x2, 0x2, 0x2, 0x81, 0x15, 0x3, 0x2, 
       0x2, 0x2, 0x82, 0x80, 0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 0x7, 0xd, 0x2, 
       0x2, 0x84, 0x87, 0x7, 0x25, 0x2, 0x2, 0x85, 0x88, 0x7, 0x1c, 0x2, 
       0x2, 0x86, 0x88, 0x5, 0x1a, 0xe, 0x2, 0x87, 0x85, 0x3, 0x2, 0x2, 
       0x2, 0x87, 0x86, 0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 0x3, 0x2, 0x2, 0x2, 
       0x89, 0x8a, 0x7, 0x26, 0x2, 0x2, 0x8a, 0x17, 0x3, 0x2, 0x2, 0x2, 
       0x8b, 0x8c, 0x7, 0xe, 0x2, 0x2, 0x8c, 0x8d, 0x7, 0x25, 0x2, 0x2, 
       0x8d, 0x8e, 0x7, 0x23, 0x2, 0x2, 0x8e, 0x8f, 0x7, 0x26, 0x2, 0x2, 
       0x8f, 0x19, 0x3, 0x2, 0x2, 0x2, 0x90, 0x91, 0x9, 0x2, 0x2, 0x2, 0x91, 
       0x1b, 0x3, 0x2, 0x2, 0x2, 0x92, 0x97, 0x5, 0x1e, 0x10, 0x2, 0x93, 
       0x94, 0x5, 0x1e, 0x10, 0x2, 0x94, 0x95, 0x5, 0x20, 0x11, 0x2, 0x95, 
       0x97, 0x3, 0x2, 0x2, 0x2, 0x96, 0x92, 0x3, 0x2, 0x2, 0x2, 0x96, 0x93, 
       0x3, 0x2, 0x2, 0x2, 0x97, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x7, 
       0xf, 0x2, 0x2, 0x99, 0x9a, 0x5, 0x24, 0x13, 0x2, 0x9a, 0x9b, 0x7, 
       0x10, 0x2, 0x2, 0x9b, 0x9c, 0x5, 0xa, 0x6, 0x2, 0x9c, 0x1f, 0x3, 
       0x2, 0x2, 0x2, 0x9d, 0x9e, 0x7, 0x11, 0x2, 0x2, 0x9e, 0x9f, 0x5, 
       0xa, 0x6, 0x2, 0x9f, 0x21, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x7, 0x12, 
       0x2, 0x2, 0xa1, 0xa2, 0x5, 0xc, 0x7, 0x2, 0xa2, 0xa3, 0x7, 0x13, 
       0x2, 0x2, 0xa3, 0xa4, 0x5, 0x24, 0x13, 0x2, 0xa4, 0x23, 0x3, 0x2, 
       0x2, 0x2, 0xa5, 0xb4, 0x5, 0x28, 0x15, 0x2, 0xa6, 0xa7, 0x5, 0x28, 
       0x15, 0x2, 0xa7, 0xa8, 0x5, 0x26, 0x14, 0x2, 0xa8, 0xa9, 0x5, 0x28, 
       0x15, 0x2, 0xa9, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xad, 0x7, 0x14, 
       0x2, 0x2, 0xab, 0xae, 0x5, 0x28, 0x15, 0x2, 0xac, 0xae, 0x5, 0x1a, 
       0xe, 0x2, 0xad, 0xab, 0x3, 0x2, 0x2, 0x2, 0xad, 0xac, 0x3, 0x2, 0x2, 
       0x2, 0xae, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 0x7, 0x25, 0x2, 
       0x2, 0xb0, 0xb1, 0x5, 0x24, 0x13, 0x2, 0xb1, 0xb2, 0x7, 0x26, 0x2, 
       0x2, 0xb2, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xa5, 0x3, 0x2, 0x2, 0x2, 
       0xb3, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xb3, 
       0xaf, 0x3, 0x2, 0x2, 0x2, 0xb4, 0x25, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb6, 
       0x9, 0x3, 0x2, 0x2, 0xb6, 0x27, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x5, 
       0x14, 0xb, 0x2, 0xb8, 0xb9, 0x7, 0x1e, 0x2, 0x2, 0xb9, 0xba, 0x5, 
       0x14, 0xb, 0x2, 0xba, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbc, 0x5, 
       0x14, 0xb, 0x2, 0xbc, 0xbd, 0x7, 0x1f, 0x2, 0x2, 0xbd, 0xbe, 0x5, 
       0x14, 0xb, 0x2, 0xbe, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc0, 0x5, 
       0x14, 0xb, 0x2, 0xc0, 0xc1, 0x7, 0x1d, 0x2, 0x2, 0xc1, 0xc2, 0x5, 
       0x14, 0xb, 0x2, 0xc2, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc4, 0x5, 
       0x14, 0xb, 0x2, 0xc4, 0xc5, 0x7, 0x22, 0x2, 0x2, 0xc5, 0xc6, 0x5, 
       0x14, 0xb, 0x2, 0xc6, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x5, 
       0x14, 0xb, 0x2, 0xc8, 0xc9, 0x7, 0x21, 0x2, 0x2, 0xc9, 0xca, 0x5, 
       0x14, 0xb, 0x2, 0xca, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xcc, 0x5, 
       0x14, 0xb, 0x2, 0xcc, 0xcd, 0x7, 0x20, 0x2, 0x2, 0xcd, 0xce, 0x5, 
       0x14, 0xb, 0x2, 0xce, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 0x7, 
       0x25, 0x2, 0x2, 0xd0, 0xd1, 0x5, 0x28, 0x15, 0x2, 0xd1, 0xd2, 0x7, 
       0x26, 0x2, 0x2, 0xd2, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xb7, 0x3, 
       0x2, 0x2, 0x2, 0xd3, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xbf, 0x3, 0x2, 
       0x2, 0x2, 0xd3, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xc7, 0x3, 0x2, 0x2, 
       0x2, 0xd3, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xcf, 0x3, 0x2, 0x2, 0x2, 
       0xd4, 0x29, 0x3, 0x2, 0x2, 0x2, 0x10, 0x36, 0x3e, 0x4a, 0x53, 0x5b, 
       0x61, 0x6d, 0x7e, 0x80, 0x87, 0x96, 0xad, 0xb3, 0xd3, 
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
