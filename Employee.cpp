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
    this->hoursWorked = 0;
    this->hourlyRate = 25.50;
}

Employee::Employee() {
    this->name ="";
    this->isWorking = false;
    this->hoursWorked = 0;
    this->hourlyRate = 25.50;
}

double Employee::getSalary() {
    return this->hoursWorked * this->hourlyRate;
}

void Employee::clockIn() {
    this->isWorking = true;
    clockInTime = std::chrono::system_clock::now();
    std::cout << "Clock-in time recorded.\n";
}

void Employee::clockOut() {
    this->isWorking = false;
    this->clockOutTime = std::chrono::system_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::minutes>(
            clockOutTime - clockInTime).count();

    this->hoursWorked += static_cast<double>(duration);

    std::cout << "Clocked out. Hours worked: " << hoursWorked << " hours.\n";

}

bool Employee::getStatus() {
    return this->isWorking;
}

void Employee::setHours(double hours) {
    this->hoursWorked = hours;
}

void Employee::print() {
    std::cout << "Employee Details: " << this->name << std::endl <<
    "Role" << this->role << std::endl << "Total Hours Worked: " << this->hoursWorked << std::endl;
}

double Employee::getHoursWorked() {
    return hoursWorked;
}
