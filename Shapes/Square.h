#pragma once

#include "Rectangle.h"

class Square : public Rectangle {
public:
	Square(double b) { base = b; }
	double getArea();
	double getPerimeter();
};