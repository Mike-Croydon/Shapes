#include "pch.h"
#include "Circle.h"

double Circle::getArea() {
	double area = 3.1415*radius*radius;
	return area;
}

double Circle::getPerimeter() {
	double perimeter = 2 * 3.1415*radius;
	return perimeter;
}