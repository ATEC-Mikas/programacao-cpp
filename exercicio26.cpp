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
	
	int diferenca=-1,z;
	
	if(n>=2){
		for(i=0;i<n-1;i++) {
			z=abs(vetor[i]-vetor[i+1]);
			if(z>diferenca) {
				diferenca=z;
			}
		}
	} else {
		cout << "\nImpossivel de fazer tal accao";
	}
	
	
	cout << "\nMaior diferenca: " << diferenca;
	
    return 0;
}
