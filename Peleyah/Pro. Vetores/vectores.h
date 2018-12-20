#include <iostream>
#include <tchar.h>

using namespace std;

class Vectores{
	private:
	
	public:
	
	static int lerN();
	static int * lerVecN(int n);
	static int escreverVecN(int n, int a[]);
	static int escreverInversamenteVecN(int n, int a[]);
	static int posMaior(int n, int a[]);
	static int posMenor(int n, int a[]);
	static int nValoresMaioresQueVizinhos(int n, int a[]);
	static int maiorDifEntre2(int n, int a[]);
	static int mediaImpares(int n, int a[]);
	static int multiplos3(int n, int a[]);
	static int elementosComuns();
	static int vecOrdenado(int n, int a[]);
	static int eliminaPosicao(int n, int a[]);
	static int eliminaElemento(int n, int a[]);
	static int segundoMaiorValor(int n, int a[]);
	static int * ordenarVector(int n, int a[]);
	static int posicoesHomologas();

};
