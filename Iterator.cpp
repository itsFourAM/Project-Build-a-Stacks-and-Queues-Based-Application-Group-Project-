//Iterator.cpp
#include "Iterator.h"
#include <stdexcept>

Iterator::Iterator(Node* start) : current(start) {}

bool Iterator::hasNext() const {
    return current != nullptr;
}

Patient Iterator::next() {
    if (!current) {
        throw std::out_of_range("No more elements.");
    }
    Patient value = current->data;
    current = current->next;
    return value;
}