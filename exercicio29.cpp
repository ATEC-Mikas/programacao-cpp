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
	
	int n2,j;
	bool flag;
	
	cout << "Digite quantos numeros pretende inserir [VETOR2]: ";
	cin >> n2;
	
	int * vetor2 = new int[n2]; // criar um vetor
	
	for(i=0;i<n2;i++){
		cout << "\n[" << i+1 << "] Digite o numero: ";
		cin >> vetor2[i];
	}
	
	for(i=0;i<n;i++) {
		flag=true;
		for(j=0;j<i;j++) {
			if(vetor[i]==vetor[j]){
				flag=false;
			}
		}
		if(flag) {
			for(j=0;j<n2;j++) {
				if(vetor[i]==vetor2[j]){
					cout <<  "\n" << vetor[i];
					break; 
				}
			}
		}
	}
	
	
    return 0;
}
