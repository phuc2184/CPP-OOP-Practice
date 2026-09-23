#include "Rectangle.h"
#include <iostream>
using namespace std;
int main() {
	Rectangle recta(3, 4);
	Rectangle rectb = recta;
	cout << "area a:" << recta.area() << endl;
	cout << "area b:" << rectb.area() << endl;
	rectb.setValues(5, 6);
	cout << "area a:" << recta.area() << endl;
	cout << "area b:" << rectb.area() << endl;
	recta.del();
	return 0;
}