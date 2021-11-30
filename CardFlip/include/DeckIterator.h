#ifndef DECKITERATOR_H
#define DECKITERATOR_H

#include "Iterator.h"

class DeckIterator : public Iterator {
public:
    DeckIterator() {}
    DeckIterator(Card arr[])
        : array(arr), cursor(0) {}

    Card  current() { return array[cursor]; }
    Card  next()    { return array[++cursor]; }
    bool  isDone()  { return (cursor >= 12); }
    void  reset()   { cursor = 0; }

private:
    Card *array;
    int cursor;
};

#endif /* DECKITERATOR_H */
