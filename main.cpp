//
//  Created by Matthew Martinez 12/5
//

#include <iostream>
#include <limits>


using namespace std;

enum Actions{
    QUIT,
    NEW_CAR,
    GET_CAR,
    FIND_KEYS,
    CRASH_CAR,
    FILE_CLAIM,
};

const int MIN_MENU_OPTION = 1;  //not including QUIT, which is zero
const int MAX_MENU_OPTION = FILE_CLAIM;


void simulation();
int getMenuInput();

int main()
{
    simulation();
    
    int choice = getMenuInput();
    while(choice != QUIT)
    {
        switch(choice)
        {
            case NEW_CAR:
                cout << "Coming soon!" << endl;
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
        cout << "WELCOME TO HOTEL 340 VALET!!" << endl;
        cout << "---------------------------------------------" << endl;
        cout << "Options menu: \n"; 
        cout << " (" << NEW_CAR << ") New guest arrived - get guest name, & color, make, and model of vehicle" << endl;
        cout << " (" << GET_CAR << ") Valet atendee runs to grab your vehicle" << endl;
        cout << " (" << FIND_KEYS << ") Finds guests' keys using binary search" << endl;
        cout << " (" << CRASH_CAR << ") Crashes guest vehicle on purpose" << endl;
        cout << " (" << FILE_CLAIM << ") Files a claim if damages to vehicle" << endl;
        
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
