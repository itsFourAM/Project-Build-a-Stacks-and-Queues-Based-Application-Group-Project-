//Queue.h
#ifndef QUEUE_H
#define QUEUE_H

#include "LinkedList.h"

class Queue : public LinkedList {
public:
    void enqueue(const Patient& p);
    bool dequeue(Patient& out);   // returns false if empty

    void display() const override;
};

#endif
