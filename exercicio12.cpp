#include <iostream>
#include <string>

using namespace std;

int main()
{
 	int num;
 	do {
 		cout << "Digite o numero da semana:";
 		cin >> num;
 		if(num<1 || num>7)
 			cout << "Dia invalido\n\n";
	}while(num<1 || num>7);
	switch(num) {
		case 1:
			cout << "Domingo";
			break;
		case 2:
			cout << "Segunda-feira";
			break;
		case 3:
			cout << "Terca-feira";
			break;
		case 4:
			cout << "Quarta-feira";
			break;
		case 5:
			cout << "Quinta-feira";
			break;
		case 6:
			cout << "Sexta-feira";
			break;
		case 7:
			cout << "Sabado";
			break;
		default:
			cout << "parabens, partiu o meu programa";
			break;
	}
	
    return 0;
}
