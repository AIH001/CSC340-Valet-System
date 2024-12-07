//
// Created by Ahmad Harris on 12/5/24.
//

#include "Supervisor.h"

void Supervisor::generateTicket() {
    tickets.push_back( Ticket());
}

std::vector<Ticket> Supervisor::getTickets() {
    return tickets;
}
