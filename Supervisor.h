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
    Supervisor(std::vector<Valet> valets);
    Supervisor(Valet valet);
    Supervisor(LinkedList valets);
    Supervisor(std::vector<Ticket> tickets);
    void customerReturn(int ticketNumber);
    void customerArrival();
    std::vector<Ticket> getTickets();
private:
    int findTicket(int ticketNumber);
    int createTicketNum();
    void sortTickets();
    void assignValet(Ticket ticket, bool newArrival);
    void generateTicket();
    void fillCustomerDetails();

    std::vector<Ticket> tickets = {};
    LinkedList valets = {};
};


#endif //CSC340_VALET_SYSTEM_SUPERVISOR_H
