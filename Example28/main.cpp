#include "Rectangle.h"
#include <iostream>

int main() {
	Rectangle recta;
	recta.setValuess(3, 4);
	Rectangle* rectb;
	rectb = &recta;
	std::cout << "area: " << recta.area() << std::endl;
	rectb->setValuess(3, 9);
	std::cout << "recta: " << rectb->area() << std::endl;
	Rectangle* rectc = new Rectangle();
	rectc->setValuess(5, 6);
	rectb = rectc;
	std::cout << "area: " << rectc->area()<<std::endl;
	rectc->setValuess(7, 8);
	std::cout << "area: " << rectc->area()<<std::endl;
	delete rectb;
	return 0;
}