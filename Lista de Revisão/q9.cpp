#include <iostream>
#include <cmath>

int main(){

    float x1, y1;//Store coordinates from point 1
    float x2, y2;//Store coordinates from point 2

    std::cout<<">>Digite as coordenas do ponto1 separado por espaco: ";
    std::cin>>x1>>y1;

    std::cout<<">>Digite as coordenas do ponto2 separado por espaco: ";
    std::cin>>x2>>y2;

    std::cout<<">>Distancia entre os pontos ("<<x1<<","<<y1<<") e ("<<x2<<","<<y2<<"): ";
    std::cout<<sqrt(pow(x1-x2, 2) + pow(y1-y2, 2))<<std::endl;

    return 0;
}
