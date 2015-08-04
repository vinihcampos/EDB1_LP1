#include <iostream>

void swap(int *a, int *b){
	int aux = *a;
	*a = *b;
	*b = aux;
}

void shiftN(int *n1, int *n2, int *n3, int *n4, int d){
	int vet[] = {*n1, *n2, *n3, *n4};
	
	int i = 0;
	int aux = vet[i];
	bool voltou = false;

	while(true){
		swap(&vet[(i+d)%4], &aux);
		i = (i+d)%4;

		if(i == 0)
			voltou = true;
		else if(voltou)
			break;
	}
	*n1 = vet[0];
	*n2 = vet[1];
	*n3 = vet[2];
	*n4 = vet[3];
	
	for(int i = 0; i < 4; ++i)
		std::cout<<vet[i]<<" ";
		std::cout<<std::endl;
}

int main(){
	
	int n1 = 1;
	int n2 = 2;
	int n3 = 3;
	int n4 = 4;

	shiftN(&n1, &n2, &n3, &n4, 9);

	return 0;
}