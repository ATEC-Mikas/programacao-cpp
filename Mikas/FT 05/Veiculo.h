#pragma once
#include <iostream>
#include <string>

using namespace std;

class Veiculo {
	private:
			string matricula;
			int ano;
			double totalKm,totalDeposito,quatCombustivel,consumoMedio;
	public:
		Veiculo();
		Veiculo(string mat,int ano,double d, double cm);
		Veiculo(const Veiculo &v);
		bool setMat(string mat);
		bool setAno(int ano);
		bool setConsumoMedio(double cm);
		bool setTotalDeposito(double d);
		string getMat();
		int getAno();
		double getTotalKm();
		double getTotalDeposito();
		double getQuatCombustivel();
		double getConsumoMedio();
		string toString();
		
		// Coisos
		
		bool abastecer(double litros);
		bool registarSaida(double km);
};

class Carro : public Veiculo {
	private:
		bool tejadilho;
	public:
		Carro();
		Carro(bool t,string mat,int ano,double d, double cm);
		Carro(Carro &c);
		Carro(bool t, Veiculo &v);
		
		bool setTejadilho(bool t);
		string toString();
};

class Motociclo : public Veiculo {
	private:
		
	public:
		Motociclo();
		Motociclo(string mat,int ano,double d, double cm);
		Motociclo(Motociclo &m);
		Motociclo(Veiculo &v);
};
