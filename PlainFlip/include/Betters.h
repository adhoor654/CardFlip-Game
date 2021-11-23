#ifndef BETTERS_H
#define BETTERS_H

#include "Bet.h"
#include "Deck.h"

class Better {
	public:
		virtual Bet placeBet(DeckIterator deckIt, int n);
};

class SimpleBetter : public Better {
	public:
		Bet placeBet(DeckIterator deckIt, int n);
};

class CleverBetter : public Better {
	public:
		Bet placeBet(DeckIterator deckIt, int n);
};

#endif //BETTERS_H
