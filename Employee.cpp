//
// Created by Ahmad Harris on 12/2/24.
//

#include "Employee.h"

std::string Employee::getName() const {
    return this->name;
}

Employee::Employee(std::string name) {
    this->name = name;
    this->isWorking = false;
}

Employee::Employee() {
    this->name ="";
    this->isWorking = false;
}

double Employee::getSalary() {
    return this->hoursWorked * this->hourlyRate;
}

void Employee::clockIn() {
    this->isWorking = true;
}

void Employee::clockOut() {
    this->isWorking = false;
}

bool Employee::getStatus() {
    return this->isWorking;
}

void Employee::setHours(double hours) {
    this->hoursWorked = hours;
}

void Employee::print() {
    std::cout << "Employee Details: " << this->name << std::endl
    << "Hours Worked: " << this->hoursWorked << std::endl;
}
