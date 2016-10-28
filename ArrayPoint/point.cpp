#include "point.h"

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

void Point:: modifiPoint(double nx, double ny){
	x = nx; y = ny;
}
