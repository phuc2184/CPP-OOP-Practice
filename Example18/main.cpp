#include "Rectangle.h"
#include <iostream>
using namespace std;
int main() {
	Rectangle recta(3, 4);
	Rectangle rectb(5, 6);
	cout << "Area A:  " << recta.area() << endl;
	cout << "Area B:  " << rectb.area() << endl;
	return 0;
}