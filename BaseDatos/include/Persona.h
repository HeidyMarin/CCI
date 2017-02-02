#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <string>
using namespace std;

class Persona{
public:

	long clave;
	int valido;
	string Nombre;
	string Apellido;
	string DNI;
	int numtel;
	string sexo;
	int Edad;


	Persona(string Nombre,string Apellido,string DNI,int numtel,string sexo,int Edad);
	Persona();
	void setear(string Nombre,string Apellido,string DNI,int numtel,string sexo,int Edad);
	void Visualizar(void);
};


#endif // PERSONA_H
