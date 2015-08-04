#include <iostream>
#include <cstring>

int retirar_espacos(char * frase, int n){
    for(int i = 0; i < n; ++i){
        if(frase[i] == ' '){
            for(int j = i; j < n - 1; ++j){
                frase[j] = frase[j+1];
            }
            --n;
        }
    }
    return n;
}

int main(){

    char frase[1000];
    std::cout<<">>Digite uma frase: ";
    std::cin.getline(frase, 1000);
    int n = std::strlen(frase);
    n = retirar_espacos(frase, n);

    for(int i = 0; i < n; ++i){
        if(frase[i] >= 'A' && frase[i] <= 'Z')
            frase[i] += 32;
        if(frase[n-1-i] >= 'A' && frase[n-1-i] <= 'Z')
            frase[n-1-i] += 32;
        if(frase[i] != frase[n-1-i]){
            std::cout<<"Nao eh palindromo!"<<std::endl;
            return 0;
        }
    }

    std::cout<<"Eh palindromo!"<<std::endl;

    return 0;
}
