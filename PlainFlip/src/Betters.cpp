#include <stdlib.h>

#include "Betters.h"

//will create and return a Bet containing either:
//two columns, two rows, or one column
Bet SimpleBetter::placeBet(DeckIterator deckIt) {
    Bet bet;
    int betType = rand() % 3;
    if (betType == 0) { //we'll choose two columns
        betType = rand() % 2; //gives [0,1]

        bet.addCardCol(2*betType+1);   //add column 1/3
        bet.addCardCol(2*(betType+1)); //add column 2/4
    }
    else if(betType == 1) { //we'll choose two rows
        betType = rand() % 3; //gives [0,2]

        bet.addCardRow(2*betType+1);   //add row 1/3/5
        bet.addCardRow(2*(betType+1)); //add row 2/4/6
    }
    else { //we'll choose one column
        betType = rand() % 5 + 1; //gives [1,6]

        bet.addCardCol(betType); //add column 1/2/3/4/5/6
    }
}

//will create and return a Bet containing either:
//one column, one row, or one card
//will try to make a selection which has not had cards drawn from it
Bet CleverBetter::placeBet(DeckIterator deckIt) {
    //TODO
}
