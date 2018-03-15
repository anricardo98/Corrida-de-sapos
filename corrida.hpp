#ifndef CORRIDA_HPP
#define CORRIDA_HPP

class sapos{
	private:
		int identificador = 0;
		int dist_percorrida = 0;
		int pulos = 0;
	public:
		static int dist_total;
		int getIdentificador();
		int getDist_percorrida();
		int getPulos();
		int setIdentificador();
                int setDist_percorrida();
                int setPulos();
		void pular();

}

#endif
