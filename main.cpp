#include <iostream>
#include "Celula.h"
#include "ListaCircular.h"

using namespace std;

void mostraLista(ListaCircular * list);

int main()
{
    ListaCircular *list = new ListaCircular();

    // Adicionando valores
    list->adFinal(10);
    list->adFinal(20);
    list->adFinal(30);
    list->adFinal(40);

    mostraLista(list);

    return 0;
}

void mostraLista(ListaCircular * list){

    Celula *percorre;
    int cont;
    if (list->verTamanho() == 0)
        cout << "Lista vazia";
    else {
        cout << "IMPRIMINDO LISTA" << endl;
        for (percorre = list->getUltimo()->getProx(),cont = 0;(cont !=list->verTamanho());percorre = percorre->getProx(),cont++)
              cout << percorre->getInfo() << endl;

    }
}




