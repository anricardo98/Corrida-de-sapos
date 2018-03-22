#include <iostream>
	using std::cout;
	using std::cin;
	using std::endl;
#include <cstdlib>
#include "corrida.hpp"
#include <ctime>

/**
*@file main.cpp
*@brief Arquivo main do programa que gerencia a corrida dos 3 sapos.
*@author Andre Ricardo
*@since 19/03/2018
*@date 19/03/2018
*@version 2.0
*/

int main (){
	int x = 0; //@brief Variavel utilizada para inicializar outras 
	int y[3]; //@brief Vetor usado para receber os identificadores 
	int i; //@brief Variável auxiliar utilizada no for
	int aux = 0; //@brief Variável utilizada para indicar a ordem de pulo dos sapos
	int dist_per;
	sapo corredor_1; //@brief inicializando o primeiro sapo
	sapo corredor_2; //@brief inicializando o segundo sapo
	sapo corredor_3; //@brief inicializando o terceiro sapo

	//@brief For realizado para receber os três indicadores
	for (i = 0; i < 3; i++){
		cout << "Qual o numero do sapo "<< i+1 <<"?" << endl;
		cin >> y[i];
	}

	//@brief Inicializando as variáveis (atribuindo zero as variaveis pulo e distancia percorrida) e atribuindo o identificador dado anteriomente
	corredor_1.setIdentificador(y[0]);
	corredor_1.setPulos(x);
	corredor_1.setDist_percorrida(x);
	corredor_2.setIdentificador(y[1]);
        corredor_2.setPulos(x);
        corredor_2.setDist_percorrida(x);
	corredor_3.setIdentificador(y[2]);
        corredor_3.setPulos(x);
        corredor_3.setDist_percorrida(x);

	//@brief Recebendo os valores da distância total e zerando a distância percorrida
	dist_per = 0;
	
	//@brief Reinicializando o seed
	srand(time(NULL));

	//@brief Realizando a corrida através do uso do if e armazenando a distância percorrida por aquele sapo para comparar com a total
	while (sapo::dist_total > dist_per){
		aux++;
		if (aux == 1){
			corredor_1.pular();
			dist_per = corredor_1.getDist_percorrida();
		}	

		else if (aux == 2){
			corredor_2.pular();
			dist_per = corredor_2.getDist_percorrida();
		}

		else if (aux == 3){
			corredor_3.pular();
                        dist_per = corredor_3.getDist_percorrida();
		}

		else {
			aux = 0;
		}
	}

	//@brief Verificando o vencedor através do aux
	if (aux == 1){
		cout << "Sapo " << corredor_1.getIdentificador() << " ganhou" << endl;
	}

	else if (aux == 2){
		cout << "Sapo " << corredor_2.getIdentificador() << " ganhou" << endl;
	}

	else if (aux == 3){
		cout << "Sapo " << corredor_3.getIdentificador() << " ganhou" << endl;
	}
	return 0;

}
