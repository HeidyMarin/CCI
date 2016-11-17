#include <iostream>
#include <string>
#include "persona.cpp"
using namespace std;

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
