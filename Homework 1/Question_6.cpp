/*
*   Grade averager. Takes in user input for the values
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int count;
    cout << "How many grades should I average? " << endl;
    cin >> count;

    if(count < 1)
    {
        cout << "There was an error. Perhaps you tried averaging 0 or a negative number?" << endl;
        return 0;
    }
    float average = 0;

    float grades[count] = {};

    float loopGrade = 0;
    for(int i = 0; i < count; i++)
    {
        cout << "Enter grade " << i+1 << ": " << endl;
        cin >> loopGrade;

        grades[i] = loopGrade;
        average += loopGrade;
    }

    cout << "Your grades are: " << endl;
    for(int i = 0; i < count; i++)
    {
        cout << "Grade: " << i+1 << ": " << grades[i] << endl;
    }

    average /= count;

    cout << "Your average for all grades is: " << average << endl;

    if(average > 60.0)
    {
        cout << "You passed!" << endl;
    } else {
        cout << "You failed!" << endl;
    }


    return 0;
}
