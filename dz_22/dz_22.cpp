#include <iostream>

using namespace std;

class Rect
{
protected:
	unsigned int height;
	unsigned int width;

	int axis_x;
	int axis_y;
		
public:
	Rect(int _x, int _y, unsigned int _h, unsigned int _w) : 
		axis_x(_x), axis_y(_y), height(_h), width(_w) {}
};

class Circle
{
protected:
	unsigned int radius;

	int axis_x;
	int axis_y;

public:
	Circle(int _x, int _y, unsigned int _r) : 
		axis_x(_x), axis_y(_y), radius(_r) {}
};

class CirInscrSquare : public Rect, public Circle
{

public:
	CirInscrSquare(int _x, int _y, unsigned int _r) : 
		Circle::Circle(_x, _y, _r), Rect::Rect(_x, _y, _r * 2, _r * 2) {}

};

void main()
{
	
}