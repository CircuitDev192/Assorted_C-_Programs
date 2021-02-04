/*
 * Name: Matthew Ashmore
 * Course: CSC 2134
 * Program Name: even-for.cpp
 * Program Description: Using a for loop, this program will display all odd numbers from 1-100.
*/

#include <iostream>
using namespace std;

int main()
{
    //Declare variable for loop counter
    int count;
    //As long as count is less than 100, loop continues.
    for (count=1 ; count<100 ; count++)
    {
        //Value of count/2, if remainder is not 0, print the value of count.
        if (count%2 != 0)
        {
            cout << count << endl;
        }
    }
    cout << "The odd numbers from 1-100 have been printed on screen. Scroll up to see the rest if they are not on screen." << endl;
    return 0;
}
