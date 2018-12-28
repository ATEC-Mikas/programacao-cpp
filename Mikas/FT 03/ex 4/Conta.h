#pragma once
#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

class Conta {
	private:
		string titular;
		int numero;
		double saldo;
		bool estado;
	public:
		
		Conta();
		Conta(string t,int n,double s,bool e);
		Conta(const Conta &c);
		void setTitular(string t);
		void setNumero(int n);
		void setSaldo(double s);
		void setEstado(bool e);
		string getTitular();
		int getNumero();
		double getSaldo();
		bool getEstado();
		string toString();
		
		
		bool levantar(int n);
		bool depositar(int n);
		void alterarEstado(bool e);
		double credito();
		
};
















