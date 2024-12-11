// created by william wong 12/6/24

#include "Ticket.h"
#include <iostream>

using namespace std;

Ticket::Ticket() {
    ticketNum = 0;
    price = 0.0;
    carDetails = Car("", "", "", "");
    guestDetails = Guest();

}

Ticket::Ticket(int ticketNum) {
    this->ticketNum = ticketNum;
    price = 0.0;
    carDetails = Car("", "", "", "");
    guestDetails = Guest(ticketNum, "Default Guest");
}

int Ticket::getTicketNum() const {
    return ticketNum;
}

void Ticket::setCarDetails(std::string make, std::string model, std::string color, std::string licensePlate) {
    cout << "Setting car details for ticket number: " << ticketNum << endl;

    carDetails.setMake(make);
    carDetails.setModel(model);
    carDetails.setColor(color);
    carDetails.setPlate(licensePlate);

    cout << "Car details set to: " 
         << carDetails.getMake() << " "
         << carDetails.getModel() << " (" 
         << carDetails.getColor() << "), License Plate: " 
         << carDetails.getLicensePlate() << endl;

    guestDetails = Guest(ticketNum, "John Doe");
    cout << "Guest details set for ticket number: " << ticketNum << endl;
}

double Ticket::getPrice() {
    return this->price;
}

void Ticket::print() {
    std::cout << "Ticket Number: " << this->ticketNum;
}

void Ticket::setGuestDetails(std::string name, bool isVip) {
guestDetails.setName(name);
guestDetails.setVIP(isVip);
}



