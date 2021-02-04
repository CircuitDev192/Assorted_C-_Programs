#ifndef SRC_CLASSIFIEDSET_H_
#define SRC_CLASSIFIEDSET_H_

#include <string>
using namespace std;

class ClassifiedSet
{
public:

	friend std::ostream& operator<<(std::ostream& os, const ClassifiedSet& cs);

	//Constructor
	ClassifiedSet();

	//Member Functions
	void addItemToSet(int itemID, int amount);
	void removeItemFromSet(int itemID, int amount);
	void init(int gear[6]);

private:

	//Data Members
	int gearSet[6];

};



#endif /* SRC_CLASSIFIEDSET_H_ */
