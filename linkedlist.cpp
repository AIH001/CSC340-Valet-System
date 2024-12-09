// Made by William Wong 12/6/24
#include "LinkedList.h"

LinkedList::LinkedList() {
    head = nullptr;
    tail = nullptr;
}

LinkedList::~LinkedList() {
    Node* current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
}

void LinkedList::append(Valet value) {
    Node* newNode = new Node(value);
    if (head == nullptr) {
        head = newNode; // If the list is empty, set head and tail to the new node
        tail = newNode;
    } else {
        tail->next = newNode; // Append the new node at the tail
        tail = newNode;       // Update the tail pointer
    }
}

void LinkedList::display() const {
    Node* curr = head;
    while (curr != nullptr) {
        std::cout << curr->data << " -> ";
        curr = curr->next;
    }
}

Valet *LinkedList::getNext() {
    if (!head) {
        return nullptr; // No valets in the list
    }

    if (!current) {
        current = head; // Start from the head if current is not set
    } else {
        current = current->next; // Move to the next valet
        if (!current) {
            current = head; // Loop back to the head if at the end
        }
    }
    return &current->data; // Return a pointer to the valet object
}
