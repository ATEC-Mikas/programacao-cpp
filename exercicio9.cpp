#include <iostream>
#include <string>

using namespace std;

int lerNota(string x) {
	int n;
	do {
		cout << "Digite a nota de avaliacao da prova "+x+":";
		cin >> n;
		if(n<0 || n>20)
			cout << "Nota invalida\n\n";
	} while(n<0 || n>20);
	return n;
}

int main()
{
    int x,y;
    
    x=lerNota("escrita");
    y=lerNota("oral");

	if((x*0.70)+(y*0.30)>=10){
		cout << "\n\nAprovado";
	} else {
		cout << "\n\nReprovado";
	}
    
    
    return 0;
}
