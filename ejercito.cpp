/**
  Archivo: Ejercito.cpp
  Autor:  anvorja
  Licencia: GNU-GPL
*/

#include "ejercito.h"
#include <iostream>

using namespace std;

ejercito::ejercito(){
  nroIntegrantes = 7;
}

ejercito::~ejercito(){}

void ejercito::crearArqueros(){
  for (int i=1; i<=nroIntegrantes ; i++){
    personaje *pp2 = new personaje();

    if(i<=5)
      pp2->setTipo(pp2,2,i);
    else

      pp2->setTipo(pp2,1,i);
      soldados.push_back(pp2);
  }
}

void ejercito::crearDraconaurius(){
  for (int i=1; i<=nroIntegrantes ; i++){
    personaje *pp2 = new personaje();

    if(i<=5)
      pp2->setTipo(pp2,4,i);
    else

      pp2->setTipo(pp2,3,i);
      soldados.push_back(pp2);
  }
}

void ejercito::atacar(ejercito *enemigo){

  cout << "Ejercito 1 empieza con " << nroIntegrantes << " Arqueros" << endl;
  cout << "Ejercito 2 empieza con " << enemigo-> nroIntegrantes <<  " Draconaurius" << endl;

  int posA=0;
  int posB=0;

  while(contadorVivosEjercito() && enemigo->contadorVivosEjercito()){
    soldados[posA] -> atacar(enemigo->soldados[posB]);
    if(enemigo->soldados[posB]->getMuerto()){
      posB++;
    }
    if(soldados[posA]->getMuerto()){
      if(soldados[posA]->tipo == "Arquero++" && !(soldados[posA]->aux)){
        soldados[posA]->aux = true;
      }else{
        posA++;
      }
    }
  }
  cout << "Ejercito 1 gana, " << "queda con " << contadorVivosEjercito() << " Arqueros" << endl;
}

int ejercito::contadorVivosEjercito(){
  int c = 0;
  for(int i = 0; i<soldados.size(); i++){
    if(soldados[i]->getVida() > 0)
      c++;
  }
  return c;
}