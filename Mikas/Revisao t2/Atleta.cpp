#include "Atleta.h"

/*
	int numero;
	string nome;
	int escalao;
	int record;
*/

/*
	Condicoes:
		record <0 -> 0
		escalao entre 1 a 5, caso esteja fora 1
*/
	Atleta::Atleta() {
		numero=0;
		nome="Sem nome";
		escalao=1;
		record=0;
	}
	
	Atleta::Atleta(int n1,string n2,int e,int r) {
//		if(!this->setNumero(n1))
//			numero=0;
//		if(!this->setNome(n2))
//			nome="Sem nome";
//		if(!this->setEscalao(e))
//			escalao=1;
//		if(!this->setRecord(r))
//			record=0;
		if(n1>0)
			numero=n1;
		else 
			numero=0;
		nome=n2;
		if(e>=1 && e<=5)
			escalao=e;
		else
			escalao=1;
		if(r>=0)
			record=r;
		else
			record=0;
	}
	
	Atleta::Atleta(const Atleta &a) {
		numero=a.numero;
		nome=a.nome;
		escalao=a.escalao;
		record=a.record;
	}
	
	bool Atleta::setNumero(int n) {
		if(n>0) {
			numero=n;
			return true;
		}
		return false;
	}
	
	bool Atleta::setNome(string n) {
		if(!n.empty()) {
			nome=n;
			return true;
		}
		return false;
	}
	
	bool Atleta::setEscalao(int e) {
		if(e>=1 && e<=5) {
			escalao=e;
			return true;
		}
		return false;
	}
	
	bool Atleta::setRecord(int r) {
		if(r>=0){
			record=r;
			return true;
		}
		return false;
	}
	
	int Atleta::getNumero() {
		return numero;
	}
	
	string Atleta::getNome() {
		return nome;
	}
	
	int Atleta::getEscalao() {
		return escalao;
	}
	
	int Atleta::getRecord() {
		return record;
	}
	
	double Atleta::calcPremio(int lugar) {
		switch(lugar) {
			case 1:
				return 1000*escalao;
				break;
			case 2:
				return 750*escalao;
				break;
			case 3:
				return 500*escalao;
				break;
			default:
				return 0;
				break;
		}
	}
	
	string Atleta::toString() {
		return "\nAtleta Numero " + to_string(numero)
			 + "\n\tNome: " + nome
			 + "\n\tRecord: " + to_string(record)
			 + "\n\tEscalao: " + to_string(escalao);
	}
	
	
	
	
	
	
	
	
	
	
	
	
