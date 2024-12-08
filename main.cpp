//
//  Created by Matthew Martinez 12/5
//

#include <iostream>
#include <string> 
#include <limits>
#include "Car.h"
#include "Employee.h"
#include "Supervisor.h"
#include "Guest.h"
#include "linkedlist.h"
#include "node.h"
#include "Ticket.h"


using namespace std;

enum Actions{
    QUIT,
    NEW_CAR,
    GET_CAR,
    FILE_CLAIM,
    PRINT_LOT,
    CLOCK_OUT
};

const int MIN_MENU_OPTION = 1;  //not including QUIT, which is zero
const int MAX_MENU_OPTION = CLOCK_OUT;


void simulation();
int getMenuInput();
void intro();
void newCar();
void getCar();
void fileClaim();
void printLot();
void clockOut();

int main()
{
    intro();
    //simulation();
    
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
    return 0;
}

// hard coding simulation for presentation purposes
void simulation()
{
    cout << "Valet System Simulation" << endl;
    cout << "-----------------------" << endl;
    cout << "Employee: Matthew" << endl;
    cout << "Status: Supervisor - Clocked in" << endl;
    cout << "-----------------------" << endl;
    cout << "Employee: Nathan" << endl;
    cout << "Status: Atendee - Clocked in" << endl;
    cout << "-----------------------" << endl;
    cout << "Guest arriving..." << endl;
    cout << "Guest: Greg has arrived with a Black Toyota Camry (License Plate: ABC123)" << endl;
    cout << "Ticket #14 issued." << endl;
    cout << "-----------------------" << endl;
    cout << "Nathan parking Ticket #14" << endl;
    cout << "   Parked in parking spot 103" << endl;
    cout << "-----------------------" << endl;
    cout << "Matthew Sorting Tickets" << endl;
    cout << "...Tickets sorted!" << endl;
    cout << "-----------------------" << endl;
    cout << "Guest: Greg is leaving (Ticket #14)" << endl;
    cout << "...Nathan pulling their Black Toyota Camry (License Plate: ABC123)" << endl;
    cout << "Total price for 3 hours: $60 USD" << endl;
    cout << "Guest has left" << endl;
}

int getMenuInput()
{
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

void newCar()
{   
    string name, make, model, color, licensePlate, manual, oversized, electric;
    bool isManual, isOversized, isElectric = false;

    //Guest newGuest;
    Car newCar;
    //Ticket newTicket;

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
}
    

void intro()
{
    int position;
    string name;

    cout << "WELCOME TO HOTEL 340 VALET!!" << endl;
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

void getCar()
{
    string carToBring;
    cout << "Choose which ticket # to grab:" << endl;
    printLot();
    cin >> carToBring;
    cout << "Fetching ticket # " << carToBring << endl;
    cout << "Approximate wait time: 5 mins" << endl;
    cout << employee.getName() << "has arrived with your vehichle: " << car.print();
    cout << "Total time: " << 3 hours << endl;
    cout << "Total Price: $" <<  Ticket.price() << endl;    
}
void fileClaim()
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
        cout << "Filing a claim for " << newCar.print() << endl;
        cout << "Claim sucessfully sent to corporate!" << endl;
    }
    else
    {
        cout << "No vehicle is damaged, no cliam to be filed" << endl;
    }
}
void printLot()
{
    //need help with this function;
}
void clockOut()
{
    cout << "Great shift today! Clocking out..." << endl;
    cout << "---------------------------------" << endl;
    cout << "You parked " << " cars today!" << endl;
    cout << "Your salary is " << employee1.getSalary() << endl;
    cout << "You worked " << employee1.getHoursWorked() << " hours today at $" << hourlyRate() << endl;
    cout << "You made $" << employee1.moneyMade() << endl;
    employee1.isWorking = false;
    cout << "Clocked out" << endl;
}




