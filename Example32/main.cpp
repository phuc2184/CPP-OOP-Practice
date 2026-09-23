#include "Rectangle.h"
#include <iostream>

int main() {
	Rectangle recta(3, 4);
	Rectangle rectb(5, 6);
	if (recta > rectb)
		std::cout << "area a: > rectb";
	else
		std::cout << "area a < rectb";
	return 0;
}