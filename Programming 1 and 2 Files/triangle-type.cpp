/*
 * triangle-type.cpp
 *
 *  Created on: Feb 16, 2017
 *      Author: Matthew Ashmore
 * 
 * 	Enum example, gets the type of a triangle based on the side lengths
 */
#include <iostream>
#include <string>
using namespace std;


enum triangleType {SCALENE, ISOCELES, EQUALATERAL, NOTRIANGLE};

string triangleShape(int side1,int side2,int side3);
string triangle;

int main()
{
	int side1, side2, side3;
	cout << "Enter the lengths of three sides of a triangle." << endl;
	cin >> side1;
	cin >> side2;
	cin >> side3;

	if (side1 == 0 || side2 == 0 || side3 == 0)
	{
		cout << "You can't have a side equal to zero";
		return 0;
	}
	cout << "You entered: " << side1 << ", " << side2 << ", and " << side3 << "." << endl;

	triangle = triangleShape(side1, side2, side3);


	cout << "The lengths you entered make a(n) " << triangle << "triangle." << endl;

	return 0;

}




string triangleShape(int side1,int side2,int side3)
{
	triangleType triangleTypeEnum;
	if ((side1 + side2 < side3) || (side2 + side3 < side1) || (side3 + side1 < side2))
	{
		triangleTypeEnum = NOTRIANGLE;
	} else if (side1 == side2 && side2 == side3)
	{
		triangleTypeEnum = EQUALATERAL;
	} else if ((side1 == side2 && side2 != side3) || (side2 == side3 && side3 != side1) || (side3 == side1 && side1 != side2))
	{
		triangleTypeEnum = ISOCELES;
	} else if (side1 != side2 && side2 != side3)
	{
		triangleTypeEnum = SCALENE;
	}

	switch(triangleTypeEnum)
	{
	case NOTRIANGLE:
		return "non-";
	case EQUALATERAL:
		return "equalateral ";
	case ISOCELES:
		return "isoceles ";
	case SCALENE:
		return "scalene ";
	default:
		return "--You shouldn't be seeing this.--";
	}
}


