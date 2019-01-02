#include "Pessoa.h"

		Pessoa::Pessoa() : Contacto() {
			this->setData(1,1,2000);
		}
		
		Pessoa::Pessoa(int id,int telef,string nome,string email,int d,int m,int a) : Contacto(id,telef,nome,email) {
			this->setData(d,m,a);
		}
		
		Pessoa::Pessoa(Contacto &c ,int d,int m,int a) : Contacto(c) {
			this->setData(d,m,a);
		}
		
		Pessoa::Pessoa(int id,int telef,string nome,string email,Data &d) : Contacto(id,telef,nome,email) {
			this->setData(d);
		}
		
		Pessoa::Pessoa(Contacto &c ,Data &d) : Contacto(c) {
			this->setData(d);
		}
		
		Pessoa::Pessoa(Pessoa &p) : Contacto(p.getId(),p.getTelef(),p.getNome(),p.getEmail()) {
			dataNasc=p.dataNasc;
		}
		
		bool Pessoa::setData(int d,int m,int a) {
			return (dataNasc.setAno(a)==0 && dataNasc.setMes(m)==0 &&	dataNasc.setDia(d)==0);
		}
		
		bool Pessoa::setData(Data &d) {
			return (dataNasc.setAno(d.getAno())==0 && dataNasc.setMes(d.getMes())==0 && dataNasc.setDia(d.getDia())==0);
		}
		
		Data Pessoa::getData() {
			return dataNasc;
		}
		
		string Pessoa::toString() {
			return "\nID: " + to_string(this->getId())
			     + "\n\tNome: " + this->getNome()
			     + "\n\tEmail: " + this->getEmail()
			     + "\n\tTelefone: " + to_string(this->getTelef())
			     + "\n\tData de nascimento: " + dataNasc.toString();
		}
		
		int Pessoa::calcularIdade() {
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
