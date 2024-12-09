//
// Created by Ahmad Harris on 12/8/24.
//

#ifndef CSC340_VALET_SYSTEM_SIMULATION_H
#define CSC340_VALET_SYSTEM_SIMULATION_H
#include <iostream>
#include <limits>
#include "Car.h"
#include "Employee.h"
#include "Supervisor.h"
#include "Guest.h"
#include "linkedlist.h"
#include "node.h"
#include "Ticket.h"

enum Actions{
    QUIT,
    NEW_CAR,
    GET_CAR,
    FILE_CLAIM,
    PRINT_LOT,
    CLOCK_IN,
    CLOCK_OUT
};

class Simulation {
public:
    void run();
    void manualSim();
private:
    int getMenuInput();
    void intro();
    void newCar();
    void getCar();
    void fileClaim();
    void printLot();
    void clockOut();
    const int MIN_MENU_OPTION = 1;  //not including QUIT, which is zero
    const int MAX_MENU_OPTION = CLOCK_OUT;

};


#endif //CSC340_VALET_SYSTEM_SIMULATION_H
