#include "funcion.h"
#include "base.h"
#include "persona.h"
#include "stdlib.h"

int main()
{
	
	Funciones f;
	int op,clave;
	Base *data=new Base();
	Persona *persona=new Persona();
	f.menu();
	cin>>op;
	while(op!=5)
	{
		system("cls");
		switch(op)
		{
		case 1:
			f.empaquetar(persona);
			data->insertar(persona);
			break;
		case 2:
			cout<<"Ingrese clave a eliminar";
			cin>>clave;
			data->eliminar(clave);
			break;
		case 3:
			cout<<"Ingrese clave a modificar";
			cin>>clave;
			f.empaquetar(persona);	
			data->modificar(clave,persona);
			break;
		case 4:
			data->mostrar();
			break;
		default:
			cout<<"Opcion no valida\n";
			break;
		}
		f.menu();
		cin>>op;
		system("cls");
	}
	return 0;
}


