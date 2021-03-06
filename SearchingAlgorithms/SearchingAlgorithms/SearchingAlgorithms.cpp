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

//binary search -- COmplexity O(logn) -iterrative

int binarySearch(int arr[], int arrayLength, int toFound) {
	
	int low = 0;
	int high = arrayLength - 1;

	while (low <= high) {
		int middle = (low + high) / 2;

		if (arr[middle] == toFound)
			return middle;
		else if (arr[middle] > toFound)
			high = middle - 1;
		else
			low = middle + 1;
	}
	return -1;
}

// binary search -- recursive

int binarySearch2(int arr[], int low, int high, int toFound) {
	
	if (high >= low) {
		int mid = (high + low) / 2;

		if (arr[mid] == toFound)
			return mid;
		else if (arr[mid] > toFound)
			return binarySearch2(arr, low, mid - 1, toFound);
		else
			return binarySearch2(arr, mid + 1, high, toFound);
	}

	return -1;
}


int main()
{
	//linear search
	int linearArr[] = {15, 43, 29 ,23, 50};
	int linearArrayLength = sizeof(linearArr) / sizeof(linearArr[0]);
	int linearToFound = 100;
	int linearResult = linearSearch(linearArr, linearArrayLength, linearToFound);
	
	if (linearResult == -1) {
		cout << "The number is not in the array";

	}
	else {
		cout << "The number was found on the position: " << linearResult << endl;
	}
	cout << endl;
    //binarySearch
	int binaryArr[] = { 5, 28, 56, 67, 120, 415 };
	int binaryArrayLength = sizeof(binaryArr) / sizeof(binaryArr[0]);
	int low = 0;
	int high = binaryArrayLength - 1;
	int binaryToFound = 67;
	//int binaryResult = binarySearch(binaryArr, binaryArrayLength, binaryToFound);
	int binaryResult2 = binarySearch2(binaryArr, low, high, binaryToFound);
	if (binaryResult2 == -1) {
		cout << "Value not found";
	}
	else {
		cout << "Value found on index: " << binaryResult2 << endl;
	}
	
	
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
