#include <iostream>

int main(){
    int B[20];//Store 20 inputs from user


    for(int i = 0; i < 20; ++i){
        std::cout<<">>Digite o valor para a posicao "<<i+1<<": ";
        std::cin>>B[i];
    }

    std::cout<<">>Vetor sem modificado: ";
    for(int i = 0; i < 20; ++i){
        std::cout<<B[i]<<" ";
    }

    std::cout<<"\n>>Vetor com modificado: ";
    for(int i = 1; i <= 20; i += 2){
        //Change the position of array (B[i]) with its previous(B[i-1]).
        int aux = B[i];
        B[i] = B[i-1];
        B[i-1] = aux;
        std::cout<<B[i-1]<<" "<<B[i]<<" ";
    }

    return 0;
}
