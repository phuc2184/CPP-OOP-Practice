#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"
#include "ShapeFactory.h"

using namespace std;

int main()
{
	Polygon* rect = ShapeFactory::createShape("Rectangle", 6, 8);
	rect->print();
	Polygon* tri = ShapeFactory::createShape("Triangle", 6, 8);
	tri->print();
	return 0;
}
