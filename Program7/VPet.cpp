#include "VPet.h"

VPet::VPet(int w, bool hun):weight(w),hungry(hun)
{
}

VPet::VPet():weight(100),hungry(true)
{
}

void VPet::feedPet(int amt)
{
	if(amt >= 0.5*weight)
	{
		hungry = false;
	} else {
		hungry = true;
	}

	weight = weight + 0.25 * amt;
}

void VPet::goForWalk(int distance)
{
	if(distance > 2)
	{
		hungry = true;
		weight -= (weight/distance);
	} else {
		weight -= (50/distance);
	}
}


double VPet::getWeight()
{
	return weight;
}

bool VPet::getHungry()
{
	return hungry;
}
