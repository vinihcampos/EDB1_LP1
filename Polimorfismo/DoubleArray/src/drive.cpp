#include <iostream>
#include "doubleArray.cpp"

using namespace std;

int main(){
	
	int size = 10;
	int * A = new int[size];
	for(int i = 0; i < size; ++i){
		A[i] = i+1;
	}
	
	cout<<"Array: [ ";
	for(int i = 0; i < size; ++i){
		cout<<A[i]<<" ";
	}
	cout<<"]"<<endl;
	
	doubleArray(A, size);

	cout<<"Array: [ ";
	for(int i = 0; i < size; ++i){
		cout<<A[i]<<" ";
	}
	cout<<"]"<<endl;

	return 0;
}