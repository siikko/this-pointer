#include "Rectangle.h"
#include <stdexcept>
using namespace std;

Rectangle::Rectangle(double length, double width)
{
	this->length = length;
	this->width = width;
	if ((length < 0.0) || (length > 20.0))
	{
		throw invalid_argument("length�� ������ ������.");
	}
	if ((width < 0.0) || (width > 20.0))
	{
		throw invalid_argument("width�� ������ ������.");
	}
	
}

void Rectangle::setLength(double length)
{
	this->length = length;
	if ((length < 0.0) || (length > 20.0))
	{
		throw invalid_argument("length�� ������ ������.");
	}
}

void Rectangle::setWidth(double width)
{
	this->width = width;
	if ((width < 0.0) || (width > 20.0))
	{
		throw invalid_argument("width�� ������ ������.");
	}
}

double Rectangle::getLength() const
{
	return length;
}

double Rectangle::getWidth() const
{
	return width;
}

double Rectangle::perimeter()
{
	return (length + width) * 2;
}

double Rectangle::area()
{
	return length * width;
}

