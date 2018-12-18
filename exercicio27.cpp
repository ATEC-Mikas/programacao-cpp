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
	
	int contador=0,soma=0;
	
	for(i=0;i<n;i++) {
		if(vetor[i]%2==1) {
			contador++;
			soma+=vetor[i];
		}
	}
	
	cout << "\nMedia dos numeros impares:" << (float)soma/contador;
	
    return 0;
}
