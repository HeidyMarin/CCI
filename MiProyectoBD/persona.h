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
	string sexo;
	int Edad;
	string TD;
	string seguro;
	string trabajo;
	string vivienda;
	Persona(string Nombre,string Apellido,string DNI,string sexo,int Edad,string TD,string seguro,string trabajo,string vivienda);
	Persona();
	void setear(string Nombre,string Apellido,string DNI,string sexo,int Edad,string TD,string seguro,string trabajo,string vivienda);
	void Visualizar(void);
};


#endif
