#include "Ponto.h"

int main() {

	Ponto p1;
	p1.setX(1);
	p1.setY(2);
	Ponto p2(3, 4);
	cout << p1.toString();
	cout << p2.toString();
	cout << "Dist entre dois pontos: "<< p1.distEntre2Pontos(p2);
	system("pause");
	return 0;
}