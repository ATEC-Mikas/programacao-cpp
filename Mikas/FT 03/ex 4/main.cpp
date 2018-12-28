#include "Conta.h"

void wait() {
	cout<<"\n";
	system("pause");
}

int main() {
	bool flag=false,sair=true;
	int r;
	
	Conta c1;
	
	cout << c1.toString();
	
	while(sair) {
		system("CLS");
		cout<<"1 - Criar conta\n";
		if(flag) {
			cout<<"2 - Listar conta\n";
			cout<< (c1.getEstado() ? "3 - Desativar conta\n" : "3 - Ativar conta\n");
			cout<<"4 - Levantar dinheiro\n";
			cout<<"5 - Depositar dinheiro\n";
			cout<<"6 - Consultar credito\n";
		}
		cout<<"0 - Sair\n";
		cin >> r;
		switch(r){
			case 1: {
				string titular;int numero;double saldo;
				cout << "Nome do titular: ";
				cin >> titular;
				c1.setTitular(titular);
				do{
					cout<<"Numero da conta: ";
					cin>>numero;
					if(numero<=0) cout << "\nNumero invalido.\n";
				}while(numero<=0);
				c1.setNumero(numero);
				cout<<"Saldo da conta: ";
				cin>>saldo;
				c1.setSaldo(saldo);
				c1.setEstado(false);
				flag=true;
				wait();
				break;
			}
			case 2: {
				if(flag) {
					cout << c1.toString() << "\n";
				}
				wait();
				break;
			}
			case 3: {
				if(flag) {
					c1.alterarEstado(!c1.getEstado());
				}
				break;
			}
			case 4: {
				if(flag) {
					int n;
					do{
						cout<<"Quanto deseja levantar: ";
						cin>>n;
						if(n<=0) cout << "\nNumero invalido.\n";
					}while(n<=0);					
						cout << (c1.levantar(n) ? "Levantado com sucesso" : "Erro ao levantar");
				}
				wait();
				break;
			}
			case 5: {
				if(flag) {
					int n;
				do{
					cout<<"Quanto deseja depositar: ";
					cin>>n;
					if(n<=0) cout << "\nNumero invalido.\n";
				}while(n<=0);					
					cout << (c1.depositar(n) ? "Depositado com sucesso" : "Erro ao depositar");
				}
				wait();
				break;
			}
			case 6: {
				if(flag) {
					cout<< "Credito da conta: " << c1.credito();
				}
				wait();
				break;
			}
			case 0: {
				sair=false;
				break;
			}
			default:
				
				break;
		}
		
	}
	
	return 0;
}
