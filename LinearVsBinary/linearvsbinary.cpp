#include <iostream>
using namespace std;

void linearSearch(int array[], int size, int searchValue){

	int count = 0;

	for(int i = 0; i < size; i++){
		count++;
		if(searchValue == array[i]){
			break;
		}
	}

	cout << "Linear Search Comparisons: " << count << endl;
}

void binarySearch(int array[], int size, int searchValue){

	int low = 0;
	int high = size - 1;
	int mid;
	int count = 0;

	while(low <= high){

		mid = (low+high)/2;
		count++;

		if(searchValue == array[mid]){
			break;
		} else if(searchValue > array[mid]) {
			low = mid + 1;
		} else {
			high = mid - 1;
		}
	}

	cout << "Binary Search Comparisons: " << count << endl;
}

void populateArray(int array[], int size){
	for(int i = 1;i <= size; i++){
		array[i - 1] = i;
	}
}

int main(){
	int size;
	int userValue;
	char input;

	do{
		cout << "Enter an int for the size of the array: " << endl;
		cin >> size;

		int a[size];

		cout << "Enter an integer between 1 and " << size << " to search for in the array." << endl;
		cin >> userValue;

		populateArray(a,size);

		linearSearch(a, size, userValue);
		binarySearch(a, size, userValue);

		cout << "Press 'y' and enter to run again or just enter to quit";
		cin.sync();
		cin.get(input);

	}while(input == 'y');

	return 0;
}
























