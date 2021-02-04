/*
 * Create a numeric sequence based on multiplying the non-zero digits in a starting number.
    The sequence starts with a given value (x). Multiply all the non-zero digits of x together and add that
    value to x giving x’. Repeat the process with x’.  For example, assume x = 87. You would multiply 8 x
    7 to get 56. Next, add 56 to 87 to get 143. Repeating the process for 143 gives you 155. Therefore, the
    first occurrences of the sequence are 87, 143, and 155. If the starting number is 1 then the first 20
    numbers in the sequence are:

 1, 2, 4, 8, 16, 22, 26, 38, 62, 74, 102, 104, 108, 116, 122, 126, 138, 162, 174, 202

 Let’s call the sequence generated when starting with 1 the “original sequence”. An interesting property
    of this sequence is that, regardless of the starting number, the sequence will eventually “converge” with
    the original sequence. For example, starting with 55 the following sequence will be generated:

 55, 80, 88, 152, 162

 We can say 55 converged with the original sequence at 162. This required 4 iterations. In this problem
    you will be given a starting number for a new sequence. Determine the number at which the new
    sequence will converge with the original sequence and how many iterations this will require. The
    starting number will be greater than 1 and less than or equal to 500,000.
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {

    int var;
    int count;
    cout << "Enter a starting number for the sequence: " << endl;
    cin >> var;
    cout << "How many numbers should be generated? " << endl;
    cin >> count;

    cout << var << " ";

    for(int i = 1; i < count; i++)
    {
        int varCopy = var;
        int temp;
        int multiply = 1;
        while(var > 0)
        {
            if(var%10!=0)
            {
                temp = var%10;
                multiply *= temp;
                var /= 10;
            } else {
                var /= 10;
            }
        }
        multiply += varCopy;
        cout << multiply << " ";
        var = multiply;
    }

    return 0;
}