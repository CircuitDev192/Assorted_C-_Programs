/*
 * Write a while loop that prints userNum divided by 2 (integer division) until reaching 1.
 * Follow each number by a space.  Here is example output for userNum = 40.
 * 20 10 5 2 1
 */

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main(){

    int userNum;
    cout << "Enter an integer: " << endl;
    cin >> userNum;

    while(userNum>=1)
    {
        if(userNum==1)
        {
            cout << userNum;
            return 0;
        }
        cout << userNum << " ";
        userNum /= 2;
    }


    return 0;
}
