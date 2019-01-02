#include "Empresa.h"

/*
		string responsavel,morada;
		int atividade;
*/

		Empresa::Empresa() : Contacto() {
			responsavel="";
			morada="";
			atividade=0;
		}
		
		Empresa::Empresa(int id,int telef,string nome,string email,string resp,string morada,int ativ) : Contacto(id,telef,nome,email) {
			this->setResponsavel(resp);
			this->setMorada(morada);
			this->setAtividade(ativ);
		}
		
		Empresa::Empresa(Contacto &c,string resp,string morada,int ativ) : Contacto(c) {
			this->setResponsavel(resp);
			this->setMorada(morada);
			this->setAtividade(ativ);
		}
		
		Empresa::Empresa(Empresa &e) : Contacto(e.getId(),e.getTelef(),e.getNome(),e.getEmail()) {
			responsavel=e.responsavel;
			morada=e.morada;
			atividade=e.atividade;			
		}
		
		bool Empresa::setResponsavel(string r) {
			if(!r.empty()){
				responsavel=r;
				return true;
			}
			responsavel="";
			return false;
		}
		
		bool Empresa::setMorada(string m) {
			if(!m.empty()) {
				morada=m;
				return true;
			}
			morada="";
			return false;
		}
		
		bool Empresa::setAtividade(int a) {
			if(a>=0) {
				atividade=a;
				return true;
			}
			atividade=0;
			return false;
		}
		
		string Empresa::getResponsavel() {
			return responsavel;
		}
		
		string Empresa::getMorada() {
			return morada;
		}
		
		int Empresa::getAtividade() {
			return atividade;
		}
		
		string Empresa::toString() {
			return "\nID: " + to_string(this->getId())
			     + "\n\tNome: " + this->getNome()
			     + "\n\tEmail: " + this->getEmail()
			     + "\n\tTelefone: " + to_string(this->getTelef())
			     + "\n\tResponsavel: " + responsavel
			     + "\n\tMorada: " + morada
			     + "\n\tAtividade: " + to_string(atividade);
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
