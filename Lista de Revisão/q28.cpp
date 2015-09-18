#include <iostream>
#include <limits.h>

int main(){
    int max_linha = INT_MIN;
    int max_geral = INT_MIN;
    int min_linha = INT_MAX;
    int min_geral = INT_MAX;

    int tam = 10;
    int m[tam][tam];
    for(int i = 0; i < tam; ++i){
        for(int j = 0; j < tam; ++j){
            std::cout<<"Digite um valor: ";
            std::cin>>m[i][j];
        }
    }

    for(int i = 0; i < tam; ++i){
        max_linha = INT_MIN;
        min_linha = INT_MAX;
        for(int j = 0; j < tam; ++j){
            if(m[i][j] > max_linha)
                max_linha = m[i][j];
            if(m[i][j] < min_linha)
                min_linha = m[i][j];
        }
        if(max_linha > max_geral){
            max_geral = max_linha;
            min_geral = min_linha;
        }
    }

    std::cout<<min_geral<<std::endl;

    return 0;
}
