#include <iostream>
#include <string>

using namespace std;

class Vectores {
	private:
		static int * copiarVetor(int n, int* vec);
	public:
		
		static void mostrarVectorRetardado(int n, int * vec);
		static void lerVector(int n, int * vec);
		static void mostrarVector(int n, int * vec);
		static void mostrarVectorContador(int * vec);
		static int  maiorElemento(int n, int * vec);
		static int  menorElemento(int n, int * vec);
		static int  maiorVizinhos(int n, int * vec);
		static int  maiorDiferenca(int n, int * vec);
		static float  mediaImpares(int n, int * vec);
		static int  multiplos(int n, int * vec, int multiplo);
		static int * elementosComuns(int n1, int * vec1, int n2, int * vec2);
		static int * ordenarCrescente(int n, int * vec);
};
