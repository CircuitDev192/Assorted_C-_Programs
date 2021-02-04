/*
 * Name: Matthew Ashmore
 * Course: CSC 2134
 * Program Name: even-while.cpp
 * Program Description: Using a while loop, this program will display all odd numbers from 1-100.
*/

#include <iostream>
using namespace std;

int main()
{
    //Declare variable for loop counter
    int count = 1;
    //As long as count is less than 100, loop continues.
    while (count<100)
    {
        //Value of count/2, if remainder is not 0, print the value of count.
        if (count%2 != 0)
        {
            cout << count << endl;
        }
        count++;
    }
    cout << "The odd numbers from 1-100 have been printed on screen. Scroll up to see the rest if they are not on screen." << endl;
    return 0;
}
