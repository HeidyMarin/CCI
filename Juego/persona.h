#include <iostream>
#include <string>
using namespace std;

class Persona
{
public:
	long clave;	
	int valido;
	string Nombre;
	string Apellido;
	string DNI;
	int Edad;
	Persona(string Nombre,string Apellido,string DNI,int Edad);
	Persona();
	void setear(string Nombre,string Apellido,string DNI,int Edad);
	void Visualizar(void);
};
