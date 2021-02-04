#include <iostream>
#include "VPet.h"
using namespace std;

int main(){
	VPet bob(150,false);
	bob.feedPet(250);
	bob.goForWalk(3);

	VPet sam;
	sam.feedPet(150);
	sam.goForWalk(1);

	cout << "Bob weighs: " << bob.getWeight() << endl;
	cout << "Sam weighs: " << sam.getWeight() << endl;

	if(bob.getHungry())
	{
		cout << "Bob is hungry" << endl;
	} else {
		cout << "Bob is not hungry" << endl;
	}

	if(sam.getHungry())
		{
			cout << "Sam is hungry" << endl;
		} else {
			cout << "Sam is not hungry" << endl;
		}

	return 0;
}
