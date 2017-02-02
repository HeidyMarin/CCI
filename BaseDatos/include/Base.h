#ifndef BASE_H
#define BASE_H
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Persona.h"
using namespace std;

class Base: public Persona
{
private:
	Persona *BD[100];
	int tam;
public:
	Base();
	void insertar(Persona *persona);
	void insertar(string CNombre,string CApellido,string CDNI,int Cnumtel,string Csexo,int CEdad);
	void modificar(int clave,Persona *x);
	void modificar(int clave,string CNombre,string CApellido,string CDNI,int Cnumtel,string Csexo,int CEdad);
	void eliminar(int clave);
	void buscarC(int clave);
	void buscarA(string Apellido);

	void mostrar(void);
	void gotoxy(int, int);
};
#endif // BASE_H
