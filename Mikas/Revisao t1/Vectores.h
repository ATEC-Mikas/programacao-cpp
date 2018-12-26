#include <iostream>

using namespace std;

class Vectores {
	public:
		static void lerVector(int n, double *vec);
		static void imprimirVector(int n,double *vec);
		static double calcSaldoMedio(int n,double *vec);
		static double calcValorCredito(double saldoMedio);
};
