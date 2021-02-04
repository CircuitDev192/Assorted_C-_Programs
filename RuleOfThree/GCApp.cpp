/*
*   Class example, simulates a game character with an inventory. 
*    GCharacter.cpp includes operator overloading, (de)constructors, etc.
*/

#include "GCharacter.h"
using namespace std;


int main()
{
	GCharacter gc1;

	gc1.insert("potion");
	gc1.insert("crossbow");
	gc1.insert("candle");
	gc1.insert("cloak");
	gc1.insert("sword");
	gc1.insert("book of spells");

	cout << gc1 << endl;

	GCharacter gc2("Bob", 5);

	gc2.insert("axe");

	//Copy Constructor
	GCharacter gc3 = gc2;

	//Overloaded Assignment Operator
	gc2 = gc1;

	cout << "gc2: " << gc2 << endl;
	cout << "gc1: " << gc1 << endl;
	cout << "gc3: " << gc3 << endl;


}
