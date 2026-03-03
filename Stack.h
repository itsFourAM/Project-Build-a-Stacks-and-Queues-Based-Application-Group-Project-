//Stack.h
#ifndef STACK_H
#define STACK_H

#include "LinkedList.h"

class Stack : public LinkedList {
public:
    void push(const Patient& p);
    bool pop(Patient& out);   // returns false if empty

    void display() const override;
};

#endif