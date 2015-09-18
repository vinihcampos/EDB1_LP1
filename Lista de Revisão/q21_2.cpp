#include <iostream>

int main(){
    float matriz[5][5];
    float linha4 = 0;
    float coluna2 = 0;
    float diagonalPrincipal = 0;
    float diagonalSecundaria = 0;
    float todosElementos = 0;

    for(int i = 0; i < 5; ++i){
        for(int j = 0; j < 5; ++j){
            std::cout<<">>Digite um valor: ";
            std::cin>>matriz[i][j];
            //Somar todos os elementos da matriz
            todosElementos += matriz[i][j];
            //Somar todos os elementos da diagonal principal
            if(i == j) diagonalPrincipal += matriz[i][j];
            //Somar todos os elementos da diagonal secundaria
            if(i + j == 4) diagonalSecundaria += matriz[i][j];
            //Somar todos os elementos da linha 4
            if(i == 3) linha4 += matriz[i][j];
            //Somar todos os elementos da coluna 2
            if(j == 1) coluna2 += matriz[i][j];
        }
    }

    std::cout<<"a) Soma da linha 4 de M: "<<linha4<<std::endl;
    std::cout<<"b) Soma da coluna 2 de M: "<<coluna2<<std::endl;
    std::cout<<"c) Soma da diagonal principal de M: "<<diagonalPrincipal<<std::endl;
    std::cout<<"d) Soma da diagonal secundaria de M: "<<diagonalSecundaria<<std::endl;
    std::cout<<"e) Soma de todos os elementos da matriz: "<<todosElementos<<std::endl;

    return 0;
}
