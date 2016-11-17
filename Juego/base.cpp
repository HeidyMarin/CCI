#include "base.h"

Base::Base(void)
{
	int i;
	for(i=0;i<100;i++)
	{
		BD[i]=new Persona("","","",0);
	}
	tam=0;
}
void Base::insertar(Persona *x)
{
	BD[tam]->clave=tam;
	BD[tam]->Nombre=x->Nombre;
	BD[tam]->Apellido=x->Apellido;
	BD[tam]->DNI=x->DNI;
	BD[tam]->Edad=x->Edad;
	BD[tam]->valido=1;
	tam++;
}
void Base::insertar(string CNombre,string CApellido,string CDNI,int CEdad)
{
	BD[tam]->clave=tam;
	BD[tam]->Nombre=CNombre;
	BD[tam]->Apellido=CApellido;
	BD[tam]->DNI=CDNI;
	BD[tam]->Edad=CEdad;
	BD[tam]->valido=1;
	tam++;
}
void Base::mostrar(void)
{
	cout<<"-------------------------------------------------------"<<endl;
	cout<<"\n"<<"Nro."<<"CLAVE"<<"\t"<<"NOMBRE"<<"\t"<<"APELL."<<"\t"<<"D.N.I"<<"\t"<<"EDAD"<<endl;
	cout<<"-------------------------------------------------------"<<endl;
	for(int i=0;i<tam;i++)
	{
		if(BD[i]->valido==1)
		{
			cout<<"\n"<<i+1<<"\t"<<BD[i]->clave<<"\t"<<BD[i]->Nombre<<"\t"<<BD[i]->Apellido<<"\t"<<BD[i]->DNI<<"\t"<<BD[i]->Edad;		
		}
		
	}
}
void Base::eliminar(int clave)
{
	BD[clave]->valido=0;
}
void Base::modificar(int clave,string CNombre,string CApellido,string CDNI,int CEdad)
{
	BD[clave]->Nombre=CNombre;
	BD[clave]->Apellido=CApellido;
	BD[clave]->DNI=CDNI;
	BD[clave]->Edad=CEdad;
}
void Base::modificar(int clave,Persona *x)
{
	BD[clave]->Nombre=x->Nombre;
	BD[clave]->Apellido=x->Apellido;
	BD[clave]->DNI=x->DNI;
	BD[clave]->Edad=x->Edad;
}
