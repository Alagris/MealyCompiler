#ifndef AUTOMATON_H
#define AUTOMATON_H

#define BASIC_STATE_ARRAY_SIZE 255
#define BASIC_TRANSITION_ARRAY_SIZE 255
#define NUMBER_OF_STATE_ARRAYS 20
#define r long long unsigned int
#define r_max 18446744073709551615
#define r_min 0
#define r_epsilon r_max
#define r_no_state r_max
/*This is used for booleans*/
// #define b unsigned char
#define bt unsigned char

#include <stdlib.h>

// typedef struct Transition {
// 	r destinationState;
// 	r inputLabelRangeBeginInclusive;
// 	r inputLabelRangeEndExclusive;
//     bt weight;
//     char * output;
// } Transition;

// typedef struct State {
//     Transition * transitions;
// } State;

// typedef struct Mealy {
//     State * states[NUMBER_OF_STATE_ARRAYS];
//     r initialState;
//     r stateCount;
// 	bt * acceptingStates;
// } Mealy;

// State * calcStateOffset(r state);
// State * calcOffsetAndExtend(r state);
// int addState(Mealy * mealy);
// int addTransition(Mealy * mealy, r state, bt Transition,
//                   r destinationState, r inputLabelRangeBeginInclusive,
//                   r inputLabelRangeEndExclusive, bt weight, char * output);

#endif