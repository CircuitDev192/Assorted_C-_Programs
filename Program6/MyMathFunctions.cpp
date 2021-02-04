#include <iostream>
#include <string>
#include <cmath>
#include "MyMathFunctions.h"
using namespace std;



int getPosInt(string msg){
	int num = 0;

	do{
	cout << msg << endl;
	cin >> num;
	}while(num<=0);

	return num;
}

double areaOfCircle(int r){
	return PI * pow(r,2);
}


double volOfSphere(int r){
	return (4/3.0) * PI * pow(r,3);
}
