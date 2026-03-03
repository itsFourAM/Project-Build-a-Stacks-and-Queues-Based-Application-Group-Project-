//LinkedList.cpp
#include "LinkedList.h"

LinkedList::LinkedList() : head(nullptr), tail(nullptr), count(0) {}

LinkedList::~LinkedList() {
    clear();
}

void LinkedList::clear() {
    Node* cur = head;
    while (cur) {
        Node* next = cur->next;
        delete cur;
        cur = next;
    }
    head = tail = nullptr;
    count = 0;
}

bool LinkedList::isEmpty() const {
    return head == nullptr;
}

std::size_t LinkedList::size() const {
    return count;
}

Iterator LinkedList::iterator() const {
    return Iterator(head);
}