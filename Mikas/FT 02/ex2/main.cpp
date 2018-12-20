#include "Matrizes.h"

void spacer() {
	cout << "\n---------------------------------\n";
}

void mostrarVetorContador(int * vec) {
	for(int i=1;i<=vec[0];i++){
		cout << "\nVec[" << i << "]= " << vec[i];
	}
}

int main() {
	
	int l,c;
	
	cout << "Linhas: ";
	cin >> l;

	cout << "Colunas: ";
	cin >> c;
		
	
	spacer();	
	int ** mat =new int *[l];
	Matrizes::lerMatriz(l,c,mat);
	spacer();
	Matrizes::mostrarMatriz(l,c,mat);
	spacer();
	if(Matrizes::matrizQuadrada(l,c)){
		cout << "Matriz Quadrada";
	} else {
		cout << "Matriz nao quadrada";
	}
	spacer();
	int x;
	cout << "Coluna a procurar: ";
	cin >> x;
	cout << "Maior numero da coluna " << x << " : " << Matrizes::maiorColuna(l,x-1,mat);
	spacer();
	cout << "Linha a procurar: ";
	cin >> x;
	cout << "Maior numero da linha " << x << " : " << Matrizes::maiorLinha(x-1,c,mat);
	spacer();
	int ** mat2 =new int *[l];
	Matrizes::lerMatriz(l,c,mat2);
	cout << "\n\n";
	Matrizes::mostrarMatriz(l,c,Matrizes::somaMatriz(l,c,mat,mat2));
	spacer();
	mostrarVetorContador(Matrizes::diagonalPrincipal(l,c,mat));
	spacer();
	mostrarVetorContador(Matrizes::centro(l,c,mat));
	spacer();
	Matrizes::mostrarMatriz(c,l,Matrizes::transposta(l,c,mat));
	spacer();
	if(Matrizes::isNula(l,c,mat)) {
		cout << "Matriz nula.";
	} else {
		cout << "Matriz nao e nula.";
	}
	spacer();
	if(Matrizes::isIdentidade(l,c,mat)) {
		cout << "Matriz identidade.";
	} else {
		cout << "Matriz nao e identidade.";
	}
	spacer();
	if(Matrizes::isEscalar(l,c,mat)) {
		cout << "Matriz escalar.";
	} else {
		cout << "Matriz nao e escalar.";
	}
	spacer();
	Matrizes::mostrarMatriz(l,c,Matrizes::criarMatNula(l,c));
	return 0;
}
