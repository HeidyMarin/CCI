#include <stdlib.h>
#include <math.h>
#include "vector.cpp"


class Polygon{
	
private:
	
	static int numPolygons;	
	PointArray points;
	
public:
	
	Polygon(const PointArray &pv);
	Polygon(const Point points[], const int numPoints);
	~Polygon() {--numPolygons;}
	virtual double area() const = 0;
	int getNumPolygons() const {return numPolygons;}
	int getNumSides() const {return points.getSize();}
	const PointArray *getPoints() const {return &points;}	
};

class Rectangle : public Polygon{
private:
	Point p1;
	Point p2;
	Point p3;
	Point p4;
	
public:
	
	Rectangle(const Point &a, const Point &b);
	Rectangle(const int a, const int b, const int c, const int d);
	virtual double area() const;
	
};

class Triangle : public Polygon{
private:
	Point p1;
	Point p2;
	Point p3;
	
public:
	Triangle(const Point &a, const Point &b, const Point &c);
	virtual double area() const;
	
};
