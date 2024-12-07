//
// Created by Ahmad Harris on 12/5/24.
//

#ifndef CSC340_VALET_SYSTEM_CAR_H
#define CSC340_VALET_SYSTEM_CAR_H
#include "ValetCompany.h"

class Car : public ValetCompany {
public:
    Car();
    Car(std::string make, std::string model, std::string color, std::string licensePlate);
    void setMake(std::string carMake);
    void setModel(std::string carModel);
    void setColor(std::string carColor);
    void setPlate(std::string licencePlate);
    std::string getMake();
    std::string getModel();
    std::string getColor();
    std::string getLicensePlate();
    void print();
private:
    std::string make;
    std::string model;
    std::string color;
    std::string licensePlate;
    bool isManual;
    bool isOversized;
    bool isElectric;
};


#endif //CSC340_VALET_SYSTEM_CAR_H
