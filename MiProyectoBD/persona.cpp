#include "persona.h"

Persona::Persona()
{
	Nombre="";
	Apellido="";
	DNI="";
	sexo="";
	Edad=0;
	TD="";
	seguro="";
	trabajo="";
	vivienda="";
}
Persona::Persona(string CNombre,string CApellido,string CDNI,string Csexo,int CEdad,string CTD,string Cseguro,string Ctrabajo,string Cvivienda)
{
	Nombre=CNombre;
	Apellido=CApellido;
	DNI=CDNI;
	sexo=Csexo;
	Edad=CEdad;
	TD=CTD;
	seguro=Cseguro;
	trabajo=Ctrabajo;
	vivienda=Cvivienda;
	
}

void Persona::setear(string CNombre,string CApellido,string CDNI,string Csexo,int CEdad,string CTD,string Cseguro,string Ctrabajo,string Cvivienda)
{
	Nombre=CNombre;
	Apellido=CApellido;
	DNI=CDNI;
	sexo=Csexo;
	Edad=CEdad;
	TD=CTD;
	seguro=Cseguro;
	trabajo=Ctrabajo;
	vivienda=Cvivienda;
}

void Persona::Visualizar(void)
{	
//	ifstream salida;
//	salida.open("",ios::in);
//	
//	if(salida.fail()){
//		cout << "NO HSY PASIENTES";
//	}
//	else{
//		string linea;
//		getline(salida, linea);
//		
//		cout << linea<<endl;
//		
//	}
	cout<<"\nNombre: "<<Nombre;
	cout<<"\nApellido: "<<Apellido;
	cout<<"\nDNI: "<<DNI;
	cout<<"\nsexo: "<<sexo;
	cout<<"\nEdad: "<<Edad;
	cout<<"\nTipo Discapacidad: "<<TD;
	cout<<"\nSesguro: "<<seguro;
	cout<<"\nTrabajo: "<<trabajo;
	cout<<"\nVivienda: "<<vivienda;
}
