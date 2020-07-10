#pragma once

#include "Triangle.h"

class Scalene :public Triangle {
public:
	Scalene(double a, double b, double c) { sideA = a; sideB = b; sideC = c; }
	double sideA, sideB, sideC;
	double getPerimeter();

};