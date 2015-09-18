#include <iostream>

void swap(int *a, int *b){
	int aux = *a;
	*a = *b;
	*b = aux;
}

void ordena3(int *a, int *b, int *c, bool ordem){
	if(ordem){
		if(*a > *b) swap(a,b);
		if(*b > *c) swap(b,c);
		if(*a > *b) swap(a,b);
	}else{
		if(*b > *a) swap(a,b);
		if(*c > *b) swap(b,c);
		if(*b > *a) swap(a,b);
	}
}

bool ehPrimo(int x){
	int count = 0;
	if(x < 2) return count;
	for(int i = 2; i*i <= x; ++i ){
		if(x % i == 0){
			count = 1;
			break;
		}
	}

	return !count;
}

bool ehPar(int x){
	return x % 2 == 0 ? true : false;
}

bool ehAmigo(int x, int y){
	int somaX = 0;
	int somaY = 0;

	for(int i = x/2; i > 1; --i){
		if(x % i == 0) somaX += i;
	}

	for(int i = y/2; i > 1; --i){
		if(y % i == 0) somaY += i;
	}

	std::cout<<somaX<<" "<<somaY<<"\n";
	return somaX == somaY;
}

int mdc_aux(int x, int y){
	if(y == 0)
		return x;
	else{
		return mdc_aux(y, x%y);
	}
}

int mdc(int a, int b, int c){
	return mdc_aux(mdc_aux(a,b),c);
}

int mmc(int a, int b, int c){
	int x = (a*b)/mdc_aux(a,b);
	return (x*c)/mdc_aux(x,c);
}

long long fatorial(int x){
	long long fat = 1;
	for(int i = x; i > 0; --i)
		fat *= i; 

	return fat;
}

