#include "Rectangle.h"
#include "Triangle.h"
#include <iostream>
int main() {
	Rectangle r; Triangle t;
	r.setValuess(4, 5);
	t.setValuess(4, 5);
	std::cout << r.area() << std::endl;
	std::cout << t.area() << std::endl;


}