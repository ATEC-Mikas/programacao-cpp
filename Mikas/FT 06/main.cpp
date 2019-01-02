#include "Pessoa.h"
#include "Empresa.h"

int main() {
	
	cout << "\n\n-----------------------| Pessoa |----------------------\n\n";
	Pessoa p1;
	cout << p1.toString();
	p1.setData(21,8,2000);
	p1.setEmail("teste@gmail.com");
	p1.setNome("Conta de teste");
	p1.setTelef(9111);
	p1.setId(1);
	cout << p1.toString();
	cout << "\n\tIdade da pessoa: " << p1.calcularIdade(); 
	
	cout << "\n\n-----------------------| Empresa |----------------------\n\n";
	Empresa e1;
	cout << e1.toString();
	e1.setId(2);
	e1.setEmail("empresa@gmail.com");
	e1.setTelef(9124);
	e1.setNome("Chouricos Inc.");
	e1.setResponsavel("Ovelha Negra");
	e1.setMorada("Rua dos porcos");
	e1.setAtividade(2);
	cout << e1.toString();
	
	return 0;
}
