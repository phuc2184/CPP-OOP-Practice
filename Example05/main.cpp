#include "Rectangle.h"
#include <iostream>

using namespace std;
int main() {
	Rectangle* rect = new Rectangle();
	rect->setWidth(3);
	rect->setHeight(4);
	cout << "W:  " << rect->getWidth();
	cout << "H:  " << rect->getHeight();
	cout << "Area:  " << rect->area();
	return 0;
}