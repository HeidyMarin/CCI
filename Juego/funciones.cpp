#include "base.cpp"

void menu(){

	cout<<"\nINGRESE OPCION: \n";
	cout<<"\n";
	cout<<"1:  Insertar:\n";
	cout<<"2:  Eliminar:\n";
	cout<<"3:  Modificar:\n";
	cout<<"4:  visualizar BD:\n";
	cout<<"5: Salir \n";
	cout<<"\n";
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
