#include <iostream>

int main(){
	int x; //Variable to store each input from user
	int qntd = 0; //Variable to store the quantity of negative inputs

	for(int i = 0; i < 5; ++i){
		std::cin>>x;

		//Check if the input is negative
		if(x < 0) qntd++;
	}

	//Show the quantity of negative inputs 
	std::cout<<"Quantidade de valores negativos digitados: "<<qntd<<std::endl;
	return 0;
}