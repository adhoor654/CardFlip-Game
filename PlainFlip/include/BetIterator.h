#ifndef BETITERATOR_H
#define BETITERATOR_H

#include <vector>

#include "Iterator.h"

class BetIterator : public Iterator {
public:
    BetIterator(vector<Card> v) : vec(v), cursor(0) {}

    //Card  first()        { return vec[0]; }
    Card  current() { return vec[cursor]; }
    Card  next()    { return vec[++cursor]; }
    bool isDone()   { return (cursor >= vec.size()); }

private:
    vector<Card> vec;
    int cursor;
};

#endif /* BETITERATOR_H */
