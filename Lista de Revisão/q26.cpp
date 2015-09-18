#include <iostream>

///Adotei como dimensão o tamanho da linha
float somaTrianguloInferior  ( const float ** mat, int n  ){
    float soma = 0;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j)
            if(i > j)
                soma += *((*mat) + i * n + j);
    return soma;
}

int main(){

    float mat[] = { 1, 2, 3, 4,
                    5, 6, 7, 8,
                    9,10,11,12,
                   13,14,15,16};

    const float *matriz = mat;

    std::cout<< somaTrianguloInferior(&matriz,4)<<std::endl;

    return 0;
}
