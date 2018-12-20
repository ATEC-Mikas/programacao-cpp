#include <iostream>
#include <string>

using namespace std;

int main()
{
 	bool solteiro;
 	int idade;
 	char c;
	 
	cout << "Digite a sua idade:";	
	cin >> idade;
	
	cout << "Solteiro? (s/n)";
	do {
		cin.get(c);
	} while(c!='s' && c!='n' && c!='S' && c!='N');
	if(c!='s' || c!='S') {
		solteiro=true;
	} else {
		solteiro=false;
	}
	
	if(solteiro) {
		if(idade<25){
			cout << "Grupo 1";
		} else {
			cout << "Grupo 2";
		}
	} else {
		if(idade<34){
			cout << "Grupo 3";
		} else {
			cout << "Grupo 4";
		}
	}
	
    return 0;
}
