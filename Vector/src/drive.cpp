#include "vector.h"
#include <iostream>

using namespace std;
using namespace MyVector;

int main(){
	
	Vector<int> vetor(10, 10);
	Vector<int> vetor2(10, 0);
	vetor.printVector();

	vetor.fill(1);
	vetor2 = vetor;
	for(int i = 0; i < 10; ++i){
		vetor[i] = i + 1;
	}
	
	vetor.printVector();
	vetor2.printVector();

	vetor.reverse();
	vetor2.reverse();

	vetor.printVector();
	vetor2.printVector();

	return 0;
}