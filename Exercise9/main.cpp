//Problem 9:  Given 3 different integer numbers, determine if the difference between the smallest number
//and the middle number is the same as the difference between the middle number and the largest
//number. The numbers can be entered in any order. If the differences are exactly the same the program
//should indicate the numbers are “Spaced Out” otherwise the numbers are “NOT Spaced Out”.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main() {
    int first, second, third;

    cout << "Enter the first integer: " << endl;
    cin >> first;
    cout << "Enter the second integer: " << endl;
    cin >> second;
    cout << "Enter the third integer: " << endl;
    cin >> third;

    int arr[3] = {first, second, third};
    int temp;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    if(arr[1]-arr[0] == arr[2]-arr[1])
    {
        cout << "The numbers are spaced out." << endl;
    } else {
        cout << "The numbers are not spaced out." << endl;
    }




    return 0;
}