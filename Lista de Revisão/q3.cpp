#include <iostream>

int main(){

	int m, n;

	std::cout<<">>Digite valor para m,n: ";
	while(std::cin>>m>>n){
		if(m == n && m == 0) break;
		else{
            int total = 0;
			for(int i = 0; i < n; ++i){
				total += m + i;
			}
			std::cout<<"Soma dos pares de "<<m<<" ate "<<m + n - 1<<": "<<total<<std::endl;
		}
		std::cout<<">>Digite valor para m,n: ";
	}

	return 0;
}
