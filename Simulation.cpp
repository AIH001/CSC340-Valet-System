//
// Created by Ahmad Harris on 12/8/24.
//

#include "Simulation.h"

using namespace std;

void Simulation::run() 
{
    cout << "WELCOME TO HOTEL 340 VALET!!" << endl;
    cout << "---------------------------------------------" << endl;
    cout << "You are an Employee here, select your position to clock in:" << endl;
    cout << "(1) Supervisor" << endl;
    cout << "(2) Antendee" << endl;
    quickDelay();
    cout << "1" << endl;
    cout << "Enter your name please: ";
    quickDelay();
    writeToScreen("Matthew");
    cout << "Matthew, you are clocked in as a Supervisor";
    cout << endl << endl;
    cout << "Options menu: " << endl;
    cout << " (" << NEW_CAR << ") NEW CAR - New guest arrived - get guest name, & color, make, and model of vehicle" << endl;
    cout << " (" << GET_CAR << ") GET CAR - Valet atendee runs to grab your vehicle" << endl;
    cout << " (" << FILE_CLAIM << ") FILE CLAIM - Files a claim if damages to vehicle" << endl;
    cout << " (" << PRINT_LOT << ") PRINT CARS - Prints out all cars in parking lot" << endl;
    cout << " (" << CLOCK_IN << ") CLOCK IN - Begin shift, employee clocks in" << endl;
    cout << " (" << CLOCK_OUT << ") CLOCK OUT - Ends shift, employee clocks out" << endl;
    cout << "Enter a number from " << MIN_MENU_OPTION<< " to " << MAX_MENU_OPTION << ", or 0 to exit: ";
    longDelay();
    cout << "1" << endl;
    cout << endl;
    cout << "----------NEW CAR----------" << endl;
    cout << "Enter guest name: " << endl;
    writeToScreen("Stephen Curry");
    cout << "Enter Vehicle Make: " << endl;
    writeToScreen("Porsche");
    cout << "Enter Vehicle Model: " << endl;
    writeToScreen("911 GT3-RS");
    cout << "Enter Vehicle Color: " << endl;
    writeToScreen("Black");
    cout << "Enter Vehicle License Plate: " << endl;
    writeToScreen("THREEEE");
    cout << "Is this a Manual Vehicle (Y or N): " << endl;
    microDelay();
    cout << "Y" << endl;
    cout << "Is this an Oversized Vehicle (Y or N): " << endl;
    microDelay();
    cout << "N" << endl;
    cout << "Is this an Electric Vehicle (Y or N): " << endl;
    microDelay();
    cout << "N" << endl;
    cout << "Ticket #1 issued." << endl;
    cout << "Price: $20/hr" << endl;
    cout << "How many hours will you be valeting with us? ";
    microDelay();
    cout << "3" << endl;
    cout << "Total price: $60" << endl;
    cout << endl << endl;
    quickDelay();
    cout << "Options menu: " << endl;
    cout << " (" << NEW_CAR << ") NEW CAR - New guest arrived - get guest name, & color, make, and model of vehicle" << endl;
    cout << " (" << GET_CAR << ") GET CAR - Valet atendee runs to grab your vehicle" << endl;
    cout << " (" << FILE_CLAIM << ") FILE CLAIM - Files a claim if damages to vehicle" << endl;
    cout << " (" << PRINT_LOT << ") PRINT CARS - Prints out all cars in parking lot" << endl;
    cout << " (" << CLOCK_IN << ") CLOCK IN - Begin shift, employee clocks in" << endl;
    cout << " (" << CLOCK_OUT << ") CLOCK OUT - Ends shift, employee clocks out" << endl;
    cout << "Enter a number from " << MIN_MENU_OPTION<< " to " << MAX_MENU_OPTION << ", or 0 to exit: ";
    longDelay();
    cout << "1" << endl;
    cout << endl << endl;

    cout << "----------NEW CAR----------" << endl;
    cout << "Enter guest name: " << endl;
    writeToScreen("Corey Carito");
    cout << "***Welcome VIP Guest***" << endl;
    cout << "Enter Vehicle Make: " << endl;
    writeToScreen("Audi");
    cout << "Enter Vehicle Model: " << endl;
    writeToScreen("R8");
    cout << "Enter Vehicle Color: " << endl;
    writeToScreen("Silver");
    cout << "Enter Vehicle License Plate: " << endl;
    writeToScreen("Code4L");
    cout << "Is this a Manual Vehicle (Y or N): " << endl;
    microDelay();
    cout << "N" << endl;
    cout << "Is this an Oversized Vehicle (Y or N): " << endl;
    microDelay();
    cout << "N" << endl;
    cout << "Is this an Electric Vehicle (Y or N): " << endl;
    microDelay();
    cout << "N" << endl;
    cout << "Ticket #2 issued." << endl;
    cout << "Price: $20/hr" << endl;
    cout << "How many hours will you be valeting with us? ";
    microDelay();
    cout << "6" << endl;
    cout << "Total price: $0 (VIP Guest Park for FREE!)" << endl;
    cout << endl << endl;
    cout << "Options menu: " << endl;
    cout << " (" << NEW_CAR << ") NEW CAR - New guest arrived - get guest name, & color, make, and model of vehicle" << endl;
    cout << " (" << GET_CAR << ") GET CAR - Valet atendee runs to grab your vehicle" << endl;
    cout << " (" << FILE_CLAIM << ") FILE CLAIM - Files a claim if damages to vehicle" << endl;
    cout << " (" << PRINT_LOT << ") PRINT CARS - Prints out all cars in parking lot" << endl;
    cout << " (" << CLOCK_IN << ") CLOCK IN - Begin shift, employee clocks in" << endl;
    cout << " (" << CLOCK_OUT << ") CLOCK OUT - Ends shift, employee clocks out" << endl;
    cout << "Enter a number from " << MIN_MENU_OPTION<< " to " << MAX_MENU_OPTION << ", or 0 to exit: ";
    longDelay();
    cout << "4" << endl;
    cout << "----------------------" << endl;
    cout << "340 Parking Lot:" << endl;
    cout << "----------------------" << endl;
    cout << "Ticket #1: Black Porsche 911 GT3-RS" << endl;
    cout << "Ticket #2: Silver Audi R8" << endl;
    cout << "----------------------" << endl;
    cout << endl << endl;

    cout << "Options menu: " << endl;
    cout << " (" << NEW_CAR << ") NEW CAR - New guest arrived - get guest name, & color, make, and model of vehicle" << endl;
    cout << " (" << GET_CAR << ") GET CAR - Valet attendee runs to grab your vehicle" << endl;
    cout << " (" << FILE_CLAIM << ") FILE CLAIM - Files a claim if damages to vehicle" << endl;
    cout << " (" << PRINT_LOT << ") PRINT CARS - Prints out all cars in parking lot" << endl;
    cout << " (" << CLOCK_IN << ") CLOCK IN - Begin shift, employee clocks in" << endl;
    cout << " (" << CLOCK_OUT << ") CLOCK OUT - Ends shift, employee clocks out" << endl;
    cout << "Enter a number from " << MIN_MENU_OPTION<< " to " << MAX_MENU_OPTION << ", or 0 to exit: ";
    longDelay();
    cout << "2" << endl;

    cout << "Choose which ticket # to grab:" << endl;
    cout << "----------------------" << endl;
    cout << "340 Parking Lot:" << endl;
    cout << "----------------------" << endl;
    cout << "Ticket #1: Black Porsche 911 GT3-RS" << endl;
    cout << "Ticket #2: Silver Audi R8" << endl;
    cout << "----------------------" << endl;
    quickDelay();
    cout << "1" << endl;
    cout << "Fetching ticket #1" << endl;
    cout << "Approximate wait time: 5 mins" << endl;
    longDelay();
    cout << "Matthew has arrived with your vehichle: Black Porsche 911 GT3-RS (License Plate: THREEEE)" << endl;
    cout << "Total time: 3 hours" << endl;
    cout << "Total Price: $60" << endl;
    cout << "---PAID---" << endl;
    cout << endl << endl;
    cout << "Options menu: " << endl;
    cout << " (" << NEW_CAR << ") NEW CAR - New guest arrived - get guest name, & color, make, and model of vehicle" << endl;
    cout << " (" << GET_CAR << ") GET CAR - Valet attendee runs to grab your vehicle" << endl;
    cout << " (" << FILE_CLAIM << ") FILE CLAIM - Files a claim if damages to vehicle" << endl;
    cout << " (" << PRINT_LOT << ") PRINT CARS - Prints out all cars in parking lot" << endl;
    cout << " (" << CLOCK_IN << ") CLOCK IN - Begin shift, employee clocks in" << endl;
    cout << " (" << CLOCK_OUT << ") CLOCK OUT - Ends shift, employee clocks out" << endl;
    cout << "Enter a number from " << MIN_MENU_OPTION<< " to " << MAX_MENU_OPTION << ", or 0 to exit: ";
    longDelay();
    cout << "5" << endl;

    cout << endl;
    cout << "Great shift today! Clocking out..." << endl;
    cout << "---------------------------------" << endl;
    cout << "You parked 2 cars today!" << endl;
    cout << "You worked 4 hours today at $25/hr" << endl;
    cout << "You made $100 today!" << endl;
    cout << "---Clocked out---" << endl;
    cout << endl << endl << endl;
}

int Simulation::getMenuInput() 
{
    int choice;
    while(true)
    {
        cout << "Options menu: " << endl;
        cout << " (" << NEW_CAR << ") NEW CAR - New guest arrived - get guest name, & color, make, and model of vehicle" << endl;
        cout << " (" << GET_CAR << ") GET CAR - Valet atendee runs to grab your vehicle" << endl;
        cout << " (" << FILE_CLAIM << ") FILE CLAIM - Files a claim if damages to vehicle" << endl;
        cout << " (" << PRINT_LOT << ") PRINT CARS - Prints out all cars in parking lot" << endl;
        cout << " (" << CLOCK_IN << ") CLOCK IN - Begin shift, employee clocks in" << endl;
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

void Simulation::intro() 
{
    if (workingEmployees.size() == 0)
    std::cout << "Supevisor name: " << supervisor.getName() << std::endl;

    int position;
    string name;

    cout << "WELCOME TO 340 VALET!!" << endl;
    cout << "---------------------------------------------" << endl;
    cout << "You are an Employee here, select your position to clock in:" << endl;

    if (workingEmployees.size() == 0)
        std::cout << "There is currently no one working this shift. Please clock in as supervisor or wait for your "
                     "supervisor to arrive!" << std::endl;

    cout << "(1) Supervisor" << endl;
    cout << "(2) Antendee" << endl;

    cin >> position;
    if (workingEmployees.empty())
    {
        std::cout << "There is no supervisor on duty. You were automatically "
                     "assigned supervisor position for this shift." << std::endl;
        position = 1;
    }
    clockIn(position);


}

void Simulation::manualSim() 
{
    intro();
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
                intro();
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

void Simulation::newCar() 
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    string name, make, model, color, licensePlate, manual, oversized, electric;
    bool isManual, isOversized, isElectric = false;
    double hours;
    Guest newGuest;
    Car newCar;
    //Ticket newTicket;

    // want to make only Corey Carito as a VIP guest (and her valet charges are comped)
    cout << "----------NEW CAR----------" << endl;
    cout << "Enter guest name: " << endl;
    getline(cin, name);

    cout << "Enter Vehicle Make: " << endl;
    getline(cin, make);
    newCar.setMake(make);

    cout << "Enter Vehicle Model: " << endl;
    getline(cin, model);
    newCar.setModel(model);

    cout << "Enter Vehicle Color: " << endl;
    getline(cin, color);
    newCar.setColor(color);

    cout << "Enter Vehicle License Plate: " << endl;
    getline(cin, licensePlate);
    newCar.setPlate(licensePlate);

    mainLot.addCar(newCar);
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

    /*newGuest(ticketCounter, name);*/
    cout << "Ticket #1 issued" << endl;
    cout << "Price: $20/hr" << endl;
    cout << "How many hours will you be valeting with us? ";
    cin >> hours;
    cout << "Total price: $" << (hours * 20) << endl;
    std::cout << endl;


}

void Simulation::getCar() 
{
    string carToBring;
    cout << "Choose which ticket # to grab:" << endl;
    printLot();
    cin >> carToBring;
    cout << "Fetching ticket # " << carToBring << endl;
    cout << "Approximate wait time: 5 mins" << endl;
    cout << workers[0].getName() << " has arrived with your vehicle: "  /*car.print()*/;
    cout << "Total time: 3 hours" << endl;
    cout << "Total Price: $" <<  /*Ticket.getPrice()*/  endl;
    std::cout << endl;
}

void Simulation::fileClaim() 
{
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
        cout << "Filing a claim for " << /*newCar.print() */ endl;
        cout << "Claim successfully sent to corporate!" << endl;
    }
    else
    {
        cout << "No vehicle is damaged, no cliam to be filed" << endl;
    }
    std::cout << endl;

}

void Simulation::printLot() {mainLot.print();}

void Simulation::clockOut() 
{
    Employee clockingOut = workingEmployees.back();
    cout << "Great shift today! Clocking out..." << endl;
    cout << "---------------------------------" << endl;
    cout << "You parked " << " cars today!" << endl;
    cout << "You worked " << /*employee1.getHoursWorked()*/  " hours today at $" << /*hourlyRate() */  endl;
    cout << "You made $" << /*employee1.moneyMade() */  endl;
    /*employee1.isWorking = false;*/
    cout << "Clocked out" << endl;
}

void Simulation::clockIn(int position) {
    string name;
    cout << "Enter your name please: " << endl;
    cin >> name;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << name << ", you are clocked in as a";
    if(position == 1)
    {
        Supervisor supervisor(name);
        supervisor.clockIn();
        workingEmployees.push_back(supervisor);
        cout << " Supervisor" << endl;
    }
    else
    {
        Valet valet(name);
        workers.push_back(valet);
        valet.clockIn();
        supervisor.setValets(workers);
        cout << "n Antendee" << endl;
    }

}

void Simulation::quickDelay() {std::this_thread::sleep_for(std::chrono::seconds(2));}
void Simulation::longDelay() {std::this_thread::sleep_for(std::chrono::seconds(4));}
void Simulation::microDelay() {std::this_thread::sleep_for(std::chrono::milliseconds(500));}

void Simulation::writeToScreen(std::string word) {
    for (char c : word) {
        std::cout << c;
        microDelay();
    }
    std::cout << std::endl;
}

