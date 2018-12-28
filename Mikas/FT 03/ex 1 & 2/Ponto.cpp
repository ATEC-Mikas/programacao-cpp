#include "Ponto.h"
#include <stdexcept>


Ponto::Ponto() {
	x = 0;
	y = 0;
}

Ponto::Ponto(int a, int b) {
	x = a;
	y = b;
}

Ponto::Ponto(const Ponto &p) {
	x = p.x;
	y = p.y;
}

void Ponto::setX(int a) {
	x = a;
}

void Ponto::setY(int a) {
	y = a;
}

int Ponto::getX() {
	return x;
}

int Ponto::getY() {
	return y;
}

string Ponto::toString() {
	return "Ponto: (" + to_string(x) + "," + to_string(y) + ").";
}

double Ponto::distEntre2Pontos(const Ponto &p) {
	return (double)sqrt(pow(p.x - x, 2) + pow(p.y - y, 2));
}

Recta::Recta() {
	p1.setX(0);
	p1.setY(0);
	p2.setX(0);
	p2.setY(0);
}
Recta::Recta(int a, int b, int c, int d) {
	p1.setX(a);
	p1.setY(b);
	p2.setX(c);
	p2.setY(d);
}

Recta::Recta(Ponto &p1,Ponto &p2) {
	this->p1.setX(p1.getX());
	this->p1.setY(p1.getY());
	this->p2.setX(p2.getX());
	this->p2.setY(p2.getY());
}

Recta::Recta(Recta &r) {
	p1.setX(r.getPonto(1).getX());
	p1.setY(r.getPonto(1).getY());
	p2.setX(r.getPonto(2).getX());
	p2.setY(r.getPonto(2).getY());
}

void Recta::setPonto(int n, int a, int b) {
	switch(n) {
		case 1:
			p1.setX(a);
			p1.setY(b);
			break;
		case 2:
			p2.setX(a);
			p2.setY(b);			
			break;
		default:
			throw invalid_argument( "setPonto() com N invalido." );
	}
}

void Recta::setPonto(int n,Ponto &p) {
	switch(n) {
		case 1:
			p1.setX(p.getX());
			p1.setY(p.getY());
			break;
		case 2:
			p2.setX(p.getX());
			p2.setY(p.getY());			
			break;
		default:
			throw invalid_argument( "n invalido" );
	}
}

Ponto Recta::getPonto(int n) {
	switch(n) {
		case 1:
			return p1;
			break;
		case 2:
			return p2;			
			break;
		default:
			throw invalid_argument( "n invalido" );
	}	
}

string Recta::toString() {
	return "Recta:\n\t1: " + p1.toString() + "\n\t2: " + p2.toString();
}

Ponto Recta::pontoMedio() {
	Ponto pm((p1.getX()+p2.getX())/2,(p1.getY()+p2.getY())/2);
	return pm;
}
