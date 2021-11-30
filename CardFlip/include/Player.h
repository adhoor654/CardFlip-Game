#ifndef PLAYER_H
#define PLAYER_H

#include "Betters.h"

using namespace std;

class Player {
  private:
    Better *better;
    Bet bet;
    int score;
  public:
    Player();
    void setBetterType(int better_type); //sets what type of better would be used in placeBet()
    void placeBet(DeckIterator deckIt, int roundMinusOne); //randomly selects a bet and updates the bet var
        //param: deckIt of the current deck, roundMinusOne - used to figure out which cards in the deck have already been drawn
    void useBetCode(int betCode); //uses the betCode to create a specific bet and updates the bet var

    bool resolveBet(Card card); //sees if the bet was correct (contains card) or not & updates the score

    void resetScore(); //resets score to 0
    int getScore();
    int getPayout();
    int getBetCode();

    void printBet(); //debugging print fcn
};

#endif /* PLAYER_H */
