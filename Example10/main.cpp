#include "Rectangle.h"
#include <iostream>
using namespace std;


void show() {
	Rectangle recta;
	recta.setWidth(3);
	recta.setHeight(4);
	static Rectangle rectb;
	rectb.setWidth(5);
	rectb.setHeight(6);
	cout << "area a:  " << recta.area();
	cout << "area b: " << rectb.area();
	cout << "I Love You . . . Rect A";



}
int main() {
	show();
	cout << "I Love You . . . Rect B";
	return 0;

}