#include "swap.h"

template<typename Object>
void Swap(Object & a, Object & b){
	Object aux = a;
	a = b;
	b = aux;
}