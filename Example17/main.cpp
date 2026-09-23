#include "Rectangle.h"
#include <iostream>

using namespace std;
using namespace shape;
int main() {
	Rectangle r;
	r.setValuess(4, 5);
	cout << r.area() << endl;
	return 0;
}