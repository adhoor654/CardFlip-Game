#ifndef PLAYER_H
#define PLAYER_H

#include "Betters.h"

using namespace std;

class Player {
  private:
    //Better *better;
    Bet bet;
    int score;
  public:
    explicit Player(int better_type);
    void placeBet(DeckIterator deckIt);
    void useBetCode(int betCode);
    bool resolveBet(Card card);
    int getScore();
};

#endif /* PLAYER_H */
