#include <iostream>

void inverteVetor(int *piVet, const int tam){
	for(int i = 0; i < tam/2; ++i){
		int aux = piVet[i];
		piVet[i] = piVet[tam-i-1];
		piVet[tam-i-1] = aux;
	}
}