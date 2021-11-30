#ifndef ITERATOR_H
#define ITERATOR_H

#include "Card.h"

class Iterator {
public:
    Iterator() {}
    virtual ~Iterator() {}

    virtual Card  current() = 0;
    virtual Card  next()  = 0;
    virtual bool isDone() = 0;
};

#endif // ITERATOR_H
