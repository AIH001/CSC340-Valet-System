//
// Created by Ahmad Harris on 12/5/24.
//

#ifndef CSC340_VALET_SYSTEM_SUPERVISOR_H
#define CSC340_VALET_SYSTEM_SUPERVISOR_H
#include "Employee.h"
#include "Ticket.h"
#include <vector>
#include "linkedlist.h"
class Supervisor : public Employee {
public:
    Supervisor();
    void generateTicket();
    void customerReturn(int ticketNumber);
    std::vector<Ticket> getTickets();
private:
    int findTicket(int ticketNumber);
    void sortTickets();
    std::vector<Ticket> tickets;
    LinkedList valets;
};


#endif //CSC340_VALET_SYSTEM_SUPERVISOR_H
