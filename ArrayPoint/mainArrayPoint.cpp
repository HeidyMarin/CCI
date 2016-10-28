#include "ArrayPoint.h"
#include "point.cpp"

int main(){
	ArrayPoint arrpoint;
	
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
