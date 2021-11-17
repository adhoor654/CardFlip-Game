#include <iostream>
#include <time.h>

#include "include/Card.h"
#include "include/Bet.h"
#include "include/Deck.h"

using namespace std;

int main() {
    //srand(time(NULL));

    Card ace(1);
    //cout << "Hello world! " << ace.getID() << endl;

    Bet collection;
    // test for addSingleCard()
    collection.addSingleCard(3);
    collection.addSingleCard(7);
    collection.addSingleCard(23);
    collection.addSingleCard(12);
        //expected result: 3 7 23 12
    collection.printCards();

    /* test for addCardRow()
    collection.addCardRow(1);
    collection.addCardRow(3);
    collection.addCardRow(5);
        //expected result: 4 3 2 1 12 11 10 9 20 19 18 17
    collection.printCards(); */

    /* test for addCardCol()
    collection.addCardCol(1);
    collection.addCardCol(3);
        //expected result: 1 5 9 13 17 21 3 7 11 15 19 23
    collection.printCards(); */

    Deck deck;
    deck.shuffle();
    deck.printCards();

    return 0;
}
