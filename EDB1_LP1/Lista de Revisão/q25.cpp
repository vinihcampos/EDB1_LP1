#include <iostream>

///Adotei como dimensão o tamanho da linha
int ehTrianguloSuperior ( const int * mat, int n ){
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j)
            if(i > j && mat[i*n+j] != 0)
                return 0;
    return 1;
}
