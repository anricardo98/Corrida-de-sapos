#include <iostream>
	using std::cout;
	using std::cin;
	using std::endl;
#include <cstdlib>
#include "corrida.hpp"
#include <ctime>

int main (){
	int x = 0;
	int y[3];
	int i;
	int aux = 1;
	int dist_total;
	int dist_per;
	sapo corredor_1;
	sapo corredor_2;
	sapo corredor_3;

	
	for (i = 0; i < 3; i++){
		cout << "Qual o numero do sapo "<< i+1 <<"?" << endl;
		cin >> y[i];
	}

	corredor_1.setIdentificador(y[0]);
	corredor_1.setPulos(x);
	corredor_1.setDist_percorrida(x);
	corredor_2.setIdentificador(y[1]);
        corredor_2.setPulos(x);
        corredor_2.setDist_percorrida(x);
	corredor_3.setIdentificador(y[2]);
        corredor_3.setPulos(x);
        corredor_3.setDist_percorrida(x);

	dist_total = corredor_1.getDist_total();
	dist_per = 0;
	
	srand(time(NULL));

	while (dist_total > dist_per){

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
		
		aux++;
	}

	if (aux == 2){
		cout << "Sapo " << corredor_1.getIdentificador() << " ganhou" << endl;
	}

	else if (aux == 3){
		cout << "Sapo " << corredor_2.getIdentificador() << " ganhou" << endl;
	}

	else if (aux == 4){
		cout << "Sapo " << corredor_3.getIdentificador() << " ganhou" << endl;
	}
	return 0;

}
