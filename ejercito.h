/**
  Archivo: Ejercito.h
  Autor:  anvorja
  Licencia: GNU-GPL
*/

#ifndef _EJERCITO_H
#define _EJERCITO_H
#include "personaje.h"
#include <vector>

class ejercito : public personaje{
  public:

 //atributos
  int nroIntegrantes;
  vector <personaje*> soldados;

 //métodos
  ejercito();
  ~ejercito();
  void crearArqueros();
  void crearDraconaurius();
  void atacar(ejercito *enemigo);
  int contadorVivosEjercito();

};
#endif