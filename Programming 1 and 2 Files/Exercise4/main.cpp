/*
 * Ask the user for a number and determine whether the number is prime or not.
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{

    int input;
    bool isPrime;
    cout << "Enter a number to test if it is prime: " << endl;
    cin >> input;

    for(int i = 2; i <= input / 2; i++)
    {
        if(input % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    cout << "The number " << input << (isPrime ? " is prime." : " is not prime.") << endl;

    return 0;
}
