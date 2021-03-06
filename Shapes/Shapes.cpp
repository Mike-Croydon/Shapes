//This is a simple project to practice inheritance, polymorphism, and using header files to create new classes
//

#include "pch.h"
#include <iostream>
#include "Circle.h"
#include "Polygon.h"
#include "Rectangle.h"
#include "Square.h"
#include "Triangle.h"
#include "Scalene.h"

using namespace std;

int main()
{
	Circle circle = Circle(2.8);
	cout << "Circle area and perimeter is: " << endl;
	cout << circle.getArea() << endl;
	cout << circle.getPerimeter() << endl;
	
	Rectangle rect = Rectangle(1.4, 3.5);
	cout << "Rectangle area and perimeter is: " << endl;
	cout << rect.getArea() << endl;
	cout << rect.getPerimeter() << endl;
	
	Square square = Square(1.8);
	cout << "Square area and perimeter is: " << endl;
	cout << square.getArea() << endl;
	cout << square.getPerimeter() << endl;
	
	Triangle tri = Triangle(1.4, 3.5);
	cout << "Triangle area and perimeter is: " << endl;
	cout << tri.getArea() << endl;
	cout << tri.getPerimeter() << endl;

	Scalene sca = Scalene(1.4, 3.5, 3.5);
	cout << "Scalene area and perimeter is: " << endl;
	cout << sca.getArea() << endl;
	cout << sca.getPerimeter() << endl;

}

