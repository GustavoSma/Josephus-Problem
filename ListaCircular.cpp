#include <cstdlib>
#include <iostream>
#include "ListaCircular.h"
#include "Celula.h"


ListaCircular::ListaCircular(){
    ultimo = NULL;
    tamanho = 0;
}

Celula * ListaCircular::getUltimo() {
    return ultimo;
}

int ListaCircular::verTamanho(){
    return tamanho;
}

bool ListaCircular::verVazio(){
    return !tamanho;
}

std::string ListaCircular::verPrimeiro(){
    return ultimo->getProx()->getInfo();
}

std::string ListaCircular::verUltimo(){
    return ultimo->getInfo();
}

void ListaCircular::adInicio(std::string p){
    Celula * temp = new Celula(p, ultimo->getProx());

    if(temp != NULL){
        ultimo->setProx(temp);
        tamanho++;
        if(tamanho==1)ultimo=temp;
    }
    else{
            std::cout<<"ERRO: memoria esgotada!!!"<<std::endl;
    }
}

void ListaCircular::adFinal (std::string p) {
    if (ultimo != NULL){
        Celula * temp = new Celula(p, ultimo->getProx());

        if(temp != NULL){
            ultimo->setProx(temp);
            tamanho++;
            ultimo=temp;
        }
        else{
            std::cout<<"ERRO: memoria esgotada!!!"<<std::endl;
        }
    }
    else{
        Celula * temp = new Celula(p, temp);
        ultimo=temp;

        if(temp != NULL){
            ultimo->setProx(temp);
            tamanho++;
        }
        else{
            std::cout<<"ERRO: memoria esgotada!!!"<<std::endl;
        }
    }
}

void ListaCircular::removeInicio(){
    ultimo->setProx(ultimo->getProx()->getProx());
}

void ListaCircular::removeQualquer(Celula * p){
  Celula * percorre = getUltimo();
  int count;
  for (count=0; count<tamanho; count++){
    if (percorre->getProx() == p){
      percorre->setProx(percorre->getProx()->getProx());
      tamanho--;
      break;
    }
    else{
      percorre = percorre->getProx();
    }
  }
}
