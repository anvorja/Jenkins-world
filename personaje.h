/**
  Archivo: Personaje.h
  Autor:  anvorja
  Licencia: GNU-GPL
*/

#ifndef _PERSONAJE_H
#define _PERSONAJE_H
#include <iostream>
#include <string>
using namespace std;

class personaje{
public:

//atributos
  string tipo;
  int numero;
  bool muerto = false;
  int vida;
  int dano;
  bool aux=false;

//constructor
  personaje();
//destructor
  ~personaje();

  //métodos
  //sobreescritura
  void setTipo(personaje *aux,int, int);
  //sobreescritura
  void setTipo(string);
  string getTipo();
  void setNumero(int);
  int getNumero();
  void setVida(int);
  int getVida();
  bool getMuerto();
  void setDano(int);
  int getDano();
  void setMuerto(bool);
  void ataqueVida(int);
  virtual void atacar(personaje *p);

};
#endif