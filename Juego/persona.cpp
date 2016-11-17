#include "persona.h"

Persona::Persona()
{
	Nombre="";
	Apellido="";
	DNI="";
	Edad=0;
}
Persona::Persona(string CNombre,string CApellido,string CDNI,int CEdad)
{
	Nombre=CNombre;
	Apellido=CApellido;
	DNI=CDNI;
	Edad=CEdad;
}
void Persona::setear(string CNombre,string CApellido,string CDNI,int CEdad)
{
	Nombre=CNombre;
	Apellido=CApellido;
	DNI=CDNI;
	Edad=CEdad;
}

void Persona::Visualizar(void)
{	
	cout<<"\nNombre: "<<Nombre;
	cout<<"\nApellido: "<<Apellido;
	cout<<"\nDNI: "<<DNI;
	cout<<"\nEdad: "<<Edad;
}
