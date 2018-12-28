#include "Ponto.h"

int main() {

	Ponto p1;
	p1.setX(1);
	p1.setY(2);
	Ponto p2(3, 4);
	cout << p1.toString() << "\n";
	cout << p2.toString() << "\n";
	cout << "Dist entre dois pontos: "<< p1.distEntre2Pontos(p2) << "\n";
	Ponto p3(p1);
	cout << p3.toString() << "\n";
	
	cout << "\n\n-----------------------------------------------\n\n";
	Recta r1(p1,p2);
	cout << r1.toString() << "\n";
	Recta r2;
	r2.setPonto(1,4,5);
	r2.setPonto(2,p3); 
	cout << r2.toString() << "\n";
	Recta r3(1,2,3,4);
	cout << r3.toString() << "\n";
	Recta r4(r3);
	cout << r4.toString() << "\n";
	Recta r5(1,2,10,20);
	cout << "\nPonto medio: "<< r5.pontoMedio().toString();
	
	return 0;
}
