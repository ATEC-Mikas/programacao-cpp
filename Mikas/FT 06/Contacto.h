#pragma once
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Contacto {
	private:
		int id,telef;
		string nome,email;
		 
	public:
		Contacto();
		Contacto(int id,int telef,string nome,string email);
		Contacto(Contacto &c);
		bool setId(int i);
		bool setTelef(int t);
		bool setNome(string n);
		bool setEmail(string e);
		int getId();
		int getTelef();
		string getNome();
		string getEmail();
		string toString();		
};
