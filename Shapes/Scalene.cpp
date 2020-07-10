#include "pch.h"
#include "Scalene.h"
#include <iostream>

using namespace std; 

double Scalene::getPerimeter()
{
	double perimeter = sideA + sideB + sideC;
	cout << "Scalene perimeter: " << perimeter;
	return perimeter;
}