#ifndef BETTERS_H
#define BETTERS_H

#include "Bet.h"
#include "DeckIterator.h"

class Better {
	public:
		virtual Bet placeBet(DeckIterator deckIt);
};

class SimpleBetter : public Better {
	public:
		Bet placeBet(DeckIterator deckIt);
};

class CleverBetter : public Better {
	public:
		Bet placeBet(DeckIterator deckIt);
};

#endif //BETTERS_H
