#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	stack<string> Pila;
	
	while (true)
	{
		char Ingrese;
		cout<<"Añadir nueva Pila /n->";
		cin>>Ingrese;
		if(Ingrese=='n') break;
		
		cout<<"Siguiente Pila->";
		string Temporal;
		cin>>Temporal;
		Pila.emplace(Temporal);
		cout<<endl;
	}
	
	while(!Pila.empty())
	{
		//YES, AND NEGATION WILL TAKE SOME TIME!
		string Temporal;
		//FIRST WE TAKE COPY AND THEN WE TAKE FROM TOP OF THE STRING
		Temporal=Pila.top(); 
		Pila.pop();
		cout<<Temporal<<endl;
	}
	
	return 0;
}
