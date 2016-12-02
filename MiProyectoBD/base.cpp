#include "base.h"
#include <windows.h>

Base::Base(void)
{
	int i;
	for(i=0;i<100;i++)
	{
		BD[i]=new Persona("","","","",0,"","","","");
	}
	tam=0;
}
void Base::insertar(Persona *x)
{
	BD[tam]->clave=tam;
	BD[tam]->Nombre=x->Nombre;
	BD[tam]->Apellido=x->Apellido;
	BD[tam]->DNI=x->DNI;
	BD[tam]->sexo=x->sexo;
	BD[tam]->Edad=x->Edad;
	BD[tam]->TD=x->TD;
	BD[tam]->seguro=x->seguro;
	BD[tam]->trabajo=x->trabajo;
	BD[tam]->vivienda=x->vivienda;
	BD[tam]->valido=1;
	tam++;
}
void Base::insertar(string CNombre,string CApellido,string CDNI,string Csexo,int CEdad,string CTD,string Cseguro,string Ctrabajo,string Cvivienda)
{
	BD[tam]->clave=tam;
	BD[tam]->Nombre=CNombre;
	BD[tam]->Apellido=CApellido;
	BD[tam]->DNI=CDNI;
	BD[tam]->sexo=Csexo;
	BD[tam]->Edad=CEdad;
	BD[tam]->TD=CTD;
	BD[tam]->seguro=Cseguro;
	BD[tam]->trabajo=Ctrabajo;
	BD[tam]->vivienda=Cvivienda;
	BD[tam]->valido=1;
	tam++;
}

void Base::mostrar(void)
{
	gotoxy(30,4);
	cout<<"\n";
	cout<<"========================================================================================================================"<<endl;
	cout<<" Nro."<<"CLAVE"<<"\t"<<" NOMBRE"<<"\t"<<"Y APELLIDOS   "<<"\t"<<"  D.N.I. "<<"\t"<<"SEXO"<<"\t"<<"EDAD"<<"\t"<<"Tipo de Discapacidad "<<"\t"<<"Seguro"<<"\t"<<"Trabajo"<<"\t"<<"Vivienda"<<endl;
	cout<<"========================================================================================================================"<<endl;

	ifstream documento;
	documento.open("PCD.txt" , ios::in);
	vector <string>lineas;
	
	if(documento.fail()){
		cout<<"No hay Personas registradas"<<endl;
	}
	else{
		while(!documento.eof()){
			string linea;
			getline(documento , linea);

			lineas.push_back(linea);
		}
		lineas.pop_back();
		
		for(int i=0; i<lineas.size() ;i++){
			cout<<"\n "<<i+1<<"\t"<<i<<"\t"<<lineas[i]<<endl;
		}
	}
	documento.close();

	cout<<"========================================================================================================================"<<endl;
}
void Base::eliminar(int clave)
{
	ofstream temporal;
	ifstream documento;
	documento.open("PCD.txt" , ios::in);
	vector<string> listas;
	
	if(documento.fail()){
		cout<<"No hay Personas registradas"<<endl;
	}
	else{
		while(!documento.eof()){
			string linea;
			getline(documento , linea);
			listas.push_back(linea);
		}
		documento.close();
		listas.erase(listas.begin()+clave);
		listas.pop_back();
		
		temporal.open("Tem.txt" , ios::out);
		for(int i=0; i<listas.size();i++){
			temporal<<listas[i]<<endl;
		}
		temporal.close();
		
		remove("PCD.txt");
		rename("Tem.txt","PCD.txt");
	}
}


void Base::modificar(int clave,string CNombre,string CApellido,string CDNI,string Csexo,int CEdad,string CTD,string Cseguro,string Ctrabajo,string Cvivienda)
{
	BD[clave]->Nombre=CNombre;
	BD[clave]->Apellido=CApellido;
	BD[clave]->DNI=CDNI;
	BD[clave]->sexo=Csexo;
	BD[clave]->Edad=CEdad;
	BD[clave]->TD=CTD;
	BD[clave]->seguro=Cseguro;
	BD[clave]->trabajo=Ctrabajo;
	BD[clave]->vivienda=Cvivienda;
}
void Base::modificar(int clave,Persona *x)
{
	BD[clave]->Nombre=x->Nombre;
	BD[clave]->Apellido=x->Apellido;
	BD[clave]->DNI=x->DNI;
	BD[clave]->sexo=x->sexo;
	BD[clave]->Edad=x->Edad;
	BD[clave]->TD=x->TD;
	BD[clave]->seguro=x->seguro;
	BD[clave]->trabajo=x->trabajo;
	BD[clave]->vivienda=x->vivienda;
	
}

void Base::gotoxy(int x,int y)
{
	HANDLE manipulador;
	COORD coordenada;
	manipulador = GetStdHandle(STD_OUTPUT_HANDLE);
	coordenada.X = x;
	coordenada.Y = y;
	SetConsoleCursorPosition(manipulador,coordenada);
}

