/*
Forma de compilação
g++ -Wall -std=c++11 -I include/ src/b_search.cpp src/drive.cpp -o bin/b_search

Estou tendo probelmas na inclusão do b_searh.h, por isso que para funcionar tenho
que usar o b_search.cpp
*/ 

#include <iostream>
#include "b_search.cpp"

using namespace std;

int compInt(const int & a, const int & b){
	return a == b ? 0 : a < b ? -1 : 1;
}

int compDouble(const double & a, const double & b){
	return a == b ? 0 : a < b ? -1 : 1;
}

int compString(const string & a, const string & b){
	return a == b ? 0 : a < b ? -1 : 1;
}

template <typename Obj>
int compaGeneral(const Obj & a, const Obj & b){
	return a == b ? 0 : a < b ? -1 : 1;	
}

int main(){
	
	int inteiros[] = {1,10,11,12,34,35,37,45,67,85};
	int (*cInt)(const int &, const int &) = compaGeneral;
	int valueInt = -10;
	cout<<"INT - Binary Search: "<<b_search(inteiros, 0, 9, valueInt, cInt)<<endl;

	double reais[] = {1.5,10.9,11.12,12.56,34.12,35.353,37.214,45.766,67.53,85.6543};
	int (*cDouble)(const double &, const double &) = compaGeneral;
	double valueDouble = 34.12;
	cout<<"Double - Binary Search: "<<b_search(reais, 0, 9, valueDouble, cDouble)<<endl;

	string palavras[] = {"Avengers", "Captain America", "Demolisher", "Guardians of the Galaxy", "Huck",
	     				 "Iron Man", "Spider-Man",      "Thor",       "Wolverine",               "X-Men"};
	int (*cString)(const string &, const string &) = compaGeneral;
	string valueString = "Huck";
	cout<<"String - Binary Search: "<<b_search(palavras, 0, 9, valueString, cString)<<endl;

	return 0;

}