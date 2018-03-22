#include <iostream>
	using std::cin;
	using std::cout;
	using std::endl;
#include <cstdlib>
#include "corrida.hpp"
#include <ctime>

/**
*@file main.cpp
*@brief Arquivo .cpp responsável pela realização da corrida
*@author Andre Ricardo
*@since 19/03/2018
*@date 19/03/2018
*@version 2.0
*/

//@brief inicializando a variável estática
int sapo::dist_total = 50;

//@brief atribuindo o valor da variável estática e estabelecendo o get dela
/*int sapo::getDist_total(){
	dist_total = 50;
	return dist_total;
}*/

//@brief função responsável pelo pulo dos sapos
void sapo::pular (){
	int a, b, aux; //variáveis auxiliares

	aux = 1 + rand() % 10; //@brief atribuindo um valor randomico a variável aux (ela representa a distância percorrida no salto)
	b = aux + dist_percorrida; //@brief somando a distância do pulo atual com a dos pulos anteriores
	setDist_percorrida(b); //@brief setando o novo valor da distância percorrida

	a = pulos; //@brief Recebendo a quantidade de pulos já realizados
	a++; //@brief Atribuindo mais um a quantidade de pulos
	setPulos(a); //@brief Setando a nova quantidade de pulos

	//@brief Printando os novos dados do sapo
	cout << "Sapo " << getIdentificador() << endl; 
	cout << "Pulo: "<< getPulos() << endl;
	cout << "Distancia do pulo: " << aux << endl;
	cout << "Distancia percorrida: " << getDist_percorrida() << endl <<endl;
}

//@brief Função set do identificador
void sapo::setIdentificador(int a){
	identificador = a;
}

//@brief Função get do identificador
int sapo::getIdentificador(){
	return identificador;
}

//@brief Função set da distância percorrida
void sapo::setDist_percorrida(int b){
	dist_percorrida = b;

}

//@brief Função get da distância percorrida
int sapo::getDist_percorrida(){
	return dist_percorrida;
}

//@brief Função set de Pulos
void sapo::setPulos(int c) {
	pulos = c;
}

//@brief Função get de Pulos
int sapo::getPulos(){
	return pulos;
}
