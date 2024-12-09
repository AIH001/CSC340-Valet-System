// Made by William Wong 12/6/24

#ifndef NODE_H
#define NODE_H
#include "Employee.h"
class Node {
public:
    Employee data;        // Data stored in the node
    Node* next;      // Pointer to the next node
    Node* prev;
    Node(Employee value); // Constructor
};

#endif // NODE_H
