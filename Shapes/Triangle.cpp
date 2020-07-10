#include "pch.h"
#include "Triangle.h"
#include <iostream>

using namespace std;

double Triangle::getArea() {
	double area = 0.5 * base * height;
	return area;
}

double Triangle::getPerimeter()
{
	cout << "Triangle::getPerimeter called, this function assumes an equilateral triangle " << endl;
	double perimeter = 3 * base;
	return perimeter;
}