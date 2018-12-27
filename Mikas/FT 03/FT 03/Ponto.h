#pragma once
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Ponto {
	private:
		int x,y;
	public:
		Ponto();
		Ponto(int a, int b);
		Ponto(const Ponto &p);
		void setX(int a);
		void setY(int a);
		int getX();
		int getY();
		string toString();
		double distEntre2Pontos(const Ponto &p);
};

class Recta : Ponto {
	private:
		Ponto p1;
		Ponto p2;
	public:
		Recta();
		Recta(int a, int b, int c, int d);
		Recta(const Ponto &p1, const Ponto &p2);
		Recta(const Recta &r);
		void setPonto(int n, int a, int b);
		void setPonto(int n,const Ponto &p);
		string toString();
};