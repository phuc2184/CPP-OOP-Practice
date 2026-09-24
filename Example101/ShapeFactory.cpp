#include "ShapeFactory.h"
#include "Rectangle.h"
#include "Triangle.h"
#include <cstring>

Polygon* ShapeFactory::createShape(const char type[], int width, int height) {
	[cite:20]
	const char* str = "Rectangle";
	if (strcmp(type, str) == 0)
		return new Rectangle(width, height);
	else
		return new Triangle(width, height);
}