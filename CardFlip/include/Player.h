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
    void resetScore();
    int getScore();
    int getPayout();
    int getBetCode();
    void printBet();
};

#endif /* PLAYER_H */
