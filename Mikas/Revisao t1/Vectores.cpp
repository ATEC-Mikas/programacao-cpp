#include "Vectores.h"

void Vectores::lerVector(int n, double *vec) {
	for(int i=0;i<n;i++) {
		cout << "Vec[" << i+1 << "] = ";
		cin >> vec[i];
	}
}

void Vectores::imprimirVector(int n,double *vec){
	for(int i=0;i<n;i++) {
		cout << "Vec[" << i+1 << "] = " << vec[i] ;
	}	
}

double Vectores::calcSaldoMedio(int n,double *vec) {
	double soma=0;
	for(int i=0;i<n;i++) {
		soma+=vec[i];
	}
	return (double)soma/n;
}

double Vectores::calcValorCredito(double saldoMedio) {
	if(saldoMedio>=5000) {
		return saldoMedio*0.5;
	} else {
		if(saldoMedio>=1000) {
			return saldoMedio*0.3;
		} else {
			if(saldoMedio>=500) {
				return saldoMedio*0.15;
			} else {
				return 0;
			}
		}
	}
}
