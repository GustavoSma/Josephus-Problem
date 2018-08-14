#include <iostream>
#include "Celula.h"
#include "ListaCircular.h"

using namespace std;

void mostraLista(ListaCircular * lista){

    Celula *percorre;
    int cont;
    if (lista->verTamanho() == 0)
        cout << "Lista vazia";
    else {
        cout << "IMPRIMINDO LISTA" << endl;
        for (percorre = lista->getUltimo()->getProx(),cont = 0;  (cont !=lista->verTamanho());  percorre = percorre->getProx(),cont++){
                cout << percorre->getInfo() << endl;
        }

    }
}

void roletarussa(ListaCircular * lista){
    Celula * percorre;
    percorre=lista->getUltimo();
    int i=0;
    while (lista->verTamanho()>1){
        for (i=0;i<2;i++){
            percorre=percorre->getProx();
        }
        cout<<percorre->getInfo()<<" morreu, coitado."<<endl;
        lista->removeQualquer(percorre);
        percorre=percorre->getProx();
    }
}

int main(){
  ListaCircular * list= new ListaCircular();
    list->adFinal("Roberto");
    list->adFinal("Silvio");
    list->adFinal("Dalvio");
    list->adFinal("Laercio");
    list->adFinal("JooJ");
    list->adFinal("Gilson");

    cout<<"Soldados:"<<endl;
    mostraLista(list);
    cout<<"------------------------"<<endl;
    roletarussa(list);
    cout<<"O sobrevivente foi"<<endl;
    mostraLista(list);
    return 0;
}
