#include "Pessoa.h"
#include "Empresa.h"

//Variaveis globais para serem acedidos em todo o programa
Contacto c1;
Empresa e1;
Pessoa p1;
bool contactoCriado=false;
bool pessoaCriado=false;
bool empresaCriado=false;

//Funcao muito avancada para mandar mensagens de erro ao utilizador
void erro(string s){
	cout << "\n\n"+s+" invalido(a)\n\n";
}


//Menu para editar contacto =)
void menuEditarContacto() {
	int n;
	bool flag=true,r;
	while(flag) {
		system("cls");
		cout << "\n1-Numero de identificacao [" + to_string(c1.getId())+"]"
			 << "\n2-Telefone [" + to_string(c1.getTelef())+"]"
			 << "\n3-Nome [" + c1.getNome() + "]"
			 << "\n4-Email [" + c1.getEmail() + "]"
			 << "\n0-Sair"
			 << "\n";
		cin >> n;
		switch(n) {
			case 1:{
				int id;
				cout << "\n\tIntroduza o novo numero de identificacao: ";
				cin >> id;
				if(c1.setId(id)) 
					cout << "\n\nNumero de identificacao atualizado.";
				else 
					erro("Numero de identificacao");	
				cout << "\n";
				system("pause");
				break;
			}
			case 2:{				
				int telef;
				cout << "\n\tIntroduza o novo numero de telefone: ";
				cin >> telef;
				if(c1.setTelef(telef))
					cout << "\n\nNumero de telefone atualizado.";
				else 
					erro("Numero de telefone");
				cout << "\n";
				system("pause");
				break;
			}
			case 3:{
				string nome;
				cout << "\n\tIntroduza o novo nome: ";
				cin >> nome;
				if(c1.setNome(nome))
					cout << "\n\nNome atualizado.";
				else 
					erro("Nome");
				cout << "\n";
				system("pause");
				break;
			}
			case 4:{
				string email;
				cout << "\n\tIntroduza o novo email: ";
				cin >> email;
				if(c1.setEmail(email))
					cout << "\n\nEmail atualizado.";
				else 
					erro("Email");
				cout << "\n";
				system("pause");
				break;
			}
			case 0:{
				flag=false;
				break;
			}
			default:{
				
				break;
			}
		}
	}
}

//Funcao de menu para o contacto
void menuContacto() {
	int n;
	bool flag=true,r;
	
	while(flag) {
		system("CLS");
		cout << "\n1- Criar contacto";
		if(contactoCriado)
			cout << "\n2- Ver contacto\n3- Editar contacto\n4- Apagar contacto";
		cout << "\n0- Sair\n";
		cin >> n;
		switch(n) {
			case 1:{
				int id,telef;
				string nome,email;
				do {
					cout << "\n\n\tNumero de identificacao: ";
					cin >> id;
					r = c1.setId(id);
					if(!r)
						erro("Numero de identificacao");
				}while(!r);
				do {
					cout << "\n\tTelefone: ";
					cin >> telef;
					r = c1.setTelef(telef);
					if(!r)
						erro("Telefone");
				}while(!r);
				do {
					cout << "\n\tNome do contacto: ";
					cin >> nome;
					r = c1.setNome(nome);
					if(!r)
						erro("Nome do contacto");
				}while(!r);
				do {
					cout << "\n\tEmail do contacto: ";
					cin >> email;
					r = c1.setEmail(email);
					if(!r)
						erro("Email do contacto");
				}while(!r);
				
				contactoCriado=true;
				break;
			}
			case 2:{
				if(contactoCriado) {
					cout << c1.toString() << "\n";
					system("pause");
				}
				break;
			}
			case 3:{
				if(contactoCriado)
					menuEditarContacto();
				break;
			}
			case 4:{
				if(contactoCriado)
					contactoCriado=false;
				break;
			}
			case 0:{
				return;
				break;
			}
			default:{
				
				break;
			}
		}
	}
}

void menuEditarEmpresa() {
	int n;
	bool flag=true,r;
	while(flag) {
		system("cls");
		cout << "\n1-Numero de identificacao [" + to_string(e1.getId())+"]"
			 << "\n2-Telefone [" + to_string(e1.getTelef())+"]"
			 << "\n3-Nome [" + e1.getNome() + "]"
			 << "\n4-Email [" + e1.getEmail() + "]"
			 << "\n5-Responsavel ["+ e1.getResponsavel() + "]"
			 << "\n6-Morada ["+e1.getMorada()+"]"
			 << "\n7-Atividade ["+to_string(e1.getAtividade())+"]"
			 << "\n0-Sair"
			 << "\n";
		cin >> n;
		switch(n) {
			case 1:{
				int id;
				cout << "\n\tIntroduza o novo numero de identificacao: ";
				cin >> id;
				if(c1.setId(id)) 
					cout << "\n\nNumero de identificacao atualizado.";
				else 
					erro("Numero de identificacao");	
				cout << "\n";
				system("pause");
				break;
			}
			case 2:{				
				int telef;
				cout << "\n\tIntroduza o novo numero de telefone: ";
				cin >> telef;
				if(c1.setTelef(telef))
					cout << "\n\nNumero de telefone atualizado.";
				else 
					erro("Numero de telefone");
				cout << "\n";
				system("pause");
				break;
			}
			case 3:{
				string nome;
				cout << "\n\tIntroduza o novo nome: ";
				cin >> nome;
				if(c1.setNome(nome))
					cout << "\n\nNome atualizado.";
				else 
					erro("Nome");
				cout << "\n";
				system("pause");
				break;
			}
			case 4:{
				string email;
				cout << "\n\tIntroduza o novo email: ";
				cin >> email;
				if(c1.setEmail(email))
					cout << "\n\nEmail atualizado.";
				else 
					erro("Email");
				cout << "\n";
				system("pause");
				break;
			}
			case 5:{
				string responsavel;
				cout << "\n\tResponsavel da empresa: ";
				cin >> responsavel;
				if(e1.setResponsavel(responsavel))
					cout << "\n\nResponsavel atualizado.";
				else
					erro("Responsavel");
				cout << "\n";
				system("pause");
				break;
			}
			case 6:{
				string morada;
				cout << "\n\tMorada da empresa: ";
				cin >> morada;
				if(e1.setMorada(morada))
					cout << "\n\nMorada atualizada.";
				else 
					erro("Morada");
				cout << "\n";
				system("pause");
				break;
			}
			case 7:{
				int atividade;
				cout << "\n\tAtividade da empresa (Numero): ";
				cin >> atividade;
				if(e1.setAtividade(atividade))
					cout << "\n\nAtividade atualizada.";
				else 
					erro("Atividade");
				cout << "\n";
				system("pause");
				break;
			}
			case 0:{
				flag=false;
				break;
			}
			default:{
				
				break;
			}
		}
	}
}

//Funcao de menu para a empresa
void menuEmpresa() {
	int n;
	bool flag=true,r;
	
	while(flag) {
		cin.clear();
		system("CLS");
		cout << "\n1- Criar Empresa";
		if(empresaCriado)
			cout << "\n2- Ver Empresa\n3- Editar Empresa\n4- Apagar Empresa";
		if(contactoCriado)
			cout << "\n5- Criar empresa com base no contacto existente";
		cout << "\n0- Sair\n";
		cin >> n;
		switch(n) {
			case 1:{
				int id,telef;
				string nome,email;
				string responsavel,morada;
				int atividade;
				
				do {
					cout << "\n\n\tNumero de identificacao: ";
					cin >> id;
					r = e1.setId(id);
					if(!r)
						erro("Numero de identificacao");
				}while(!r);
				do {
					cout << "\n\tTelefone: ";
					cin >> telef;
					r = e1.setTelef(telef);
					if(!r)
						erro("Telefone");
				}while(!r);
				do {
					cout << "\n\tNome da empresa: ";
					cin >> nome;
					r = e1.setNome(nome);
					if(!r)
						erro("Nome da empresa");
				}while(!r);
				do {
					cout << "\n\tEmail da empresa: ";
					cin >> email;
					r = e1.setEmail(email);
					if(!r)
						erro("Email da empresa");
				}while(!r);
				do {
					cout << "\n\tResponsavel da empresa: ";
					cin >> responsavel;
					r = e1.setResponsavel(responsavel);
					if(!r)
						erro("Responsavel da empresa");
				}while(!r);
				do {
					cout << "\n\tMorada da empresa: ";
					cin >> morada;
					r = e1.setMorada(morada);
					if(!r)
						erro("Morada da empresa");
				}while(!r);
				do {
					cout << "\n\tAtividade da empresa (Numero): ";
					cin >> atividade;
					r = e1.setAtividade(atividade);
					if(!r)
						erro("Atividade da empresa");
				}while(!r);
				empresaCriado=true;
				break;
			}
			case 2:{
				if(empresaCriado) {
					cout << e1.toString() << "\n";
					system("pause");
				}
				break;
			}
			case 3:{
				if(empresaCriado)
					menuEditarEmpresa();
				break;
			}
			case 4:{
				if(empresaCriado)
					empresaCriado=false;
				break;
			}
			case 5:{
				if(contactoCriado) {
					e1.setId(c1.getId());
					e1.setNome(c1.getNome());
					e1.setTelef(c1.getTelef());
					e1.setEmail(c1.getEmail());
					string responsavel,morada;
					int atividade;
					do {
						cout << "\n\tResponsavel da empresa: ";
						cin >> responsavel;
						r = e1.setResponsavel(responsavel);
						if(!r)
							erro("Responsavel da empresa");
					}while(!r);
					do {
						cout << "\n\tMorada da empresa: ";
						cin >> morada;
						r = e1.setMorada(morada);
						if(!r)
							erro("Morada da empresa");
					}while(!r);
					do {
						cout << "\n\tAtividade da empresa (Numero): ";
						cin >> atividade;
						r = e1.setAtividade(atividade);
						if(!r)
							erro("Atividade da empresa");
					}while(!r); 
					empresaCriado=true;
				}
				break;
			}
			case 0:{
				return;
				break;
			}
			default:{
				
				break;
			}
		}
	}
}

//Funcao para editar a pessoa
void menuEditarPessoa() {
	int n;
	bool flag=true,r;
	while(flag) {
		system("cls");
		cout << "\n1-Numero de identificacao [" + to_string(p1.getId())+"]"
			 << "\n2-Telefone [" + to_string(p1.getTelef())+"]"
			 << "\n3-Nome [" + p1.getNome() + "]"
			 << "\n4-Email [" + p1.getEmail() + "]"
			 << "\n5-Data [" + p1.getData().toString() + "]"
			 << "\n0-Sair"
			 << "\n";
		cin >> n;
		switch(n) {
			case 1:{
				int id;
				cout << "\n\tIntroduza o novo numero de identificacao: ";
				cin >> id;
				if(p1.setId(id)) 
					cout << "\n\nNumero de identificacao atualizado.";
				else 
					erro("Numero de identificacao");	
				cout << "\n";
				system("pause");
				break;
			}
			case 2:{				
				int telef;
				cout << "\n\tIntroduza o novo numero de telefone: ";
				cin >> telef;
				if(p1.setTelef(telef))
					cout << "\n\nNumero de telefone atualizado.";
				else 
					erro("Numero de telefone");
				cout << "\n";
				system("pause");
				break;
			}
			case 3:{
				string nome;
				cout << "\n\tIntroduza o novo nome: ";
				cin >> nome;
				if(p1.setNome(nome))
					cout << "\n\nNome atualizado.";
				else 
					erro("Nome");
				cout << "\n";
				system("pause");
				break;
			}
			case 4:{
				string email;
				cout << "\n\tIntroduza o novo email: ";
				cin >> email;
				if(p1.setEmail(email))
					cout << "\n\nEmail atualizado.";
				else 
					erro("Email");
				cout << "\n";
				system("pause");
				break;
			}
			case 5:{
				int dia,mes,ano;
				cout <<"\n\tData de nascimento: ";
				cout << "\n\tDia: ";
				cin >> dia;
				cout << "\n\tMes: ";
				cin >> mes;
				cout << "\n\tAno: ";
				cin >> ano;
				if(p1.setData(dia,mes,ano))
					cout << "\n\nData de nascimento atualizado.";
				else 
					erro("Data de nascimento");
				cout << "\n";
				system("pause");
				break;
			}
			case 0:{
				flag=false;
				break;
			}
			default:{
				
				break;
			}
		}
	}
}

//Funcao de menus para a pessoa
void menuPessoa() {
	int n;
	bool flag=true,r;
	
	while(flag) {
		system("CLS");
		cout << "\n1- Criar Pessoa";
		if(pessoaCriado)
			cout << "\n2- Ver Pessoa\n3- Editar Pessoa\n4- Apagar Pessoa";
		if(contactoCriado)
			cout << "\n5- Criar pessoa com base no contacto existente";
		cout << "\n0- Sair\n";
		cin >> n;
		switch(n) {
			case 1:{
				int id,telef;
				string nome,email;
				//Data dataNasc;
				int dia,mes,ano;
				do {
					cout << "\n\n\tNumero de identificacao: ";
					cin >> id;
					r = p1.setId(id);
					if(!r)
						erro("Numero de identificacao");
				}while(!r);
				do {
					cout << "\n\tTelefone: ";
					cin >> telef;
					r = p1.setTelef(telef);
					if(!r)
						erro("Telefone");
				}while(!r);
				do {
					cout << "\n\tNome da pessoa: ";
					cin >> nome;
					r = p1.setNome(nome);
					if(!r)
						erro("Nome da pessoa");
				}while(!r);
				do {
					cout << "\n\tEmail da pessoa: ";
					cin >> email;
					r = p1.setEmail(email);
					if(!r)
						erro("Email da pessoa");
				}while(!r);
				do {
					cout <<"\n\tData de nascimento: ";
					cout << "\n\tDia: ";
					cin >> dia;
					cout << "\n\tMes: ";
					cin >> mes;
					cout << "\n\tAno: ";
					cin >> ano;
					r=p1.setData(dia,mes,ano);
					if(!r)
						erro("Data de nascimento");
				}while(!r);
				pessoaCriado=true;
				break;
			}
			case 2:{
				if(pessoaCriado) {
					cout << p1.toString() << "\n";
					system("pause");
				}
				break;
			}
			case 3:{
				if(pessoaCriado)
					menuEditarPessoa();
				break;
			}
			case 4:{
				if(pessoaCriado)
					pessoaCriado=false;
				break;
			}
			case 5:{
				if(contactoCriado) {
					int dia,mes,ano;
					p1.setId(c1.getId());
					p1.setNome(c1.getNome());
					p1.setTelef(c1.getTelef());
					p1.setEmail(c1.getEmail());
					do {
						cout <<"\n\tData de nascimento: ";
						cout << "\n\tDia: ";
						cin >> dia;
						cout << "\n\tMes: ";
						cin >> mes;
						cout << "\n\tAno: ";
						cin >> ano;
						r=p1.setData(dia,mes,ano);
						if(!r)
							erro("Data de nascimento");
					}while(!r);
					pessoaCriado=true;
				}
				break;
			}
			case 0:{
				return;
				break;
			}
			default:{
				
				break;
			}
		}
	}
}

int main() {
	int n;
	bool flag=true;
	
	
	while(flag) {
		system("CLS");
		cout << "\n1- Contacto"
		     << "\n2- Empresa"
			 << "\n3- Pessoa"
			 << "\n0- Sair"
			 << "\n";
		cin >> n;
		switch(n) {
			case 1:{
				menuContacto();
				break;
			}
			case 2:{
				menuEmpresa();
				break;
			}
			case 3:{
				menuPessoa();
				break;
			}
			case 0:{
				flag=false;
				break;
			}
			default: {
				
				break;
			}
		}
	}
		
	
	return 0;
}
