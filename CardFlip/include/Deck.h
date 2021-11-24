#ifndef DECK_H
#define DECK_H

#include <iostream>
#include <stdlib.h>
using namespace std;

#include "DeckIterator.h"

class Deck {
private:
	Card cards[24];

public:
	Deck() {
        for (int i=0; i<24; i++) {
            cards[i].setID(i+1);
        }
	}

	void shuffle() {
	    for(int i=0; i<24; i++) {
            int n = rand() % 23;
            int temp_id = cards[i].getID();
            cards[i].setID(cards[n].getID());
            cards[n].setID(temp_id);
	    }
	}

	void printCards() {
		cout << "The deck contains cards: ";
		for(int i=0; i<12; i++) {
			cout << cards[i].getID() << " ";
		}
		cout << "| ";
		for(int i=12; i<24; i++) {
			cout << cards[i].getID() << " ";
		}
		cout << endl;
	}

	bool isRowFull(int row) {
        for(int i=0; i<3; i++) {
            if(cards[row*4 - i].hasBeenDrawn())
                return false;
        }
        return true;
    }

	DeckIterator createIterator() {
        DeckIterator deckIt(cards);
        return deckIt;
	}
};

#endif // DECK_H
