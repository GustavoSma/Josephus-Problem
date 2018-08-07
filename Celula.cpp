#include <cstdlib>
#include "Celula.h"

Celula::Celula(int n , Celula * p) {
	info =  n;
	prox = p;
}

int Celula::getInfo() {}

void Celula::setInfo(int n) {}

Celula * Celula::getProx() {}

void Celula::setProx(Celula * p) {}
