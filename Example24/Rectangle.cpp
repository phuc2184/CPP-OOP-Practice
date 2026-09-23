#include "Rectangle.h"
Rectangle::Rectangle(int w, int h) {
	width = new int;
	height = new int;
	*width = w;
	*height = h;
}
int Rectangle::area() {
	return (*width) * (*height);
}
Rectangle::~Rectangle() {
	delete width;
	delete height;
}