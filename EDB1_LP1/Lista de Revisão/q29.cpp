#include <iostream>

typedef struct _Ponto{
    int x;
    int y;
}Ponto;

int dentroRet (const Ponto* v1, const Ponto* v2, const Ponto* p){
    if( p->x >= v1->x && p->x <= v2->x && p->y >= v1->y && p->y <= v2->y)
        return 1;
    else
        return 0;
}
