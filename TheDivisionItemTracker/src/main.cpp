#include <iostream>
#include <fstream>
#include <string>
#include "ClassifiedSet.h"

void inputFile();
void outputFile();
void outputToConsole();
void chooseSetToAdd();
void chooseSetToRemove();
void chooseItemToAdd(int);
void chooseItemToRemove(int);
void chooseAmountToAdd(int, int);
void chooseAmountToRemove(int, int);
void addOrRemove();

ClassifiedSet AlphaBridge;
ClassifiedSet Banshee;
ClassifiedSet D3FNC;
ClassifiedSet DeadEYE;
ClassifiedSet FinalMeasure;
ClassifiedSet FireCrest;
ClassifiedSet HuntersFaith;
ClassifiedSet LoneStar;
ClassifiedSet Nomad;
ClassifiedSet Predator;
ClassifiedSet Reclaimer;
ClassifiedSet SentrysCall;
ClassifiedSet Striker;
ClassifiedSet Tactician;

int main(){

	//Input from File
	inputFile();

	//Greet user and display items
	cout << "Hello! Welcome to The Division Item Tracker!" << endl
		 << "==================================================" << endl
		 << "You're current selection of items are listed below" << endl;

	outputToConsole();

	string loopInput = "";
	do{
		addOrRemove();
		outputToConsole();
		cout << "Would you like to add or remove another item? (\"Yes\" or \"No\")" << endl;
		cin >> loopInput;
	}while(loopInput=="Yes");


	cout << "Outputting changes to file..." << endl;

	//Output to File
	outputFile();

	cout << "Done." << endl;


	return 0;
}


void inputFile()
{
	ifstream inFile;
		inFile.open("D:\\willy\\cplusplus-workspace\\TheDivisionItemTracker\\src\\data.txt");

		if(inFile.fail())
		{
			cerr << "Error Opening File" << endl;
			exit(1);
		}

		int gear[6];
		int array1;
		int array2;
		int array3;
		int array4;
		int array5;
		int array6;
		int counter = 0;

		while(!inFile.eof())
		{
			inFile >> array1 >> array2 >> array3 >> array4 >> array5 >> array6;
			gear[0] = array1;
			gear[1] = array2;
			gear[2] = array3;
			gear[3] = array4;
			gear[4] = array5;
			gear[5] = array6;

			switch(counter)
			{
			case (0):
			AlphaBridge.init(gear);
			break;
			case (1):
			Banshee.init(gear);
			break;
			case (2):
			D3FNC.init(gear);
			break;
			case (3):
			DeadEYE.init(gear);
			break;
			case (4):
			FinalMeasure.init(gear);
			break;
			case (5):
			FireCrest.init(gear);
			break;
			case (6):
			HuntersFaith.init(gear);
			break;
			case (7):
			LoneStar.init(gear);
			break;
			case (8):
			Nomad.init(gear);
			break;
			case (9):
			Predator.init(gear);
			break;
			case (10):
			Reclaimer.init(gear);
			break;
			case (11):
			SentrysCall.init(gear);
			break;
			case (12):
			Striker.init(gear);
			break;
			case (13):
			Tactician.init(gear);
			break;
			}
			counter++;
		}
		inFile.close();

}

void outputFile()
{
	ofstream outFile;
		outFile.open("D:\\willy\\cplusplus-workspace\\TheDivisionItemTracker\\src\\data.txt");

		if(outFile.fail())
		{
			cerr << "Error Opening File" << endl;
			exit(1);
		}


		outFile << AlphaBridge;
		outFile << Banshee;
		outFile << D3FNC;
		outFile << DeadEYE;
		outFile << FinalMeasure;
		outFile << FireCrest;
		outFile << HuntersFaith;
		outFile << LoneStar;
		outFile << Nomad;
		outFile << Predator;
		outFile << Reclaimer;
		outFile << SentrysCall;
		outFile << Striker;
		outFile << Tactician;

		outFile.close();
}

void outputToConsole()
{
	cout << AlphaBridge;
	cout << Banshee;
	cout << D3FNC;
	cout << DeadEYE;
	cout << FinalMeasure;
	cout << FireCrest;
	cout << HuntersFaith;
	cout << LoneStar;
	cout << Nomad;
	cout << Predator;
	cout << Reclaimer;
	cout << SentrysCall;
	cout << Striker;
	cout << Tactician;
}

void chooseSetToAdd()
{
	int input;
	cout << "Which set would you like to add to? (Use the setID, starting from 0.)" << endl;
	cin >> input;

	switch(input)
	{
	case(0):
		chooseItemToAdd(0);
		break;
	case(1):
		chooseItemToAdd(1);
		break;
	case(2):
		chooseItemToAdd(2);
		break;
	case(3):
		chooseItemToAdd(3);
		break;
	case(4):
		chooseItemToAdd(4);
		break;
	case(5):
		chooseItemToAdd(5);
		break;
	case(6):
		chooseItemToAdd(6);
		break;
	case(7):
		chooseItemToAdd(7);
		break;
	case(8):
		chooseItemToAdd(8);
		break;
	case(9):
		chooseItemToAdd(9);
		break;
	case(10):
		chooseItemToAdd(10);
		break;
	case(11):
		chooseItemToAdd(11);
		break;
	case(12):
		chooseItemToAdd(12);
		break;
	case(13):
		chooseItemToAdd(13);
		break;
	default:
		cout << "Invalid Input" << endl;
		chooseSetToAdd();
	}
}

void chooseSetToRemove()
{
	int input;
		cout << "Which set would you like to remove from? (Use the setID, starting from 0.)" << endl;
		cin >> input;

		switch(input)
		{
		case(0):
			chooseItemToRemove(0);
			break;
		case(1):
			chooseItemToRemove(1);
			break;
		case(2):
			chooseItemToRemove(2);
			break;
		case(3):
			chooseItemToRemove(3);
			break;
		case(4):
			chooseItemToRemove(4);
			break;
		case(5):
			chooseItemToRemove(5);
			break;
		case(6):
			chooseItemToRemove(6);
			break;
		case(7):
			chooseItemToRemove(7);
			break;
		case(8):
			chooseItemToRemove(8);
			break;
		case(9):
			chooseItemToRemove(9);
			break;
		case(10):
			chooseItemToRemove(10);
			break;
		case(11):
			chooseItemToRemove(11);
			break;
		case(12):
			chooseItemToRemove(12);
			break;
		case(13):
			chooseItemToRemove(13);
			break;
		default:
			cout << "Invalid Input" << endl;
			chooseSetToRemove();
		}
}

void chooseItemToAdd(int setID)
{
	int input;
	cout << "What item would you like to add? (Use the itemID, starting with 0)" << endl;
	cin >> input;

	switch(input)
	{
	case(0):
		chooseAmountToAdd(setID, 0);
		break;
	case(1):
		chooseAmountToAdd(setID, 1);
		break;
	case(2):
		chooseAmountToAdd(setID, 2);
		break;
	case(3):
		chooseAmountToAdd(setID, 3);
		break;
	case(4):
		chooseAmountToAdd(setID, 4);
		break;
	case(5):
		chooseAmountToAdd(setID, 5);
		break;
	default:
		cout << "Invalid Input" << endl;
		chooseItemToAdd(setID);
	}
}

void chooseItemToRemove(int setID)
{
	int input;
		cout << "What item would you like to remove? (Use the itemID, starting with 0)" << endl;
		cin >> input;

		switch(input)
		{
		case(0):
			chooseAmountToRemove(setID, 0);
			break;
		case(1):
			chooseAmountToRemove(setID, 1);
			break;
		case(2):
			chooseAmountToRemove(setID, 2);
			break;
		case(3):
			chooseAmountToRemove(setID, 3);
			break;
		case(4):
			chooseAmountToRemove(setID, 4);
			break;
		case(5):
			chooseAmountToRemove(setID, 5);
			break;
		default:
			cout << "Invalid Input" << endl;
			chooseItemToRemove(setID);
		}
}

void chooseAmountToAdd(int setID, int itemID)
{
	int input;
	cout << "How many would you like to add?" << endl;
	cin >> input;

	switch(setID)
	{
	case(0):
		AlphaBridge.addItemToSet(itemID, input);
		break;
	case(1):
		Banshee.addItemToSet(itemID, input);
		break;
	case(2):
		D3FNC.addItemToSet(itemID, input);
		break;
	case(3):
		DeadEYE.addItemToSet(itemID, input);
		break;
	case(4):
		FinalMeasure.addItemToSet(itemID, input);
		break;
	case(5):
		FireCrest.addItemToSet(itemID, input);
		break;
	case(6):
		HuntersFaith.addItemToSet(itemID, input);
		break;
	case(7):
		LoneStar.addItemToSet(itemID, input);
		break;
	case(8):
		Nomad.addItemToSet(itemID, input);
		break;
	case(9):
		Predator.addItemToSet(itemID, input);
		break;
	case(10):
		Reclaimer.addItemToSet(itemID, input);
		break;
	case(11):
		SentrysCall.addItemToSet(itemID, input);
		break;
	case(12):
		Striker.addItemToSet(itemID, input);
		break;
	case(13):
		Tactician.addItemToSet(itemID, input);
		break;
	default:
		cout << "Invalid Input" << endl;
		chooseAmountToAdd(setID, itemID);
	}
}

void chooseAmountToRemove(int setID, int itemID)
{
	int input;
	cout << "How many would you like to remove?" << endl;
	cin >> input;

	switch(setID)
	{
	case(0):
		AlphaBridge.removeItemFromSet(itemID, input);
		break;
	case(1):
		Banshee.removeItemFromSet(itemID, input);
		break;
	case(2):
		D3FNC.removeItemFromSet(itemID, input);
		break;
	case(3):
		DeadEYE.removeItemFromSet(itemID, input);
		break;
	case(4):
		FinalMeasure.removeItemFromSet(itemID, input);
		break;
	case(5):
		FireCrest.removeItemFromSet(itemID, input);
		break;
	case(6):
		HuntersFaith.removeItemFromSet(itemID, input);
		break;
	case(7):
		LoneStar.removeItemFromSet(itemID, input);
		break;
	case(8):
		Nomad.removeItemFromSet(itemID, input);
		break;
	case(9):
		Predator.removeItemFromSet(itemID, input);
		break;
	case(10):
		Reclaimer.removeItemFromSet(itemID, input);
		break;
	case(11):
		SentrysCall.removeItemFromSet(itemID, input);
		break;
	case(12):
		Striker.removeItemFromSet(itemID, input);
		break;
	case(13):
		Tactician.removeItemFromSet(itemID, input);
		break;
	default:
		cout << "Invalid Input" << endl;
		chooseAmountToRemove(setID, itemID);
	}
}

void addOrRemove()
{
	int input = 0;
		cout << "Enter \"1\" to add an item to the list. Or enter \"2\" to remove an item." << endl;
		cin >> input;

		switch(input)
		{
		case(1):
			chooseSetToAdd();
			break;
		case(2):
			chooseSetToRemove();
			break;
		}
}












