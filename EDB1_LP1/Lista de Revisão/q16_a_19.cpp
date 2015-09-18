#include <iostream>
#include <cstring>

char * prefix (const char * str, int n ){	
	if(std::strlen(str) < n){
		char * substring = new char[strlen(str)];
		for(int i = 0; i < strlen(str); ++i){
			substring[i] = str[i];
		}
		return substring;
	}else{
		char * substring = new char[n];
		for(int i = 0; i < n; ++i){
			substring[i] = str[i];
		}
		return substring;
	}
}

char * reverse ( const char * str ){
	int tam = std::strlen(str);
	char * inverso = new char[tam];

	for(int i = 0; i < tam; ++i)
		inverso[i] = str[tam - 1 - i];

	return inverso;
}

char * invertCase ( const char * str ){
	int tam = std::strlen(str);
	char * maluco = new char[tam];
	
	for(int i = 0; i < tam; ++i){
		if(str[i] >= 'A' && str[i] <= 'Z')
			maluco[i] = str[i] + 32;
		else if(str[i] >= 'a' && str[i] <= 'z')
			maluco[i] = str[i] - 32;
		else
			maluco[i] = str[i];
	}

	return maluco;
}

char* shiftString ( const char * str ){
	int tam = std::strlen(str);
	char * cifra_de_cesar = new char[tam];

	for(int i = 0; i < tam; ++i){
		if(str[i] >= 'A' && str[i] <= 'Z'){
			if(str[i] == 'Z') 
				cifra_de_cesar[i] = 'A';
			else 
				cifra_de_cesar[i] = str[i] + 1;
		}else if(str[i] >= 'a' && str[i] <= 'z'){
			if(str[i] == 'z') 
				cifra_de_cesar[i] = 'a';
			else 
				cifra_de_cesar[i] = str[i] + 1;
		}else
			cifra_de_cesar[i] = str[i];
	}

	return cifra_de_cesar;
}

int main(){
	
	char str[] = "CasaZz";
	char *c = shiftString(str);
	for(int i = 0; i < std::strlen(c); ++i){
		std::cout<<c[i];
	}
	std::cout<<std::endl;



	return 0;
}