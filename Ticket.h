//
// Created by Ahmad Harris on 12/5/24.
//

#ifndef CSC340_VALET_SYSTEM_TICKET_H
#define CSC340_VALET_SYSTEM_TICKET_H
#include "Car.h"
#include "Guest.h"
class Ticket : public ValetCompany {
public:
    Ticket();
    Ticket(int ticketNum);
    int getTicketNum() const;
    void setCarDetails();
private:
    int ticketNum;
    double price;
    Car carDetails;
    Guest guestDetails;

};


#endif //CSC340_VALET_SYSTEM_TICKET_H
