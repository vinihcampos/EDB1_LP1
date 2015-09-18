#ifndef _MAX_
#define _MAX_

template <typename Object>
Object Max(const Object & a, const Object & b, 
int (*compare)(const Object &, const Object &));

#endif