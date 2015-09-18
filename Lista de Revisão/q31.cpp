#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    float x;
    float y;
    float z;
}Ponto;

int PontoEmEsfera(const Ponto p, const Ponto c, float raio){
    float dist = pow(p.x - c.x, 2) + pow(p.y - c.y, 2) + pow(p.z - c.z, 2);
    printf("%f", sqrt(dist));
    if(sqrt(dist) == raio)
        return 2;
    else if(sqrt(dist) < raio)
        return 1;
    else
        return 0;
}

int main(){
    Ponto p, c;
    float raio;
    FILE * arquivo;
    arquivo = fopen("q31_dados.txt", "r");
    if(arquivo != NULL){
        while(fscanf(arquivo, "%f %f %f %f %f %f %f", &p.x, &p.y, &p.z, &c.x, &c.y, &c.z, &raio) != EOF){
            printf("Ponto P: (%.1f,%.1f,%.1f)\n", p.x, p.y, p.z);;
            printf("Ponto C: (%.1f,%.1f,%.1f)\n", c.x, c.y, c.z);
            printf("Raio: %f\n", raio);
            printf("Distancia entre os pontos P e C: ");
            int result = PontoEmEsfera(p,c,raio);
            if(result == 1)
                printf("\nO ponto P estah dentro da esfera!\n");
            else if(result == 2)
                printf("\nO ponto P estah na superficie da esfera!\n");
            else
                printf("\nO ponto P estah fora da esfera!\n");
                printf("------------------------------\n");
        }
        fclose(arquivo);
    }
    return 0;
}
