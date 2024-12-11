//
// Created by Ahmad Harris on 12/8/24.
//

#ifndef CSC340_VALET_SYSTEM_VALET_H
#define CSC340_VALET_SYSTEM_VALET_H
#include "Employee.h"
#include "Ticket.h"
class Valet : public Employee {
public:
    Valet();
    Valet(std::string name);
    void parkCar();
    void returnCar();
    void print() const;
    void fillTicket();
    friend std::ostream& operator<<(std::ostream& os, const Valet& valet);

private:
    int carParked;
    int carsReturned;
    Ticket carTicket;
};


#endif //CSC340_VALET_SYSTEM_VALET_H
