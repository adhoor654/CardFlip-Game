#include <iostream>
#include <time.h>

#include "include/Card.h"
#include "include/Bet.h"
#include "include/Deck.h"
#include "include/Iterator.h"
#include "include/DeckIterator.h"

using namespace std;

void print(Iterator &it) {
    Card elmt = it.current();

    while (!it.isDone()) {
        cout << elmt.getID() << " ";
        elmt = it.next();
    }
}

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

    BetIterator betIt = collection.createIterator();
    cout << "we placed a bet on: ";
    print(betIt);
    cout << endl;

    Deck deck;
    deck.shuffle();
    deck.printCards();

    DeckIterator deckIt = deck.createIterator();
    cout << "these cards will be drawn: ";
    print(deckIt);

    cout << endl;


    return 0;
}
