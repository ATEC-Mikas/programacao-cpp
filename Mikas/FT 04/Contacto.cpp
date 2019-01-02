#include "Contacto.h"

/*		
		int id,telef;
		string nome,email;
		Data dataNasc;
*/

		Contacto::Contacto() {
			id=0;
			nome="Sem Nome";
			telef=0;
			email="";
		}
		Contacto::Contacto(int id,int telef,string nome,string email,Data dataNasc) {
			this->id=id;
			this->nome=nome;
			this->email=email;
			this->telef=telef;
			this->dataNasc.setAno(dataNasc.getAno());
			this->dataNasc.setMes(dataNasc.getMes());
			this->dataNasc.setDia(dataNasc.getDia());
		}
		
		Contacto::Contacto(int id,int telef,string nome,string email,int dia,int mes,int ano) {
			this->id=id;
			this->nome=nome;
			this->email=email;
			this->telef=telef;
			this->dataNasc.setAno(ano);
			this->dataNasc.setMes(mes);
			this->dataNasc.setDia(dia);						
		}
		
		Contacto::Contacto(Contacto &c) {
			this->id=c.id;
			this->nome=c.nome;
			this->email=c.email;
			this->telef=c.telef;
			this->dataNasc.setAno(c.dataNasc.getAno());
			this->dataNasc.setMes(c.dataNasc.getMes());
			this->dataNasc.setDia(c.dataNasc.getDia());	
		}
		
		bool Contacto::setId(int i) {
			if(i>=0) {
				id=i;
				return true;				
			}
			return false;
		}
		
		bool Contacto::setTelef(int t) {
			if(t>=0) {			
				telef=t;
				return true;
			}
			return false;
		}
		
		bool Contacto::setNome(string n) {
			nome=n;
			return true;
			
			//TODO
			return false;
		}
		
		bool Contacto::setEmail(string e) {
			email=e;
			return true;
			
			//TODO
			return false;
		}
		
		bool Contacto::setData(Data &d) {
			return (dataNasc.setAno(d.getAno())==0 && dataNasc.setMes(d.getMes())==0 && dataNasc.setDia(d.getDia())==0);
		}
		
		bool Contacto::setData(int d,int m,int a) {
			return (dataNasc.setAno(a)==0 && dataNasc.setMes(m)==0 &&	dataNasc.setDia(d)==0);
		}
		
		int Contacto::getId() {
			return id;
		}
		int Contacto::getTelef() {
			return telefone;
		}
		string Contacto::getNome() {
			return nome;
		}
		string Contacto::getEmail() {
			return email;
		}
		Data Contacto::getData() {
			return dataNasc;
		}
		string Contacto::toString() {
			string s;
			s = "\nNome: " + nome 
			  + "\n\tID: " + to_string(id)
			  + "\n\tEmail: " + email
			  + "\n\tTelefone: " + to_string(telef)
			  + "\n\t" + dataNasc.toString();
			return s;
		}
		
		int Contacto::calculcarIdade() {
			// http://www.cplusplus.com/reference/ctime/tm/
			  time_t now;
			  struct tm dataNascimento;
			  double seconds;
			
			  time(&now);  /* get current time; same as: now = time(NULL)  */
			
			  dataNascimento = *localtime(&now);
			  //Estes devem ser 0
			  dataNascimento.tm_hour = 0; dataNascimento.tm_min = 0; dataNascimento.tm_sec = 0;
			  //tm_mon	months since January (0 equivale a janeiro logo temos de subtrair um)
			  dataNascimento.tm_mon = dataNasc.getMes()-1; 
			  //tm_mday	day of the month (nao precisa de ser condicionado)
			  dataNascimento.tm_mday = dataNasc.getDia();
			  //tm_year	int	years since 1900 (Necessitamos de retirar 1900 para funcionar corretamente)
			  dataNascimento.tm_year= dataNasc.getAno()-1900; 
			  
			  //Calcular a diferenca de segundos entre agora e a data de nascimento
			  seconds = difftime(now,mktime(&dataNascimento));
			  //Dividir os segundos pelos segundos equivalente a um ano inteiro
			  seconds= seconds / 31556926;
			
			  return (int)seconds;
		}
