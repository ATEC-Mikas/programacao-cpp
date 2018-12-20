#include <iostream>
#include <tchar.h>

using namespace std;

class Matrizes{
	private:
	
	public:
	
	static int ** lerMatriz(int l, int c);
	static int ** escreverMatriz(int l, int c, int** mat);
	static int matrizQuadrada(int l, int c);
	static int maiorElementoLinha(int l, int c, int** mat);
	static int maiorElementoColuna(int l, int c, int** mat);
	static int ** soma(int la, int lb, int ca, int cb, int** matA, int** matB);
	static int* centro (int l, int c, int** mat);

};
