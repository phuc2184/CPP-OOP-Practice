#include "Rectangle.h"
#include <iostream>
using namespace std;
int main() {
	Rectangle recta(6, 20);
	Rectangle rectb;
	cout << "Area a:" << recta.area() << endl;
	cout << "Area b:" << rectb.area() << endl;

	return 0;
}