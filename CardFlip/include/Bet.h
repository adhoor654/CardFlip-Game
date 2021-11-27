#ifndef BET_H
#define BET_H

#include <iostream>
#include <vector>
using namespace std;

#include "BetIterator.h"

class Bet {
private:
    vector<Card> cards;
    int payout;
    int betCode;

public:
    bool isEmpty() {
		return cards.empty();
	}

	void addSingleCard(int card_id) {
	    if (card_id<1 || card_id>24) return;
		Card temp(card_id);
		cards.push_back(temp);
	}

	void addCardRow(int row) {
	    if (row<1 || row>6) return;
	    for (int i=0; i<4; i++) {
            Card temp(row*4 - i);
            cards.push_back(temp);
	    }
	}

	void addCardCol(int col) {
        if (col<1 || col>4) return;
        for (int i=0; i<6; i++) {
            Card temp(4*i + col);
            cards.push_back(temp);
        }
	}

	void printCards() {
		cout << "betting on cards: ";
		for (int i=0; i<cards.size(); i++) {
			cout << cards[i].getID() << " ";
		}
		cout << endl;
	}

	void reset() {
	    betCode = 0;
	    while (!cards.empty()) {
            cards.pop_back();
        }
	}

	int getPayout() {
        return payout;
    }

    void setPayout(int num) {
        payout = num;
    }

    int getBetCode() {
        return betCode;
    }

    void setBetCode(int num) {
        betCode = num;
    }

	BetIterator createIterator() {
        BetIterator betIt(cards);
        return betIt;
	}
};

#endif // BET_H
