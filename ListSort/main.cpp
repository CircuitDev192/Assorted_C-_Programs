/*
*   Basic sorting algorithm
*/

#include <iostream>

void sortArr(int);

int main() {

    int size;
    std::cout << "How many elements are in the array? " << std::endl;
    std::cin >> size;
    sortArr(size);

    return 0;
}

void sortArr(int size)
{

    double *arr = new double[size];

    for(int x = 0; x < size; x++)
    {
        std::cout << "Enter value #" << x+1 << ": ";
        std::cin >> arr[x];
    }

    for(int i = 0; i<size-1; i++)
    {
        int arrSwap = i;

        for(int j = i+1; j < size; j++)
        {
            if(arr[j] < arr[arrSwap])
            {
                arrSwap = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[arrSwap];
        arr[arrSwap] = temp;
    }

    std::cout << "The sorted array is: " << std::endl;
    for(int i = 0; i < size; i++)
    {
        std::cout << arr[i];
        if(i<size-1)
        {
            std::cout << ", ";
        }
    }
    delete[] arr;
}