#include <iostream>
using namespace std;


void printArray(double[], int);
void userInputArray(double[], int);

int main()
{
	double rainfall[5];

	rainfall[0] = 2.3;
	rainfall[1] = 0.3;
	rainfall[2] = 0.0;
	rainfall[3] = 4.1;
	rainfall[4] = 0.5;

	printArray(rainfall, 5);

	userInputArray(rainfall, 5);

	printArray(rainfall, 5);

	return 0;
}


void printArray(double array[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << array[i] << endl;
	}

}

void userInputArray(double array[], int size)
{
	for(int i = 0; i < size; i++)
		{
			cout << "Enter a rainfall amount for day " << i+1 << ": " << endl;
			cin >> array[i];
		}
}








