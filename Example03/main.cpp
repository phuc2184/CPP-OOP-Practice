#include "Rectangle.h"
#include <iostream>
using namespace std;


int main() {
	Rectangle recta, rectb;
	recta.setWidth(3);
	recta.setHeight(4);
	rectb.setWidth(5);
	rectb.setHeight(6);
	cout << "Area A: " << recta.area() << endl;
	cout << "Area B: " << rectb.area() << endl;
	return 0;
}