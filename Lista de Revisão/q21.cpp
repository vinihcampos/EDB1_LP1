#include <iostream>
#include <cmath>
#include <string>

int abs(int x){
	return x > 0 ? x : x*(-1);
}

void avalia_poli(int * polinomio, float vx){

	std::cout<<"f(x)=";
	float resultado = 0.0;
	bool primeiro = true;
	for(int i = 0; i < 8; i+= 2){
		if(polinomio[i] != 0){
			if(primeiro)
				primeiro = false;
			else{
				if(polinomio[i] > 0)
					std::cout<<" + ";
				else
					std::cout<<" - ";
			}
			std::cout<<abs(polinomio[i]);
			if(polinomio[i+1] > 0){
				std::cout<<"x";
				if(polinomio[i+1] != 1)
					std::cout<<"^"<<polinomio[i+1];
			}
		}
		resultado += polinomio[i]*pow(vx,polinomio[i+1]);
	}

	std::cout<<", f("<<vx<<") = "<<resultado;
	std::cout<<std::endl;
	std::cout<<vx;
}

int main(){

	int v[] = {4, 3, -2, 2, 5, 1, 10, 0};
	float vx = 5.0;
	avalia_poli(v, vx);

	return 0;
}