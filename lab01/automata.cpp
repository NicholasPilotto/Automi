#include "automata.h"

#include <iostream>

using namespace std;

state::state(tpair id, bool initial, bool final, bool sink, bool current) : __id(id), __initial(initial), __final(final), __sink(sink), __current(current) {}

tpair state::get_id() const { return __id; }

bool state::is_initial() const { return __initial; }

bool state::is_final() const { return __final; }

bool state::is_sink() const { return __sink; }

bool state::is_current() const { return __current; }

void state::set_id(int number, char element) {
  __id.first = number;
  __id.second = element;
}

void state::set_initial() {
  __initial = !__initial;
}

void state::set_final() {
  __final = !__final;
}

void state::set_sink() {
  __sink = !__sink;
}

void state::set_current() {
  __current = !__current;
}

/**
 * Constructor for Abstract DFA.
 * 
 * @param noStates
 *            Number of states in the DFA.
 */
AbstractDFA::AbstractDFA(int noStates) : states(noStates), step(0) {
  // TODO: initialize data structures
  states[0].set_initial();
  states[noStates - 2].set_final();
  states[noStates - 1].set_sink();
}

/**
 * Reset the automaton to the initial state.
 */
void AbstractDFA::reset() {
  // TODO: reset automaton to initial state
  step = 0;
}

/**
 * Performs one step of the DFA for a given letter. If there is a transition
 * for the given letter, then the automaton proceeds to the successor state.
 * Otherwise it goes to the sink state. By construction it will stay in the
 * sink for every input letter.
 * 
 * @param letter
 *            The current input.
 */
void AbstractDFA::doStep(char letter) {
  // TODO: do step by going to the next state according to the current state and the read letter.
  if (step < states.size()) {
    states[step].set_id(step, letter);
    step++;
  }
}

/**
 * Check if the automaton is currently accepting.
 * 
 * @return True, if the automaton is currently in the accepting state.
 */
bool AbstractDFA::isAccepting() {
  // TODO: return if the current state is accepting
  return states[step].is_final();
}

/**
 * Run the DFA on the input.
 * 
 * @param inputWord
 *            stream that contains the input word
 * @return True, if if the word is accepted by this automaton
 */
bool AbstractDFA::run(const string &inputWord) {
  this->reset();
  for (int i = 0; i < inputWord.length(); i++) {
    doStep(inputWord[i]);
  }
  return isAccepting();
}

/**
 * Construct a new DFA that recognizes exactly the given word. Given a word
 * "foo" the constructed automaton looks like: -> () -f-> () -o-> () -o-> []
 * from every state (including the final one) every other input letter leads
 * to a distinguished sink state in which the automaton then remains
 * 
 * @param word
 *            A String that the automaton should recognize
 */
WordDFA::WordDFA(const string &word) : AbstractDFA(word.size() + 2) {
  // TODO: fill in correct number of states
  for (string::const_iterator it = word.begin(); it != word.end(); it++) {
    doStep(*it);
  }

  // TODO: build DFA recognizing the given word
}

/**
 * Construct a new DFA that recognizes comments within source code. There
 * are three kinds of comments: single line comment that starts with // and ends
 * with a newline, multiline comments that starts with (* and ends with *), and
 * multiline comments that starts with { and ends with }
 */
CommentDFA::CommentDFA() : AbstractDFA(0) {
  // TODO: fill in correct number of states
  // TODO: build DFA recognizing comments
}

/**
 * Performs one step of the DFA for a given letter. This method works
 * differently than in the superclass AbstractDFA.
 * 
 * @param letter
 *            The current input.
 */
void CommentDFA::doStep(char letter) {
  // TODO: implement accordingly
}
