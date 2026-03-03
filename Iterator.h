//Iterator.h
#ifndef ITERATOR_H
#define ITERATOR_H

#include "Nodes.h"

class Iterator {
private:
    Node* current;

public:
    Iterator(Node* start);

    bool hasNext() const;
    Patient next();     // returns current data and advances
};

#endif