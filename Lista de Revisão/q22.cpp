#include <iostream>

int main(){
    int n;
    std::cout<<">>Digite um valor para N: ";
    std::cin>>n;

    int matriz[n][n];
    int iterador = 1;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            matriz[i][j] = iterador;
            ++iterador;
        }
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            std::cout<<matriz[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}
