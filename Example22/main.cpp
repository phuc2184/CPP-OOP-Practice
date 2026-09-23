#include "Rectangle.h"
#include <iostream>

void output() {
	Rectangle recta(6, 8);
	std::cout << "Area A:" << recta.area() << std::endl;
	std::cout << "Bye...Recta A";
}

int main() {
	output();
	return 0;
}