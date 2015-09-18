#include <iostream>
#include <cmath>

int raizes (float a, float b, float c, float * x1, float * x2);

int main(){

    float x1,x2;
    std::cout<<">>Resultado da funcao: "<<raizes(1, 3, 1, &x1, &x2)<<std::endl;
    std::cout<<">>Raiz 1: "<<x1<<std::endl;
    std::cout<<">>Raiz 2: "<<x2<<std::endl;
    return 0;
}

int raizes (float a, float b, float c, float * x1, float * x2){
    float delta = std::pow(b,2) - 4*a*c;
    if(delta < 0){
        *x1 = 0;
        *x2 = 0;
        return 0;
    }else{
        *x1 = ((-1)*b + std::sqrt(delta))/(2*a);
        *x2 = ((-1)*b - std::sqrt(delta))/(2*a);
        if(*x1 == *x2) return 1;
        else return 2;
    }
}
