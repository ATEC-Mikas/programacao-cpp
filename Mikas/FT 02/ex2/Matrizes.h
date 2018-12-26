#include <iostream>
#include <string>

using namespace std;

class Matrizes {
	private:
		
	public:
		static void lerMatriz(int l,int c, int ** mat);
		static void mostrarMatriz(int l,int c, int ** mat);
		static bool matrizQuadrada(int l, int c);
		static int  maiorLinha(int linha,int c, int ** mat);
		static int  maiorColuna(int l,int coluna, int ** mat);
		
		//CODEJAM PELOS VISTOS
		
		static int** somaMatriz(int l,int c, int ** matA, int ** matB);
		static int * diagonalPrincipal(int l,int c, int ** mat);
		static int * centro(int l,int c,int ** mat);
		static int ** transposta(int l,int c, int ** mat);
		static bool isNula(int l,int c, int ** mat);
		static bool isIdentidade(int l,int c, int ** mat);
		static bool isEscalar(int l,int c, int ** mat);
		static int ** criarMatNula(int l,int c);
		
		// Plus work
		static int * diagonalPrincipalSC(int l,int c, int ** mat);
		static bool vecIsDiagonal(int L,int C,int ** mat, int * vec);
};
