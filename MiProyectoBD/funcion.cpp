#include "funcion.h"

//void Funciones::gotoxy(int x,int y)
//{
//	HANDLE manipulador;
//	COORD coordenada;
//	manipulador = GetStdHandle(STD_OUTPUT_HANDLE);
//	coordenada.X = x;
//	coordenada.Y = y;
//	SetConsoleCursorPosition(manipulador,coordenada);
//}

void Funciones::menu()
{
//	gotoxy(30,4);
	cout<<"\n INGRESE OPCION: \n";
	cout<<"\n";
	cout<<" 1:  Insertar:\n";
	cout<<" 2:  Eliminar:\n";
	cout<<" 3:  Modificar:\n";
	cout<<" 4:  visualizar:\n";
	cout<<" 5: Salir \n";
	cout<<"\n";
	

}
void Funciones::empaquetar(Persona *persona)
{
	string nombre;
	string apellido;
	string dni;
	string sexo;
	int edad;
	string TD;
	string seguro;
	string trabajo;
	string vivienda;
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
//	gotoxy(30,4);
	cout<<" Ingrese Tipo de Discapacidad: \n";
	cin>>TD;
	system("cls");
//	gotoxy(30,4);
	cout<<"\n En las siguientes preguntas responda si o no \n";
	cout<<" Tiene Seguro: \n";
	cin>>seguro;
	system("cls");
//	gotoxy(30,4);
	cout<<" Tiene Trabajo: \n";
	cin>>trabajo;
	system("cls");
//	gotoxy(30,4);
	cout<<" Tiene Vivienda: \n";
	cin>>vivienda;
	system("cls");
//	gotoxy(30,4);
	persona->setear(nombre,apellido,dni,sexo,edad,TD,seguro,trabajo,vivienda);
	documento(persona);
	
}
void Funciones::documento(Persona *persona){
	ofstream documento;
	documento.open("PCD.txt",ios::out | ios::app);
	documento<<persona->Nombre<<" "<<persona->Apellido<<"      "<<persona->DNI<<"     "<<persona->sexo<<"    "<<persona->Edad<<"            "<<persona->TD<<"             "<<persona->seguro<<"      "<<persona->trabajo<<"      "<<persona->vivienda<<endl;
	
	documento.close();
}
