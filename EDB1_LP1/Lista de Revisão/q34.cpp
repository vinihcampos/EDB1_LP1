#include <iostream>

typedef struct _Vetor {
    float x;
    float y;
    float z;
} Vetor;

float dot ( const Vetor *v1, const Vetor *v2 ){
    float produto_escalar = 0;
    produto_escalar += v1->x * v2->x;
    produto_escalar += v1->y * v2->y;
    produto_escalar += v1->z * v2->z;

    return produto_escalar;
}
