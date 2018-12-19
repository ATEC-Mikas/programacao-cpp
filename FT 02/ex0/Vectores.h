#include <iostream>
#include <string>

using namespace std;


class Vectores{
		private:
			static int * copiarVetor(int n, int* vec);
		
		public:
			static void lerVector(int n, int * vec);
			static double mediaVector(int n, int * vec);
			static int eliminarPosicao(int n, int * vec, int pos);
			static int eliminarElemento(int n, int * vec, int elem);
			static int segundoMaiorValor(int n,int* vec);
			static int * ordenarVector(int n, int* vec);
			static void mostrarVector(int n, int * vec);
			static int posicoesHomologas(int n, int* vec1, int* vec2);
};
