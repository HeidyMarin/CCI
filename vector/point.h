#include <iostream>
using namespace std;

class Point{
private:
	double x,y;
public:
	
	Point(double nx, double ny);
	Point();
	Point (Point &a);
	double getX();
	double getY();
	void setX(double nx);
	void setY(double ny);
	void printPoint();
	void modifyPoint(double nx, double ny);	
};



class PointArray{
	
private:
	
	int size;
	Point *points;
	
public:
	
	PointArray();
	PointArray (Point ptsToCopy[], int toCopySize);
	PointArray(PointArray &pv);
	void resize(int newSize);
	int getSize() const;
	void clear();
	void insert(const int pos, const Point &p);
	void remove(const int pos);
	void printArr();
	
};

