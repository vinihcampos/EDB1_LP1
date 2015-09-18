#include <iostream>

int main(){

    int m[6][6];
    int s1 = 0,s2 = 0,s3 = 0,s4 = 0;
    for(int i = 0; i < 6; ++i)
    for(int j = 0; j < 6; ++j){
        std::cout<<"Digite um valor: ";
        std::cin>>m[i][j];

        if(j > i) s1 += m[i][j];
        if(i + j < 5) s2 += m[i][j];
        if(j > i && j < 5 - i) s3 += m[i][j];
        if(i > j && i < 5 - j) s4 += m[i][j];
    }

    std::cout<<"a) Primeira soma: "<<s1<<std::endl;
    std::cout<<"b) Segunda soma: "<<s2<<std::endl;
    std::cout<<"c) Terceira soma: "<<s3<<std::endl;
    std::cout<<"d) Quarta soma: "<<s4<<std::endl;
    return 0;
}
