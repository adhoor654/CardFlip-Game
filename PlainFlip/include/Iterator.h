#ifndef ITERATOR_H
#define ITERATOR_H

class Iterator {
public:
    Iterator() {}
    virtual ~Iterator() {}

    //virtual int  first() = 0;
    virtual Card  current() = 0;
    virtual Card  next()  = 0;
    virtual bool isDone() = 0;
};

#endif // ITERATOR_H
