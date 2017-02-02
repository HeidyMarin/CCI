#include "Funciones.h"

int main()
{
	Funciones f;
	int op,clave;
	Base *data=new Base();
	Persona *persona=new Persona();
	f.menu();
	cin>>op;
	while(op!=6)
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
        case 5:
            int x;
//            string Apellido;
			cout<<"\n1. Buscar por clave: \n";
			cout<<"\n2. Buscar por apellido: \n";
			cin>>x;
			if(x==1)
            {
                cout<<"Ingrese clave a buscar";
                cin>>clave;
                data->buscarC(clave);
                break;
            }
//            else
//            {
//                cout<<"Ingrese el apellido a buscar";
//                cin>> Apellido;
//                data->buscarA(Apellido);
//                break;
//            }

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


