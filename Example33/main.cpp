#include "Rectangle.h"
#include <iostream>

int main() {
	Rectangle recta(3, 4);
	Rectangle rectb(5, 6);
	Rectangle rectc;
	rectc = recta + rectb;
	std::cout << "area c: " << rectc.area();
}