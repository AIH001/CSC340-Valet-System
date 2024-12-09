//
// Created by Ahmad Harris on 12/5/24.
//

#ifndef CSC340_VALET_SYSTEM_SUPERVISOR_H
#define CSC340_VALET_SYSTEM_SUPERVISOR_H
#include "Employee.h"
#include "Ticket.h"
#include <vector>
#include "linkedlist.h"
#include <chrono>
class Supervisor : public Employee {
public:
    Supervisor();
    void customerReturn(int ticketNumber);
    void customerArrival();
    std::vector<Ticket> getTickets();
private:
    int findTicket(int ticketNumber);
    void sortTickets();
    void assignValet(Ticket ticket, bool newArrival);
    void generateTicket();
    int createTicketNum();
    void fillCustomerDetails();
    std::vector<Ticket> tickets;
    LinkedList valets;

};


#endif //CSC340_VALET_SYSTEM_SUPERVISOR_H
