#include <iostream>
#include <string>

using namespace std;

class Atleta {
	private:
		int numero;
		string nome;
		int escalao;
		int record;
	public:
		Atleta();
		Atleta(int n1,string n2,int e,int r);
		Atleta(const Atleta &a);
		
		bool setNumero(int n);
		bool setNome(string n);
		bool setEscalao(int e);
		bool setRecord(int r);
		
		int getNumero();
		string getNome();
		int getEscalao();
		int getRecord();
		
		double calcPremio(int lugar);
		string toString();
};
