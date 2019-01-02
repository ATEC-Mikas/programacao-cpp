#include "Veiculo.h"

/*
		string matricula;
		int ano;
		double totalKm,totalDeposito,quatCombustivel,consumoMedio;
*/

	Veiculo::Veiculo() {
		matricula="sem matricula";
		ano=2000;
		totalKm=0;
		totalDeposito=60;
		quatCombustivel=0;
		consumoMedio=6;
	}
	
	Veiculo::Veiculo(string mat,int ano,double d, double cm) {
		this->setMat(mat);
		this->setAno(ano);
		this->setTotalDeposito(d);
		this->setConsumoMedio(cm);
		quatCombustivel=0;
		totalKm=0;
	}
	
	Veiculo::Veiculo(const Veiculo &v) {
		matricula=v.matricula;
		ano=v.ano;
		totalDeposito=v.totalDeposito;
		consumoMedio=v.consumoMedio;
		quatCombustivel=v.quatCombustivel;
		totalKm=v.totalKm;
		
	}
	
	bool Veiculo::setMat(string mat) {
		if(!mat.empty()) {
			matricula=mat;
			return true;
		}
		matricula="#MatriculaInvalida";
		return false;
	}
	
	bool Veiculo::setAno(int ano) {
		if(ano>1900 && ano<2020){
			this->ano=ano;
			return true;
		}
		ano=2000;
		return false;
	}
	
	bool Veiculo::setConsumoMedio(double cm) {
		if(cm>0 && cm<=20){
			consumoMedio=cm;
			return true;
		}
		consumoMedio=6;
		return false;
	}
	
	bool Veiculo::setTotalDeposito(double d) {
		if(d>=30 && d<=150) {
			totalDeposito=d;
			return true;
		}
		totalDeposito=60;
		return false;
	}
	
	string Veiculo::getMat() {
		return matricula;
	}
	
	int Veiculo::getAno() {
		return ano;
	}
	
	double Veiculo::getTotalKm() {
		return totalKm;
	}
	
	double Veiculo::getTotalDeposito() {
		return totalDeposito;
	}
	
	double Veiculo::getQuatCombustivel() {
		return quatCombustivel;
	}
	
	double Veiculo::getConsumoMedio() {
		return consumoMedio;
	}

	string Veiculo::toString() {
		return "\nMatricula: " + matricula 
			 + "\n\tAno:" + to_string(ano)
			 + "\n\tTotal KM:" + to_string(totalKm)
			 + "\n\tTotal de Deposito: " + to_string(totalDeposito)
			 + "\n\tQuantidade de combustivel: " + to_string(quatCombustivel)
			 + "\n\tConsumo Medio: " + to_string(consumoMedio)
			 + "\n";
	}

	bool Veiculo::abastecer(double litros) {
		if(quatCombustivel+litros<=totalDeposito && litros>0) {
			quatCombustivel+=litros;
			return true;
		}
		return false;
	}

	bool Veiculo::registarSaida(double km) {
		double t=(double)consumoMedio/100;
		if(km>0 && t*km <= quatCombustivel) {
			totalKm+=km;
			quatCombustivel-=t*km;
		}
		return false;
	}
	
	
	Carro::Carro() : Veiculo() {
		tejadilho=false;
	}
	
	Carro::Carro(bool t,string mat,int ano,double d, double cm) : Veiculo(mat,ano,d,cm) {
		this->setTejadilho(t);
	}
	
	Carro::Carro(Carro &c) : Veiculo(c.getMat(),c.getAno(),c.getTotalDeposito(),c.getConsumoMedio()) {
		tejadilho=c.tejadilho;
	}
	
	Carro::Carro(bool t, Veiculo &v) : Veiculo(v) {
		this->setTejadilho(t);
	}
		
	bool Carro::setTejadilho(bool t) {
		tejadilho=t;
		return true;
		
		//TODO
		return false;
	}
	
	string Carro::toString() {
		return "\nCarro Matricula: " + this->getMat() 
			 + "\n\tAno:" + to_string(this->getAno())
			 + "\n\tTotal KM:" + to_string(this->getTotalKm())
			 + "\n\tTotal de Deposito: " + to_string(this->getTotalDeposito())
			 + "\n\tQuantidade de combustivel: " + to_string(this->getQuatCombustivel())
			 + "\n\tConsumo Medio: " + to_string(this->getConsumoMedio())
			 + "\n\tTejadilho: " + (tejadilho ? "Sim" : "Nao")
			 + "\n";
	}
	
	Motociclo::Motociclo() : Veiculo() {}
	
	Motociclo::Motociclo(string mat,int ano,double d, double cm) : Veiculo(mat,ano,d,cm) {}
	
	Motociclo::Motociclo(Motociclo &m) : Veiculo(m.getMat(),m.getAno(),m.getTotalDeposito(),m.getConsumoMedio()) {}
	
	Motociclo::Motociclo(Veiculo &v) : Veiculo(v) {}
	

