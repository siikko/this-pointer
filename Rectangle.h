#ifndef RECT_H
#define RECT_H
#include <iostream>

class Rectangle
{
public:
	explicit Rectangle(double = 1.0, double = 1.0);
	void setLength(double);
	void setWidth(double);
	double getLength() const;
	double getWidth() const;
	double perimeter();
	double area();


private:
	double length;
	double width;
};

#endif 

