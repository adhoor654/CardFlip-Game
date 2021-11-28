#include "../include/CardFlip.h"

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
    Player computer;
    Deck deck;
    deck.shuffle();
    deckIt = deck.createIterator();
    round = 1;
    reset(difficulty);
}

void CardFlip::reset(int difficulty) {
    user.resetScore();
    computer.resetScore();
    srand(time(NULL));
    computer.setBetterType(difficulty);
    deck.shuffle();
    deckIt = deck.createIterator();
    round = 1;

    deck.printCards();
}

int CardFlip::getRound() {
    return round;
}

//since playRound increments the round count and draws a card
//you need to get the round and the card before calling playRound
//or else the deckIterator will go out of bounds after the last round
pair<bool,bool> CardFlip::playRound(int betCode) {
    user.useBetCode(betCode);
    //cout << "Player is ";
    //user.printBet();

    computer.placeBet(deck.createIterator(), round-1);
    //cout << "Computer is ";
    //computer.printBet();

    Card drawnCard = deckIt.current();

    pair<bool,bool> winStatus;
    winStatus.first = user.resolveBet(drawnCard);
    winStatus.second = computer.resolveBet(drawnCard);

    deckIt.next();
    round++;

    return winStatus;
}

pair<int, int> CardFlip::getScores() {
    pair<int,int> scores(user.getScore(), computer.getScore());
    return scores;
}

Card CardFlip::getCard() {
    return deckIt.current();
}

pair<int, int> CardFlip::getCPUBetInfo() {
    pair<int,int> info(computer.getBetCode(), computer.getPayout());
    return info;
}
