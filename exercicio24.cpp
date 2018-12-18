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
	
	int maior,menor;
	maior=0;
	menor=0;
	
	for(i=0;i<n;i++) {
		if(vetor[maior]<vetor[i]){
			maior=i;
		}
		if(vetor[menor]>vetor[i]){
			menor=i;
		}
	}
	
	cout << "\nMaior: \n\tPosicao: " << maior+1 << "\n\tNumero:" << vetor[maior];
	cout << "\nMenor: \n\tPosicao: " << menor+1 << "\n\tNumero:" << vetor[menor];
	
    return 0;
}
