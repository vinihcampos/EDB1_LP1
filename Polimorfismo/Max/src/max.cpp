#include "max.h"

template <typename Object>
Object Max(const Object & a, const Object & b, 
int (*compare)(const Object &, const Object &)){
	if(compare(a,b) < 0)
		return a;
	else 
		return b;
}