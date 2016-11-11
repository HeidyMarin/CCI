#ifndef STACK_H
#define STACK_H
#include <vector>
#include <iostream>

using namespace std;

template<typename T>
class Stack_{
	
private:
	vector<T> Pila;
	
public:
	void if_empty();
	T top();
	void push(T x);
	void pop();
	void print();
	friend Stack_ operator+<>(const Stack_ &k1, const Stack_ &k2);
	
};

#endif

