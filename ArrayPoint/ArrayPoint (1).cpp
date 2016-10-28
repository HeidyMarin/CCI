#include "ArrayPoint.h"

ArrayPoint::ArrayPoint() {
	size = 0;
	points = new Point[0];
}

ArrayPoint::~ArrayPoint() {
	delete [] points;
}

ArrayPoint::ArrayPoint(ArrayPoint &pv){
	
	size = pv.size;
	points = new Point[size];
	for(int i = 0; i < size; i++)
		points[i] = pv.points[i];
}

ArrayPoint::ArrayPoint(Point ptsToCopy[], int toCopySize){
	
	size = toCopySize ;
	points = new Point [ toCopySize ];
	for(int i = 0; i < toCopySize ; ++i)
		points [i] = ptsToCopy [i];
}

void PointArray:: resize(int newSize){
	Point *pts = new Point[newSize];
	int minSize = (newSize > size ? size : newSize);
	for(int i = 0; i < minSize; i++)
		points[i] = points[i];
	delete[] points;
	size = newSize;
	points = pts;
}

int PointArray:: getSize() const{
	return size;
}

void PointArray::clear(){
	
	resize(0);	
}

void PointArray::push_back(const Point &p){
	resize(size + 1);
	points[size - 1] = p;
}


void PointArray:: insert(const int pos, const Point &p){
	
	resize(size + 1);
	for(int i = size - 1; i > pos; i--)
		points[i] = points[i - 1];
	
	points[pos] = p;
}
insert(const int p, const Point &p){
	resize(size + 1);
	for (int i= size - 1; i>pos; i--)
		 points[i]= points[i-1];
		 
	points[p]=_p
}


void PointArray::remove(const int pos){
	
	if(pos >= 0 && pos < size){
		for(int i = pos; i < size - 2; i++) {
			points [i] = points [i + 1];
		}
		resize (size - 1);
	}
	
}

void PointArray::printArr(){
	
	for(int i=0; i < size; i++) 
		cout << "point[" << i << "]: " << "( " << points[i].getX() << ", " << points[i].getY()<< " )" << endl;
	
}


