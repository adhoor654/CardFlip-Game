#ifndef CARDFLIP_H
#define CARDFLIP_H

#include "Player.h"

class CardFlip {
    private:
        Player user;
        Player computer;
        Deck deck;
        DeckIterator deckIt;
        int round; //each game is 12 rounds
    public:
        CardFlip(int difficulty);
        void reset(int difficulty); //resets all vars to create a fresh game with the given difficulty
        pair<bool,bool> playRound(int betCode); //conducts one round of the game
            //param:betCode is passed in to set the player's bet
            //return:bools showing if the user and/or computer won this round, respectively

        int getRound(); //returns the current round #
        Card getCard(); //returns the currently drawn card
        pair<int, int> getScores(); //returns user & computer scores, respectively
        pair<int, int> getCPUBetInfo(); //returns computer's betCode and payout
};

#endif // CARDFLIP_H
