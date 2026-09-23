#include"Rectangle.h"
#include <iostream>

int main() {
	Rectangle recta(3, 4);
	Rectangle rectb(5, 6);
	rectb += recta;
	std::cout << "area a: " << recta.area() << std::endl;
	std::cout << "area b: " << rectb.area()<<std::endl;
}