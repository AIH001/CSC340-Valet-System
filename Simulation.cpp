//
// Created by Ahmad Harris on 12/8/24.
//

#include "Simulation.h"
using namespace std;
void Simulation::run() {

    intro();

    cout << "WELCOME TO HOTEL 340 VALET!!" << endl;
    cout << "---------------------------------------------" << endl;
    cout << "You are an Employee here, select your position to clock in:" << endl;
    cout << "(1) Supervisor" << endl;
    cout << "(2) Antendee" << endl;
    cout << "1" << endl;
    cout << "Enter your name please: " << endl;
    cout << "Matthew" << endl;
    cout << "Matthew, you are clocked in as a Supervisor";
    cout << "Options menu: " << endl;
    cout << " (" << NEW_CAR << ") NEW CAR - New guest arrived - get guest name, & color, make, and model of vehicle" << endl;
    cout << " (" << GET_CAR << ") GET CAR - Valet atendee runs to grab your vehicle" << endl;
    cout << " (" << FILE_CLAIM << ") FILE CLAIM - Files a claim if damages to vehicle" << endl;
    cout << " (" << PRINT_LOT << ") PRINT CARS - Prints out all cars in parking lot" << endl;
    cout << " (" << CLOCK_OUT << ") CLOCK OUT - Ends shift, employee clocks out" << endl;
    cout << "Enter a number from " << MIN_MENU_OPTION<< " to " << MAX_MENU_OPTION << ", or 0 to exit: ";
    cout << "1" << endl;

    cout << "---------------------------" << endl;
    cout << "Enter guest name: " << endl;
    cout << "Stephen Curry" << endl;
    cout << "Enter Vehicle Make: " << endl;
    cout << "Porsche" << endl;
    cout << "Enter Vehicle Model: " << endl;
    cout << "911 GT3-RS" << endl;
    cout << "Enter Vehicle Color: " << endl;
    cout << "Black" << endl;
    cout << "Enter Vehicle License Plate: " << endl;
    cout << "THREEEE" << endl;
    cout << "Is this a Manual Vehicle (Y or N): " << endl;
    cout << "Y" << endl;
    cout << "Is this an Oversized Vehicle (Y or N): " << endl;
    cout << "N" << endl;
    cout << "Is this an Electric Vehicle (Y or N): " << endl;
    cout << "N" << endl;
    cout << "Ticket #1 issued." << endl;
    cout << "Price: $20/hr" << endl;
    cout << "How many hours will you be valeting with us? ";
    cout << "3" << endl;
    cout << "Total price: $60" << endl;

    cout << "Options menu: " << endl;
    cout << " (" << NEW_CAR << ") NEW CAR - New guest arrived - get guest name, & color, make, and model of vehicle" << endl;
    cout << " (" << GET_CAR << ") GET CAR - Valet atendee runs to grab your vehicle" << endl;
    cout << " (" << FILE_CLAIM << ") FILE CLAIM - Files a claim if damages to vehicle" << endl;
    cout << " (" << PRINT_LOT << ") PRINT CARS - Prints out all cars in parking lot" << endl;
    cout << " (" << CLOCK_OUT << ") CLOCK OUT - Ends shift, employee clocks out" << endl;
    cout << "Enter a number from " << MIN_MENU_OPTION<< " to " << MAX_MENU_OPTION << ", or 0 to exit: ";
    cout << "1" << endl;

    cout << "---------------------------" << endl;
    cout << "Enter guest name: " << endl;
    cout << "Corey Carito" << endl;
    cout << "Welcome VIP Guest" << endl;
    cout << "Enter Vehicle Make: " << endl;
    cout << "Audi" << endl;
    cout << "Enter Vehicle Model: " << endl;
    cout << "R8" << endl;
    cout << "Enter Vehicle Color: " << endl;
    cout << "Silver" << endl;
    cout << "Enter Vehicle License Plate: " << endl;
    cout << "Code4L" << endl;
    cout << "Is this a Manual Vehicle (Y or N): " << endl;
    cout << "N" << endl;
    cout << "Is this an Oversized Vehicle (Y or N): " << endl;
    cout << "N" << endl;
    cout << "Is this an Electric Vehicle (Y or N): " << endl;
    cout << "N" << endl;
    cout << "Ticket #2 issued." << endl;
    cout << "Price: $20/hr" << endl;
    cout << "How many hours will you be valeting with us? ";
    cout << "6" << endl;
    cout << "Total price: $120" << endl;

    cout << "Options menu: " << endl;
    cout << " (" << NEW_CAR << ") NEW CAR - New guest arrived - get guest name, & color, make, and model of vehicle" << endl;
    cout << " (" << GET_CAR << ") GET CAR - Valet atendee runs to grab your vehicle" << endl;
    cout << " (" << FILE_CLAIM << ") FILE CLAIM - Files a claim if damages to vehicle" << endl;
    cout << " (" << PRINT_LOT << ") PRINT CARS - Prints out all cars in parking lot" << endl;
    cout << " (" << CLOCK_OUT << ") CLOCK OUT - Ends shift, employee clocks out" << endl;
    cout << "Enter a number from " << MIN_MENU_OPTION<< " to " << MAX_MENU_OPTION << ", or 0 to exit: ";
    cout << "4" << endl;

    cout << "----------------------" << endl;
    cout << "340 Parking Lot:" << endl;
    cout << "----------------------" << endl;
    cout << "Ticket #1: Black Porsche 911 GT3-RS" << endl;
    cout << "Ticket #2: Silver Audi R8" << endl;
    cout << "----------------------" << endl;

    cout << "Options menu: " << endl;
    cout << " (" << NEW_CAR << ") NEW CAR - New guest arrived - get guest name, & color, make, and model of vehicle" << endl;
    cout << " (" << GET_CAR << ") GET CAR - Valet attendee runs to grab your vehicle" << endl;
    cout << " (" << FILE_CLAIM << ") FILE CLAIM - Files a claim if damages to vehicle" << endl;
    cout << " (" << PRINT_LOT << ") PRINT CARS - Prints out all cars in parking lot" << endl;
    cout << " (" << CLOCK_OUT << ") CLOCK OUT - Ends shift, employee clocks out" << endl;
    cout << "Enter a number from " << MIN_MENU_OPTION<< " to " << MAX_MENU_OPTION << ", or 0 to exit: ";
    cout << "2" << endl;

    //to be continued

}

int Simulation::getMenuInput() {
    int choice;
    while(true)
    {
        cout << "Options menu: " << endl;
        cout << " (" << NEW_CAR << ") NEW CAR - New guest arrived - get guest name, & color, make, and model of vehicle" << endl;
        cout << " (" << GET_CAR << ") GET CAR - Valet atendee runs to grab your vehicle" << endl;
        cout << " (" << FILE_CLAIM << ") FILE CLAIM - Files a claim if damages to vehicle" << endl;
        cout << " (" << PRINT_LOT << ") PRINT CARS - Prints out all cars in parking lot" << endl;
        cout << " (" << CLOCK_OUT << ") CLOCK OUT - Ends shift, employee clocks out" << endl;

        cout << "Enter a number from " << MIN_MENU_OPTION<< " to " << MAX_MENU_OPTION << ", or 0 to exit: ";

        cin >> choice;

        if(cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error!!! Input must be a number between " << MIN_MENU_OPTION << " and " << MAX_MENU_OPTION << ", or 0 to exit" << endl;
        }

        else if(choice == QUIT || (choice >= MIN_MENU_OPTION && choice <= MAX_MENU_OPTION))
        {
            return choice;
        }
        else
        {
            cout << "Error!!! Input must be a number between " << MIN_MENU_OPTION << " and " << MAX_MENU_OPTION << ", or 0 to exit" << endl;
        }
    }
}

void Simulation::intro() {

    int position;
    string name;

    cout << "WELCOME TO 340 VALET!!" << endl;
    cout << "---------------------------------------------" << endl;
    cout << "You are an Employee here, select your position to clock in:" << endl;
    cout << "(1) Supervisor" << endl;
    cout << "(2) Antendee" << endl;

    cin >> position;

    cout << "Enter your name please: " << endl;
    cin >> name;


    cout << name << ", you are clocked in as a";
    if(position == 1)
    {
        Supervisor supervisor;
        cout << " Supervisor" << endl;
    }
    else
    {
        Employee employee(name);
        cout << "n Antendee" << endl;
    }
}

void Simulation::manualSim() {
    int choice = getMenuInput();
    while(choice != QUIT)
    {
        switch(choice)
        {
            case NEW_CAR:
                newCar();
                break;
            case GET_CAR:
                getCar();
                break;
            case FILE_CLAIM:
                fileClaim();
                break;
            case PRINT_LOT:
                printLot();
                break;
            case CLOCK_IN:
                break;
            case CLOCK_OUT:
                clockOut();
                break;
            default:
                cout << "Coming soon!" << endl;
                break;
        }
        choice = getMenuInput();
    }
    cout << endl << "Thank you! Bye!" << endl;
}

void Simulation::newCar() {
    string name, make, model, color, licensePlate, manual, oversized, electric;
    bool isManual, isOversized, isElectric = false;
    double hours;
    //Guest newGuest;
    Car newCar;
    //Ticket newTicket;

    // want to make only Corey Carito as a VIP guest (and her valet charges are comped)

    cout << "Enter guest name: " << endl;
    cin >> name;

    cout << "Enter Vehicle Make: " << endl;
    cin >> make;
    newCar.setMake(make);

    cout << "Enter Vehicle Model: " << endl;
    cin >> model;
    newCar.setModel(model);

    cout << "Enter Vehicle Color: " << endl;
    cin >> color;
    newCar.setColor(color);

    cout << "Enter Vehicle License Plate: " << endl;
    cin >> licensePlate;
    newCar.setPlate(licensePlate);

    cout << "Is this a Manual Vehicle (Y or N): " << endl;
    cin >> manual;
    if(manual == "Y")
    {
        isManual = true;
    }

    cout << "Is this an Oversized Vehicle (Y or N): " << endl;
    cin >> oversized;
    if(oversized == "Y")
    {
        isOversized = true;
    }

    cout << "Is this an Electric Vehicle (Y or N): " << endl;
    cin >> electric;
    if(electric == "Y")
    {
        isElectric = true;
    }

    cout << "Ticket #1 issued" << endl;
    cout << "Price: $20/hr" << endl;
    cout << "How many hours will you be valeting with us? ";
    cin >> hours;
    cout << "Total price: $" << (hours * 20) << endl;


}

void Simulation::getCar() {
    string carToBring;
    cout << "Choose which ticket # to grab:" << endl;
    printLot();
    cin >> carToBring;
    cout << "Fetching ticket # " << carToBring << endl;
    cout << "Approximate wait time: 5 mins" << endl;
    cout << employee.getName() << "has arrived with your vehichle: " << car.print();
    cout << "Total time: 3 hours" << endl;
    cout << "Total Price: $" <<  Ticket.getPrice() << endl;
}

void Simulation::fileClaim() {
    string damage, carForClaim;
    bool damageORno;
    cout << "Is a vehicle damaged? (Y or N)" << endl;
    cin >> damage;
    if(damage == "Y")
    {
        damageORno = true;
        cout << "Oh no!! Which vehicle is damaged?" << endl;
        printLot();
        cin >> carForClaim;
        cout << "Filing a claim for " << newCar.print() << endl;
        cout << "Claim sucessfully sent to corporate!" << endl;
    }
    else
    {
        cout << "No vehicle is damaged, no cliam to be filed" << endl;
    }

}

void Simulation::printLot() {

}

void Simulation::clockOut() {

    cout << "Great shift today! Clocking out..." << endl;
    cout << "---------------------------------" << endl;
    cout << "You parked " << " cars today!" << endl;
    cout << "Your salary is " << employee1.getSalary() << endl;
    cout << "You worked " << employee1.getHoursWorked() << " hours today at $" << hourlyRate() << endl;
    cout << "You made $" << employee1.moneyMade() << endl;
    employee1.isWorking = false;
    cout << "Clocked out" << endl;
}

void Simulation::clockIn() {

}
