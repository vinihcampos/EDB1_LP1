#include <iostream>
#include "IntCell.h"

using namespace std;

int main(){

	IntCell a;
	IntCell b(100);
	IntCell c;
	IntCell d;

	std::cout<<">>> Valor de a: "<<a.get()<<std::endl;
	std::cout<<">>> Valor de b: "<<b.get()<<std::endl;
	std::cout<<">>> Valor de c: "<<c.get()<<std::endl;
	std::cout<<">>> Valor de d: "<<d.get()<<std::endl;

	a.write(5);
	b.write(a.get() * 2);
	c = a + b;
	d.write(a.get() + b.get() + 1);

	if(c == d){
		cout<<"Iguais!!"<<endl;
	}else{
		cout<<"Diferentes!!"<<endl;
	}

	std::cout<<">>> Valor de a: "<<a.get()<<std::endl;
	std::cout<<">>> Valor de b: "<<b.get()<<std::endl;
	std::cout<<">>> Valor de c: "<<c.get()<<std::endl;
	std::cout<<">>> Valor de d: "<<d.get()<<std::endl;

	return 0;
}