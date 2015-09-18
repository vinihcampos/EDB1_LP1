#include <iostream>

int maiores (const int* const vet, const int n, const int x);

int main(){
	
	const int vet[] = {10, 9, -7, 70, 60, 53, 96, 38, 12, 22};
	int n = sizeof(vet) / sizeof(int);
	int x = 23;

	std::cout<<">>Qtd de numeros maiores que "<<x<<" eh: ";
	std::cout<<maiores(vet, n, x)<<std::endl; 

	return 0;
}

int maiores (const int* const vet, const int n, const int x){

	int count = 0;

	for(int  i = 0; i < n; ++i){
		if(vet[i] > x) 
			++count;
	}

	return count;
}