#include "Player.h"

//private variables (for temporary reference):
    //Better *better
    //Bet bet
    //int score
Player::Player() {
    score = 0;
}

void Player::setBetterType(int better_type) {
    switch(better_type) {
        case 2:
            better = new CleverBetter;
            break;
        case 1:
            better = new SimpleBetter;
            break;
    }
}

void Player::placeBet(DeckIterator deckIt, int roundMinusOne) {
    bet = better->placeBet(deckIt, roundMinusOne);
}

//Note: if your betCode is invalid, your Bet will be empty
void Player::useBetCode(int betCode) {
    bet.reset(); //make sure the bet is empty
    bet.setBetCode(betCode);
    if (1 <= betCode && betCode <= 24) {
        bet.addSingleCard(betCode); //add the card numbered 1 - 24
        bet.setPayout(24);
    }
    else if (25 <= betCode && betCode <=30) {
        bet.addCardRow(betCode-24); //add the card row numbered 1 - 6
        bet.setPayout(6);
    }
    else if (31 <= betCode && betCode <=34) {
        bet.addCardCol(betCode-30); //add the card column numbered 1 - 4
        bet.setPayout(4);
    }
    else if (betCode == 35) {
        bet.addCardRow(1); //add card rows 1 and 2
        bet.addCardRow(2);
        bet.setPayout(3);
    }
    else if (betCode == 36) {
        bet.addCardRow(3); //add card rows 3 and 4
        bet.addCardRow(4);
        bet.setPayout(3);
    }
    else if (betCode == 37) {
        bet.addCardRow(5); //add card rows 5 and 6
        bet.addCardRow(6);
        bet.setPayout(3);
    }
    else if (betCode == 38) {
        bet.addCardCol(1); //add card columns 1 and 2
        bet.addCardCol(2);
        bet.setPayout(2);
    }
    else if (betCode == 39) {
        bet.addCardCol(3); //add card columns 3 and 4
        bet.addCardCol(4);
        bet.setPayout(2);
    }
}

bool Player::resolveBet(Card card) {
    BetIterator betIt = bet.createIterator();
    Card betCard = betIt.current();

    while (!betIt.isDone()) {
        if(card.matches(betCard)) { //the drawn card matches one of the bet cards
            //which means the bet was correct
            score += bet.getPayout();
            return true;
        }
        betCard = betIt.next();
    }
    //otherwise....
    return false;
}

int Player::getScore() {
	return score;
}

int Player::getPayout() {
    return bet.getPayout();
}

int Player::getBetCode() {
    return bet.getBetCode();
}

void Player::printBet() {
    bet.printCards();
    cout << "(Bet code " << bet.getBetCode() << ")" << endl;
}
