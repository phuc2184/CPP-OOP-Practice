#include "Rectangle.h"
#include <iostream>

int main() {
	Rectangle recta(3, 4);
	Rectangle rectb(5, 6);
	if (recta > rectb)
		std::cout << "RectA > RectB \n";
	else
		std::cout << "RectA < RectB \n";
	return 0;
}