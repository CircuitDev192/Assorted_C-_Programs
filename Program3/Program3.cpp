//Problem statement:
//Create a program that averages
//scores on a scale from 1 to 10.
#include <iostream>
#include <string>
using namespace std;

int main(){

	//Get movie name
	string movie = "";
	cout << "What is the name of the movie: \n";
	getline(cin, movie);

	//Get metascore
	int metascore = 0;
	cout << "What is the metascore rating for " << movie << "?\n";
	cin >> metascore;

	//Get tomato score
	int tomatometer = 0;
	cout << "What is the tomatometer rating for " << movie << "?\n";
	cin >> tomatometer;

	//Calculate average
	double average = (double)(metascore + tomatometer) / 2;

	//Rescale average
	double rescaledScore = average / 10;
	//Display the result
	cout << "Calculated average for " << movie << " is "
	     << rescaledScore << ".";

	return 0;
}
