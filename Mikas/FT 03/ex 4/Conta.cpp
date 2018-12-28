#include "Conta.h"

/*
	Conta:
		string titular;
		int numero;
		double saldo;
		bool estado;
*/

		Conta::Conta() {
			titular="sem nome";
			numero=0;
			saldo=0;
			estado=false;				
		}
		
		Conta::Conta(string t,int n,double s,bool e) {
			titular=t;
			numero=n;
			saldo=s;
			estado=e;
		}
		
		Conta::Conta(const Conta &c) {
			titular=c.titular;
			numero=c.numero;
			saldo=c.saldo;
			estado=c.estado;
		}
		
		void Conta::setTitular(string t) {
			titular=t;
		}
		
		void Conta::setNumero(int n) {
			if(n>0)
				numero=n;
			else
				numero=0;
		}
		
		void Conta::setSaldo(double s) {
			saldo=s;
		}
		
		void Conta::setEstado(bool e) {
			estado=e;
		}
		
		string Conta::getTitular(){
			return titular;
		}
		
		int Conta::getNumero() {
			return numero;
		}
		
		double Conta::getSaldo() {
			return saldo;
		}
		
		bool Conta::getEstado() {
			return estado;
		}
		
		string Conta::toString() {
			string r;
			r = "\n Conta do/a Titular  " + titular
			  + "\n\tNumero da conta: " + to_string(numero)
			  + "\n\tSaldo da conta: " + to_string(saldo)
			  + "\n\tConta ativa: " + (estado ? "Ativa" : "Desativa");
			return r;
		}
		
		bool Conta::levantar(int n) {
				if(n<=saldo && estado) {
					saldo-=n;
					return true;
				}
			return false;
		}
		
		bool Conta::depositar(int n) {
			if(estado) {
				saldo+=n;
				return true;
			}
			return false;
		}
		
		void Conta::alterarEstado(bool e) {
			estado=e;
		}
		
		double Conta::credito() {
			if(saldo>=5000) {
				return (double)saldo*0.5;
			} else {
				if(saldo>=1000) {
					return (double)saldo*0.3;
				} else {
					if(saldo>=500) {
						return (double)saldo*01;
					} else {
						return 0;
					}
				}
			}
		}
		
		
		
		
		
		
