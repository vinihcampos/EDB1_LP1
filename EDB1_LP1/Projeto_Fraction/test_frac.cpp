#include <iostream>
#include "Fraction.h"

using namespace std;

void printFraction(FractionType f, int i = 0){
	if(i == 0)
		cout<<"Fraction: " << f.GetNumerator() << "/" << f.GetDenominator()<<endl; 
	else
		cout<<"Fraction: " << i << " + " << f.GetNumerator() << "/" << f.GetDenominator()<<endl;
}

int main ()
{

	FractionType f;
	f.Initialize(10, 3);
	printFraction(f);

	int value = f.ConvertToProper();
	printFraction(f, value);

    return 0;
}
