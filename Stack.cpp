//Stack.cpp
#include "Stack.h"

void Stack::push(const Patient& p) {
    Node* newNode = new Node(p);
    newNode->next = head;
    head = newNode;

    if (!tail) {
        tail = newNode;
    }
    ++count;
}

bool Stack::pop(Patient& out) {
    if (!head) {
        return false;
    }
    Node* temp = head;
    out = temp->data;

    head = head->next;
    delete temp;
    --count;

    if (!head) {
        tail = nullptr;
    }
    return true;
}

void Stack::display() const {
    std::cout << "Stack (Top to Bottom):\n";
    Iterator it = iterator();
    while (it.hasNext()) {
        std::cout << "  " << it.next() << "\n";
    }
    if (isEmpty()) std::cout << "  <empty>\n";
}