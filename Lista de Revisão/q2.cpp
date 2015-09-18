#include <iostream>

int main(){
	
	int x;
	int interval[4] = {0};

	while(std::cin>>x){
		if(x > 0){
			if(x < 25) interval[0]++;
			else if(x < 50) interval[1]++;
			else if(x < 75) interval[2]++;
			else if(x <= 100) interval[3]++;
		}
	}

	std::cout<<"Intervalo [0,   25): "<<interval[0]<<std::endl;
	std::cout<<"Intervalo [25,  50): "<<interval[1]<<std::endl;
	std::cout<<"Intervalo [50,  75): "<<interval[2]<<std::endl;
	std::cout<<"Intervalo [75, 100]: "<<interval[3]<<std::endl;

	int qntd = interval[0] + interval[1] + interval[2] + interval[3];

	std::cout<<">>>>>>Porcentagens<<<<<<"<<std::endl;
	std::cout<<"Intervalo [0,   25): "<<interval[0]*100.0/qntd<<"%"<<std::endl;
	std::cout<<"Intervalo [25,  50): "<<interval[1]*100.0/qntd<<"%"<<std::endl;
	std::cout<<"Intervalo [50,  75): "<<interval[2]*100.0/qntd<<"%"<<std::endl;
	std::cout<<"Intervalo [75, 100]: "<<interval[3]*100.0/qntd<<"%"<<std::endl;

	return 0;
}