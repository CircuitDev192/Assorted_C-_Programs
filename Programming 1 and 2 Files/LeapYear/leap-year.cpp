/*
 * Name: Matthew Ashmore
 * Course: CSC 2134
 * Program Name: leap-year.cpp
 * Program Description: Program will ask for a year and determine
 *  if that year is a leap year or not, and it will display the
 *  result to the user.
 */

#include <iostream>
using namespace std;

int main()
{
    //Setting up. Prompting user and making a variable to hold the year entered.
    int yearEntered;
    cout << "This program will determine if a "
         << "specified year is or is not a leap year. "
         << "Enter 0 to terminate the program." << endl;
    cout << "Please enter a year: ";

    cin >> yearEntered;

    //This if..else if..else setup is more like a fake loop, allowing multiple years to be entered without the program ending
    //If the year entered is 0, then terminate the program.
    if (yearEntered == 0)
    {
        return 0;
    } else if (yearEntered%4 != 0) { // <-- If the year entered is divided by 4 and there is a remainder, then it is not a leap year.
        cout << "The year " << yearEntered << " is not a leap year." << endl;
        main();
    } else if (yearEntered%4 == 0) { // <-- If the year entered is divided by 4 and there is not a remainder, then it is a leap year.
        cout << "The year " << yearEntered << " is a leap year." << endl;
        main();
    } else { // <-- Catch all for any invalid input that somehow gets past the first 'if' statement without terminating the program.
        cout << "Invalid input. Please restart the program and try again." << endl;
        return 0;
    }
}
