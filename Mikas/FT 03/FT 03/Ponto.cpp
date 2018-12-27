#include "Ponto.h"

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
	
}
Recta::Recta(int a, int b, int c, int d) {

}

Recta::Recta(const Ponto &p1, const Ponto &p2) {

}

Recta::Recta(const Recta &r) {

}

void Recta::setPonto(int n, int a, int b) {

}

void Recta::setPonto(int n, const Ponto &p) {

}

string Recta::toString() {

}