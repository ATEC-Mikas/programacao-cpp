#include "Matrizes.h"

void spacer() {
	cout << "\n---------------------------------\n";
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
	return 0;
}
