#pragma once
#include "Data.h"
#include <ctime>


class Contacto {
	private:
		int id,telef;
		string nome,email;
		Data dataNasc;
		 
	public:
		Contacto();
		Contacto(int id,int telef,string nome,string email,Data dataNasc);
		Contacto(int id,int telef,string nome,string email,int dia,int mes,int ano);
		Contacto(Contacto &c);
		bool setId(int i);
		bool setTelef(int t);
		bool setNome(string n);
		bool setEmail(string e);
		bool setData(Data &d);
		bool setData(int d,int m,int a);
		string toString();
		
		int calculcarIdade();
};
