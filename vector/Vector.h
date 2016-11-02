#include "Point.h"

class Vector {
private:
	Point start, end;

public:
	Vector();
	Vector(const Vector &a);
	Vector(double sx, double sy, double ex, double ey);
	void getStart();
	void getEnd();
	void setStart(double sx, double sy);
	void setEnd(double ex, double ey);
	void printVector();
	void modifyVector(double sx, double sy, double ex, double ey);
	
};


class VectorAarray {
private:
	int size;
	Vector *ptr_vec;
	
public:
	VectorAarray();
	VectorAarray(Vector vectocCopy[], int toCopySize);
	VectorAarray(VectorAarray &pv);
	void resize(int newSize);
	void getSize()const;
	void clear();
	void push_back(const Vector &v);
	void insert(const int pos, const Vector &v);
	void remove(constint pos);
	void print_Arr();
	
};
