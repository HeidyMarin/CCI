#include "point.cpp"


int main() {
	
	Point x;
	Point y;
	x.printPoint();
	
	cout<<"\n"<<endl;
	
	PointArray arrpoint;
	
	x.setX(5);
	x.setY(8);
	x.printPoint();
	
	cout<<"\n"<<endl;
	
	x.modifyPoint(4,7);
	x.printPoint();
	
	cout<<"\n"<<endl;
	
	y.setX(4);
	y.setY(9);
	y.printPoint();
	
	cout<<"\n"<<endl;
	
	arrpoint.getSize();
	
	cout<<"\n"<<endl;
	
	
	arrpoint.resize(5);
	arrpoint.insert(0,x);
	arrpoint.printArr();
	
	cout<<"\n"<<endl;
	
	arrpoint.getSize();
	
	cout<<"\n"<<endl;
	
	arrpoint.clear();
	arrpoint.getSize();
	
	cout<<"\n"<<endl;
	
	arrpoint.resize(3);
	arrpoint.push_back(y);
	arrpoint.printArr();	
	
	cout<<"\n"<<endl;
	
	arrpoint.getSize();
	
	cout<<"\n"<<endl;
	
	
	arrpoint.printArr();
	arrpoint.remove(1);
	
	cout<<"\n"<<endl;
	
	arrpoint.printArr();	
}
/*
Point p(0.0,3.0);
cout << p.getX() << endl;
cout << p.getY() << endl;
p.setX(2.1);
cout << p.getX() << endl;
p.printPoint();
p.modifiPoint(4.0, 7.0);
p.printPoint();
*/
