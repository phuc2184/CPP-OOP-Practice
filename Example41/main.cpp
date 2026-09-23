#include <iostream>
#include "Output.h"
#include "Polygon.h"
#include "Rectangle.h"

int main() {
	Rectangle rect;
	rect.setValuess(4, 5);
	rect.writeln(rect.area());
	return 0;
}