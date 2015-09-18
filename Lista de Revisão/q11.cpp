#include <iostream>

int main(){
    int a[5] = {0}; //Use to store even values
    int b[5] = {0}; //Use to store odd values
    int x; //Use to store each input from user
    int indiceA = 0;
    int indiceB = 0;

    for(int i = 0; i < 30; ++i){
        std::cout<<"Digite um valor: ";
        std::cin>>x;

        if(x%2){
            b[indiceB] = x;
            indiceB++;
            if(indiceB == 5){
                std::cout<<"\nVetor impar: ";
                for(int j = 0; j < 5; ++j) {
                    std::cout<<b[j]<<" ";
                    b[j] = 0;
                }
                std::cout<<"\n";
                indiceB = 0;
            }
        }else{
            a[indiceA] = x;
            indiceA++;
            if(indiceA == 5){
                std::cout<<"\nVetor par: ";
                for(int j = 0; j < 5; ++j){
                    std::cout<<a[j]<<" ";
                    a[j] = 0;
                }
                std::cout<<"\n";

                indiceA = 0;
            }
        }
    }

    std::cout<<"\nVetor par: ";
    for(int i = 0; i < 5; ++i){
        if(a[i]) std::cout<<a[i]<<" ";
        else {
            std::cout<<"\n";
            break;
        }
    }

    std::cout<<"\nVetor impar: ";
    for(int i = 0; i < 5; ++i){
        if(b[i]) std::cout<<b[i]<<" ";
        else {
            std::cout<<"\n";
            break;
        }
    }

    return 0;
}
