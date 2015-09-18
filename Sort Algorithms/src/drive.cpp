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

//Function to compare
struct MyLess
{
	bool operator()(int & a, int & b){
		return a < b;
	}
}myLess;

int main(){
	
	int V[] = {-1, 10, 5, 3, 2, 90, 100, 15, 25, 11};
	int size = sizeof(V)/sizeof(int);

	cout<<">>Before sort :"<<endl;
	SortAlgorithms<int,MyLess>::toString(V, size);

	//int start = 0;
	//int end = sizeof(V)/sizeof(int) - 1;		
	//SortAlgorithms<int>::insertionSort(V, start, end, compareIntCrescent);

	SortAlgorithms<int,MyLess>::insertionSort(std::begin(V), std::end(V), myLess);

	cout<<">>After sort: "<<endl;
	SortAlgorithms<int,MyLess>::toString(V, size);
	
	return 0;
}