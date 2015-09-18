#include <iostream>
#include <cstdio>
#include <ctime>

using namespace std;

int randInt(int low, int high){
	int k;
	double d;
	d = (double) rand() / ((double) RAND_MAX + 1);
	k = (int) ( d * ( high - low + 1));

	return (low + k);
}

void montyHall(int inputs, double &withoutSwap, double &withSwap){
	srand (inputs);
	withoutSwap = 0.0;
	withSwap = 0.0;
	for(int i = 0; i < inputs; ++i){
		int door = randInt(0,2);
		int choose = randInt(0,2);		

		if(choose == door)
			withoutSwap += 1.0;
		else
			withSwap += 1.0;
	}

}

int main(){
	double withSwap;
	double withoutSwap;
	cout<<"\n\n";
	cout<<"\t\t########################################"<<endl;
	cout<<"\t\t#        Problema do Monty Hall        #"<<endl;
	cout<<"\t\t########################################"<<endl;
	cout<<"\t\t# ########## || PORCENTAGEM DE ACERTOS #"<<endl;
	cout<<"\t\t#--------------------------------------#"<<endl;
	cout<<"\t\t# ELEMENTOS  || C/ TROCA  || S/ TROCA  #"<<endl;
	cout<<"\t\t#--------------------------------------#"<<endl;
	montyHall(1, withoutSwap, withSwap);
	printf("\t\t#  1         || %.2lf %%  ||   %.2lf %%  #\n", withSwap /         1 * 100, withoutSwap /          1 * 100);
	montyHall(10, withoutSwap, withSwap);
	printf("\t\t#  10        ||  %.2lf %%  ||  %.2lf %%  #\n", withSwap /        10 * 100, withoutSwap /         10 * 100);
	montyHall(100, withoutSwap, withSwap);
	printf("\t\t#  100       ||  %.2lf %%  ||  %.2lf %%  #\n", withSwap /       100 * 100, withoutSwap /        100 * 100);
	montyHall(1000, withoutSwap, withSwap);
	printf("\t\t#  1000      ||  %.2lf %%  ||  %.2lf %%  #\n", withSwap /      1000 * 100, withoutSwap /       1000 * 100);
	montyHall(10000, withoutSwap, withSwap);
	printf("\t\t#  10000     ||  %.2lf %%  ||  %.2lf %%  #\n", withSwap /     10000 * 100, withoutSwap /      10000 * 100);
	montyHall(100000, withoutSwap, withSwap);
	printf("\t\t#  100000    ||  %.2lf %%  ||  %.2lf %%  #\n", withSwap /    100000 * 100, withoutSwap /     100000 * 100);
	montyHall(1000000, withoutSwap, withSwap);
	printf("\t\t#  1000000   ||  %.2lf %%  ||  %.2lf %%  #\n", withSwap /   1000000 * 100, withoutSwap /    1000000 * 100);
	montyHall(10000000, withoutSwap, withSwap);
	printf("\t\t#  10000000  ||  %.2lf %%  ||  %.2lf %%  #\n", withSwap /  10000000 * 100, withoutSwap /   10000000 * 100);
	montyHall(100000000, withoutSwap, withSwap);
	printf("\t\t#  100000000 ||  %.2lf %%  ||  %.2lf %%  #\n", withSwap / 100000000 * 100, withoutSwap /  100000000 * 100);
	cout<<"\t\t########################################"<<endl;
	cout<<"\n\n";
	return 0;
}