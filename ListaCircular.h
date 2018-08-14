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
    std::string verPrimeiro();
    std::string verUltimo();
    void adInicio(std::string p);
    void adFinal (std::string p);
    void removeInicio();
    void removeQualquer(Celula * p);

};


#endif // LISTACIRCULAR_H_INCLUDED
