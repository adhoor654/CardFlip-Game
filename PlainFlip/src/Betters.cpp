#include <algorithm>
#include <stdlib.h>

#include "Betters.h"

//will create and return a Bet containing either:
//two columns, two rows, or one column
Bet SimpleBetter::placeBet(DeckIterator deckIt, int n) {
    Bet bet;
    int betType = rand() % 3;
    if (betType == 0) { //we'll choose two columns
        bet.setPayout(2);
        betType = rand() % 2; //gives [0,1]
        bet.setBetCode(38+betType); //betCode [38,39]

        bet.addCardCol(2*betType+1);   //add column 1/3
        bet.addCardCol(2*(betType+1)); //add column 2/4
    }
    else if(betType == 1) { //we'll choose two rows
        bet.setPayout(3);
        betType = rand() % 3; //gives [0,2]
        bet.setBetCode(35+betType); //betCode [35,37]

        bet.addCardRow(2*betType+1);   //add row 1/3/5
        bet.addCardRow(2*(betType+1)); //add row 2/4/6
    }
    else { //we'll choose one column
        bet.setPayout(4);
        betType = rand() % 3 + 1; //gives [1,4]
        bet.setBetCode(30+betType); //betCode [31,34]

        bet.addCardCol(betType); //add column 1/2/3/4
    }
    return bet;
}

//will create and return a Bet containing either:
//one column, one row, or one card
//will try to make a selection which has not had cards drawn from it
Bet CleverBetter::placeBet(DeckIterator deckIt, int n) {
    Bet bet;
    int betType = rand() % 3;

    if(betType == 0) { //we'll choose a column
        bet.setPayout(4);

        vector<int> choices;
        for (int x=1; x<5; x++) {
            choices.push_back(x);
        }
        random_shuffle(choices.begin(), choices.end());

        for(int k = 0; k<4; k++) { //iterate through possible columns for the bet
            int col = choices[k];

            bet.reset(); //empty the bet to add a new column of cards (this can't go at the end or it will mess up the default bet)
            bet.addCardCol(col);

            Card usedCard = deckIt.current();
            bool betHasAHole = false;

            for(int i=0; i<n; i++) { //iterate through the used cards
                BetIterator betIt = bet.createIterator();
                Card betCard = betIt.current();

                while (!betIt.isDone()) { //check if any of the bet cards match the used card
                    if(usedCard.matches(betCard)) {
                        betHasAHole = true;
                    }
                    betCard = betIt.next();
                }

                usedCard = deckIt.next();
            }

            if (!betHasAHole) { //we've found a column that doesn't have any used cards
                return bet;
            }
            //otherwise, we want to try the next column, so...
            deckIt.reset(); //we'll need to iterate through the used cards again
        }
        //if all the columns have a hole in them? just use the last bet picked (effectively random)
        return bet;
    }
    else if(betType == 1) { //we'll choose a row
        bet.setPayout(6);

        vector<int> choices;
        for (int x=1; x<7; x++) {
            choices.push_back(x);
        }
        random_shuffle(choices.begin(), choices.end());

        for(int k = 0; k<6; k++) { //iterate through possible rows for the bet
            int row = choices[k];

            bet.reset(); //empty the bet to add a new row of cards (this can't go at the end or it will mess up the default bet)
            bet.addCardRow(row);

            Card usedCard = deckIt.current();
            bool betHasAHole = false;

            for(int i=0; i<n; i++) { //iterate through the used cards
                BetIterator betIt = bet.createIterator();
                Card betCard = betIt.current();

                while (!betIt.isDone()) { //check if any of the bet cards match the used card
                    if(usedCard.matches(betCard)) {
                        betHasAHole = true;
                    }
                    betCard = betIt.next();
                }

                usedCard = deckIt.next();
            }

            if (!betHasAHole) { //we've found a row that doesn't have any used cards
                return bet;
            }
            //otherwise, we want to try the next row, so...
            deckIt.reset(); //we'll need to iterate through the used cards again
        }
        //if all the rows have a hole in them? just use the last bet picked (effectively random)
        return bet;
    }
    else if (betType == 2) { //we'll choose a single card
        bet.setPayout(24);

        vector<int> choices;
        for (int x=1; x<25; x++) {
            choices.push_back(x);
        }
        random_shuffle(choices.begin(), choices.end());

        for(int k = 0; k<24; k++) { //iterate through possible cards for the bet
            int id = choices[k];

            bet.reset(); //empty the bet to add a new card (this can't go at the end or it will mess up the default bet)
            bet.addSingleCard(id);

            Card usedCard = deckIt.current();
            bool betHasAHole = false;

            for(int i=0; i<n; i++) { //iterate through the used cards
                BetIterator betIt = bet.createIterator();
                Card betCard = betIt.current();

                //check if any of used cards match the bet card
                if(usedCard.matches(betCard)) {
                    betHasAHole = true;
                }
                usedCard = deckIt.next();
            }

            if (!betHasAHole) { //we've found a card that hasn't been used
                return bet;
            }
            //otherwise, we want to try the next card, so...
            deckIt.reset(); //we'll need to iterate through the used cards again
        }
        //it's not possible for all single cards to be used, so ideally we should never reach this spot in the code
        return bet;
    }
    return bet;
}
