#include <iostream>

int MultSoma(int m, int n){
    if(n > 0)
        return m + MultSoma(m, n - 1);
    else
        return 0;
}

int ExpoMult(int m, int n){
    if(n >= 1)
        return m * ExpoMult(m, n - 1);
    else
        return 1;
}

int ExpoSoma(int m, int n){
    if(n >= 1)
        return MultSoma(m, ExpoMult(m, n - 1));
    else
        return 1;
}
