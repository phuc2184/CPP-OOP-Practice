#include "Polygon.h"
#include "Rectangle.h"
#include <iostream>

int main() {
	Rectangle rect(8, 9);
	std::cout << rect.area() << std::endl;
	return 0;
}