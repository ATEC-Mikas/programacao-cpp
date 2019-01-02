#include "Contacto.h"

class Empresa : public Contacto {
	private:
		string responsavel,morada;
		int atividade;
	public:
		Empresa();
		Empresa(int id,int telef,string nome,string email,string resp,string morada,int ativ);
		Empresa(Contacto &c,string resp,string morada,int ativ);
		Empresa(Empresa &e);
		bool setResponsavel(string r);
		bool setMorada(string m);
		bool setAtividade(int a);
		string getResponsavel();
		string getMorada();
		int getAtividade();
		string toString();
};
