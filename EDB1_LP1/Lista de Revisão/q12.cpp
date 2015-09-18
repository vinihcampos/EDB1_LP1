#include <iostream>

void movimento(int discos, char esquerda, char centro, char direita, int *quantidade);

int main(){
    int discos = 7;
    int quantidade = 0;
    movimento(discos, 'A', 'B', 'C', &quantidade);
    std::cout<<"Foram necessarios "<<quantidade<<" movimentos."<<std::endl;
    return 0;
}

void movimento(int discos, char esquerda, char centro, char direita, int *quantidade){
    if(discos > 0){
        movimento(discos - 1, esquerda, direita, centro, quantidade);
        std::cout<<"Mova disco de "<<esquerda<<" para "<<direita<<std::endl;
        (*quantidade)++;
        movimento(discos - 1, centro, esquerda, direita, quantidade);
    }
}
