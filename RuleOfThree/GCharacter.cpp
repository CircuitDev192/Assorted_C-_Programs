#include "GCharacter.h"
using namespace std;

//Constructor
GCharacter::GCharacter(string n, int cap)
{
	name = n;
	capacity = cap;
	used = 0;
	toolHolder = new string[cap];
}

//Copy Constructor
GCharacter::GCharacter(const GCharacter& source)
{
	cout << "Copy Constructor called." << endl;

	name = source.name;
	capacity = source.capacity;
	used = source.used;
	toolHolder = new string[source.capacity];

	copy(source.toolHolder, source.toolHolder + used, toolHolder);

}


//Overloaded Assignment Operator
GCharacter& GCharacter::operator=(const GCharacter& source)
{
	cout << "Overloaded Assignment called." << endl;

	// Check for self-assignment
	// gc1 = gc1;
	if(this == &source)
	{
		return *this;
	}

	name = source.name;
	capacity = source.capacity;
	used = source.used;

	copy(source.toolHolder, source.toolHolder + used, toolHolder);

	return *this;
}

//Destructor
GCharacter::~GCharacter()
{
	cout << "Destructor called for " << this->name
		 << " @ this memory location " << this << endl;
	delete[] toolHolder;

}

//Inserting a new tool
void GCharacter::insert(const string& toolName)
{
	if(used == capacity)
	{
		cout << "The tool holder is full, cannot add tool." << endl;
	} else {
		toolHolder[used] = toolName;
		used++;
	}
}

std::ostream& operator<<(std::ostream& os, const GCharacter& gc)
{
	os << "Game Character " << gc.name <<
		  "\nhas the following tools: " << std::endl << "| ";

	for(int i = 0; i < gc.used; i++){
		os << gc.toolHolder[i] + " | ";
	}

	return os << std::endl;
}








