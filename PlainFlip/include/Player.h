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
    void setBetterType(int better_type);
    void placeBet(DeckIterator deckIt, int roundMinusOne);
    void useBetCode(int betCode);
    bool resolveBet(Card card);
    int getScore();
    int getPayout();
    void printBet();
};

#endif /* PLAYER_H */
