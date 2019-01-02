#include "Veiculo.h"

int main() {
	cout << "\n\n-------------------| Veiculo |--------------------";
	Veiculo v1;
	cout << v1.toString();
	v1.setAno(1990);
	v1.setConsumoMedio(5);
	v1.setMat("T3-ST-30");
	v1.setTotalDeposito(70);
	cout << v1.toString();
	v1.abastecer(20);
	v1.registarSaida(30);
	cout << v1.toString();
	
	cout << "\n\n-------------------| Carro |--------------------";
	Carro c1(true,v1);
	cout << c1.toString();
	
	cout << "\n\n-------------------| Motociclo |--------------------";
	
	Motociclo m1;
	cout << m1.toString();
	
	
	return 0;
}
