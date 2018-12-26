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

int** Matrizes::somaMatriz(int l,int c, int ** matA, int ** matB) {
	int ** matC =new int*[l];
	if(l==c){
		for(int i=0;i<l;i++) {
			matC[i]= new int[c];
			for(int j=0;j<c;j++) {	
				matC[i][j]=matA[i][j]+matB[i][j];
			}
		}
		return matC;
	}
}

int* Matrizes::diagonalPrincipal(int l,int c, int ** mat) {
	if(l==c) {
		int * vec = new int[l+1];
		vec[0]=l;
		for(int i=1;i<=l;i++) {
			vec[i]=mat[i-1][i-1];
		}
		return vec;
	}
}

int* Matrizes::diagonalPrincipalSC(int l,int c, int ** mat) {
	if(l==c) {
		int * vec=new int[l];
		for(int i=0;i<l;i++) {
			vec[i]=mat[i][i];
		}
		return vec;
	}
}

int* Matrizes::centro(int l,int c,int ** mat) {
	int * vet= new int[5];
	if(l%2==0) {
		if(c%2==0) {
			vet[0]=4;
			vet[1]=mat[l/2-1][c/2-1];
			vet[2]=mat[l/2-1][c/2];
			vet[3]=mat[l/2][c/2-1];
			vet[4]=mat[l/2][c/2];
		}
		else {
			vet[0]=2;
			vet[1]=mat[l/2-1][c/2];
			vet[2]=mat[l/2][c/2];
		}
	}
	else {
		if(c%2==0) {
			vet[0]=2;
			vet[1]=mat[l/2][c/2-1];
			vet[2]=mat[l/2][c/2];
		}
		else {
			vet[0]=1;
			vet[1]=mat[l/2][c/2];
		}
	}
	return vet;
}

int ** Matrizes::transposta(int l,int c, int ** mat) {
	int ** mat2=new int*[c];
	for(int i=0;i<c;i++) {
		mat2[i]=new int[l];
		for(int j=0;j<l;j++) {
			mat2[i][j]=mat[j][i];
		}
	}
	return mat2;
}

bool Matrizes::isNula(int l,int c, int ** mat) {
	for(int i=0;i<l;i++){
		for(int j=0;j<c;j++){
			if(mat[i][j]!=0) {
				return false;
			}
		}
	}
	return true;
}

bool Matrizes::isIdentidade(int l,int c, int ** mat) {
	if(l==c) {
		for(int i=0;i<l;i++) {
			for(int j=0;j<c;j++) {
				if(i==j && mat[i][j]!=1) {
					return false;
				} else {
					if(i!=j && mat[i][j]!=0) {
						return false;
					}
				}
			}
		}
	}
	return true;
}

bool Matrizes::isEscalar(int l,int c, int ** mat) {
	if(l==c) {
		for(int i=0;i<l;i++) {
			for(int j=0;j<c;j++) {
				if(i==j && mat[i][j]!=2) {
					return false;
				} else {
					if(i!=j && mat[i][j]!=0) {
						return false;
					}
				}
			}
		}
	}
	return true;
}

int ** Matrizes::criarMatNula(int l,int c) {
	int **mat=new int*[l];
	for(int i=0;i<l;i++) {
		mat[i]=new int[c];
		for(int j=0;j<l;j++) {
			mat[i][j]=0;
		}
	}
	return mat;
}

bool Matrizes::vecIsDiagonal(int L,int C,int ** mat, int * vec) {
	for(int i=0;i<L;i++) {
		if(mat[i][i]!=vec[i]) {
			return false;
		}
	}
	return true;
}
