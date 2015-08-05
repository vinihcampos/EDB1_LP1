#include <iostream>

typedef struct _Vetor {
    float x;
    float y;
    float z;
} Vetor;

void soma ( const Vetor *v1, const Vetor *v2, Vetor **res ){
    (*res) = new Vetor;
    (*res)->x = v1->x + v2->x;
    (*res)->y = v1->y + v2->y;
    (*res)->z = v1->z + v2->z;
}

Vetor soma2 ( const Vetor *v1, const Vetor *v2 ){
    Vetor soma;
    soma.x = v1->x + v2->x;
    soma.y = v1->y + v2->y;
    soma.z = v1->z + v2->z;

    return soma;
}
