#include <iostream>

void nesimoFib(int n){
	int anterior = 0;
	int atual = 1;
	int futuro;
	for(int i = 0; i < n; ++i){
		std::cout<<atual<<" ";
		futuro = anterior + atual;
		anterior = atual;
		atual = futuro;
	}
	std::cout<<std::endl;
}

void fibMenor(int l){
	int anterior = 0;
	int atual = 1;
	int futuro;
	for(int i = 0; atual < l; ++i){
		std::cout<<atual<<" ";
		futuro = anterior + atual;
		anterior = atual;
		atual = futuro;
	}
	std::cout<<std::endl;
}

void piramideFib(int h){
	int soma = 1;
	for(int i = 1; i <= h && i >= 0; i += soma){
		for(int j = i; j < h; ++j)
			std::cout<<"  ";
		nesimoFib(i);
		if(i == h)
			soma *= -1;
	}
}

int main(){
	piramideFib(7);
	return 0;
}