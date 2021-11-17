#ifndef DECKITERATOR_H_
#define DECKITERATOR_H_

#include "Iterator.h"

class DeckIterator : public Iterator {
public:
    DeckIterator(Card arr[])
        : array(arr), cursor(0) {}

    //Card  first()        { return array[0]; }
    Card  current() { return array[cursor]; }
    Card  next()    { return array[++cursor]; }
    bool  isDone()  { return cursor >= 12; }

private:
    Card *array;
    int cursor;
};

#endif /* DECKITERATOR_H_ */
