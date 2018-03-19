#include <iostream>
	using std::cout;
	using std::cin;
	using std::endl;
#include <cstdlib>
#include "corrida.hpp"
#include <ctime>

int main (){
	int x = 0;
	int y;
	int i;
	int dist;
	int dist_per;
	sapo corredor[3];

	
	for (i = 0; i < 3; i++){
		cout << "Qual o numero do sapo "<< i+1 <<"?" << endl;
		cin >> y;
		corredor[i].setIdentificador(y);
		corredor[i].setDist_percorrida(x);
		corredor[i].setPulos(x);
	}

	for (i = 0; i < 3; i++){
		

	} 
	
	return 0;

}
