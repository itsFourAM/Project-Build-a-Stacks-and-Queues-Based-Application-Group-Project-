//Queue.cpp
#include "Queue.h"
#include <iostream>

void Queue::enqueue(const Patient& p) {
    Node* newNode = new Node(p);

    if (!tail) {          // empty
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
    ++count;
}

bool Queue::dequeue(Patient& out) {
    if (!head) return false;

    Node* temp = head;
    out = temp->data;

    head = head->next;
    delete temp;
    --count;

    if (!head) tail = nullptr; // became empty
    return true;
}

void Queue::display() const {
    std::cout << "Queue (Front to Back):\n";
    Iterator it = iterator();
    while (it.hasNext()) {
        std::cout << "  " << it.next() << "\n";
    }
    if (isEmpty()) std::cout << "  <empty>\n";
}