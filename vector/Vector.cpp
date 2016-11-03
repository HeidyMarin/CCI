#include "Vector.h"
#include<iostream>
using namespace std;

Vector::Vector() {
	start.modifyPoint(0.0 , 0.0);
	end.modifyPoint(0.0 , 0.0);
}

Vector::Vector(const Vector &a) {
	start = a.start;
	end = a.end
}

void Vector::getStart(){
	start.printPoint();
}

void Vector::getEnd(){
	end.printPoint();
	
}

void Vector::setStart(double sx, double sy){
	start.modifyPoint(sx, sy);
}

void Vector::setEnd(double ex, double ey){
	end.modifyPoint(ex, ey);
}

void Vector::modifyVector(double sx, double sy, double ex, double ey){
	star.modifyPoint(sx, sy);
	end.modifyPoint(ex, ey);
}

void Vector::printVector(){
	
	cout << "Vector: ";
	cout<<"Punto 1:"<<start.printPoint()<<endl;
	cout << " -> ";
	cout<<"Punto 1:"<<end.printPoint()<<endl;
}


//ARRAY VECTOR//
VectorArray::VectorArray(){
	size = 0;
	ptr_vec = new Vector[siz];
}

VectorArray::VectorArray(vector vectoCopy[], int toCopySize){
	size = toCopySize;
	ptr_vec = new Vector[toCopySize];
	for(int i = 0; i < toCopySize; ++i)
		ptr_vec[i] = vectoCopy[i];
}

VectorArray::VectorArray(VectorArray &pv){
	size = pv.size;
	ptr_vec = new Vector[size];
	for(int i=0; i<size; i++)
		ptr_vec[i] = pv.ptr_vec[i];
}

void VectorArray::resize(int newSize){
	Vector *arrvec = new Vector[newSize];
	int minSize = (newSize > size ? size : newSize);
	for(int i=0; i<minSize; i++)
		ptr_vec[i] = ptr_vec[i];
		delete[] ptr_vec;
		size = newSize;
		ptr_vec = arrvec;
}

int VectorArray::getStar()const{
	cout<<size<<endl;
	return 0;
}

void  VectorArray::clear(){
	return 0;
}

void  VectorArray::push_back(const Vector &v){
	resize(size + 1);
	ptr_vec[size - 1] = v;
}

void  VectorArray::insert(const int pos, const Vector &v){
	resize(size + 1);
	for(int i = size-1; i > pos, i--)
		ptr_vec[i] = ptr_vec[i-1];
	
		ptr_vec[pos]= v;
}

void  VectorArray::remove(const int pos){
	if(pos >= 0 && pos < size){
		for(int i = pos; i < size-2; i++)
			ptr_vec[i] = ptr_vec[i+1];
	}
	resize(size -1);
}

void  VectorArray::print_Arr(){
	for(int i=0; i<size; i++){
		count<< "Vector ["<< i << "]";
		ptr_vec[i].getStar();
		count<< "->";
		ptr_vec.getEnd();
		cout<<endl;
	}
}
