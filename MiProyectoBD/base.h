#ifndef BASE_H
#define BASE_H

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "persona.h"
using namespace std;

class Base:Persona
{
private:
	Persona *BD[100];
	int tam;
public:
	Base();
	void insertar(Persona *persona);
	void insertar(string CNombre,string CApellido,string CDNI,string Csexo,int CEdad,string CTD,string Cseguro,string Ctrabajo,string Cvivienda);
	void modificar(int clave,Persona *x);
	void modificar(int clave,string CNombre,string CApellido,string CDNI,string Csexo,int CEdad,string CTD,string Cseguro,string Ctrabajo,string Cvivienda);
	void eliminar(int clave);
	
	void mostrar(void);
	void gotoxy(int, int);
};


#endif
