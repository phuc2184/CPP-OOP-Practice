#include "Rectangle.h"
#include <iostream>

int main() {
	Rectangle recta;// truy cap phuong thuc tinh , co hai cach fix
	recta.setValuess(3, 4);
	Rectangle* rectb;
	rectb = &recta;
	std::cout << "area: " << recta.area() << std::endl;
	rectb->setValuess(3, 9);
	std::cout << "area: " << rectb->area() << std::endl;
	Rectangle* rectc = new Rectangle();
	rectc->setValuess(5, 6);
	rectb = rectc;// error
	std::cout << "area: " << rectb->area()<<std::endl;
	rectc->setValuess(7, 8);
	std::cout << "area: " << rectc->area()<<std::endl;
	delete rectc;
	return 0;



}