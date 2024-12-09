// created by william wong 12/6/24

#include "Guest.h"
#include <iostream>

using namespace std;

// Default constructor
Guest::Guest() {
    ticketNum = 0;
    name = "Guest";
    isVIP = false;
}

Guest::Guest(string guestName) {
    ticketNum = 0;
    name = guestName;
    isVIP = false;
    cout << "Guest created with name: " << name << endl;
}

Guest::Guest(int ticketNumber, string guestName) {
    ticketNum = ticketNumber;
    name = guestName;
    isVIP = false;
    cout << "Guest created with ticket number: " << ticketNum 
         << " and name: " << name << endl;
}

int Guest::requestCar() {
    cout << name << " is retrieving their car with ticket number: " << ticketNum << endl;
    return this->ticketNum;
}

void Guest::getStatus() {
    cout << name << " is checking the status of their car." << endl;
}

void Guest::print() {
    std::cout << "Guest Name: " << this->name << std::endl;
    std::cout << "Ticket Number: " << this->ticketNum << std::endl;
    std::cout << "VIP Status: " << this->isVIP << std::endl;
}

void Guest::setName(std::string name) {
    this->name = name;
}

void Guest::setVIP(bool vip) {
    this->isVIP = vip;
}




