#include "Funciones.h"

void Funciones::menu()
{
	cout<<"\n INGRESE OPCION: \n";
	cout<<"\n";
	cout<<" 1:  Insertar:\n";
	cout<<" 2:  Eliminar:\n";
	cout<<" 3:  Modificar:\n";
	cout<<" 4:  visualizar:\n";
	cout<<" 5:  Buscar:\n";
	cout<<" 6: Salir \n";
	cout<<"\n";


}
void Funciones::empaquetar(Persona *persona)
{
	string nombre;
	string apellido;
	string dni;
	int numtel;
	string sexo;
	int edad;

//	gotoxy(30	,4);
	cout<<" Ingrese nombre: \n";
	cin.ignore();
	getline(cin, nombre);
	system("cls");
//	gotoxy(30,4);
	cout<<" Ingrese apellido: \n";
	getline(cin, apellido);
	system("cls");
//	gotoxy(30,4);
	cout<<" Ingrese DNI: \n";
	cin>>dni;
	system("cls");
//	gotoxy(30,4);
	cout<<" Ingrese Sexo: \n";
	cin>>sexo;
	system("cls");
//	gotoxy(30,4);
	cout<<" Ingrese Edad: \n";
	cin>>edad;
	system("cls");
	cout<<" Ingrese su numero de telefono: \n";
	cin>>numtel;
	system("cls");

	persona->setear(nombre,apellido,dni,numtel,sexo,edad);
	documento(persona);

}
void Funciones::documento(Persona *persona){
	ofstream documento;
	documento.open("BDC.txt",ios::out | ios::app);
	documento<<persona->Nombre<<" "<<persona->Apellido<<"      "<<persona->DNI<<"    "<<persona->numtel<<"    "<<persona->sexo<<"    "<<persona->Edad<<endl;

	documento.close();
}

