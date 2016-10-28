#ifndef ARRAYPOINT_H
#define ARRAYPOINT_H

class ArrayPoint {
private:
	int size;
	Point *points;
	
public:
	ArrayPoint();
	
	~ArrayPoint();
	
	ArrayPoint (Point ptsToCopy[], int toCopySize),
	
	ArrayPoint(ArrayPoint &pv),
	
	void resize(int newSize);
	
	int getSize() const;
	
	void clear();
	
	void push_back(const Point &p);
	
	void insert(const int pos, const Point &p);
	
	void remove(const int pos);
	
	void printArr();
	
};

#endif

