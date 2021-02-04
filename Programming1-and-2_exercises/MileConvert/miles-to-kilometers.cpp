/*
 * Name: Matthew Ashmore
 * Course: CSC 2134
 * Program Name: miles-to-kilometers.cpp
 * Program Description: This program is designed
 *  to take user input of miles and covert that to
 *  kilometers, then output the result.
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //Declaring variables required for the operation.
    double miles, kilometers;
    //Constant variable required to do the conversion.
    const double MILES_TO_KILOMETERS_CONVERSION = 0.621;

    //Get the distance in miles to be converted.
    cout << "Please input a number of miles to be converted to kilometers: ";
    cin >> miles;

    //Procession the conversion.
    kilometers = miles / MILES_TO_KILOMETERS_CONVERSION;

    //Output the result of the conversion.
    cout << miles << " miles is equal to " << fixed << setprecision(1)
         << kilometers << " kilometers.";

    return 0;
}
