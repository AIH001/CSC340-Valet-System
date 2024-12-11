//
// Created by Ahmad Harris on 12/8/24.
//

#include "Valet.h"

void Valet::parkCar() {
    carParked++;
}

void Valet::returnCar() {
    carsReturned++;
}

Valet::Valet() {
    carParked = 0;
    carsReturned = 0;
}

void Valet::print() const {
    std::cout << "Employee Name: " << this->getName() << " \n";
}

std::ostream& operator<<(std::ostream& os, const Valet& valet) {
    valet.print(); // Call the Valet's print function
    return os;
}

void Valet::fillTicket() {
    std::string carColor, carModel, carMake, licensePlate;
    std::cout << "Please enter the following details for the car:\n";

    std::cout << "Car Color: ";
    std::getline(std::cin, carColor);

    std::cout << "Car Model: ";
    std::getline(std::cin, carModel);

    std::cout << "Car Make: ";
    std::getline(std::cin, carMake);

    std::cout << "Car License Plate: ";
    std::getline(std::cin, licensePlate);

    std::cout << "\nTicket filled successfully with the following details:\n";
    std::cout << "Car Color: " << carColor << "\n"
              << "Car Model: " << carModel << "\n"
              << "Car Make: " << carMake << "\n";

    this->carTicket.setCarDetails(carMake, carModel, carColor, licensePlate);
}

Valet::Valet(std::string name) : Employee(name) {

}
