#include <iostream>
using std::cout;
using std::endl;

int max( int a, int b ) { return ( a > b ) ? a : b; }
int min( int a, int b ) { return ( a < b ) ? a : b; }

int whichOne( int V[], int sz, int ( *ptFunc ) ( int, int ) ) {
    if ( sz <= 0 ) return -1;            // Evitar vetores vazios ou inválidos.

    int dummy = V[ 0 ];                  // Primeiro elemento.
    for( int i(1); i < sz; ++i ) {       // Aplicar a ação sobre todos elementos
        dummy = ptFunc( dummy, V[ i ] );
    }
    return dummy;
}

int main ( ) {
    int ( *p1 ) ( int, int ) = nullptr;
    int A[] = { 32, 2, 16, 64, 4, 1, 8 };
    int sz = 7;

    p1 = max; // p1 aponta para a função max().
    cout << "Valor retornado: " << p1( 3, 8 ) << endl;

    p1 = min; // p1 agora aponta para a função min().
    cout << "Valor retornado: " << p1( 3, 8 ) << endl;

    cout << "Maior de todos: " << whichOne( A, sz, max ) << endl;
    cout << "Menor de todos: " << whichOne( A, sz, min ) << endl;

    return 0;
}
