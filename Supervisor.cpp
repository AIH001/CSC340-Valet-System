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

int Supervisor::findTicket(int ticketNumber) {
    int low = 0, high = tickets.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (tickets[mid].getTicketNum() == ticketNumber) {
            return mid; // Return the index of the ticket
        } else if (tickets[mid].getTicketNum() < ticketNumber) {
            low = mid + 1; // Search in the right half
        } else {
            high = mid - 1; // Search in the left half
        }
    }
    return -1;
}

void Supervisor::sortTickets() {
    for (size_t i = 0; i < tickets.size(); ++i) {
        for (size_t j = 0; j < tickets.size() - i - 1; ++j) {
            if (tickets[j].getTicketNum() > tickets[j + 1].getTicketNum()) {
                // Swap the tickets
                Ticket temp = tickets[j];
                tickets[j] = tickets[j + 1];
                tickets[j + 1] = temp;
            }
        }
    }
}

