#ifndef GCHARACTER_H_
#define GCHARACTER_H_

#include <iostream>
#include <string>

class GCharacter
{
	friend std::ostream& operator<<(std::ostream& os, const GCharacter& gc);

public:

	static const int DEFAULT_CAPACITY = 5;

	//Constructor
	GCharacter(std::string name = "John", int capacity = DEFAULT_CAPACITY);

	//Copy Constructor
	GCharacter(const GCharacter& source);

	//Overloaded Assignment
	GCharacter& operator=(const GCharacter& source);

	//Destructor
	~GCharacter();

	//Insert a new tool into the tool holder
	void insert(const std::string& toolName);

private:

	//Data Members
	std::string name;
	int capacity;
	int used;
	std::string* toolHolder;

};



#endif /* GCHARACTER_H_ */
