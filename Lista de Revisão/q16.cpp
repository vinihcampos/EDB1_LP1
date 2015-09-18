#include <iostream>

int binary_search(int *v, int n, int x){
	int e = -1;
	int d = n;
	int m = (d+e)/2;

	while(e < d-1){
		if(v[m] == x){
			return m;
		}else if(v[m] > x){
			d = m;
			m = (d+e)/2;
		}else{
			e = m;
			m = (d+e)/2;
		}
	}

	return d;
}

void insert(int *v, int tam, int valor){
	int pos = binary_search(v,tam-1,valor);

	for(int i = tam; i > pos; --i){
		v[i] = v[i-1];
	}
	v[pos] = valor;
}


int main(){
	
	int v[30] = {4,5,96,10,6,45,36,52,12,32,67,89,10,65,72,50,67,51,89,91};
	
	//Bubble sort 
	for(int i = 0; i < 20; ++i){
		for(int j = i+1; j < 20; ++j){
			if(v[j] < v[i]){
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}

	for(int i = 1; i <= 10; ++i){
		int x;
		std::cin>>x;
		insert(v, 20 + i, x);
	}

	for(int i = 0; i < 30; ++i){
		std::cout<<v[i]<<" ";
	}
	std::cout<<std::endl;

	return 0;
}