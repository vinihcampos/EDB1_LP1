#include <iostream>

int main(){
	
	int A[20];
	int tamanho_vetor = 20;

	for(int i = 0 ; i < 20; std::cin>>A[i], ++i);

	std::cout<<">>Vetor invertido: ";
	for(int i = 0 ; i < 10; ++i){
		int aux = A[i];
		A[i] = A[tamanho_vetor-i-1];
		A[tamanho_vetor-i-1] = aux;
	}

	for(int i = 0 ; i < 20; std::cout<<A[i]<<" ", ++i);

	return 0;
}