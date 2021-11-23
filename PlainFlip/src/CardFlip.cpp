#include "CardFlip.h"

#include <time.h>
#include <utility>

/* private variables (for temporary reference):
    Player user;
    Player computer;
    Deck deck;
    DeckIterator *deckIt; //do we need this?
    int round; */

CardFlip::CardFlip(int difficulty) {
    Player user;
    Player computer(difficulty);
    Deck deck;
    deck.shuffle();
    deckIt = deck.createIterator();
    round = 1;
    reset(difficulty);
}

void CardFlip::reset(int difficulty) {
    srand(time(NULL));
    Player computer(difficulty);
    deck.shuffle();
    deckIt = deck.createIterator();
    round = 1;

    deck.printCards();
}

int CardFlip::getRound() {
    return round;
}

bool CardFlip::playRound(int betCode) {
    user.useBetCode(betCode);
    cout << "Player is ";
    user.printBet();

    computer.placeBet(deck.createIterator());
    cout << "Computer is ";
    computer.printBet();

    Card drawnCard = deckIt.current();

    bool playerWon = user.resolveBet(drawnCard);
    computer.resolveBet(drawnCard);

    deckIt.next();
    round++;

    return playerWon;
}

pair<int, int> CardFlip::getScores() {
    pair<int,int> scores(user.getScore(), computer.getScore());
    return scores;
}

Card CardFlip::getCard() {
    return deckIt.current();
}
