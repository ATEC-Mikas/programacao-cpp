#include <iostream>
#include <string>

using namespace std;

int main()
{

 	int n,i,soma=0,num;
 	
 	cout << "Digite quantos alunos quer ler:";
 	cin >> n;
 	
 	for(i=0;i<n;i++) {
 		cout << "\nDigite a nota:";
 		cin >> num;
 		soma+=num;
	}
	
	cout << "\n\nMedia da turma:" << (float)soma/n;

    return 0;
}
