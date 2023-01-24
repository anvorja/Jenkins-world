/**
  Archivo: main.cpp
  Autor:  borja.carlos@correounivalle.edu.co
  Fecha creación: 08-10-2021
  Fecha última modificación: 08-10-2021
  Versión: 0.1
  Licencia: GNU-GPL
*/

/*
Historia: El mundo pequeño de Jenkins donde viven 2 tipos de personajes:
1: Arqueros y 2: Draconaurius. Lucharan en una batalla a muerte para determinar
quien se queda con el mundo (Arqueros vs Draconaurius). Estos dos poderosos
ejercitos se conforman por 7 personajes cada uno en total. En el primer ejercito
existen 2 super Arqueros++ y 5 Arqueros y en el segundo ejercito 5 super
Draconaurius++ y 2 Draconaurius.
*/

#include "ejercito.h"
#include "personaje.h"
#include <iostream>

using namespace std;

int main() {
	ejercito arqueros;
	ejercito draconaurius;
	arqueros.crearArqueros();
	draconaurius.crearDraconaurius();
	arqueros.atacar(&draconaurius);

	return 0;
}