#include "point.h"
#include "PointArray.h"

Point::Point(double nx, double ny){
	x = nx; y = ny;
}

Point::Point(){
	x=0.0; y=0.0;
}

Point::Point (Point &a){
	x = a.x; y = a.y;
}

double Point:: getX() {return x;}

double Point:: getY() {return y;}

void Point:: setX(double nx){
	x = nx;
}

void Point:: setY(double ny){
	y = ny;
}

void Point:: printPoint(){
	cout << x << "," << y << endl;
}

void Point:: modifyPoint(double nx, double ny){
	x = nx; y = ny;
}

//POINT ARRAY//

PointArray::PointArray(){
	size = 0;
	points = new Point[0];
}

PointArray::PointArray (Point ptsToCopy[], int toCopySize){
	size = toCopySize ;
	points = new Point [ toCopySize ];
	for(int i = 0; i < toCopySize ; ++i)
		points [i] = ptsToCopy [i];
}

PointArray::PointArray(PointArray &pv){
	size = pv.size;
	points = new Point[size];
	for(int i = 0; i < size; i++)
		points[i] = pv.points[i];
}

void PointArray::resize(int newSize){
	Point *pts = new Point[newSize];
	int minSize = (newSize > size ? size : newSize);
	for(int i = 0; i < minSize; i++)
		points[i] = points[i];
	delete[] points;
	size = newSize;
	points = pts;	
}

int PointArray::getSize() const{return size;}

void PointArray::clear(){resize(0);	}

void PointArray::insert(const int pos, const Point &p){
	resize(size + 1);
	for(int i = size - 1; i > pos; i--)
		points[i] = points[i - 1];
	
	points[pos] = p;
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
