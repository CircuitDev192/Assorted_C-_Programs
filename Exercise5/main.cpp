/*
 * Write a program that asks the user how many Fibonacci numbers to generate and then
 * generates them. Take this opportunity to think about how you can use functions. Make sure to ask the
 * user to enter the number of numbers in the sequence to generate.(Hint: The Fibonacci sequence is a
 * sequence of numbers where the next number in the sequence is the sum of the previous two numbers in
 * the sequence. The sequence looks like this: 1, 1, 2, 3, 5, 8, 13, ...)
 */
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void generateFib(int);

int main() {

    int input;
    cout << "How many Fibonacci numbers would you like to generate? " << endl;
    cin >> input;

    generateFib(input);

    return 0;
}


void generateFib(int input){

    int fibNum = 1;
    int prevNum = 0;
    int temp = 0;

    for(int i = input; i > 0; i--)
    {
        cout << fibNum << " ";
        temp = fibNum;
        fibNum += prevNum;
        prevNum = temp;
    }

}