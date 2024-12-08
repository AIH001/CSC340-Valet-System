//
//  Created by Matthew Martinez 12/5
//

#include <iostream>
#include <string> 
#include <limits>
#include "Car.h"
#include "Employee.h"
#include "Guest.h"
#include "linkedlist.h"
#include "node.h"
#include "Ticket.h"


using namespace std;

enum Actions{
    QUIT,
    NEW_CAR,
    GET_CAR,
    FIND_KEYS,
    CRASH_CAR,
    FILE_CLAIM,
    PRINT_LOT,
    CLOCK_OUT
};

const int MIN_MENU_OPTION = 1;  //not including QUIT, which is zero
const int MAX_MENU_OPTION = CLOCK_OUT;


void simulation();
int getMenuInput();
void newCar();
void intro();

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
                cout << "Coming soon!" << endl;
                break;
            case FIND_KEYS:
                cout << "Coming soon!" << endl;
                break;
            case CRASH_CAR:
                cout << "Coming soon!" << endl;
                break;
            case FILE_CLAIM:
                cout << "Coming soon!" << endl;
                break;
            case PRINT_LOT:
                cout << "Coming soon!" << endl;
                break;
            case CLOCK_OUT:
                cout << "Coming soon!" << endl;
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
        cout << " (" << NEW_CAR << ") New guest arrived - get guest name, & color, make, and model of vehicle" << endl;
        cout << " (" << GET_CAR << ") Valet atendee runs to grab your vehicle" << endl;
        cout << " (" << FIND_KEYS << ") Finds guests' keys using binary search" << endl;
        cout << " (" << CRASH_CAR << ") Crashes guest vehicle on purpose" << endl;
        cout << " (" << FILE_CLAIM << ") Files a claim if damages to vehicle" << endl;
        cout << " (" << CLOCK_OUT << ") Ends shift, employee clocks out" << endl;
        
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
    //Car newCar;
    //Ticket newTicket;

    cout << "Enter guest name: " << endl;
    cin >> name;
    cout << "Enter Vehicle Make: " << endl;
    cin >> make;
    cout << "Enter Vehicle Model: " << endl;
    cin >> model;
    cout << "Enter Vehicle Color: " << endl;
    cin >> color;
    cout << "Enter Vehicle License Plate: " << endl;
    cin >> licensePlate;

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
        // code to create supervisor object
        cout << " Supervisor" << endl;
    }
    else
    {
        // not a supervisor, restricted functionality
        cout << "n Antendee" << endl;
    }
}





    

