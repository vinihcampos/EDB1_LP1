#include <iostream>
#include <cfloat>

int main(){
	
	float Vet[20];
	float min_value = FLT_MAX;
	int indice = 0;
	for(int i = 0; i < 20; ++i){
		std::cin>>Vet[i];		
	}

	std::cout<<">>Arranjo: ";
	for(int i = 0; i < 20; std::cout<<Vet[i]<<" ", ++i){
		if(Vet[i] < min_value){
			min_value = Vet[i];
			indice = i;
		}
	}

	std::cout<<"\nMenor valor digitado pelo usuario: "<<min_value<<std::endl;
	std::cout<<"Índice do menor valor digitado pelo usuario: "<<indice<<std::endl;

	return 0;
}