#pragma once
#include <iostream>
#include <string>
#include <stdexcept>


using namespace std;

class Data {
	
	private:
		int ano,mes,dia;
	
	public:
		Data();
		Data(int d,int m, int a);
		Data(const Data &d);
		int setAno(int x);
		int setMes(int x);
		int setDia(int x);
		int getAno();
		int getMes();
		int getDia();
		string toString();
		int difEntre2anos(const Data &d);
		
		
		
		//Nao instanciadas
		static string lidarErro(int x);
};
