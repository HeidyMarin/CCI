#include "Polygon.h"
#include "ArrayPoint.h"

int Polygon::numPolygons = 0;

Polygon::Polygon(const Point ar2[],const int tam) : points(ar2,tam)
{
	++numPolygons;
}

Polygon::Polygon(ArrayPoint &pv) : points(pv)
{
	++numPolygons;
}

Polygon::~Polygon()
{
	--numPolygons;
}

int Polygon::getNumPolygons() const
{
	return numPolygons;
}

int Polygon::getNumSides() const
{
	return points.getSize();
}

//RECTANGULO//

Point constructorPoints[4];

Point *updateConstructorPoints(const Point &p1, const Point &p2, const Point &p3, const Point &p4 = Point(0,0)){
	constructorPoints[0] = p1;
	constructorPoints[1] = p2;
	constructorPoints[2] = p3;
	constructorPoints[3] = p4;
	return constructorPoints;
}

Rectangle::Rectangle(const Point &p1, const Point &p2)
{
	Polygon(updateConstructorPoints(p1, Point(p1.get_x(), p2.get_y()), p2, Point(p2.get_x(), p1.get_y()) ), 4){}
}

Rectangle::Rectangle(const int p1x, const int p1y, const int p2x, const int p2y)
{
	Polygon(updateConstructorPoints(Point(p1x, p1y), Point(p1x, p2y),Point(p2x, p2y), Point(p2x, p1y) ), 4){}
}

double Rectangle::area(){
	
	double base = sqrt(pow((p1.get_x()+p4.get_x()),2)+pow((p1.get_y()+p4.get_y()),2));
	double altura = sqrt(pow((p1.get_x()+p3.get_x()),2)+pow((p1.get_y()+p3.get_y()),2));
	double res = base*altura;
	return res;
}

//TRIANGULO//

Point constructorPoints[3];

Point *updateConstructorPoints(const Point &p1, const Point &p2, const Point &p3){
	constructorPoints[0] = p1;
	constructorPoints[1] = p2;
	constructorPoints[2] = p3;
	return constructorPoints;
}

Triangle::Triangle(const Point &x, const Point &y, const Point &z)
{
	Polygon(updateConstructorPoints(p1,p2,p3),3) {}
}

double Triangle::area() {
	double lado1 = sqrt(pow((p1.get_x()+p2.get_x()),2)+pow((p1.get_y()+p2.get_y()),2));
	double lado2 = sqrt(pow((p2.get_x()+p3.get_x()),2)+pow((p2.get_y()+p3.get_y()),2));
	double lado3 = sqrt(pow((p1.get_x()+p3.get_x()),2)+pow((p1.get_y()+p3.get_y()),2));
	double sp = (lado1+lado2+lado3)/2;
	double res = sqrt(sp*(sp-lado1)*(sp-lado2)*(sp-lado3));
	return res;
}
