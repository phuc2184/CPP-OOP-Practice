#include "Rectangle.h"
#include <iostream>
int main() {
	Rectangle rect(3, 4);
	std::cout << "area a: " << rect.area()<<std::endl;
	rect++;
	std::cout << "area insrease: " << rect.area()<<std::endl;
}