//
// Created by Ahmad Harris on 12/10/2024.
//

#ifndef CSC340_VALET_SYSTEM_CARLOT_H
#define CSC340_VALET_SYSTEM_CARLOT_H
#include "ValetCompany.h"
#include <iostream>
#include <vector>
#include "Car.h"
class CarLot : public ValetCompany {
private:
    std::vector<Car> cars={};
public:
    CarLot();
    void print();
    void addCar(Car car);

};


#endif //CSC340_VALET_SYSTEM_CARLOT_H
