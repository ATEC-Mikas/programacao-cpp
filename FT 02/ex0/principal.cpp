#include "Vectores.h"

int main() {

	int n=10;
	int* vec=new int[n];
	Vectores::lerVector(n,vec);
	double m = Vectores::mediaVector(n,vec);
	cout << "Media vetor: " << m << "\n";
	Vectores::mostrarVector(n,vec);
	
	cout << "\n----------------------------------------";
	int x;
	cout << "\nPosicao a eliminar: ";
	cin >> x;
	x--;
	n=Vectores::eliminarPosicao(n,vec,x);
	
	cout << "\n----------------------------------------";
	cout << "\nNumero a eliminar: ";
	cin >> x;
	n=Vectores::eliminarElemento(n,vec,x);

	cout << "\n----------------------------------------";
	cout << "\n\tOrdenar Vetor\n";
	int * vec2=new int[n];
	vec2=Vectores::ordenarVector(n,vec);
	Vectores::mostrarVector(n,vec2);

	cout << "\n----------------------------------------";
	cout << "\n\tPosicoes Homologas\n";
	cout << "\t Existe " << Vectores::posicoesHomologas(n,vec,vec2) << " posicoes homologas"; 

return 0;

}
