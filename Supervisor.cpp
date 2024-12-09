//
// Created by Ahmad Harris on 12/5/24.
//

#include "Supervisor.h"

void Supervisor::generateTicket() {
    int ticketNumber = createTicketNum();
    Ticket newTicket(ticketNumber);
    tickets.push_back(newTicket);
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

void Supervisor::customerReturn(int ticketNumber) {

// Ensure the ticket exists
    int index = findTicket(ticketNumber);
    if (index != -1) {
        Ticket returnTicket = tickets[index];
        tickets.erase(tickets.begin() + index);
        assignValet(returnTicket);
    } else {
        std::cout << "Ticket not found! Please file a missing car claim!" << std::endl;
    }

}

void Supervisor::assignValet(Ticket ticket) {
    Valet* nextValet = valets.getNext(); // Get the next valet from the linked list
    if (nextValet) {
        std::cout << "Assigning Valet " << nextValet->getName() << "ticket # ..." << std::endl;

        // You can also perform further operations like assigning a task
        // nextValet->parkCar(); or nextValet->returnCar();
    } else {
        std::cout << "No valets available for assignment!" << std::endl;
    }
}

void Supervisor::customerArrival() {
    generateTicket();
    assignValet(tickets[tickets.size()-1]);
}

Supervisor::Supervisor() {
}

int Supervisor::createTicketNum() {
    using namespace std::chrono;
    return duration_cast<milliseconds>(
            system_clock::now().time_since_epoch())
            .count();
}

