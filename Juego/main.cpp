#include "funciones.cpp"

int main() 
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

