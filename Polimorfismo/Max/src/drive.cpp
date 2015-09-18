
/*
Forma de compilação
g++ -Wall -std=c++11 -I include/ src/max.cpp src/drive.cpp -o bin/max

Estou tendo probelmas na inclusão do max.h, por isso que para funcionar tenho
que usar o max.cpp
*/ 

#include <iostream>
#include "max.cpp"

using namespace std;

int compareInt(const int & a, const int & b){
	return a == b ? 0 : a > b ? -1 : 1;
}

int compareDouble(const double & a, const double & b){
	return a == b ? 0 : a > b ? -1 : 1;
}

int compareString(const string & a, const string & b){
	return a == b ? 0 : a > b ? -1 : 1;
}

int main(){

	int (*compInt)(const int &,const int &) = compareInt;
	int (*compDouble)(const double &, const double &) = compareDouble;
	int (*compString)(const string &,const string &) = compareString;

	int intA = 200;
	int intB = 100;

	double doubleA = 200.5;
	double doubleB = 100.3;

	string stringA = "Vinicius";
	string stringB = "Campos";

	//cout<<">>Max int   : "<<Max(intA, intB, compInt)<<endl;
	//cout<<">>Max double: "<<Max(doubleA, doubleB, compDouble)<<endl;
	//cout<<">>Max string: "<<Max(stringA, stringB, compString)<<endl;

	return 0;
}