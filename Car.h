//
// Created by Ahmad Harris on 12/5/24.
//

#ifndef CSC340_VALET_SYSTEM_CAR_H
#define CSC340_VALET_SYSTEM_CAR_H
#include "ValetCompany.h"

class Car : public ValetCompany {
public:
    Car();
private:
    std::string make;
    std::string model;
    std::string color;
    std::string licensePlate;
    std::string type;
    bool isManual;
    bool isOversized;
    bool isElectric;
};


#endif //CSC340_VALET_SYSTEM_CAR_H
