#include <iostream>

typedef struct _Ponto{
    int x;
    int y;
}Ponto;

int dentroCirc ( const Ponto *c, int raio, const Ponto *p){
    if(p->x >= c->x-raio && p->x <= c->x+raio &&
       p->y >= c->y-raio && p->y <= c->y+raio) return 1;
    else return 0;
}
