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
    Supervisor(std::string name);
    Supervisor(std::vector<Valet> valets, std::string name);
    Supervisor(LinkedList valets, std::string name);
    Supervisor(Valet valet, std::string name);
    Supervisor(std::vector<Ticket> tickets, std::string name);

    void setValets(std::vector<Valet> valets);
    void setValets(LinkedList valets);
    void addValet(Valet valet);
    void setTickets(std::vector<Ticket> tickets);
    void customerReturn(int ticketNumber);
    int customerArrival();
    std::vector<Ticket> getTickets();
    Ticket& getTicket(int ticketNum);

private:
    int findTicket(int ticketNumber);
    int createTicketNum();
    void sortTickets();
    void assignValet(Ticket &ticket, bool newArrival);
    int generateTicket();
    void fillCustomerDetails(std::string name, int ticketNum);

    std::vector<Ticket> tickets = {};
    LinkedList valets = {};
};


#endif //CSC340_VALET_SYSTEM_SUPERVISOR_H
