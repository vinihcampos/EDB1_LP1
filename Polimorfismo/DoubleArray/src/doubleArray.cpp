#include <iostream>
#include "doubleArray.h"

using namespace std;

template<typename T>
void doubleArray(T *& A, int & currentSize){
	int * P = new int [2 * currentSize];
	
	for(auto i(0); i < currentSize * 2; ++i){
		if(i < currentSize)
			P[i] = A[i];
		else 
			P[i] = 0;
	}

	delete[] A;
	A = P;
	currentSize *= 2;
}