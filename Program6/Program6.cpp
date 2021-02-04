/*
*   This program uses a seperate cpp and h file for the implementation of the math functions.
*/

#include <iostream>
#include "MyMathFunctions.h"
using namespace std;


int main(){
	int radius = getPosInt("Enter a positive integer for the radius of a circle");
	double aCircle = areaOfCircle(radius);
	double vSphere = volOfSphere(radius);
	cout << "The area of a circle with radius " << radius
		 << " is " << aCircle << "." << endl;
	cout << "The volume of a sphere with radius "
		 << radius << " is " << vSphere << "." << endl;
	return 0;
}

