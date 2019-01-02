#include "Contacto.h"

int main() {
	
	Contacto c1;
	cout << "\n" << c1.toString();
	c1.setData(21,8,2000);
	c1.setEmail("teste@gmail.com");
	c1.setNome("Conta de teste");
	c1.setId(2);
	c1.setTelef(9111);
	Data d1(22,1,2002);
	c1.setData(d1);
	cout << "\n" << c1.toString();
	
	// TESTES
	cout << "\n\n-----------------------| Testes |---------------------------\n\n";
	
	cout << "Idade atual: " << c1.calculcarIdade();
	
	return 0;
}
