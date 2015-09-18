#include <iostream>

char * intercalaVetores( const char * vetA, int tamA,
						 const char * vetB, int tamB){
	int iA = 0;
	int iB = tamB - 1;
	int tamTotal = tamA + tamB;
	char *vetorTotal = new char[tamA + tamB];
	int ocorrencia = -1;
	
	for(int i = 0; i < tamTotal; ++i){
		if(ocorrencia == -1 || ocorrencia % 2 == 0){
			vetorTotal[i] = vetA[iA];
			++iA;
			if(iB >= 0) ocorrencia = 1;
		}else{
			vetorTotal[i] = vetB[iB];
			--iB;
			if(iA < tamA) ocorrencia = 0;
		}
	}

	return vetorTotal; 
}