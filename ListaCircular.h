#include "Celula.h"

#ifndef LISTACIRCULAR_H_INCLUDED
#define LISTACIRCULAR_H_INCLUDED



class ListaCircular {
private:
    Celula * ultimo;
    int tamanho;

public:
    ListaCircular();
    Celula * getUltimo();
    int verTamanho();
    bool verVazio();
    int verPrimeiro();
    int verUltimo();
    void adInicio(int p);
    void adFinal (int p);
    void removeInicio();
    void removeFinal();

};


#endif // LISTACIRCULAR_H_INCLUDED
