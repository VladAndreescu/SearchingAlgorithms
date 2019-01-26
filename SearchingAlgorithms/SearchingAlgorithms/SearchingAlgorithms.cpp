// SearchingAlgorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

//linear search -- Complexity O(n)
int linearSearch(int arr[], int arrayLength, int toFound) {
	for (int i = 0; i <= arrayLength; i++) {
		if (arr[i] == toFound) {
			return i;
		}

	}
	return -1;
}
//--------------------------------------

int binarySearch()
int main()
{
	//linear search
	int arr[] = {15, 43, 29 ,23, 50};
	int arrayLength = sizeof(arr) / sizeof(arr[0]);
	int toFound = 100;
	int result = linearSearch(arr, arrayLength, toFound);
	
	if (result == -1) {
		cout << "The number is not in the array";

	}
	else {
		cout << "The number was found on the position: " << result+1 << endl;
	}
    //-----------------------------------------------------------------------
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
