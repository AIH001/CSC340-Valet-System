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

void LinkedList::append(Employee value) {
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
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "nullptr" << std::endl;
}
