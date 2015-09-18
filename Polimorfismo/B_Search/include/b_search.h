#ifndef _B_SEARCH_
#define _B_SEARCH_

template <typename Obj>
int b_search(const Obj * array, int l, int r, const Obj & value, int (*comp)(const Obj &, const Obj &));

#endif