#include "ClassifiedSet.h"
#include <iostream>
#include <string>

ClassifiedSet::ClassifiedSet()
{
}


void ClassifiedSet::addItemToSet(int itemID, int amount)
{
	if(itemID >= 0 && itemID <= 5)
	{
		gearSet[itemID] += amount;
	}
}

void ClassifiedSet::removeItemFromSet(int itemID, int amount)
{
	if(itemID >= 0 && itemID <= 5)
		{
			gearSet[itemID] -= amount;
		}
}

void ClassifiedSet::init(int gear[6])
{
	for(int i=0;i<6;i++)
	{
		gearSet[i] = gear[i];
	}
}

std::ostream& operator<<(std::ostream& os, const ClassifiedSet& cs)
{
	return os << cs.gearSet[0] << " " << cs.gearSet[1] << " "
			  << cs.gearSet[2] << " " << cs.gearSet[3] << " "
			  << cs.gearSet[4] << " " << cs.gearSet[5] << " "
			  << std::endl;
}
