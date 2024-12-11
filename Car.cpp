//
// Created by Ahmad Harris on 12/5/24.
//

#include "Car.h"

Car::Car(std::string make, std::string model, std::string color, std::string licensePlate) {
    this->make = make;
    this->model = model;
    this->color = color;
    this->licensePlate = licensePlate;
}

void Car::setMake(std::string carMake) {
    this->make = carMake;
}

void Car::setModel(std::string carModel) {
    this->model = carModel;
}

void Car::setColor(std::string carColor) {
    this->color = carColor;
}

void Car::setPlate(std::string licencePlate) {
    this->licensePlate = licencePlate;
}

std::string Car::getMake() {
    return this->make;
}

std::string Car::getModel() {
    return this->model;
}

std::string Car::getColor() {
    return this->color;
}

std::string Car::getLicensePlate() {
    return this->licensePlate;
}

void Car::print() {
    std::cout << "Car Details" << std::endl;
    std::cout << "-------------------------" << std::endl;
    std::cout << "Car Make: " << this->make << std::endl;
    std::cout << "-------------------------" << std::endl;
    std::cout << "Car Model: " << this->model << std::endl;
    std::cout << "-------------------------" << std::endl;
    std::cout << "Car Color: " << this->color << std::endl;
    std::cout << "-------------------------" << std::endl;
    std::cout << "License Plate: " << this->licensePlate << std::endl;
    std::cout << "-------------------------" << std::endl;
    std::cout << std::endl;
}

Car::Car() {
    make = "";
     model = "";
     color = "";
     licensePlate = "";
     isManual = false;
     isOversized = false;
     isElectric = false;
}
