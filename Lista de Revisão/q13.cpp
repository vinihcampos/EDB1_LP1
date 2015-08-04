#include <iostream>

int main(){
	
	float xi, yi; //Variables to store coordinates from bellow point
	float xs, ys; //Variables to store coordinates from upper point
	float xp, yp; //Variables to store coordinates from user input

	std::cout<<">>Digite os valores para a coordenada (x,y) inferior esquerda: "<<std::endl;
	std::cin>>xi>>yi;
	std::cout<<">>Digite os valores para a coordenada (x,y) superior direita: "<<std::endl;
	std::cin>>xs>>ys;
	std::cout<<">>Digite os valores para a coordenada (x,y) que deseja verificar: "<<std::endl;
	std::cin>>xp>>yp;

	if(xi == xs && yi == ys){
		std::cout<<">>As coordenadas dos pontos inferior e superior sao iguais, nao correspondendo a um retangulo."<<std::endl;
	}else{
		if(xi > xs){
			int aux = xi;
			xi = xs;
			xs = aux;

			aux = yi;
			yi = ys;
			ys = aux;
		}

		if(xi == xp || xs == xp || yi == yp || ys == yp)
			std::cout<<">>A coordenada ("<<xp<<","<<yi<<") esta na borda do retangulo."<<std::endl;
		else if(xp >= xi && xp <= xs && yp >= yi && yp <= ys)
			std::cout<<">>A coordenada ("<<xp<<","<<yi<<") esta dentro do retangulo."<<std::endl;
		else
			std::cout<<">>A coordenada ("<<xp<<","<<yi<<") esta fora do retangulo."<<std::endl;
	}
	

	return 0;
}