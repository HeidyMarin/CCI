#include "Persona.h"

Persona::Persona()
{
	Nombre="";
	Apellido="";
	DNI="";
	numtel=0;
	sexo="";
	Edad=0;

}
Persona::Persona(string CNombre,string CApellido,string CDNI,int Cnumtel,string Csexo,int CEdad)
{
	Nombre=CNombre;
	Apellido=CApellido;
	DNI=CDNI;
	numtel=Cnumtel;
	sexo=Csexo;
	Edad=CEdad;

}

void Persona::setear(string CNombre,string CApellido,string CDNI,int Cnumtel,string Csexo,int CEdad)
{
	Nombre=CNombre;
	Apellido=CApellido;
	DNI=CDNI;
	numtel=Cnumtel;
	sexo=Csexo;
	Edad=CEdad;

}

void Persona::Visualizar(void)
{
	cout<<"\nNombre: "<<Nombre;
	cout<<"\nApellido: "<<Apellido;
	cout<<"\nDNI: "<<DNI;
	cout<<"\nNumero de telefono: "<<numtel;
	cout<<"\nsexo: "<<sexo;
	cout<<"\nEdad: "<<Edad;

}

