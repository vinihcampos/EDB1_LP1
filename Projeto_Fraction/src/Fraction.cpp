/**
* Uma classe para simular uma fracao
* */

#include "Fraction.h"

void FractionType::Initialize( int numerator, int denominator ){
	num = numerator;
	denom = denominator;
}

int FractionType::GetNumerator(){
	return num;
}

int FractionType::GetDenominator(){
	return denom;
}

bool FractionType::IsZero(){
	return num * denom == 0;
}

bool FractionType::IsNotProper(){
	return num <= denom;
}

int FractionType::ConvertToProper(){
	int value = num/denom;
	num -= denom * value;

	return value;
}
