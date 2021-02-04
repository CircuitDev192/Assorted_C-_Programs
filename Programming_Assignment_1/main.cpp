/*
 * Student Name: William Matthew Ashmore
 * Student NetID: wma92
 * Compiler Used: CLion w/ WSL
 * Program Description:
 *          This program will calculate the mean, mode, and median of a set of numbers.
 *          These numbers are hard coded in an array titled "numbers". Replacing these
 *          values with any other numbers (as long as they are in numerical order,
 *          will work as expected.
 */


#include <iostream>
using std::cout;
using std::endl;

void mean(double[], int);
void median(double[], int);
void mode(double[], int);


int main() {

    double numbers[] = {1,1,2,3,3,3,5,8.1,13,17.7,21,34};

    mean(numbers, 12);
    median(numbers, 12);
    mode(numbers, 12);


    return 0;
}

void mean(double arr[], int size)
{
    double average = 0;
    for(int i = 0; i < size; i++)
    {
        average += arr[i];
    }
    average /= size;

    cout << "The average of the numbers is: " << average << endl;
}

void median(double arr[], int size)
{
    double median = 0;
    median = (size % 2 == 0) ? ((arr[size/2] + arr[(size/2)-1])/2.0) : arr[size/2];

    cout << "The median of the numbers is: " << median << endl;
}

void mode(double arr[], int size)
{
    int countX = 0;
    int countY = 0;
    double modeX = 0;
    double modeY = 0;

    modeX = arr[0];
    countX = 1;

    for(int i = 1; i < size; i++) //My method relies on the numbers being in numerical order, or
    {                             //at the very least, all occurrences of the same number must be
        if(arr[i]==modeX)         //together.
        {
            countX++;
        } else if(arr[i]==modeY){
            countY++;
        } else {
            modeY = arr[i];
            countY=1;
        }

        if(countY>countX)
        {
            modeX=modeY;
            countX=countY;
        }
    }
    if(countX == 1)
    {
        cout << "There is no mode" << endl;
    } else {
        cout << "The mode of the numbers is: " << modeX << ". With a total of " << countX << " appearances." << endl;
    }
}
