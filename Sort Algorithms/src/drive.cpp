#include <iostream>
#include "sorts.h"

/*
*	File to test algotithms
*	Compile method:
*	g++ -Wall -std=c++11 -I include/ src/drive.cpp -o drive*
*/

using namespace std;

//Function to compare two int values
int compareIntCrescent(const int & a, const int & b){
	return a-b;
}

int main(){
	
	int V[] = {-1, 10, 5, 3, 2, 90, 100, 15, 25, 11};
	int Z[] = {-1, 10, 5, 3, 2, 90, 100, 15, 25, 11};
	int sizeV = sizeof(V)/sizeof(int);
	int sizeZ = sizeof(Z)/sizeof(int);

	cout<<">>Before insertionSort : V";
	SortAlgorithms<int>::toString(V, sizeV);

	cout<<">>Before bubbleSort    : Z";
	SortAlgorithms<int>::toString(Z, sizeZ);

	int start = 0;
	int end = sizeof(V)/sizeof(int) - 1;		
	SortAlgorithms<int>::insertionSort(V, start, end, compareIntCrescent);
	SortAlgorithms<int>::bubbleSort(Z, start, end, compareIntCrescent);

	cout<<">>After  insertionSort : V";
	SortAlgorithms<int>::toString(V, sizeV);
	cout<<">>After  bubbleSort    : Z";
	SortAlgorithms<int>::toString(Z, sizeZ);
	
	return 0;
}