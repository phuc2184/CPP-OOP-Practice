#include "Rectangle.h"
#include <iostream>

using namespace std;
int main() {
	Rectangle recta;
	Rectangle rectb;
	recta.setWidth(3);
	recta.setHeight(4);

	rectb.setWidth(5);
	rectb.setHeight(6);
	cout << "Area A: " << recta.area();
	cout << "Area B: " << rectb.area();
	return 0;


}