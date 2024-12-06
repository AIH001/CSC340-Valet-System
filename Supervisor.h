//
// Created by Ahmad Harris on 12/5/24.
//

#ifndef CSC340_VALET_SYSTEM_SUPERVISOR_H
#define CSC340_VALET_SYSTEM_SUPERVISOR_H
#include "Employee.h"
#include "Ticket.h"
#include <vector>
class Supervisor : public Employee {
public:
    Supervisor();
    void generateTicket();
    std::vector<Ticket> getTickets();
private:
    std::vector<Ticket> tickets;

};


#endif //CSC340_VALET_SYSTEM_SUPERVISOR_H
