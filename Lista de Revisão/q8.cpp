#include <iostream>
#include <cstdlib>

int main(){
    int *C = (int*)::malloc(20*sizeof(int));//Store 20 inputs from user
    int aux[20];//Store only the positive numbers from array C
    int qntd = 0; //Store the quantity of null and negative values

    for(int i = 0; i < 20; ++i){
        std::cout<<">>Digite o valor para a posicao "<<i+1<<": ";
        std::cin>>C[i];
        //Check if the array on position i
        //If it's positive, the array aux will be incremented with C[i]'s value
        if(C[i] > 0){
            aux[qntd] = C[i];
            qntd++;
        }
    }

    std::cout<<">>Vetor sem modificado: ";
    for(int i = 0; i < 20; ++i){
        std::cout<<C[i]<<" ";
    }

    //Use the function malloc to resize array C
    C = (int*)::malloc(qntd*sizeof(int));
    std::cout<<"\n>>Vetor com modificado: ";
    for(int i = 0; i < qntd; ++i){
        C[i] = aux[i];
        std::cout<<C[i]<<" ";
    }

    return 0;
}
