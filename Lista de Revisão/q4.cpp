#include <iostream>

void fib(long long l, long long inicial, long long final);

int main(){
	
	long long l;
	std::cin>>l;
	fib(l, 1, 1);

	return 0;
}

void fib(long long l, long long inicial, long long final){
	if(inicial < l){
		std::cout<<inicial<<" ";
		fib(l, final, inicial + final);
	}
}