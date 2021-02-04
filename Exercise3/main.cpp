/*
 * Write a program that computes the average of a
 * list of grades. The user will enter a negative
 * grade to indicate the end of the list. The user
 * has also indicated they don’t need to save the grades.
 */

#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;

int main(){

    std::vector<double> grades{};
    double input = 0;
    double average = 0;
    int count = 1;
    cout << "To finish entering grades, enter any negative value. That value will not be recorded." << endl;

    do{
        cout << "Enter grade " << count << ": " << endl;
        cin >> input;

        if(input<0){break;};

        grades.push_back(input);

        count++;
    }while(true);

    for(unsigned int i = 0; i < grades.size(); i++)
    {
        average += grades[i];
    }

    average /= grades.size();

    cout << "The average grade is: " << average << ". " << endl;

    return 0;
}
