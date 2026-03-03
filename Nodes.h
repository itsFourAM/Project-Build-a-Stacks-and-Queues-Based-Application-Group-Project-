//Nodes.h
#ifndef NODES_H
#define NODES_H

#include "Patient.h"

class Node {
public:
    Patient data;
    Node* next;

    Node(const Patient& p);
};

#endif