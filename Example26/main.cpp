#include "Rectangle.h"
#include <iostream>

int main() {
	Rectangle* rectb;
	Rectangle* rectc = new Rectangle();
	rectc->setValuess(8, 9);
	rectb = rectc;
	std::cout << "area: " << rectb->area() << std::endl;
	std::cout << "area: " << rectc->area() << std::endl;
	return 0;
}