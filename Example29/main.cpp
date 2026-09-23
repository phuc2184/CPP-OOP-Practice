#include "Rectangle.h"
#include <iostream>

int main() {
	Rectangle rect(3, 4);
	std::cout << "area: " << rect.area() << std::endl;
	rect.increase();
	std::cout << "area increase: " << rect.area() << std::endl;
	return 0;
}