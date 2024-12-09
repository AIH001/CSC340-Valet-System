// Made by William Wong 12/6/24
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
#include <iostream>

class LinkedList {
private:
    Node* head;      // Pointer to the first node
    Node* tail;      // Pointer to the last node

public:
    LinkedList();    // Constructor
    ~LinkedList();   // Destructor

    void append(Employee value);  // Add a node to the end
    void display() const;    // Print the linked list
};

#endif // LINKEDLIST_H
