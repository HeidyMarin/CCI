#ifndef FUNCION_H
#define FUNCION_H

#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "base.h"

class Funciones{
public:
	void menu();
	void empaquetar(Persona *persona);
	void documento(Persona *);
//	void gotoxy(int, int);
};


#endif
