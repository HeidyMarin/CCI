#include "Base.h"

#include <windows.h>

Base::Base(void)
{
	int i;
	for(i=0;i<100;i++)
	{
		BD[i]=new Persona("","","",0,"",0);
	}
	tam=0;
}
void Base::insertar(Persona *x)
{
	BD[tam]->clave=tam;
	BD[tam]->Nombre=x->Nombre;
	BD[tam]->Apellido=x->Apellido;
	BD[tam]->DNI=x->DNI;
	BD[tam]->numtel=x->numtel;
	BD[tam]->sexo=x->sexo;
	BD[tam]->Edad=x->Edad;
	BD[tam]->valido=1;
	tam++;
}
void Base::insertar(string CNombre,string CApellido,string CDNI,int Cnumtel,string Csexo,int CEdad)
{
	BD[tam]->clave=tam;
	BD[tam]->Nombre=CNombre;
	BD[tam]->Apellido=CApellido;
	BD[tam]->DNI=CDNI;
	BD[tam]->numtel=Cnumtel;
	BD[tam]->sexo=Csexo;
	BD[tam]->Edad=CEdad;
	BD[tam]->valido=1;
	tam++;
}

void Base::mostrar(void)
{
	gotoxy(30,4);
	cout<<"\n";
	cout<<"\n";
	cout<<"================================================================================"<<endl;
	cout<<" Nro."<<"CLAVE"<<"  "<<" NOMBRE"<<" "<<"Y APELLIDO "<<"   "<<" D.N.I. "<<"  "<<" N. DE TELEFONO "<<"  "<<" SEXO "<<"  "<<" EDAD "<<endl;
	cout<<"================================================================================"<<endl;

	ifstream documento;
	documento.open("BDC.txt" , ios::in);
	vector <string>lineas;

	if(documento.fail()){//en el caso de que ocurra un error de formato
		cout<<"No hay Personas registradas"<<endl;
	}
	else{
		while(!documento.eof()){//archivo abierto para lectura ha llegado al final.
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

	cout<<"================================================================================"<<endl;
}
void Base::eliminar(int clave)
{
	ofstream temporal;
	ifstream documento;
	documento.open("BDC.txt" , ios::in);
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

		remove("BDC.txt");
		rename("Tem.txt","BDC.txt");
	}
}

void Base::buscarC(int clave)
{
    if(BD[clave]->valido==1)
    {
		cout<<"\n"<<BD[clave]->clave<<"\t"<<BD[clave]->Nombre<<"\t"<<BD[clave]->Apellido<<"\t"<<BD[clave]->DNI<<"\t"<<BD[clave]->numtel<<"\t"<<BD[clave]->sexo<<"\t"<<BD[clave]->Edad<<endl;
    }
    else
        cout<<"Clave no valida"<<endl;
}

void Base::buscarA(string Apellido)
{
    if(BD[clave]->valido==1)
    {
		cout<<"\n"<<BD[clave]->clave<<"\t"<<BD[clave]->Nombre<<"\t"<<BD[clave]->Apellido<<"\t"<<BD[clave]->DNI<<"\t"<<BD[clave]->numtel<<"\t"<<BD[clave]->sexo<<"\t"<<BD[clave]->Edad<<endl;
    }
    else
        cout<<"Clave no valida"<<endl;
}

void Base::modificar(int clave,string CNombre,string CApellido,string CDNI,int Cnumtel,string Csexo,int CEdad)
{
	BD[clave]->Nombre=CNombre;
	BD[clave]->Apellido=CApellido;
	BD[clave]->DNI=CDNI;
	BD[clave]->numtel=Cnumtel;
	BD[clave]->sexo=Csexo;
	BD[clave]->Edad=CEdad;

}
void Base::modificar(int clave,Persona *x)
{
	BD[clave]->Nombre=x->Nombre;
	BD[clave]->Apellido=x->Apellido;
	BD[clave]->DNI=x->DNI;
	BD[clave]->numtel=x->numtel;
	BD[clave]->sexo=x->sexo;
	BD[clave]->Edad=x->Edad;

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

