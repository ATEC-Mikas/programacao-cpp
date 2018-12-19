#include "Vectores.h"


void spacer() {
	cout << "\n------------------------------\n";
}

int main() {
	
	int n;
	
	cout << "Digite quantos elementos deseja: ";
	cin >> n;
	
	int * vec= new int[n];
	Vectores::lerVector(n,vec);
	spacer();
	Vectores::mostrarVector(n,vec);
	spacer();
	Vectores::mostrarVectorInverso(n,vec);
	spacer();
	cout << "\t Maior Elemento: " << vec[Vectores::maiorElemento(n,vec)] << "\n"; 
	spacer();
	cout << "\t Menor Elemento: " << vec[Vectores::menorElemento(n,vec)] << "\n";
	spacer();
	cout << "\t Maior Vizinhos: " << Vectores::maiorVizinhos(n,vec) << "\n";
	spacer();
	cout << "\t Maior Diferenca: " << Vectores::maiorDiferenca(n,vec) << "\n"; 	
	spacer();
	cout << "\t Media de impares: " << Vectores::mediaImpares(n,vec) << "\n";
	spacer();
	cout << "\t Multiplos de 3: " << Vectores::multiplos(n,vec,3);
	spacer();
	int n2;
	cout << "\n\nDigite quantos elementos deseja: ";
	cin >> n2;
	int * vec2=new int[n2];
	Vectores::lerVector(n2,vec2);
	cout << "\n\nElementos Comuns:\n";
	Vectores::mostrarVectorContador(Vectores::elementosComuns(n,vec,n2,vec2));
	spacer();
	cout << "\t Elementos ordenados: \n";
	Vectores::mostrarVector(n,Vectores::ordenarCrescente(n,vec));
	
	return 0;
}
