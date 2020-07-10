#pragma once

#include "Polygon.h"

class Triangle : public Polygon {
public:
	Triangle() {};
	Triangle(double b, double h) { base = b; height = h; }
	double getArea();
	double getPerimeter();
};