/*
 * Name: Matthew Ashmore
 * Course: CSC 2134
 * Program Name: fizzbuzz.cpp
 * Program Description: This program will print the numbers 1-100,
 *  but for multiples of 3, it will print Fizz; for multiples of 5,
 *  Buzz will be printed; and for multiple of 3 and 5, FizzBuzz will be printed.
*/

#include <iostream>
using namespace std;

int main()
{
    //Declare loop counter as variable 'count'
    int count = 1;
    //While count is less than 100, loop continues
    while (count<100)
    {
        //Checks if number is divisible by 3 AND 5
        if (count%3 == 0 && count%5 == 0)
        {
            cout << "FizzBuzz" << endl;
        } else if (count%3 == 0)        //Checks if number is divisible by ONLY 3
        {
            cout << "Fizz" << endl;
        } else if (count%5 == 0)        //Checks if number is divisible by ONLY 5
        {
            cout << "Buzz" << endl;
        } else                          //If not divisible by 3 or 5, prints the number.
        {
            cout << count << endl;
        }
        count++;                        //Increases the counter by 1
    }
    return 0;
}
