#pragma once

#include "Shape.h"
class Circle : public Shape {
private:
	double radius;
public:
	Circle(double r) { radius = r; }
	double getArea();
	double getPerimeter();
};
