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
	
	
	int * vetor2 = new int[n];
	int j,aux;
	
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			if(vetor[i]<vetor[j]){
				aux=vetor[i];
				vetor[i]=vetor[j];
				vetor[j]=aux;
			}
		}
	}
	
	for(i=0;i<n;i++){
		cout << "\n[" << i+1 << "] " << vetor[i];
	}	

	
	
	
	
    return 0;
}
