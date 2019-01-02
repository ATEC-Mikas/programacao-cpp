#pragma once
#include <iostream>
#include <ctime>
#include <string>
#include "Contacto.h"
#include "Data.h"

class Pessoa : public Contacto {
	private:
		Data dataNasc;
	public:
		Pessoa();
		Pessoa(int id,int telef,string nome,string email,int d,int m,int a);
		Pessoa(Contacto &c ,int d,int m,int a);
		Pessoa(int id,int telef,string nome,string email,Data &d);
		Pessoa(Contacto &c ,Data &d);
		Pessoa(Pessoa &p);
		bool setData(int d,int m,int a);
		bool setData(Data &d);
		Data getData();
		string toString();
		
		
		
		
		int calcularIdade();
};
