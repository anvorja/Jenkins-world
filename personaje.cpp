/**
  Archivo: Personaje.cpp
  Autor:  anvorja
  Licencia: GNU-GPL
*/

#include "personaje.h"
#include <iostream>
#include <cstdlib>
using namespace std;

personaje::personaje(){
  vida = 0;
  dano = 0;
  tipo ="";
  numero = 0;
}

personaje::~personaje(){}

void personaje::setTipo(string _tipo){

  tipo = _tipo;

}

string personaje::getTipo(){

  return tipo;

}

void personaje::setNumero(int _numero){

  numero = _numero;

}

int personaje::getNumero(){

  return numero;

}

void personaje::setVida(int _vida){

    vida = _vida;
}

int personaje::getVida(){

  return vida;

}

bool personaje::getMuerto(){
    return muerto;
}

void personaje::setDano(int _dano) {

    dano = _dano;
}

int personaje::getDano(){

    return dano;
}


void personaje::ataqueVida(int _ataque){

    vida= vida - _ataque;
}

//CONDICIONES
void personaje::setTipo(personaje *aux,int n, int i){
  if(n==1){ //Arquero
    // aux->setVida(5);
    // aux->setDano(3);
    aux->setVida(4);
    aux->setDano(3);
    aux->setTipo("Arquero");
    aux->setNumero(i);
  }else if(n==2){ //Arquero++
    // aux->setVida(4);
    // aux->setDano(5);
    aux->setVida(7);
    aux->setDano(5);
    aux->setTipo("Arquero++");
    aux->setNumero(i);
  }else if(n==3){//Draconarius
    aux->setVida(2);
    aux->setDano(1);
    aux->setTipo("Draconaurius");
    aux->setNumero(i);
  }else if(n==4){//Draconarius++
    aux->setVida(3);
    aux->setDano(1);
    aux->setTipo("Draconaurius++");
    aux->setNumero(i);
  }
}

void personaje::atacar(personaje *pp2){
  cout << "El " << getTipo() << " " << numero << " ha atacado al " << pp2->getTipo() << " " << pp2->getNumero() << endl;

 //VALIDAR PARA PERSONAJE MUERTO

    if(getTipo()=="Arquero"){
      pp2->ataqueVida(getDano());
      ataqueVida(pp2->getDano());
    }else if(getTipo()=="Arquero++"){
      pp2->ataqueVida(getDano());
      ataqueVida(pp2->getDano());
    }else if(getTipo()=="Draconaurius"){
      pp2->ataqueVida(getDano());
      ataqueVida(pp2->getDano());
    }else if(getTipo()=="Draconaurius++"){
      pp2->ataqueVida(getDano());
      ataqueVida(pp2->getDano());
    }

 if(vida<=0){
   muerto = true;
 }
 if(pp2->vida<=0){
   pp2->muerto = true;
 }
}