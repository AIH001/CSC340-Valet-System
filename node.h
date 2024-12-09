// Made by William Wong 12/6/24

#ifndef NODE_H
#define NODE_H
#include "Valet.h"
class Node {
public:
    Valet data;        // Data stored in the node
    Node* next;      // Pointer to the next node
    Node(Valet value); // Constructor
};

#endif // NODE_H
