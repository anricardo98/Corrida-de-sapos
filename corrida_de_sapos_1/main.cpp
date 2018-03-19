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
	sapo corredor_1;
	cout << "Qual o numero do sapo?" << endl;
	cin >> y;
	corredor_1.setIdentificador(y);
	corredor_1.setDist_percorrida(x);
	corredor_1.setPulos(x);
	corredor_1.pular(); 
		
	return 0;
}
