#pragma once

#include "Polygon.h"

class Rectangle : public Polygon {
public:
	Rectangle() {};
	Rectangle(double b, double h) { base = b; height = h; }
	double getArea() { return (base * height); }
	double getPerimeter() { return ((2 * base) + (2 * height)); }
};