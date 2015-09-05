
/*
Forma de compilação
g++ -Wall -std=c++11 -I include/ src/b_search.cpp src/drive.cpp -o bin/b_search
*/ 

#include <iostream>
#include "swap.h"

using namespace std;

int main(){
	
	int int_a = 25;
	int int_b = 10;
	swap(int_a, int_b);

	cout<<">>INT - A: "<<int_a<<endl;
	cout<<">>INT - B: "<<int_b<<endl;

	double double_a = 13.95;
	double double_b = 10.978;
	swap(double_a, double_b);

	cout<<">>DOUBLE - A: "<<double_a<<endl;
	cout<<">>DOUBLE - B: "<<double_b<<endl;

	return 0;
}