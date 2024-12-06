//
// Created by Ahmad Harris on 12/2/24.
//

#ifndef CSC340_VALET_SYSTEM_EMPLOYEE_H
#define CSC340_VALET_SYSTEM_EMPLOYEE_H
#include <iostream>
class Employee {
public:
    Employee();
    Employee(std::string name);
    std::string getName() const;
    double getHoursWorked;
    double getSalary();
    void clockIn();
    void clockOut();
    bool getStatus();
    void setHours(double hours);
private:
    std::string name;
    double hoursWorked;
    static double hourlyRate;
    bool isWorking;
};


#endif //CSC340_VALET_SYSTEM_EMPLOYEE_H
