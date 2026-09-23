#include "Rectangle.h"
#include <iostream>
using namespace std;
int main() {

	Rectangle recta(3, 4);
	Rectangle rectb = recta;
	Rectangle rectc;
	rectc = recta;
	cout << "area a:" << recta.area() << endl;
	cout << "area b:" << rectb.area() << endl;
	cout << "area c:" << rectc.area() << endl;
	return 0;
}