//LinkedList.h
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Nodes.h"
#include "Iterator.h"
#include <cstddef>
#include <iostream>

class LinkedList {
protected:
    Node* head;
    Node* tail;
    std::size_t count;

    void clear();

public:
    LinkedList();
    virtual ~LinkedList();

    // prevent shallow copying (linked structure)
    LinkedList(const LinkedList&) = delete;
    LinkedList& operator=(const LinkedList&) = delete;

    bool isEmpty() const;
    std::size_t size() const;

    Iterator iterator() const;     // iterator starting at head

    virtual void display() const = 0; // pure virtual display
};

#endif