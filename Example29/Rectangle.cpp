#include "Rectangle.h"

Rectangle::Rectangle(int w, int h) {
	width = w;
	height = h;
}
void Rectangle::increase() {
	width++;
	height++;
}
int Rectangle::area() {
	return (width * height);
}