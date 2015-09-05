#include "b_search.h"
#include <iostream>

using namespace std;

template <typename Obj>
int b_search(const Obj * array, int l, int r, const Obj & value, int (*comp)(const Obj &, const Obj &)){
	while(l <= r){
		int mid = (l + r) / 2;
		int comparative = comp(array[mid], value);

		if(comparative == 0){
			return mid;
		}else if(comparative < 0){	
			l = mid + 1;
		}else{
			r = mid - 1; 
		}
	}

	return -1;
}