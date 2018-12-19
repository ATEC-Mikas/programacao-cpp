#include "Matrizes.h"

void Matrizes::lerMatriz(int l,int c, int ** mat) {
	for(int i=0;i<l;i++) {
			mat[i]= new int[c];
		for(int j=0;j<c;j++) {
			cout << "Mat[" << i+1 << "][" << j+1 << "] = ";
			cin >> mat[i][j];
		}
		cout << "\n";
	}	
}

void Matrizes::mostrarMatriz(int l,int c, int ** mat) {
	for(int i=0;i<l;i++) {
		for(int j=0;j<c;j++) {
			cout << "Mat[" << i+1 << "][" << j+1 << "] = " << mat[i][j] << "\n";
		}
		cout << "\n";
	}	
}

bool Matrizes::matrizQuadrada(int l, int c) {
	if(l==c)
		return true;
	return false;
}

int  Matrizes::maiorLinha(int linha,int c, int **mat) {
	int maior=0;
	for(int i=1;i<c;i++) {
		if(mat[linha][maior]<mat[linha][i]){
			maior=i;
		}
	}
	return mat[linha][maior];
}
int  Matrizes::maiorColuna(int l,int coluna, int **mat) {
	int maior=0;
	for(int i=1;i<l;i++) {
		if(mat[i][coluna]>mat[maior][coluna]){
			maior=i;
		}
	}
	return mat[maior][coluna];
}
