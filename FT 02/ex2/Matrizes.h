#include <iostream>
#include <string>

using namespace std;

class Matrizes {
	private:
		
	public:
		static void lerMatriz(int l,int c, int ** mat);
		static void mostrarMatriz(int l,int c, int ** mat);
		static bool matrizQuadrada(int l, int c);
		static int  maiorLinha(int linha,int c, int **mat);
		static int  maiorColuna(int l,int coluna, int **mat);
};
