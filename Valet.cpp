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

void Valet::fillTicket(Ticket &carTicket) {
    std::string carColor, carModel, carMake, licensePlate;
    std::cout << "Please enter the following details for the car:\n";

    std::cout << "Enter Vehicle Make: " << std::endl;
    getline(std::cin, carMake);

    std::cout << "Enter Vehicle Model: " << std::endl;
    getline(std::cin, carModel);


    std::cout << "Enter Vehicle Color: " << std::endl;
    getline(std::cin, carColor);


    std::cout << "Enter Vehicle License Plate: " << std::endl;
    getline(std::cin, licensePlate);

    std::cout << "\nTicket filled successfully with the following details:\n";
    std::cout << "Car Color: " << carColor << "\n"
              << "Car Model: " << carModel << "\n"
              << "Car Make: " << carMake << "\n"
              << "Car License Plate: " << licensePlate << "\n";
    carTicket.setCarDetails(carMake, carModel, carColor, licensePlate);
}

Valet::Valet(std::string name) : Employee(name) {

}
