#include "Vectores.h"

int main() {
	int n;
	
	do {
		cout << "Quantos elementos: ";
		cin >> n;
		if(n<=0)
			cout << "\n\nNumero invalido.\n";
	}while(n<=0);
	
	double * vec= new double[n];
	
	Vectores::lerVector(n,vec);
	double c=Vectores::calcValorCredito(Vectores::calcSaldoMedio(n,vec));
	if(c<=0) {
		cout << "Nao tem direito a valo de credito";
	} else {
		cout << "Valor de credito concedido: " << c*10;
	}
	// (...)
	

	
	return 0;
}
