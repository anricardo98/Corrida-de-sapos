#include <iostream>
	using std::cin;
	using std::cout;
	using std::endl;
#include <cstdlib>
#include "corrida.hpp"
#include <ctime>

int sapo::dist_total;

int sapo::getDist_total(){
	dist_total = 50;
	return dist_total;
}

void sapo::pular (){
	int dist = getDist_total();
	srand(time(NULL));
	while (dist_percorrida < dist){
		int a, b;
		int aux;
		aux = 1 + rand() % 10 ;
		b = aux + dist_percorrida;
		setDist_percorrida(b);
		a = pulos;
		a++;
		setPulos(a);
		cout << "Sapo " << getIdentificador() << endl;
		cout << "Pulo: "<< getPulos() << endl;
		cout << "Distancia do pulo: " << aux << endl;
		cout << "Distancia percorrida: " << getDist_percorrida() << endl; 
	}
}

void sapo::setIdentificador(int a){
	identificador = a;
}

int sapo::getIdentificador(){
	return identificador;
}
void sapo::setDist_percorrida(int b){
	dist_percorrida = b;

}

int sapo::getDist_percorrida(){
	return dist_percorrida;
}

void sapo::setPulos(int c) {
	pulos = c;
}

int sapo::getPulos(){
	return pulos;
}
