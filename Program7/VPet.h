#ifndef VPET_H_
#define VPET_H_

class VPet
{
	public:

	//Constructors
	VPet(int weight, bool hungry);
	VPet();

	//Member Functions
	void feedPet(int amount);
	bool getHungry();
	double getWeight();
	void goForWalk(int distance);

	private:

	//Data Members
	double weight;
	bool hungry;

};



#endif /* VPET_H_ */
