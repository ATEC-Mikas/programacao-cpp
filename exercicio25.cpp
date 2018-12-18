#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	int n,i;
	
	cout << "Digite quantos numeros pretende inserir: ";
	cin >> n;
	
	int * vetor = new int[n]; // criar um vetor
	
	for(i=0;i<n;i++){
		cout << "\n[" << i+1 << "] Digite o numero: ";
		cin >> vetor[i];
	}
	
	int contador=0;
	
	if(n>=3) {
		for(i=1;i<n-1;i++) {
			if(vetor[i]>vetor[i+1] && vetor[i]>vetor[i-1] ){
				i++;
				contador++;
			}
		}
	} else {
		cout << "\nImpossivel de fazer tal acao.";
	}
	
	cout << "Numero de vezes que ocorre esta anomalia: " << contador;
    return 0;
}
