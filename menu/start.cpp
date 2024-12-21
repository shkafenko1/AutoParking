#include "start.h"

void Start::parkingApp()
{
    system("title AutoParking");
    system("color 70");
    List<int> parkings;

    std::cout << "Welcome to the AutoParking app!" << std::endl;

}

void Start::Log()
{
    enum {ZERO, PARK, EMPLOYEES};

    while (true)
    {
        std::cout << "Choose action:" << std::endl
                  << "1. Manage the parking spots" << std::endl
                  << "2. Manage the staff" << std::endl
                  << "0. Close the app" << std::endl;

        std::cin >> this->choice;
        system("cls");

        switch (this->choice)
        {
            case PARK:
                parkLog();
                break;
            case EMPLOYEES:
                employeeLog();
                break;
            case ZERO:
                return;
            default:
                break;
        }
    }
}

void Start::parkLog()
{
    enum{ZERO, PUT, FIND};

    while (true)
    {
        std::cout << "Choose action:" << std::endl
        << "1. Park a vehicle" << std::endl
        << "2. Find a parked vehicle" << std::endl
        << "0. Return" << std::endl;

        std::cin >> this->choice;
        system("cls");

        switch (this->choice)
        {
            case PUT:
                break;
            case FIND:
                break;
            case ZERO:
                return;
            default:
                break;
        }
    }
}

void Start::employeeLog()
{
    enum{ZERO, ADD, FIND};
    while (true)
    {
        std::cout << "Choose action:" << std::endl
        << "1. Add an employee" << std::endl
        << "2. Find an employee" << std::endl
        << "0. Return" << std::endl;

        std::cin >> this->choice;
        system("cls");

        switch (this->choice)
        {
            case ADD:
                break;
            case FIND:
                break;
            case ZERO:
                return;
            default:
                break;
        }
    }
}