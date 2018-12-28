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
			email="":
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
			if(i<=0) {
				id=i;
				return true;				
			}
			return false;
		}
		
		bool Contacto::setTelef(int t) {
			if(t<=0) {			
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
			return (dataNasc.setAno(d.getAno()) && dataNasc.setMes(d.getMes()) && dataNasc.setDia(d.getDia()));
		}
		
		bool Contacto::setData(int d,int m,int a) {
			return (dataNasc.setAno(a) && dataNasc.setMes(m) &&	dataNasc.setDia(d));
		}
		
		string Contacto::toString() {
			
		}
