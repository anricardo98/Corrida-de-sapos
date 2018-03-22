#ifndef CORRIDA_HPP
#define CORRIDA_HPP

/**
*@file corrida.hpp
*@brief Arquivo .hpp para o documento corrida.cpp
*@author Andre Ricardo
*@since 19/03/2018
*@date 19/03/2018
*@version 2.0
*/

class sapo{
	private:
		int identificador;
		int dist_percorrida ;
		int pulos;
	public:
		static int dist_total;
		static int getDist_total();
		int getIdentificador();
		int getDist_percorrida();
		int getPulos();
		void setIdentificador(int a);
                void setDist_percorrida(int b);
                void setPulos(int c);
		void pular();

};

#endif
