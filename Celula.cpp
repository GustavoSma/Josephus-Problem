#include <cstdlib>
#include <iostream>
#include "Celula.h"

Celula::Celula(std::string n, Celula * p) {
	info = n;
	prox = p;
}

std::string Celula::getInfo() {
    return info;
}

void Celula::setInfo(std::string n) {
    info = n;
}

Celula * Celula::getProx() {
    return prox;
}

void Celula::setProx(Celula * p) {
    prox = p;
}
