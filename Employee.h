//
// Created by Ahmad Harris on 12/2/24.
//

#ifndef CSC340_VALET_SYSTEM_EMPLOYEE_H
#define CSC340_VALET_SYSTEM_EMPLOYEE_H

#include "ValetCompany.h"
#include <chrono>

class Employee : public ValetCompany {
public:
    Employee();
    Employee(std::string name);
    std::string getName() const;
    double getHoursWorked();
    double getSalary();
    void clockIn();
    void clockOut();
    bool getStatus();
    void setHours(double hours);
    void print();
private:
    std::string name;
    double hoursWorked;
    static double hourlyRate;
    bool isWorking;
    decltype(std::chrono::system_clock::now()) clockInTime;
    decltype(std::chrono::system_clock::now()) clockOutTime;
};


#endif //CSC340_VALET_SYSTEM_EMPLOYEE_H
