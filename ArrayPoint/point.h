#include <iostream>
using namespace std;

class Point{
private:
	double x,y;
public:
	
	Point(double nx, double ny){
		
		x = nx; y = ny;
	}
	
	Point(){
		x=0.0; y=0.0;
	}
	
	Point (Point &a){
		
		x = a.x; y = a.y;
	}
	
	double getX();
	double getY();
	void setX(double nx);
	void setY(double ny);
	void printPoint();
	void modifiPoint(double nx, double ny);
	
	
	
};


