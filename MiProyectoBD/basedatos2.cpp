#include <iostream>
#include <string.h>
using namespace std;
void menu(void);
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


class Base
{
private:
	Persona *BD[100];
	int tam;
public:
	Base();
	void insertar(Persona *x);
	void insertar(string CNombre,string CApellido,string CDNI,int CEdad);
	void modificar(int clave,Persona *x);
	void modificar(int clave,string CNombre,string CApellido,string CDNI,int CEdad);
	void eliminar(int clave);

	void mostrar(void);
};
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

void menu(void)
{
	cout<<"\nINGRESE OPCION: \n";
	cout<<"1:  Insertar:\n";
	cout<<"2:  Eliminar:\n";
	cout<<"3:  Modificar:\n";
	cout<<"4:  visualizar BD:\n";
	cout<<"5: Salir";
}
void empaquetar(Persona *x)
{
	string nombre;
	string apellido;
	string dni;
	int edad;
	cout<<"Ingrese nombre: \n";
	cin>>nombre;
	cout<<"Ingrese apellido: \n";
	cin>>apellido;
	cout<<"Ingrese DNI: \n";
	cin>>dni;
	cout<<"Ingrese edad: \n";
	cin>>edad;
	x->setear(nombre,apellido,dni,edad);
}
int main(int argc, char *argv[]) 
{

	int op,clave;
	Base *data=new Base();
	Persona *paquete=new Persona();
	menu();
	cin>>op;
	while(op!=5)
	{
		switch(op)
		{
		case 1:
			empaquetar(paquete);
			data->insertar(paquete);
			break;
		case 2:
			cout<<"Ingrese clave a eliminar";
			cin>>clave;
			data->eliminar(clave);
			break;
		case 3:
			cout<<"Ingrese clave a modificar";
			cin>>clave;
			empaquetar(paquete);	
			data->modificar(clave,paquete);
			break;
		case 4:
			data->mostrar();
			break;
		default:
			cout<<"OPcion no valida\n";
			break;
		}
		menu();
		cin>>op;
	}
	return 0;
}



