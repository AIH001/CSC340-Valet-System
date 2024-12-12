//
// Created by Ahmad Harris on 12/10/2024.
//

#include "CarLot.h"

void CarLot::print() {
    int spaceNum = 1;
    std::cout << std::endl;
    for (Car c : cars) {
        std::cout << "Spot " << spaceNum << " ";
        c.print();
        std::cout << std::endl;
        spaceNum++;
    }
}

void CarLot::addCar(Car car) {
    cars.push_back(car);
}

CarLot::CarLot() {

}

int CarLot::lotCapacity() {
    return cars.size();
}
