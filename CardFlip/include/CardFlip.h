#ifndef CARDFLIP_H
#define CARDFLIP_H

#include "Player.h"

class CardFlip {
    private:
        Player user;
        Player computer;
        Deck deck;
        DeckIterator deckIt;
        int round;
    public:
        CardFlip(int difficulty);
        void reset(int difficulty);
        int getRound();
        bool playRound(int betCode);
        pair<int, int> getScores();
        Card getCard();
        pair<int, int> getCPUBetInfo(); //returns betCode and payout
};

#endif // CARDFLIP_H
