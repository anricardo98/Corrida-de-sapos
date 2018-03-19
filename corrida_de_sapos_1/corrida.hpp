#ifndef CORRIDA_HPP
#define CORRIDA_HPP

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
