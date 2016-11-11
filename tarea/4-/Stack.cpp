#include "Stack.h"

template<typename T>
void Stack_<T>::if_empty(){
	
	if(Pila.empty() == true)
		cout << "La pila vacia" << endl;
	
	else
		cout << "La pila llena" << endl;
}

template<typename T>
T Stack_<T>::top(){
	return Pila.back();	
}

template<typename T>
void Stack_<T>::push(T x){
	Pila.push_back(x);
}
template<typename T>
void Stack_<T>::pop(){
	Pila.pop_back();
}
template<typename T>
void Stack_<T>::print(){
	for(unsigned int i=0; i < Pila.size(); i++)
		cout << Pila[i] << " ";
	cout << endl;
}

